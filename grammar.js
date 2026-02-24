function commaSep1(rule) {
	return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
	return optional(commaSep1(rule))
}

module.exports = grammar({
	name: 'ecsact',

	extras: $ => [
		$.comment,
		/[\s\n]/,
	],

	rules: {
		source_file: $ => seq(
			// TODO(zaucy): Package statements are not optional in an Ecsact file
			optional($.package_statement),
			repeat($.import_statement),
			repeat($._declaration_statement),
		),

		comment: $ => token(choice(
			seq('//', /.*/),
			seq(
				'/*',
				repeat(choice(
					/[^*]/,
					seq('*', /[^/]/),
				)),
				'*/',
			),
		)),

		package_statement: $ => seq(
			optional('main'),
			'package',
			field('name', $.package_identifier),
			choice(';', seq('{', '}')),
		),

		import_statement: $ => seq(
			'import',
			$.package_identifier,
			choice(';', seq('{', '}')),
		),

		_declaration_statement: $ => choice(
			$.component_statement,
			$.transient_statement,
			$.enum_statement,
			$.system_statement,
			$.action_statement,
		),

		notify_option: $ => /[a-zA-Z][a-zA-Z0-9_]+/,

		_notify_shorthand: $ => seq(
			'notify',
			$.notify_option,
			';',
		),

		_notify_block: $ => seq(
			'notify',
			'{',
			repeat(seq(
				field('option', $.notify_option),
				field('component', $.declaration_identifier),
				';',
			)),
			'}',
		),

		notify_statement: $ => choice(
			$._notify_shorthand,
			$._notify_block,
		),

		boolean: $ => choice('true', 'false'),
		integer: $ => /[1-9][0-9'.]*/,

		parameter_name: $ => /[a-zA-Z][a-zA-Z0-9_]+/,
		parameter_value: $ => choice(
			$.boolean,
			$.integer,
		),

		parameter: $ => seq(
			field('name', $.parameter_name),
			field('value', optional(seq(
				':',
				$.parameter_value,
			)))
		),

		parameters: $ => seq(
			'(',
			commaSep($.parameter),
			')',
		),

		component_statement: $ => seq(
			'component',
			field('name', $.declaration_identifier),
			optional(field('parameters', $.parameters)),
			choice(
				';',
				seq(
					'{',
					repeat($.field_statement),
					'}',
				),
			),
		),

		transient_statement: $ => seq(
			'transient',
			field('name', $.declaration_identifier),
			optional(field('parameters', $.parameters)),
			choice(
				';',
				seq(
					'{',
					repeat($.field_statement),
					'}',
				),
			),
		),

		enum_statement: $ => seq(
			'enum',
			field('name', $.declaration_identifier),
			optional(field('parameters', $.parameters)),
			choice(
				';',
				seq(
					'{',
					repeat(
						$.enum_value_statement
					),
					'}',
				),
			),
		),

		system_statement: $ => seq(
			'system',
			field('name', $.declaration_identifier),
			optional(field('parameters', $.parameters)),
			choice(
				';',
				seq(
					'{',
					repeat(choice(
						$.system_capability_statement,
						$.notify_statement,
					)),
					'}',
				),
			),
		),

		action_statement: $ => seq(
			'action',
			field('name', $.declaration_identifier),
			optional(field('parameters', $.parameters)),
			choice(
				';',
				seq(
					'{',
					repeat(choice(
						$.system_capability_statement,
						$.field_statement,
						$.notify_statement,
					)),
					'}',
				),
			),
		),

		with_statement: $ => seq(
			'with',
			field('field_name', $.declaration_identifier),
			choice(
				';',
				seq(
					'{',
					repeat($.system_capability_statement),
					'}',
				),
			),
		),

		system_capability: $ => choice(
			'readwrite',
			'readonly',
			'writeonly',
			'adds',
			'removes',
			'exclude',
			'include',
		),

		_system_capability_statement_with_shorthand: $ => seq(
			$.system_capability,
			field('component_lookup', $.declaration_lookup),
			$.with_statement,
		),

		_system_capability_statement: $ => seq(
			$.system_capability,
			field('component_lookup', $.declaration_lookup),
			choice(
				';',
				seq(
					'{',
					repeat($.with_statement),
					'}',
				),
			),
		),

		system_capability_statement: $ => seq(
			choice(
				$._system_capability_statement_with_shorthand,
				$._system_capability_statement,
			),
		),

		number: () => /\d+/,

		enum_value_statement: $ => seq(
			field('name', $.declaration_identifier),
			'=',
			field('value', $.number),
			';',
		),

		builtin_field_type: () => choice(
			'i32',
			'u32',
			'f32',
			'i16',
			'u16',
			'i8',
			'u8',
			'entity',
		),

		user_field_type: $ => $.declaration_identifier,

		_field_type: $ => seq(
			field(
				'field_type',
				choice(
					$.builtin_field_type,
					$.user_field_type,
				),
			),
			optional(
				seq(
					'[',
					field('length', $.number),
					']',
				),
			),
		),

		field_statement: $ => seq(
			$._field_type,
			field('field_name', $.declaration_identifier),
			choice(';', seq('{', '}')),
		),

		package_identifier: () => /[a-z][a-z.]+[a-z]/,
		declaration_identifier: () => /[a-zA-Z][a-zA-Z0-9_]*/,
		declaration_lookup: () => /[a-zA-Z][a-zA-Z0-9_\.]*/,
	},
});
