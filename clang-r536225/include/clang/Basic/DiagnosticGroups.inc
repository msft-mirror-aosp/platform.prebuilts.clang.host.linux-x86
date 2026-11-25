
#ifdef GET_DIAG_ARRAYS
static const int16_t DiagArrays[] = {
  /* Empty */ -1,
  /* DiagArray1 */ diag::warn_pragma_message, -1,
  /* DiagArray2 */ diag::pp_hash_warning, -1,
  /* DiagArray3 */ diag::warn_cfstring_truncated, -1,
  /* DiagArray5 */ diag::warn_independentclass_attribute, diag::warn_ptr_independentclass_attribute, -1,
  /* DiagArray6 */ diag::warn_nsobject_attribute, -1,
  /* DiagArray7 */ diag::warn_sme_locally_streaming_has_vl_args_returns, diag::warn_sme_streaming_pass_return_vl_to_non_streaming, -1,
  /* DiagArray9 */ diag::warn_abs_too_small, diag::warn_pointer_abs, diag::warn_unsigned_abs, diag::warn_wrong_absolute_value_type, -1,
  /* DiagArray10 */ diag::warn_abstract_final_class, -1,
  /* DiagArray11 */ diag::warn_abstract_vbase_init_ignored, -1,
  /* DiagArray13 */ diag::warn_taking_address_of_packed_member, -1,
  /* DiagArray14 */ diag::ext_typecheck_addrof_temporary, -1,
  /* DiagArray16 */ diag::warn_not_xl_compatible, diag::warn_pragma_align_not_xl_compatible, -1,
  /* DiagArray17 */ diag::ext_alias_template_in_declarative_nns, -1,
  /* DiagArray18 */ diag::warn_param_mismatched_alignment, -1,
  /* DiagArray20 */ diag::warn_alloca, -1,
  /* DiagArray21 */ diag::warn_alloca_align_alignof, -1,
  /* DiagArray22 */ diag::warn_always_inline_coroutine, -1,
  /* DiagArray23 */ diag::warn_ambiguous_suitable_delete_function_found, -1,
  /* DiagArray24 */ diag::warn_misplaced_ellipsis_vararg, -1,
  /* DiagArray25 */ diag::warn_pp_ambiguous_macro, -1,
  /* DiagArray26 */ diag::ext_nested_name_member_ref_lookup_ambiguous, -1,
  /* DiagArray27 */ diag::ext_ovl_ambiguous_oper_binary_reversed, -1,
  /* DiagArray28 */ diag::warn_incompatible_analyzer_plugin_api, -1,
  /* DiagArray29 */ diag::warn_android_unversioned_fallback, -1,
  /* DiagArray30 */ diag::warn_arith_conv_mixed_anon_enum_types, -1,
  /* DiagArray31 */ diag::ext_abstract_pack_declarator_parens, -1,
  /* DiagArray32 */ diag::warn_apinotes_message, -1,
  /* DiagArray34 */ diag::warn_arc_bridge_cast_nonarc, -1,
  /* DiagArray35 */ diag::warn_arc_possible_repeated_use_of_weak, -1,
  /* DiagArray36 */ diag::warn_arc_object_memaccess, -1,
  /* DiagArray37 */ diag::warn_arc_perform_selector_leaks, -1,
  /* DiagArray38 */ diag::warn_arc_repeated_use_of_weak, -1,
  /* DiagArray39 */ diag::warn_arc_retain_cycle, -1,
  /* DiagArray40 */ diag::warn_arc_literal_assign, diag::warn_arc_retained_assign, diag::warn_arc_retained_property_assign, -1,
  /* DiagArray41 */ diag::warn_argument_invalid_range, -1,
  /* DiagArray42 */ diag::warn_argument_undefined_behaviour, -1,
  /* DiagArray43 */ diag::warn_array_index_exceeds_bounds, diag::warn_array_index_exceeds_max_addressable_bounds, diag::warn_array_index_precedes_bounds, diag::warn_ptr_arith_exceeds_max_addressable_bounds, diag::warn_static_array_too_small, -1,
  /* DiagArray44 */ diag::warn_ptr_arith_exceeds_bounds, diag::warn_ptr_arith_precedes_bounds, -1,
  /* DiagArray45 */ diag::warn_inconsistent_array_form, -1,
  /* DiagArray47 */ diag::warn_asm_mismatched_size_modifier, -1,
  /* DiagArray48 */ diag::warn_not_in_enum_assignment, -1,
  /* DiagArray49 */ diag::warn_assume_side_effects, -1,
  /* DiagArray51 */ diag::warn_atimport_in_framework_header, -1,
  /* DiagArray52 */ diag::warn_atomic_member_access, -1,
  /* DiagArray53 */ diag::warn_atomic_op_misaligned, diag::warn_atomic_op_oversized, -1,
  /* DiagArray54 */ diag::warn_atomic_implicit_seq_cst, -1,
  /* DiagArray55 */ diag::warn_atomic_op_has_invalid_memory_order, -1,
  /* DiagArray57 */ diag::warn_atomic_property_rule, -1,
  /* DiagArray58 */ diag::warn_attribute_packed_for_bitfield, -1,
  /* DiagArray59 */ diag::warn_fe_backend_warning_attr, diag::warn_toc_unsupported_type, -1,
  /* DiagArray61 */ diag::ext_c23_auto_non_plain_identifier, -1,
  /* DiagArray62 */ diag::warn_drv_disabling_vptr_no_rtti_default, -1,
  /* DiagArray64 */ diag::ext_auto_storage_class, -1,
  /* DiagArray65 */ diag::warn_auto_var_is_id, -1,
  /* DiagArray66 */ diag::warn_availability_and_unavailable, diag::warn_availability_fuchsia_unavailable_minor, diag::warn_availability_on_static_initializer, diag::warn_availability_swift_unavailable_deprecated_only, diag::warn_availability_unknown_platform, diag::warn_availability_version_ordering, diag::warn_expected_consistent_version_separator, diag::warn_mismatched_availability, diag::warn_mismatched_availability_override, diag::warn_mismatched_availability_override_unavail, -1,
  /* DiagArray67 */ diag::warn_drv_avr_family_linking_stdlibs_not_implemented, diag::warn_drv_avr_libc_not_found, diag::warn_drv_avr_linker_section_addresses_not_implemented, diag::warn_drv_avr_mcu_not_specified, diag::warn_drv_avr_stdlib_not_linked, -1,
  /* DiagArray68 */ diag::warn_fe_backend_plugin, diag::warn_fe_backend_resource_limit, -1,
  /* DiagArray69 */ diag::backslash_newline_space, -1,
  /* DiagArray70 */ diag::warn_bad_function_cast, -1,
  /* DiagArray72 */ diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, -1,
  /* DiagArray73 */ diag::ext_decomp_decl_cond, -1,
  /* DiagArray74 */ diag::ext_bit_int, diag::ext_cxx_bitint_suffix, -1,
  /* DiagArray75 */ diag::warn_impcast_bitfield_precision_constant, -1,
  /* DiagArray76 */ diag::warn_bitfield_too_small_for_enum, diag::warn_signed_bitfield_enum_conversion, diag::warn_unsigned_bitfield_assigned_signed_enum, -1,
  /* DiagArray77 */ diag::warn_bitfield_width_exceeds_type_width, -1,
  /* DiagArray78 */ diag::warn_precedence_bitwise_conditional, -1,
  /* DiagArray79 */ diag::warn_bitwise_instead_of_logical, -1,
  /* DiagArray80 */ diag::warn_bitwise_op_in_bitwise_op, -1,
  /* DiagArray81 */ diag::warn_block_capture_autoreleasing, -1,
  /* DiagArray82 */ diag::warn_impcast_bool_to_null_pointer, -1,
  /* DiagArray84 */ diag::warn_bitwise_negation_bool, -1,
  /* DiagArray85 */ diag::warn_braces_around_init, -1,
  /* DiagArray86 */ diag::warn_incompatible_branch_protection_option, diag::warn_target_unsupported_branch_protection_attribute, diag::warn_unsupported_branch_protection, diag::warn_unsupported_branch_protection_spec, -1,
  /* DiagArray87 */ diag::warn_objc_invalid_bridge, diag::warn_objc_invalid_bridge_to_cf, -1,
  /* DiagArray88 */ diag::warn_assume_aligned_too_great, -1,
  /* DiagArray89 */ diag::ext_pp_redef_builtin_macro, diag::ext_pp_undef_builtin_macro, -1,
  /* DiagArray90 */ diag::warn_builtin_chk_overflow, -1,
  /* DiagArray91 */ diag::warn_implicit_decl_requires_sysheader, -1,
  /* DiagArray92 */ diag::warn_zero_size_struct_union_compat, -1,
  /* DiagArray96 */ diag::ext_old_implicitly_unsigned_long_cxx, diag::warn_auto_storage_class, diag::warn_cxx11_compat_user_defined_literal, diag::warn_cxx11_keyword, diag::warn_cxx11_right_shift_in_template_arg, diag::warn_explicit_instantiation_inline_0x, diag::warn_explicit_instantiation_must_be_global_0x, diag::warn_explicit_instantiation_out_of_scope_0x, diag::warn_explicit_instantiation_unqualified_wrong_namespace_0x, diag::warn_old_implicitly_unsigned_long_cxx, -1,
  /* DiagArray97 */ diag::warn_deprecated_string_literal_conversion, -1,
  /* DiagArray99 */ diag::warn_cxx11_compat_reserved_user_defined_literal, -1,
  /* DiagArray100 */ diag::ext_alias_declaration, diag::ext_array_size_conversion, diag::ext_auto_type_specifier, diag::ext_cxx11_enum_fixed_underlying_type, diag::ext_defaulted_deleted_function, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_conversion_functions, diag::ext_extern_template, diag::ext_for_range, diag::ext_generalized_initializer_lists, diag::ext_lambda, diag::ext_nested_name_spec_is_enum, diag::ext_nonclass_type_friend, diag::ext_nonstatic_member_init, diag::ext_override_control_keyword, diag::ext_ref_qualifier, diag::ext_rvalue_reference, diag::ext_scoped_enum, diag::ext_static_data_member_in_union, diag::ext_template_arg_object_internal, diag::ext_template_outside_of_template, diag::ext_template_parameter_default_in_function_template, diag::ext_typename_outside_of_template, diag::ext_unelaborated_friend_type, diag::ext_variadic_templates, diag::warn_ext_cxx11_attributes, -1,
  /* DiagArray101 */ diag::ext_extra_semi_cxx11, -1,
  /* DiagArray102 */ diag::ext_inline_namespace, -1,
  /* DiagArray103 */ diag::ext_cxx11_longlong, -1,
  /* DiagArray104 */ diag::ext_cce_narrowing, diag::ext_init_list_constant_narrowing, diag::ext_init_list_type_narrowing, diag::ext_init_list_variable_narrowing, diag::warn_init_list_constant_narrowing, diag::warn_init_list_type_narrowing, diag::warn_init_list_variable_narrowing, -1,
  /* DiagArray105 */ diag::ext_init_list_constant_narrowing_const_reference, diag::ext_init_list_type_narrowing_const_reference, diag::ext_init_list_variable_narrowing_const_reference, -1,
  /* DiagArray106 */ diag::ext_cxx14_attr, -1,
  /* DiagArray107 */ diag::ext_binary_literal_cxx14, -1,
  /* DiagArray110 */ diag::ext_constexpr_body_invalid_stmt, diag::ext_constexpr_body_multiple_return, diag::ext_constexpr_local_var, diag::ext_constexpr_type_definition, diag::ext_decltype_auto_type_specifier, diag::ext_init_capture, diag::ext_variable_template, -1,
  /* DiagArray111 */ diag::ext_cxx17_attr, -1,
  /* DiagArray113 */ diag::warn_cxx17_compat_exception_spec_in_signature, -1,
  /* DiagArray115 */ diag::ext_auto_new_list_init, diag::ext_constexpr_if, diag::ext_constexpr_on_lambda_cxx17, diag::ext_cxx_static_assert_no_message, diag::ext_decomp_decl, diag::ext_fold_expression, diag::ext_for_range_begin_end_types_differ, diag::ext_hex_literal_invalid, diag::ext_init_statement, diag::ext_inline_variable, diag::ext_multi_using_declaration, diag::ext_nested_namespace_definition, diag::ext_ns_enum_attribute, diag::ext_star_this_lambda_capture_cxx17, diag::ext_template_template_param_typename, diag::ext_using_attribute_ns, diag::ext_using_declaration_pack, -1,
  /* DiagArray120 */ diag::ext_cxx20_attr, -1,
  /* DiagArray121 */ diag::warn_cxx17_compat_implicit_typename, diag::warn_cxx20_compat_aggregate_init_with_ctors, diag::warn_cxx20_compat_consteval, diag::warn_cxx20_compat_constinit, diag::warn_cxx20_compat_explicit_bool, diag::warn_cxx20_compat_spaceship, diag::warn_cxx20_compat_use_of_unaddressable_function, diag::warn_cxx20_compat_utf8_string, diag::warn_cxx20_keyword, -1,
  /* DiagArray123 */ diag::ext_cxx_designated_init, -1,
  /* DiagArray124 */ diag::ext_adl_only_template_id, diag::ext_bitfield_member_init, diag::ext_capture_binding, diag::ext_constexpr_body_invalid_stmt_cxx20, diag::ext_constexpr_ctor_missing_init, diag::ext_constexpr_function_try_block_cxx20, diag::ext_constexpr_local_var_no_init, diag::ext_constexpr_union_ctor_no_init, diag::ext_cxx_missing_varargs_arg, diag::ext_decomp_decl_spec, diag::ext_defaulted_comparison, diag::ext_equals_this_lambda_capture_cxx20, diag::ext_explicit_bool, diag::ext_for_range_init_stmt, diag::ext_implicit_typename, diag::ext_init_capture_pack, diag::ext_inline_nested_namespace_definition, diag::ext_lambda_template_parameter_list, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_using_decl_scoped_enumerator, diag::ext_using_enum_declaration, diag::warn_cxx17_compat_aggregate_init_paren_list, -1,
  /* DiagArray125 */ diag::ext_cxx23_attr, -1,
  /* DiagArray126 */ diag::err_static_lambda, diag::ext_alias_in_init_statement, diag::ext_consteval_if, diag::ext_constexpr_body_invalid_stmt_cxx23, diag::ext_constexpr_static_var, diag::ext_cxx23_pp_directive, diag::ext_cxx23_size_t_suffix, diag::ext_cxx_label_end_of_compound_statement, diag::ext_lambda_missing_parens, diag::ext_operator_overload_static, -1,
  /* DiagArray127 */ diag::ext_decl_attrs_on_lambda, -1,
  /* DiagArray128 */ diag::ext_decl_attrs_on_binding, diag::ext_delete_with_message, diag::ext_pack_indexing, diag::ext_placeholder_var_definition, -1,
  /* DiagArray139 */ diag::warn_cxx11_compat_binary_literal, -1,
  /* DiagArray141 */ diag::warn_cxx98_compat_alias_declaration, diag::warn_cxx98_compat_alignas, diag::warn_cxx98_compat_alignof, diag::warn_cxx98_compat_attribute, diag::warn_cxx98_compat_auto_type_specifier, diag::warn_cxx98_compat_constexpr, diag::warn_cxx98_compat_ctor_list_init, diag::warn_cxx98_compat_decltype, diag::warn_cxx98_compat_defaulted_deleted_function, diag::warn_cxx98_compat_delegating_ctor, diag::warn_cxx98_compat_empty_scalar_initializer, diag::warn_cxx98_compat_empty_sizeless_initializer, diag::warn_cxx98_compat_enum_fixed_underlying_type, diag::warn_cxx98_compat_enum_nested_name_spec, diag::warn_cxx98_compat_explicit_conversion_functions, diag::warn_cxx98_compat_for_range, diag::warn_cxx98_compat_friend_is_member, diag::warn_cxx98_compat_generalized_initializer_lists, diag::warn_cxx98_compat_goto_into_protected_scope, diag::warn_cxx98_compat_indirect_goto_in_protected_scope, diag::warn_cxx98_compat_initializer_list_init, diag::warn_cxx98_compat_inline_namespace, diag::warn_cxx98_compat_lambda, diag::warn_cxx98_compat_less_colon_colon, diag::warn_cxx98_compat_literal_operator, diag::warn_cxx98_compat_literal_ucn_control_character, diag::warn_cxx98_compat_literal_ucn_escape_basic_scs, diag::warn_cxx98_compat_noexcept_decl, diag::warn_cxx98_compat_noexcept_expr, diag::warn_cxx98_compat_non_static_member_use, diag::warn_cxx98_compat_nonclass_type_friend, diag::warn_cxx98_compat_nonstatic_member_init, diag::warn_cxx98_compat_nontrivial_union_or_anon_struct_member, diag::warn_cxx98_compat_nullptr, diag::warn_cxx98_compat_override_control_keyword, diag::warn_cxx98_compat_pass_non_pod_arg_to_vararg, diag::warn_cxx98_compat_raw_string_literal, diag::warn_cxx98_compat_ref_qualifier, diag::warn_cxx98_compat_reference_list_init, diag::warn_cxx98_compat_rvalue_reference, diag::warn_cxx98_compat_scoped_enum, diag::warn_cxx98_compat_sfinae_access_control, diag::warn_cxx98_compat_static_assert, diag::warn_cxx98_compat_static_data_member_in_union, diag::warn_cxx98_compat_switch_into_protected_scope, diag::warn_cxx98_compat_template_arg_extra_parens, diag::warn_cxx98_compat_template_arg_null, diag::warn_cxx98_compat_template_arg_object_internal, diag::warn_cxx98_compat_template_outside_of_template, diag::warn_cxx98_compat_template_parameter_default_in_function_template, diag::warn_cxx98_compat_trailing_return_type, diag::warn_cxx98_compat_two_right_angle_brackets, diag::warn_cxx98_compat_typename_outside_of_template, diag::warn_cxx98_compat_unelaborated_friend_type, diag::warn_cxx98_compat_unicode_literal, diag::warn_cxx98_compat_unicode_type, diag::warn_cxx98_compat_using_decl_constructor, diag::warn_cxx98_compat_variadic_templates, -1,
  /* DiagArray142 */ diag::warn_cxx98_compat_temp_copy, -1,
  /* DiagArray143 */ diag::warn_cxx98_compat_top_level_semi, -1,
  /* DiagArray144 */ diag::warn_cxx98_compat_template_arg_local_type, -1,
  /* DiagArray145 */ diag::warn_cxx98_compat_array_size_conversion, diag::warn_cxx98_compat_cast_fn_obj, diag::warn_cxx98_compat_empty_fnmacro_arg, diag::warn_cxx98_compat_enumerator_list_comma, diag::warn_cxx98_compat_extern_template, diag::warn_cxx98_compat_longlong, diag::warn_cxx98_compat_no_newline_eof, diag::warn_cxx98_compat_pp_line_too_big, diag::warn_cxx98_compat_variadic_macro, -1,
  /* DiagArray146 */ diag::warn_cxx98_compat_template_arg_unnamed_type, -1,
  /* DiagArray147 */ diag::ext_anonymous_union, diag::ext_c11_anonymous_struct, diag::ext_c11_feature, diag::ext_typecheck_compare_complete_incomplete_pointers, -1,
  /* DiagArray148 */ diag::warn_c23_keyword, -1,
  /* DiagArray149 */ diag::ext_binary_literal, diag::ext_c23_bitint_suffix, diag::ext_c23_pp_directive, diag::ext_c_empty_initializer, diag::ext_c_label_end_of_compound_statement, diag::ext_c_label_followed_by_declaration, diag::ext_c_missing_varargs_arg, diag::ext_c_nullptr, diag::ext_c_static_assert_no_message, diag::ext_parameter_name_omitted_c23, diag::ext_type_defined_in_offsetof, diag::warn_ext_c23_attributes, -1,
  /* DiagArray152 */ diag::warn_c99_compat_unicode_id, diag::warn_c99_compat_unicode_literal, diag::warn_c99_keyword, diag::warn_old_implicitly_unsigned_long, -1,
  /* DiagArray153 */ diag::ext_designated_init, diag::ext_designated_init_array, diag::ext_designated_init_brace_elision, diag::ext_designated_init_mixed, diag::ext_designated_init_nested, -1,
  /* DiagArray154 */ diag::ext_aggregate_init_not_constant, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_c99_whitespace_required_after_macro_name, diag::ext_empty_fnmacro_arg, diag::ext_enumerator_list_comma_c, diag::ext_hex_constant_invalid, -1,
  /* DiagArray155 */ diag::warn_call_to_pure_virtual_member_function_from_ctor_dtor, -1,
  /* DiagArray156 */ diag::warn_called_once_gets_called_twice, diag::warn_called_once_never_called, diag::warn_called_once_never_called_when, -1,
  /* DiagArray157 */ diag::warn_cast_align, -1,
  /* DiagArray158 */ diag::warn_cast_calling_conv, -1,
  /* DiagArray160 */ diag::warn_cast_function_type, -1,
  /* DiagArray161 */ diag::warn_cast_function_type_strict, -1,
  /* DiagArray162 */ diag::warn_cast_pointer_from_sel, -1,
  /* DiagArray163 */ diag::warn_cast_qual, diag::warn_cast_qual2, -1,
  /* DiagArray164 */ diag::ext_bad_cxx_cast_qualifiers_away_incoherent, -1,
  /* DiagArray166 */ diag::warn_omp_section_is_char, diag::warn_subscript_is_char, -1,
  /* DiagArray167 */ diag::warn_drv_yc_multiple_inputs_clang_cl, diag::warn_drv_ycyu_different_arg_clang_cl, diag::warn_pp_hdrstop_filename_ignored, diag::warn_pp_macro_def_mismatch_with_pch, -1,
  /* DiagArray168 */ diag::warn_conv_to_base_not_used, diag::warn_conv_to_self_not_used, diag::warn_conv_to_void_not_used, -1,
  /* DiagArray169 */ diag::warn_pass_class_arg_to_vararg, -1,
  /* DiagArray170 */ diag::warn_cmse_nonsecure_union, -1,
  /* DiagArray171 */ diag::warn_comma_operator, -1,
  /* DiagArray172 */ diag::escaped_newline_block_comment_end, diag::ext_line_comment, diag::ext_multi_line_line_comment, diag::warn_nested_block_comment, -1,
  /* DiagArray174 */ diag::ext_typecheck_comparison_of_distinct_pointers, -1,
  /* DiagArray175 */ diag::warn_completion_handler_called_twice, diag::warn_completion_handler_never_called, diag::warn_completion_handler_never_called_when, -1,
  /* DiagArray176 */ diag::ext_complex_component_init, -1,
  /* DiagArray178 */ diag::warn_compound_token_split_by_macro, -1,
  /* DiagArray179 */ diag::warn_compound_token_split_by_whitespace, -1,
  /* DiagArray180 */ diag::ext_typecheck_cond_pointer_integer_mismatch, -1,
  /* DiagArray181 */ diag::warn_maybe_uninit_var, -1,
  /* DiagArray182 */ diag::warn_module_config_macro_undef, -1,
  /* DiagArray183 */ diag::warn_impcast_integer_precision_constant, -1,
  /* DiagArray184 */ diag::warn_is_constant_evaluated_always_true_constexpr, -1,
  /* DiagArray185 */ diag::warn_logical_instead_of_bitwise, -1,
  /* DiagArray186 */ diag::warn_cxx14_compat_constexpr_not_const, -1,
  /* DiagArray187 */ diag::warn_attr_on_unconsumable_class, diag::warn_loop_state_mismatch, diag::warn_param_return_typestate_mismatch, diag::warn_param_typestate_mismatch, diag::warn_return_typestate_for_unconsumable_type, diag::warn_return_typestate_mismatch, diag::warn_use_in_invalid_state, diag::warn_use_of_temp_in_invalid_state, -1,
  /* DiagArray188 */ diag::warn_hlsl_impcast_vector_truncation, diag::warn_impcast_complex_scalar, diag::warn_impcast_vector_scalar, diag::warn_opencl_generic_address_space_arg, diag::warn_template_arg_negative, diag::warn_template_arg_too_large, -1,
  /* DiagArray190 */ diag::warn_non_aligned_allocation_function, -1,
  /* DiagArray191 */ diag::warn_coroutine_handle_address_invalid_return_type, -1,
  /* DiagArray192 */ diag::warn_coroutine_promise_unhandled_exception_required_with_exceptions, -1,
  /* DiagArray193 */ diag::warn_unreachable_default, -1,
  /* DiagArray195 */ diag::warn_objc_cdirective_format_string, -1,
  /* DiagArray196 */ diag::warn_ctad_maybe_unsupported, -1,
  /* DiagArray198 */ diag::warn_ctu_incompat_triple, -1,
  /* DiagArray199 */ diag::warn_attribute_argument_n_negative, diag::warn_cuda_attr_lambda_position, diag::warn_kern_is_inline, diag::warn_kern_is_method, diag::warn_pragma_unroll_cuda_value_in_parens, -1,
  /* DiagArray200 */ diag::warn_default_atomic_custom_getter_setter, -1,
  /* DiagArray201 */ diag::ext_cxx11_attr_placement, -1,
  /* DiagArray202 */ diag::warn_dangling_variable, diag::warn_unsupported_lifetime_extension, -1,
  /* DiagArray203 */ diag::warn_dangling_else, -1,
  /* DiagArray204 */ diag::warn_bind_ref_member_to_parameter, diag::warn_dangling_member, diag::warn_init_ptr_member_to_parameter_addr, diag::warn_new_dangling_reference, -1,
  /* DiagArray205 */ diag::warn_dangling_lifetime_pointer, diag::warn_dangling_lifetime_pointer_member, -1,
  /* DiagArray206 */ diag::warn_new_dangling_initializer_list, -1,
  /* DiagArray207 */ diag::warn_drv_darwin_sdk_invalid_settings, -1,
  /* DiagArray208 */ diag::warn_pp_date_time, -1,
  /* DiagArray209 */ diag::warn_dealloc_in_category, -1,
  /* DiagArray210 */ diag::warn_debug_compression_unavailable, -1,
  /* DiagArray211 */ diag::ext_mixed_decls_code, diag::warn_mixed_decls_code, -1,
  /* DiagArray212 */ diag::warn_defaulted_comparison_deleted, diag::warn_defaulted_method_deleted, -1,
  /* DiagArray213 */ diag::warn_drv_delayed_template_parsing_after_cxx20, -1,
  /* DiagArray214 */ diag::warn_delegating_ctor_cycle, -1,
  /* DiagArray215 */ diag::warn_delete_abstract_non_virtual_dtor, -1,
  /* DiagArray216 */ diag::ext_delete_void_ptr_operand, diag::warn_delete_incomplete, -1,
  /* DiagArray217 */ diag::warn_delete_non_virtual_dtor, -1,
  /* DiagArray219 */ diag::ext_delimited_escape_sequence, -1,
  /* DiagArray220 */ diag::warn_deprecated_lax_vec_conv_all, -1,
  /* DiagArray221 */ diag::warn_O4_is_O3, diag::warn_access_decl_deprecated, diag::warn_drv_deprecated_arg, diag::warn_drv_deprecated_custom, diag::warn_drv_treating_input_as_cxx, diag::warn_omp_depend_in_ordered_deprecated, diag::warn_omp_minus_in_reduction_deprecated, diag::warn_option_invalid_ocl_version, diag::warn_vector_long_decl_spec_combination, -1,
  /* DiagArray222 */ diag::warn_deprecated_altivec_src_compat, -1,
  /* DiagArray223 */ diag::warn_arith_conv_mixed_anon_enum_types_cxx20, -1,
  /* DiagArray224 */ diag::warn_depr_array_comparison, -1,
  /* DiagArray225 */ diag::warn_deprecated_noreturn_spelling, diag::warn_type_attribute_deprecated_on_decl, diag::warn_vector_mode_deprecated, -1,
  /* DiagArray226 */ diag::warn_deprecated_builtin, -1,
  /* DiagArray227 */ diag::warn_deprecated_comma_subscript, -1,
  /* DiagArray228 */ diag::warn_deprecated_copy, -1,
  /* DiagArray230 */ diag::warn_deprecated_copy_with_dtor, -1,
  /* DiagArray231 */ diag::warn_deprecated_copy_with_user_provided_copy, -1,
  /* DiagArray232 */ diag::warn_deprecated_copy_with_user_provided_dtor, -1,
  /* DiagArray233 */ diag::warn_deprecated_for_co_await, -1,
  /* DiagArray234 */ diag::warn_atl_uuid_deprecated, diag::warn_cstyle_param, diag::warn_deprecated, diag::warn_deprecated_fwdclass_message, diag::warn_deprecated_message, diag::warn_property_method_deprecated, -1,
  /* DiagArray235 */ diag::warn_exception_spec_deprecated, -1,
  /* DiagArray236 */ diag::warn_comparison_mixed_enum_types_cxx20, -1,
  /* DiagArray237 */ diag::warn_conditional_mixed_enum_types_cxx20, -1,
  /* DiagArray238 */ diag::warn_arith_conv_mixed_enum_types_cxx20, -1,
  /* DiagArray239 */ diag::warn_arith_conv_enum_float_cxx20, -1,
  /* DiagArray240 */ diag::warn_deprecated_def, diag::warn_unavailable_def, -1,
  /* DiagArray241 */ diag::warn_increment_bool, -1,
  /* DiagArray242 */ diag::warn_deprecated_literal_operator_id, -1,
  /* DiagArray243 */ diag::warn_deprecated_module_dot_map, -1,
  /* DiagArray244 */ diag::warn_non_prototype_changes_behavior, diag::warn_strict_uses_without_prototype, -1,
  /* DiagArray245 */ diag::warn_objc_isa_assign, diag::warn_objc_isa_use, -1,
  /* DiagArray246 */ diag::warn_objc_pointer_masking, -1,
  /* DiagArray247 */ diag::warn_objc_pointer_masking_performSelector, -1,
  /* DiagArray248 */ diag::warn_pragma_deprecated_macro_use, -1,
  /* DiagArray249 */ diag::warn_deprecated_redundant_constexpr_static_def, -1,
  /* DiagArray250 */ diag::warn_deprecated_register, -1,
  /* DiagArray251 */ diag::warn_analyzer_deprecated_option, diag::warn_analyzer_deprecated_option_with_alternative, -1,
  /* DiagArray252 */ diag::warn_deprecated_this_capture, -1,
  /* DiagArray253 */ diag::warn_ext_int_deprecated, -1,
  /* DiagArray254 */ diag::warn_deprecated_increment_decrement_volatile, diag::warn_deprecated_simple_assign_volatile, diag::warn_deprecated_volatile_param, diag::warn_deprecated_volatile_return, diag::warn_deprecated_volatile_structured_binding, -1,
  /* DiagArray256 */ diag::warn_direct_ivar_access, -1,
  /* DiagArray257 */ diag::pp_disabled_macro_expansion, -1,
  /* DiagArray260 */ diag::warn_conflicting_param_modifiers, diag::warn_conflicting_ret_type_modifiers, -1,
  /* DiagArray262 */ diag::warn_remainder_division_by_zero, -1,
  /* DiagArray263 */ diag::warn_attribute_dll_redeclaration, -1,
  /* DiagArray264 */ diag::warn_attribute_dllexport_explicit_instantiation_decl, -1,
  /* DiagArray265 */ diag::warn_attribute_dllimport_static_field_definition, -1,
  /* DiagArray266 */ diag::warn_doc_api_container_decl_mismatch, diag::warn_doc_block_command_duplicate, diag::warn_doc_block_command_empty_paragraph, diag::warn_doc_container_decl_mismatch, diag::warn_doc_function_method_decl_mismatch, diag::warn_doc_html_start_tag_expected_ident_or_greater, diag::warn_doc_html_start_tag_expected_quoted_string, diag::warn_doc_inline_command_not_enough_arguments, diag::warn_doc_param_duplicate, diag::warn_doc_param_invalid_direction, diag::warn_doc_param_not_attached_to_a_function_decl, diag::warn_doc_param_not_found, diag::warn_doc_returns_attached_to_a_void_function, diag::warn_doc_returns_not_attached_to_a_function_decl, diag::warn_doc_tparam_duplicate, diag::warn_doc_tparam_not_attached_to_a_template_decl, diag::warn_doc_tparam_not_found, diag::warn_not_a_doxygen_trailing_member_comment, diag::warn_splice_in_doxygen_comment, diag::warn_verbatim_block_end_without_start, -1,
  /* DiagArray267 */ diag::warn_doc_deprecated_not_sync, -1,
  /* DiagArray268 */ diag::warn_doc_html_end_forbidden, diag::warn_doc_html_end_unbalanced, diag::warn_doc_html_missing_end_tag, diag::warn_doc_html_start_end_mismatch, -1,
  /* DiagArray269 */ diag::warn_doc_param_spaces_in_direction, -1,
  /* DiagArray270 */ diag::warn_correct_comment_command_name, diag::warn_unknown_comment_command_name, -1,
  /* DiagArray271 */ diag::ext_dollar_in_identifier, -1,
  /* DiagArray272 */ diag::warn_impcast_double_promotion, -1,
  /* DiagArray273 */ diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_qualified_dtor_named_in_lexical_scope, -1,
  /* DiagArray274 */ diag::ext_destructor_typedef_name, -1,
  /* DiagArray275 */ diag::ext_duplicate_declspec, diag::ext_warn_duplicate_declspec, diag::warn_attribute_address_multiple_identical_qualifiers, diag::warn_duplicate_declspec, -1,
  /* DiagArray276 */ diag::warn_duplicate_enum_values, -1,
  /* DiagArray277 */ diag::warn_method_param_declaration, -1,
  /* DiagArray278 */ diag::warn_duplicate_method_decl, -1,
  /* DiagArray279 */ diag::warn_duplicate_protocol_def, -1,
  /* DiagArray280 */ diag::warn_drv_dxc_missing_dxv, -1,
  /* DiagArray281 */ diag::warn_dyn_class_memaccess, -1,
  /* DiagArray282 */ diag::ext_dynamic_exception_spec, -1,
  /* DiagArray283 */ diag::warn_eagerly_load_for_standard_cplusplus_modules, -1,
  /* DiagArray285 */ diag::ext_enum_base_in_type_specifier, -1,
  /* DiagArray286 */ diag::ext_elaborated_enum_class, -1,
  /* DiagArray287 */ diag::ext_embedded_directive, -1,
  /* DiagArray288 */ diag::warn_empty_for_body, diag::warn_empty_if_body, diag::warn_empty_range_based_for_body, diag::warn_empty_switch_body, diag::warn_empty_while_body, -1,
  /* DiagArray289 */ diag::ext_decomp_decl_empty, -1,
  /* DiagArray290 */ diag::warn_empty_init_statement, -1,
  /* DiagArray291 */ diag::ext_empty_translation_unit, -1,
  /* DiagArray292 */ diag::warn_incomplete_encoded_type, -1,
  /* DiagArray294 */ diag::warn_comparison_mixed_enum_types, -1,
  /* DiagArray295 */ diag::warn_conditional_mixed_enum_types, -1,
  /* DiagArray296 */ diag::warn_comparison_of_mixed_enum_types_switch, -1,
  /* DiagArray297 */ diag::warn_constexpr_unscoped_enum_out_of_range, -1,
  /* DiagArray298 */ diag::warn_impcast_different_enum_types, -1,
  /* DiagArray299 */ diag::warn_arith_conv_mixed_enum_types, -1,
  /* DiagArray300 */ diag::warn_arith_conv_enum_float, -1,
  /* DiagArray301 */ diag::ext_enum_too_large, diag::ext_enumerator_increment_too_large, -1,
  /* DiagArray302 */ diag::warn_cdtor_function_try_handler_mem_expr, diag::warn_exception_caught_by_earlier_handler, diag::warn_throw_in_noexcept_func, -1,
  /* DiagArray303 */ diag::ext_excess_initializers, diag::ext_excess_initializers_for_sizeless_type, diag::ext_excess_initializers_in_char_array_initializer, diag::ext_initializer_string_for_char_array_too_long, -1,
  /* DiagArray304 */ diag::warn_anyx86_excessive_regsave, -1,
  /* DiagArray305 */ diag::warn_exit_time_destructor, -1,
  /* DiagArray306 */ diag::warn_defined_in_function_type_macro, diag::warn_defined_in_object_type_macro, -1,
  /* DiagArray307 */ diag::warn_experimental_header_unit, -1,
  /* DiagArray308 */ diag::warn_direct_initialize_call, diag::warn_direct_super_initialize_call, -1,
  /* DiagArray309 */ diag::warn_arc_strong_pointer_objc_pointer, -1,
  /* DiagArray311 */ diag::warn_zero_size_struct_union_in_extern_c, -1,
  /* DiagArray312 */ diag::warn_extern_init, -1,
  /* DiagArray313 */ diag::warn_arm_interrupt_calling_convention, -1,
  /* DiagArray314 */ diag::warn_namespace_member_extra_qualification, -1,
  /* DiagArray315 */ diag::ext_extra_semi, diag::warn_extra_semi_after_mem_fn_def, -1,
  /* DiagArray316 */ diag::warn_null_statement, -1,
  /* DiagArray317 */ diag::ext_pp_extra_tokens_at_eol, diag::warn_omp_extra_tokens_at_eol, -1,
  /* DiagArray318 */ diag::warn_missing_symbol_graph_dir, -1,
  /* DiagArray319 */ diag::warn_final_dtor_non_final_class, -1,
  /* DiagArray320 */ diag::warn_pragma_final_macro, -1,
  /* DiagArray321 */ diag::ext_clang_c_enum_fixed_underlying_type, -1,
  /* DiagArray322 */ diag::warn_fixedpoint_constant_overflow, -1,
  /* DiagArray323 */ diag::warn_flag_enum_constant_out_of_range, -1,
  /* DiagArray324 */ diag::ext_flexible_array_in_array, diag::ext_flexible_array_in_struct, -1,
  /* DiagArray325 */ diag::warn_impcast_float_integer, -1,
  /* DiagArray326 */ diag::warn_floatingpoint_eq, -1,
  /* DiagArray327 */ diag::warn_impcast_float_to_integer, diag::warn_impcast_float_to_integer_out_of_range, -1,
  /* DiagArray328 */ diag::warn_impcast_float_to_integer_zero, -1,
  /* DiagArray329 */ diag::warn_redundant_loop_iteration, diag::warn_variables_not_in_loop_body, -1,
  /* DiagArray330 */ diag::warn_format_P_no_precision, diag::warn_format_P_with_objc_pointer, diag::warn_format_argument_needs_cast, diag::warn_format_bool_as_character, diag::warn_format_conversion_argument_type_mismatch, diag::warn_format_invalid_annotation, diag::warn_format_invalid_positional_specifier, diag::warn_format_mix_positional_nonpositional_args, diag::warn_format_nonsensical_length, diag::warn_format_string_is_wide_literal, diag::warn_format_zero_positional_specifier, diag::warn_missing_format_string, diag::warn_printf_ObjCflags_without_ObjCConversion, diag::warn_printf_asterisk_missing_arg, diag::warn_printf_asterisk_wrong_type, diag::warn_printf_empty_objc_flag, diag::warn_printf_format_string_contains_null_char, diag::warn_printf_format_string_not_null_terminated, diag::warn_printf_ignored_flag, diag::warn_printf_incomplete_specifier, diag::warn_printf_invalid_objc_flag, diag::warn_printf_narg_not_supported, diag::warn_printf_nonsensical_flag, diag::warn_printf_nonsensical_optional_amount, diag::warn_printf_positional_arg_exceeds_data_args, diag::warn_scanf_nonzero_width, diag::warn_scanf_scanlist_incomplete, -1,
  /* DiagArray331 */ diag::warn_printf_data_arg_not_used, -1,
  /* DiagArray332 */ diag::warn_printf_insufficient_data_args, -1,
  /* DiagArray333 */ diag::warn_format_invalid_conversion, -1,
  /* DiagArray334 */ diag::warn_format_non_standard, diag::warn_format_non_standard_conversion_spec, diag::warn_format_non_standard_positional_arg, -1,
  /* DiagArray335 */ diag::warn_format_nonliteral, -1,
  /* DiagArray336 */ diag::warn_format_overflow, -1,
  /* DiagArray337 */ diag::warn_format_overflow_non_kprintf, -1,
  /* DiagArray338 */ diag::warn_format_argument_needs_cast_pedantic, diag::warn_format_conversion_argument_type_mismatch_pedantic, -1,
  /* DiagArray339 */ diag::warn_format_nonliteral_noargs, -1,
  /* DiagArray340 */ diag::warn_format_conversion_argument_type_mismatch_signedness, -1,
  /* DiagArray341 */ diag::warn_format_truncation, -1,
  /* DiagArray342 */ diag::warn_format_truncation_non_kprintf, -1,
  /* DiagArray343 */ diag::warn_format_conversion_argument_type_mismatch_confusion, -1,
  /* DiagArray345 */ diag::warn_empty_format_string, -1,
  /* DiagArray347 */ diag::warn_fortify_scanf_overflow, diag::warn_fortify_source_overflow, diag::warn_fortify_source_size_mismatch, diag::warn_fortify_strlen_overflow, -1,
  /* DiagArray348 */ diag::warn_four_char_character_literal, -1,
  /* DiagArray349 */ diag::warn_frame_address, -1,
  /* DiagArray350 */ diag::warn_fe_backend_frame_larger_than, diag::warn_fe_frame_larger_than, -1,
  /* DiagArray352 */ diag::warn_framework_include_private_from_public, -1,
  /* DiagArray353 */ diag::warn_free_nonheap_object, -1,
  /* DiagArray354 */ diag::ext_enum_friend, -1,
  /* DiagArray355 */ diag::warn_function_def_in_objc_container, -1,
  /* DiagArray356 */ diag::warn_dispatch_body_ignored, diag::warn_multiversion_duplicate_entries, diag::warn_target_clone_duplicate_options, diag::warn_target_clone_no_impact_options, -1,
  /* DiagArray357 */ diag::warn_drv_fuse_ld_path, -1,
  /* DiagArray360 */ diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_warn_gnu_final, diag::warn_attribute_on_function_definition, diag::warn_break_binds_to_switch, diag::warn_cleanup_ext, diag::warn_gcc_attribute_location, diag::warn_gcc_ignores_type_attr, diag::warn_gcc_requires_variadic_function, diag::warn_gcc_variable_decl_in_for_loop, diag::warn_loop_ctrl_binds_to_inner, -1,
  /* DiagArray361 */ diag::ext_generic_with_type_arg, -1,
  /* DiagArray362 */ diag::warn_global_constructor, diag::warn_global_destructor, -1,
  /* DiagArray363 */ diag::warn_drv_global_isel_incomplete, diag::warn_drv_global_isel_incomplete_opt, -1,
  /* DiagArray365 */ diag::ext_alignof_expr, -1,
  /* DiagArray366 */ diag::ext_gnu_anonymous_struct, -1,
  /* DiagArray367 */ diag::ext_array_init_parens, -1,
  /* DiagArray368 */ diag::ext_auto_type, -1,
  /* DiagArray370 */ diag::ext_gnu_case_range, -1,
  /* DiagArray371 */ diag::ext_integer_complex, -1,
  /* DiagArray372 */ diag::ext_array_init_copy, -1,
  /* DiagArray373 */ diag::ext_gnu_conditional_expr, -1,
  /* DiagArray374 */ diag::ext_gnu_array_range, diag::ext_gnu_missing_equal_designator, diag::ext_gnu_old_style_field_designator, -1,
  /* DiagArray376 */ diag::ext_empty_struct_union, diag::ext_flexible_array_empty_aggregate_gnu, diag::ext_no_named_members_in_struct_union, -1,
  /* DiagArray377 */ diag::ext_flexible_array_init, -1,
  /* DiagArray378 */ diag::ext_flexible_array_union_gnu, -1,
  /* DiagArray379 */ diag::ext_expr_not_ice, diag::ext_in_class_initializer_non_constant, diag::ext_vla_folded_to_constant, -1,
  /* DiagArray380 */ diag::ext_imaginary_constant, -1,
  /* DiagArray381 */ diag::ext_pp_include_next_directive, -1,
  /* DiagArray382 */ diag::warn_gnu_inline_cplusplus_without_extern, -1,
  /* DiagArray383 */ diag::ext_gnu_address_of_label, diag::ext_gnu_indirect_goto, -1,
  /* DiagArray384 */ diag::ext_pp_gnu_line_directive, -1,
  /* DiagArray385 */ diag::warn_gnu_null_ptr_arith, -1,
  /* DiagArray387 */ diag::ext_gnu_ptr_func_arith, diag::ext_gnu_subscript_void_type, diag::ext_gnu_void_ptr, -1,
  /* DiagArray388 */ diag::ext_forward_ref_enum_def, -1,
  /* DiagArray389 */ diag::ext_gnu_statement_expr, -1,
  /* DiagArray390 */ diag::ext_gnu_statement_expr_macro, -1,
  /* DiagArray391 */ diag::ext_in_class_initializer_float_type, -1,
  /* DiagArray392 */ diag::ext_string_literal_operator_template, -1,
  /* DiagArray393 */ diag::ext_typecheck_cast_to_union, -1,
  /* DiagArray394 */ diag::ext_variable_sized_type_in_struct, -1,
  /* DiagArray395 */ diag::ext_pp_line_zero, -1,
  /* DiagArray396 */ diag::ext_paste_comma, -1,
  /* DiagArray397 */ diag::warn_maybe_capture_bad_target_this_ptr, -1,
  /* DiagArray398 */ diag::warn_header_guard, -1,
  /* DiagArray399 */ diag::warn_using_directive_in_header, -1,
  /* DiagArray400 */ diag::warn_next_larger_fp_type_same_size_than_fp, -1,
  /* DiagArray401 */ diag::warn_hip_omp_target_directives, -1,
  /* DiagArray402 */ diag::warn_ignored_hip_only_option, -1,
  /* DiagArray403 */ diag::ext_hlsl_access_specifiers, -1,
  /* DiagArray404 */ diag::warn_condition_is_idiomatic_assignment, -1,
  /* DiagArray405 */ diag::ext_cannot_use_trivial_abi, diag::warn_alias_to_weak_alias, diag::warn_alias_with_section, diag::warn_aligned_attr_underaligned, diag::warn_attr_abi_tag_namespace, diag::warn_attribute_after_definition_ignored, diag::warn_attribute_cmse_entry_static, diag::warn_attribute_dllexport_explicit_instantiation_def, diag::warn_attribute_exclude_from_explicit_instantiation_local_class, diag::warn_attribute_has_no_effect_on_compile_time_if, diag::warn_attribute_has_no_effect_on_infinite_loop, diag::warn_attribute_iboutlet, diag::warn_attribute_ignored, diag::warn_attribute_ignored_for_field_of_type, diag::warn_attribute_ignored_no_calls_in_stmt, diag::warn_attribute_ignored_non_function_pointer, diag::warn_attribute_ignored_on_inline, diag::warn_attribute_ignored_on_non_definition, diag::warn_attribute_invalid_on_definition, diag::warn_attribute_no_decl, diag::warn_attribute_nonnull_no_pointers, diag::warn_attribute_nonnull_parm_no_args, diag::warn_attribute_not_on_decl, diag::warn_attribute_pointer_or_reference_only, diag::warn_attribute_pointers_only, diag::warn_attribute_precede_definition, diag::warn_attribute_return_pointers_only, diag::warn_attribute_return_pointers_refs_only, diag::warn_attribute_sentinel_named_arguments, diag::warn_attribute_sentinel_not_variadic, diag::warn_attribute_type_not_supported, diag::warn_attribute_type_not_supported_global, diag::warn_attribute_unknown_visibility, diag::warn_attribute_void_function_method, diag::warn_attribute_weak_on_field, diag::warn_attribute_weak_on_local, diag::warn_attribute_wrong_decl_type, diag::warn_attribute_wrong_decl_type_str, diag::warn_attributes_likelihood_ifstmt_conflict, diag::warn_block_literal_attributes_on_omitted_return_type, diag::warn_cconv_unsupported, diag::warn_const_attr_with_pure_attr, diag::warn_cuda_maxclusterrank_sm_90, diag::warn_cxx11_gnu_attribute_on_type, diag::warn_declspec_allocator_nonpointer, diag::warn_declspec_attribute_ignored, diag::warn_deprecated_anonymous_namespace, diag::warn_deprecated_ignored_on_using, diag::warn_dllimport_dropped_from_inline_function, diag::warn_duplicate_attribute, diag::warn_duplicate_attribute_exact, diag::warn_function_attribute_ignored_in_stmt, diag::warn_function_stmt_attribute_precedence, diag::warn_gc_attribute_weak_on_local, diag::warn_gnu_inline_attribute_requires_inline, diag::warn_ignored_ms_inheritance, diag::warn_ignored_objc_externally_retained, diag::warn_import_on_definition, diag::warn_internal_linkage_local_storage, diag::warn_interrupt_attribute_invalid, diag::warn_microsoft_qualifiers_ignored, diag::warn_mig_server_routine_does_not_return_kern_return_t, diag::warn_mismatched_import, diag::warn_mmap_unknown_attribute, diag::warn_nocf_check_attribute_ignored, diag::warn_noderef_on_non_pointer_or_array, diag::warn_nothrow_attribute_ignored, diag::warn_ns_attribute_wrong_parameter_type, diag::warn_ns_attribute_wrong_return_type, diag::warn_objc_direct_ignored, diag::warn_objc_direct_property_ignored, diag::warn_opencl_attr_deprecated_ignored, diag::warn_pure_function_returns_void, diag::warn_require_const_init_added_too_late, diag::warn_riscv_repeated_interrupt_attribute, diag::warn_sycl_kernel_invalid_template_param_type, diag::warn_sycl_kernel_num_of_function_params, diag::warn_sycl_kernel_num_of_template_params, diag::warn_sycl_kernel_return_type, diag::warn_transparent_union_attribute_field_size_align, diag::warn_transparent_union_attribute_floating, diag::warn_transparent_union_attribute_not_definition, diag::warn_transparent_union_attribute_zero_fields, diag::warn_type_attribute_wrong_type, diag::warn_unhandled_ms_attribute_ignored, diag::warn_unsupported_target_attribute, diag::warn_unused_result_typedef_unsupported_spelling, diag::warn_wrong_clang_attr_namespace, -1,
  /* DiagArray406 */ diag::warn_missing_sdksettings_for_availability_checking, -1,
  /* DiagArray407 */ diag::warn_drv_pch_ignoring_gch_dir, diag::warn_drv_pch_ignoring_gch_file, -1,
  /* DiagArray408 */ diag::warn_drv_unsupported_opt_for_target, diag::warn_ignored_gcc_optimization, -1,
  /* DiagArray409 */ diag::warn_pragma_intrinsic_builtin, -1,
  /* DiagArray411 */ diag::warn_clause_expected_string, diag::warn_pragma_align_expected_equal, diag::warn_pragma_align_invalid_option, diag::warn_pragma_comment_ignored, diag::warn_pragma_debug_dependent_argument, diag::warn_pragma_debug_missing_argument, diag::warn_pragma_debug_missing_command, diag::warn_pragma_debug_unexpected_argument, diag::warn_pragma_debug_unexpected_command, diag::warn_pragma_debug_unknown_module, diag::warn_pragma_expected_action_or_r_paren, diag::warn_pragma_expected_colon, diag::warn_pragma_expected_colon_r_paren, diag::warn_pragma_expected_comma, diag::warn_pragma_expected_identifier, diag::warn_pragma_expected_init_seg, diag::warn_pragma_expected_integer, diag::warn_pragma_expected_lparen, diag::warn_pragma_expected_non_wide_string, diag::warn_pragma_expected_predicate, diag::warn_pragma_expected_punc, diag::warn_pragma_expected_rparen, diag::warn_pragma_expected_section_label_or_name, diag::warn_pragma_expected_section_name, diag::warn_pragma_expected_section_push_pop_or_name, diag::warn_pragma_expected_string, diag::warn_pragma_extra_tokens_at_eol, diag::warn_pragma_force_cuda_host_device_bad_arg, diag::warn_pragma_fp_ignored, diag::warn_pragma_init_seg_unsupported_target, diag::warn_pragma_invalid_action, diag::warn_pragma_invalid_argument, diag::warn_pragma_invalid_specific_action, diag::warn_pragma_missing_argument, diag::warn_pragma_ms_fenv_access, diag::warn_pragma_ms_struct, diag::warn_pragma_options_align_reset_failed, diag::warn_pragma_options_expected_align, diag::warn_pragma_pack_invalid_alignment, diag::warn_pragma_pack_malformed, diag::warn_pragma_pop_failed, diag::warn_pragma_pop_macro_no_push, diag::warn_pragma_unknown_extension, diag::warn_pragma_unsupported_action, diag::warn_pragma_unsupported_extension, diag::warn_pragma_unused_expected_var, diag::warn_pragma_unused_expected_var_arg, diag::warn_pragma_unused_undeclared_var, diag::warn_stdc_unknown_rounding_mode, -1,
  /* DiagArray412 */ diag::warn_arc_lifetime_result_type, diag::warn_block_literal_qualifiers_on_omitted_return_type, diag::warn_qual_return_type, diag::warn_typecheck_function_qualifiers_ignored, -1,
  /* DiagArray413 */ diag::warn_typecheck_reference_qualifiers, -1,
  /* DiagArray415 */ diag::warn_auto_implicit_atomic_property, diag::warn_implicit_atomic_property, -1,
  /* DiagArray416 */ diag::warn_impcast_integer_float_precision_constant, -1,
  /* DiagArray417 */ diag::warn_impcast_floating_point_to_bool, -1,
  /* DiagArray418 */ diag::ext_implicit_exception_spec_mismatch, -1,
  /* DiagArray419 */ diag::warn_unannotated_fallthrough, -1,
  /* DiagArray420 */ diag::warn_unannotated_fallthrough_per_function, -1,
  /* DiagArray421 */ diag::warn_impcast_fixed_point_range, -1,
  /* DiagArray422 */ diag::warn_impcast_float_precision, diag::warn_impcast_float_result_precision, -1,
  /* DiagArray423 */ diag::ext_implicit_function_decl_c99, diag::ext_implicit_lib_function_decl, diag::ext_implicit_lib_function_decl_c99, diag::warn_builtin_unknown, diag::warn_implicit_function_decl, -1,
  /* DiagArray424 */ diag::ext_missing_type_specifier, diag::ext_param_not_declared, diag::warn_missing_type_specifier, -1,
  /* DiagArray425 */ diag::warn_impcast_high_order_zero_bits, diag::warn_impcast_integer_precision, -1,
  /* DiagArray426 */ diag::warn_impcast_integer_float_precision, -1,
  /* DiagArray427 */ diag::warn_implicitly_retains_self, -1,
  /* DiagArray428 */ diag::ext_integer_literal_too_large_for_signed, -1,
  /* DiagArray430 */ diag::ext_pp_import_directive, -1,
  /* DiagArray431 */ diag::warn_inaccessible_base_class, -1,
  /* DiagArray432 */ diag::warn_pp_include_angled_in_module_purview, -1,
  /* DiagArray433 */ diag::pp_include_next_absolute_path, -1,
  /* DiagArray434 */ diag::pp_include_next_in_primary, -1,
  /* DiagArray435 */ diag::warn_deep_exception_specs_differ, diag::warn_incompatible_exception_specs, -1,
  /* DiagArray436 */ diag::ext_typecheck_convert_incompatible_function_pointer, -1,
  /* DiagArray437 */ diag::warn_typecheck_convert_incompatible_function_pointer_strict, -1,
  /* DiagArray438 */ diag::warn_redecl_library_builtin, -1,
  /* DiagArray439 */ diag::warn_section_msvc_compat, -1,
  /* DiagArray440 */ diag::warn_cxx_ms_struct, diag::warn_npot_ms_struct, -1,
  /* DiagArray441 */ diag::ext_typecheck_convert_incompatible_pointer, -1,
  /* DiagArray442 */ diag::ext_nested_pointer_qualifier_mismatch, diag::ext_typecheck_convert_discards_qualifiers, diag::warn_bad_cxx_cast_nested_pointer_addr_space, -1,
  /* DiagArray443 */ diag::warn_property_types_are_incompatible, -1,
  /* DiagArray444 */ diag::warn_incompatible_sysroot, -1,
  /* DiagArray445 */ diag::warn_mmap_incomplete_framework_module_declaration, -1,
  /* DiagArray446 */ diag::warn_undef_method_impl, -1,
  /* DiagArray448 */ diag::warn_implicit_decl_no_jmp_buf, -1,
  /* DiagArray449 */ diag::warn_missing_submodule, diag::warn_mmap_umbrella_dir_not_found, diag::warn_uncovered_module_header, -1,
  /* DiagArray450 */ diag::warn_redeclaration_without_attribute_prev_attribute_ignored, diag::warn_redeclaration_without_import_attribute, -1,
  /* DiagArray451 */ diag::warn_inconsistent_destructor_marked_not_override_overriding, -1,
  /* DiagArray452 */ diag::warn_inconsistent_function_marked_not_override_overriding, -1,
  /* DiagArray453 */ diag::ext_increment_bool, -1,
  /* DiagArray454 */ diag::warn_infinite_recursive_function, -1,
  /* DiagArray456 */ diag::ext_initializer_overrides, diag::ext_initializer_union_overrides, diag::warn_initializer_overrides, -1,
  /* DiagArray457 */ diag::ext_out_of_line_qualified_id_type_names_constructor, -1,
  /* DiagArray459 */ diag::warn_fe_inline_asm, -1,
  /* DiagArray460 */ diag::warn_inline_namespace_reopened_noninline, -1,
  /* DiagArray461 */ diag::ext_operator_new_delete_declared_inline, -1,
  /* DiagArray462 */ diag::warn_dylib_symbol_flags_mismatch, diag::warn_glob_did_not_match, diag::warn_header_availability_mismatch, diag::warn_header_hidden_symbol, diag::warn_header_symbol_flags_mismatch, diag::warn_header_symbol_missing, diag::warn_library_hidden_symbol, diag::warn_library_missing_symbol, diag::warn_no_such_excluded_header_file, diag::warn_platform_mismatch, diag::warn_rpaths_mismatch, diag::warn_rpaths_missing, diag::warn_target, -1,
  /* DiagArray463 */ diag::warn_explicit_instantiation_after_specialization, -1,
  /* DiagArray464 */ diag::ext_typecheck_convert_int_pointer, diag::ext_typecheck_convert_pointer_int, -1,
  /* DiagArray466 */ diag::warn_enum_constant_in_bool_context, diag::warn_left_shift_in_bool_context, -1,
  /* DiagArray467 */ diag::warn_int_to_pointer_cast, -1,
  /* DiagArray468 */ diag::warn_int_to_void_pointer_cast, -1,
  /* DiagArray469 */ diag::warn_integer_constant_overflow, -1,
  /* DiagArray470 */ diag::warn_drv_missing_plugin_arg, diag::warn_drv_missing_plugin_name, diag::warn_drv_msp430_hwmult_mismatch, diag::warn_drv_msp430_hwmult_no_device, diag::warn_drv_msp430_hwmult_unsupported, diag::warn_drv_object_size_disabled_O0, diag::warn_drv_optimization_value, diag::warn_fe_backend_invalid_feature_flag, diag::warn_fe_backend_readonly_feature_flag, diag::warn_target_unrecognized_env, diag::warn_target_unsupported_extension, -1,
  /* DiagArray471 */ diag::ext_constexpr_function_never_constant_expr, -1,
  /* DiagArray472 */ diag::warn_invalid_feature_combination, -1,
  /* DiagArray473 */ diag::warn_iboutlet_object_type, diag::warn_iboutletcollection_property_assign, -1,
  /* DiagArray474 */ diag::warn_invalid_initializer_from_system_header, -1,
  /* DiagArray475 */ diag::warn_invalid_ios_deployment_target, -1,
  /* DiagArray476 */ diag::warn_attribute_no_builtin_invalid_builtin_name, -1,
  /* DiagArray477 */ diag::warn_falloff_noreturn_function, diag::warn_noreturn_function_has_return_expr, -1,
  /* DiagArray478 */ diag::ext_offsetof_non_pod_type, diag::ext_offsetof_non_standardlayout_type, -1,
  /* DiagArray479 */ diag::warn_drv_unable_to_find_directory_expected, -1,
  /* DiagArray480 */ diag::ext_partial_spec_not_more_specialized_than_primary, -1,
  /* DiagArray482 */ diag::ext_empty_character, diag::ext_unterminated_char_or_string, -1,
  /* DiagArray483 */ diag::warn_bad_character_encoding, diag::warn_bad_string_encoding, -1,
  /* DiagArray484 */ diag::warn_static_assert_message_constexpr, -1,
  /* DiagArray485 */ diag::ext_pp_bad_paste_ms, -1,
  /* DiagArray486 */ diag::warn_unevaluated_string_prefix, -1,
  /* DiagArray487 */ diag::warn_invalid_utf8_in_comment, -1,
  /* DiagArray488 */ diag::warn_jump_out_of_seh_finally, -1,
  /* DiagArray489 */ diag::ext_keyword_as_ident, -1,
  /* DiagArray490 */ diag::warn_pp_macro_hides_keyword, -1,
  /* DiagArray491 */ diag::warn_knl_knm_isa_support_removed, -1,
  /* DiagArray492 */ diag::ext_param_promoted_not_compatible_with_prototype, -1,
  /* DiagArray493 */ diag::ext_token_used, -1,
  /* DiagArray494 */ diag::warn_parameter_size, diag::warn_return_value_size, -1,
  /* DiagArray496 */ diag::warn_fe_linking_module, -1,
  /* DiagArray497 */ diag::warn_impcast_literal_float_to_integer, diag::warn_impcast_literal_float_to_integer_out_of_range, -1,
  /* DiagArray498 */ diag::warn_float_compare_literal, diag::warn_float_overflow, diag::warn_float_underflow, -1,
  /* DiagArray499 */ diag::ext_template_arg_local_type, -1,
  /* DiagArray500 */ diag::warn_logical_not_on_lhs_of_check, -1,
  /* DiagArray501 */ diag::warn_logical_and_in_logical_or, -1,
  /* DiagArray502 */ diag::ext_c99_longlong, -1,
  /* DiagArray504 */ diag::ext_pp_macro_redef, -1,
  /* DiagArray505 */ diag::ext_main_used, diag::ext_noreturn_main, diag::ext_variadic_main, diag::warn_main_one_arg, diag::warn_main_redefined, diag::warn_main_returns_bool_literal, diag::warn_static_main, -1,
  /* DiagArray506 */ diag::ext_main_returns_nonint, -1,
  /* DiagArray507 */ diag::warn_has_warning_invalid_option, -1,
  /* DiagArray508 */ diag::ext_many_braces_around_init, -1,
  /* DiagArray509 */ diag::ext_mathematical_notation, -1,
  /* DiagArray510 */ diag::warn_max_tokens, diag::warn_max_tokens_total, -1,
  /* DiagArray511 */ diag::warn_max_unsigned_zero, -1,
  /* DiagArray512 */ diag::warn_suspicious_sizeof_memset, -1,
  /* DiagArray513 */ diag::warn_memsize_comparison, -1,
  /* DiagArray514 */ diag::warn_non_contravariant_param_types, diag::warn_non_covariant_ret_types, -1,
  /* DiagArray516 */ diag::ext_ms_abstract_keyword, -1,
  /* DiagArray517 */ diag::ext_anonymous_record_with_type, diag::ext_ms_anonymous_record, -1,
  /* DiagArray518 */ diag::ext_ms_cast_fn_obj, diag::ext_ms_impcast_fn_obj, -1,
  /* DiagArray519 */ diag::ext_charize_microsoft, -1,
  /* DiagArray520 */ diag::ext_comment_paste_microsoft, -1,
  /* DiagArray521 */ diag::ext_default_init_const, -1,
  /* DiagArray522 */ diag::ext_pp_operator_used_as_macro_name, -1,
  /* DiagArray523 */ diag::ext_param_default_argument_redefinition, -1,
  /* DiagArray524 */ diag::warn_attribute_section_drectve, -1,
  /* DiagArray525 */ diag::ext_ctrl_z_eof_microsoft, -1,
  /* DiagArray526 */ diag::ext_ms_forward_ref_enum, -1,
  /* DiagArray527 */ diag::ext_enumerator_too_large, -1,
  /* DiagArray528 */ diag::ext_ellipsis_exception_spec, diag::ext_incomplete_in_exception_spec, diag::ext_mismatched_exception_spec, diag::ext_mismatched_exception_spec_explicit_instantiation, diag::ext_override_exception_spec, -1,
  /* DiagArray529 */ diag::warn_microsoft_dependent_exists, -1,
  /* DiagArray530 */ diag::ext_ms_explicit_constructor_call, -1,
  /* DiagArray531 */ diag::warn_member_extra_qualification, -1,
  /* DiagArray532 */ diag::ext_ms_c_enum_fixed_underlying_type, -1,
  /* DiagArray533 */ diag::ext_flexible_array_empty_aggregate_ms, diag::ext_flexible_array_union_ms, -1,
  /* DiagArray534 */ diag::ext_goto_into_protected_scope, -1,
  /* DiagArray535 */ diag::ext_ms_ambiguous_direct_base, -1,
  /* DiagArray536 */ diag::ext_pp_include_search_ms, -1,
  /* DiagArray537 */ diag::ext_init_from_predefined, -1,
  /* DiagArray538 */ diag::ext_mutable_reference, -1,
  /* DiagArray539 */ diag::ext_pure_function_definition, -1,
  /* DiagArray540 */ diag::ext_static_non_static, -1,
  /* DiagArray541 */ diag::ext_ms_sealed_keyword, -1,
  /* DiagArray542 */ diag::ext_ms_static_assert, -1,
  /* DiagArray543 */ diag::ext_string_literal_from_predefined, -1,
  /* DiagArray544 */ diag::ext_explicit_instantiation_duplicate, diag::ext_found_in_dependent_base, diag::ext_found_later_in_class, diag::ext_ms_delayed_template_argument, diag::ext_ms_deref_template_argument, diag::ext_ms_template_spec_redecl_out_of_scope, diag::ext_ms_template_type_arg_missing_typename, diag::ext_static_out_of_line, diag::ext_undeclared_unqual_id_with_dependent_base, diag::ext_unqualified_base_class, -1,
  /* DiagArray545 */ diag::ext_template_param_shadow, -1,
  /* DiagArray546 */ diag::ext_union_member_of_reference_type, -1,
  /* DiagArray547 */ diag::ext_friend_tag_redecl_outside_namespace, -1,
  /* DiagArray548 */ diag::ext_ms_using_declaration_inaccessible, -1,
  /* DiagArray549 */ diag::ext_pseudo_dtor_on_void, -1,
  /* DiagArray550 */ diag::warn_profile_data_misexpect, -1,
  /* DiagArray551 */ diag::warn_misleading_indentation, -1,
  /* DiagArray552 */ diag::warn_mismatched_delete_new, -1,
  /* DiagArray553 */ diag::warn_conflicting_param_types, -1,
  /* DiagArray554 */ diag::warn_conflicting_ret_types, -1,
  /* DiagArray555 */ diag::warn_struct_class_previous_tag_mismatch, diag::warn_struct_class_tag_mismatch, -1,
  /* DiagArray556 */ diag::warn_missing_braces, -1,
  /* DiagArray557 */ diag::ext_constinit_missing, -1,
  /* DiagArray558 */ diag::ext_no_declarators, diag::ext_standalone_specifier, diag::ext_typedef_without_a_name, diag::warn_standalone_specifier, -1,
  /* DiagArray559 */ diag::warn_missing_designated_field_initializers, -1,
  /* DiagArray560 */ diag::ext_missing_exception_specification, -1,
  /* DiagArray561 */ diag::warn_missing_field_initializers, -1,
  /* DiagArray564 */ diag::warn_missing_method_return_type, -1,
  /* DiagArray565 */ diag::warn_drv_missing_multilib, -1,
  /* DiagArray566 */ diag::warn_overriding_method_missing_noescape, -1,
  /* DiagArray567 */ diag::warn_suggest_noreturn_block, diag::warn_suggest_noreturn_function, -1,
  /* DiagArray568 */ diag::warn_cconv_knr, -1,
  /* DiagArray569 */ diag::warn_missing_prototype, -1,
  /* DiagArray570 */ diag::warn_missing_selector_name, -1,
  /* DiagArray571 */ diag::warn_missing_sysroot, -1,
  /* DiagArray572 */ diag::warn_missing_variable_declarations, -1,
  /* DiagArray573 */ diag::warn_omp_assume_attribute_string_unknown_suggested, -1,
  /* DiagArray574 */ diag::warn_hlsl_packoffset_mix, -1,
  /* DiagArray575 */ diag::remark_module_build, diag::remark_module_build_done, diag::remark_module_lock_failure, diag::remark_module_lock_timeout, -1,
  /* DiagArray576 */ diag::warn_module_conflict, diag::warn_module_system_bit_conflict, -1,
  /* DiagArray577 */ diag::warn_module_config_mismatch, -1,
  /* DiagArray578 */ diag::warn_duplicate_module_file_extension, -1,
  /* DiagArray579 */ diag::remark_module_import, -1,
  /* DiagArray580 */ diag::ext_module_import_in_extern_c, -1,
  /* DiagArray581 */ diag::remark_pp_include_directive_modular_translation, -1,
  /* DiagArray582 */ diag::remark_module_lock, -1,
  /* DiagArray583 */ diag::ext_equivalent_internal_linkage_decl_in_modules, -1,
  /* DiagArray584 */ diag::ext_module_import_not_at_top_level_noop, -1,
  /* DiagArray588 */ diag::warn_drv_msvc_not_found, -1,
  /* DiagArray589 */ diag::warn_drv_multi_gpu_arch, -1,
  /* DiagArray590 */ diag::warn_multichar_character_literal, -1,
  /* DiagArray591 */ diag::warn_vbase_moved_multiple_times, -1,
  /* DiagArray592 */ diag::warn_fp_nan_inf_when_disabled, -1,
  /* DiagArray594 */ diag::ext_anonymous_record_with_anonymous_type, -1,
  /* DiagArray596 */ diag::warn_operator_new_returns_null, -1,
  /* DiagArray597 */ diag::ext_no_newline_eof, diag::warn_no_newline_eof, -1,
  /* DiagArray598 */ diag::warn_dereference_of_noderef_type, diag::warn_dereference_of_noderef_type_no_decl, diag::warn_noderef_to_dereferenceable_pointer, -1,
  /* DiagArray600 */ diag::ext_non_c_like_anon_struct_in_typedef, -1,
  /* DiagArray602 */ diag::warn_non_literal_null_pointer, -1,
  /* DiagArray603 */ diag::warn_non_modular_include_in_framework_module, -1,
  /* DiagArray604 */ diag::warn_non_modular_include_in_module, -1,
  /* DiagArray605 */ diag::warn_cannot_pass_non_pod_arg_to_vararg, diag::warn_non_pod_vararg_with_format_string, diag::warn_second_parameter_to_va_arg_not_pod, diag::warn_second_parameter_to_va_arg_ownership_qualified, -1,
  /* DiagArray606 */ diag::warn_alignment_not_power_of_two, -1,
  /* DiagArray607 */ diag::warn_non_virtual_dtor, -1,
  /* DiagArray608 */ diag::warn_null_arg, diag::warn_null_ret, -1,
  /* DiagArray610 */ diag::pp_nonportable_path, -1,
  /* DiagArray611 */ diag::warn_apinotes_private_case, -1,
  /* DiagArray612 */ diag::warn_apinotes_private_case_system, -1,
  /* DiagArray613 */ diag::pp_nonportable_system_path, -1,
  /* DiagArray614 */ diag::warn_neon_vector_initializer_non_portable, -1,
  /* DiagArray615 */ diag::warn_cstruct_memaccess, -1,
  /* DiagArray616 */ diag::warn_nsconsumed_attribute_mismatch, -1,
  /* DiagArray617 */ diag::warn_nsreturns_retained_attribute_mismatch, -1,
  /* DiagArray618 */ diag::warn_null_in_arithmetic_operation, diag::warn_null_in_comparison_operation, -1,
  /* DiagArray619 */ diag::null_in_char_or_string, diag::null_in_file, -1,
  /* DiagArray620 */ diag::warn_impcast_null_pointer_to_integer, -1,
  /* DiagArray621 */ diag::warn_binding_null_to_reference, diag::warn_indirection_through_null, -1,
  /* DiagArray622 */ diag::warn_pointer_arith_null_ptr, -1,
  /* DiagArray623 */ diag::warn_pointer_sub_null_ptr, -1,
  /* DiagArray624 */ diag::warn_conflicting_nullability_attr_overriding_param_types, diag::warn_conflicting_nullability_attr_overriding_ret_types, diag::warn_mismatched_nullability_attr, diag::warn_null_resettable_setter, diag::warn_nullability_duplicate, -1,
  /* DiagArray625 */ diag::warn_nullability_missing, -1,
  /* DiagArray626 */ diag::warn_nullability_missing_array, -1,
  /* DiagArray627 */ diag::warn_nullability_declspec, -1,
  /* DiagArray628 */ diag::ext_nullability, -1,
  /* DiagArray629 */ diag::warn_nullability_inferred_on_nested_type, -1,
  /* DiagArray630 */ diag::warn_nullability_lost, -1,
  /* DiagArray631 */ diag::warn_autosynthesis_property_ivar_match, -1,
  /* DiagArray632 */ diag::warn_impcast_constant_value_to_objc_bool, -1,
  /* DiagArray633 */ diag::warn_objc_boxing_invalid_utf8_string, -1,
  /* DiagArray634 */ diag::warn_objc_circular_container, -1,
  /* DiagArray636 */ diag::warn_objc_designated_init_missing_super_call, diag::warn_objc_designated_init_non_designated_init_call, diag::warn_objc_designated_init_non_super_designated_init_call, diag::warn_objc_implementation_missing_designated_init_override, diag::warn_objc_secondary_init_missing_init_call, diag::warn_objc_secondary_init_super_init_call, -1,
  /* DiagArray637 */ diag::warn_nsdictionary_duplicate_key, -1,
  /* DiagArray638 */ diag::warn_dup_category_def, -1,
  /* DiagArray639 */ diag::warn_superclass_variable_sized_type_not_at_end, diag::warn_variable_sized_ivar_visibility, -1,
  /* DiagArray640 */ diag::warn_forward_class_redefinition, -1,
  /* DiagArray641 */ diag::warn_ivars_in_interface, -1,
  /* DiagArray642 */ diag::warn_objc_literal_comparison, -1,
  /* DiagArray643 */ diag::warn_impcast_objective_c_literal_to_bool, diag::warn_objc_collection_literal_element, -1,
  /* DiagArray644 */ diag::warn_pp_objc_macro_redef_ignored, -1,
  /* DiagArray645 */ diag::warn_messaging_unqualified_id, -1,
  /* DiagArray646 */ diag::warn_class_method_not_found, diag::warn_class_method_not_found_with_typo, diag::warn_inst_method_not_found, diag::warn_instance_method_not_found_with_typo, diag::warn_instance_method_on_class_found, diag::warn_root_inst_method_not_found, -1,
  /* DiagArray647 */ diag::warn_missing_explicit_synthesis, -1,
  /* DiagArray648 */ diag::warn_objc_missing_super_call, -1,
  /* DiagArray649 */ diag::warn_multiple_method_decl, -1,
  /* DiagArray650 */ diag::warn_objc_property_retain_of_block, -1,
  /* DiagArray651 */ diag::warn_objc_pointer_cxx_catch_fragile, -1,
  /* DiagArray652 */ diag::warn_objc_property_assign_on_object, -1,
  /* DiagArray653 */ diag::warn_impl_required_for_class_property, diag::warn_impl_required_in_category_for_class_property, diag::warn_setter_getter_impl_required, diag::warn_setter_getter_impl_required_in_category, -1,
  /* DiagArray654 */ diag::warn_property_implicitly_mismatched, -1,
  /* DiagArray655 */ diag::warn_cocoa_naming_owned_rule, -1,
  /* DiagArray656 */ diag::warn_objc_property_default_assign_on_object, diag::warn_objc_property_no_assignment_attribute, -1,
  /* DiagArray657 */ diag::warn_autosynthesis_property_in_superclass, diag::warn_no_autosynthesis_property, diag::warn_no_autosynthesis_shared_ivar_property, -1,
  /* DiagArray658 */ diag::warn_category_method_impl_match, -1,
  /* DiagArray659 */ diag::warn_auto_synthesizing_protocol_property, -1,
  /* DiagArray660 */ diag::warn_objc_redundant_qualified_class_type, -1,
  /* DiagArray661 */ diag::warn_objc_readonly_property_has_setter, -1,
  /* DiagArray663 */ diag::warn_objc_redundant_literal_use, -1,
  /* DiagArray664 */ diag::warn_objc_root_class_missing, -1,
  /* DiagArray666 */ diag::warn_impcast_float_to_objc_signed_char_bool, -1,
  /* DiagArray667 */ diag::warn_impcast_int_to_objc_signed_char_bool, -1,
  /* DiagArray668 */ diag::warn_objc_string_literal_comparison, -1,
  /* DiagArray669 */ diag::warn_concatenated_nsarray_literal, -1,
  /* DiagArray670 */ diag::warn_objc_unsafe_perform_selector, -1,
  /* DiagArray671 */ diag::warn_odr_different_num_template_parameters, diag::warn_odr_different_template_parameter_kind, diag::warn_odr_field_type_inconsistent, diag::warn_odr_function_type_inconsistent, diag::warn_odr_ivar_type_inconsistent, diag::warn_odr_non_type_parameter_type_inconsistent, diag::warn_odr_objc_method_num_params_inconsistent, diag::warn_odr_objc_method_param_type_inconsistent, diag::warn_odr_objc_method_result_type_inconsistent, diag::warn_odr_objc_method_variadic_inconsistent, diag::warn_odr_objc_property_impl_kind_inconsistent, diag::warn_odr_objc_property_type_inconsistent, diag::warn_odr_objc_superclass_inconsistent, diag::warn_odr_objc_synthesize_ivar_inconsistent, diag::warn_odr_parameter_pack_non_pack, diag::warn_odr_tag_type_inconsistent, diag::warn_odr_variable_multiple_def, diag::warn_odr_variable_type_inconsistent, -1,
  /* DiagArray672 */ diag::warn_old_style_cast, -1,
  /* DiagArray675 */ diag::warn_acc_deprecated_alias_name, -1,
  /* DiagArray676 */ diag::warn_acc_if_self_conflict, -1,
  /* DiagArray677 */ diag::ext_opencl_ext_vector_type_rgba_selector, -1,
  /* DiagArray679 */ diag::ext_omp_attributes, -1,
  /* DiagArray680 */ diag::warn_omp_alignment_not_power_of_two, diag::warn_omp_allocate_thread_on_task_target_directive, diag::warn_omp_ctx_incompatible_property_for_selector, diag::warn_omp_ctx_incompatible_score_for_property, diag::warn_omp_ctx_incompatible_selector_for_set, diag::warn_omp_ctx_selector_without_properties, diag::warn_omp_declare_variant_ctx_mutiple_use, diag::warn_omp_declare_variant_ctx_not_a_property, diag::warn_omp_declare_variant_ctx_not_a_selector, diag::warn_omp_declare_variant_ctx_not_a_set, diag::warn_omp_declare_variant_expected, diag::warn_omp_declare_variant_string_literal_or_identifier, diag::warn_omp_linear_step_zero, diag::warn_omp_more_one_device_type_clause, diag::warn_omp_more_one_interop_type, diag::warn_omp_more_one_omp_all_memory, diag::warn_omp_unknown_assumption_clause_missing_id, diag::warn_omp_unknown_assumption_clause_without_args, diag::warn_omp_used_different_allocator, -1,
  /* DiagArray681 */ diag::warn_omp_invalid_attribute_for_ompx_attributes, -1,
  /* DiagArray682 */ diag::ext_omp_loop_not_canonical_init, diag::warn_omp_loop_64_bit_var, -1,
  /* DiagArray683 */ diag::warn_omp_non_trivial_type_mapped, -1,
  /* DiagArray684 */ diag::warn_drv_omp_offload_target_duplicate, diag::warn_omp_declare_target_after_first_use, diag::warn_omp_not_in_target_context, -1,
  /* DiagArray685 */ diag::warn_throw_not_valid_on_target, diag::warn_try_not_valid_on_target, -1,
  /* DiagArray686 */ diag::warn_drv_fine_grained_bitfield_accesses_ignored, diag::warn_drv_fjmc_for_elf_only, diag::warn_drv_jmc_requires_debuginfo, diag::warn_drv_loongarch_conflicting_implied_val, diag::warn_drv_moutline_atomics_unsupported_opt, diag::warn_drv_moutline_unsupported_opt, diag::warn_drv_needs_hvx, diag::warn_drv_ps_force_pic, diag::warn_drv_unsupported_diag_option_for_flang, diag::warn_drv_unsupported_longcalls, diag::warn_drv_unsupported_openmp_library, diag::warn_drv_unsupported_option_for_flang, diag::warn_drv_unsupported_option_for_offload_arch_req_feature, diag::warn_drv_unsupported_option_for_processor, diag::warn_drv_unsupported_option_for_target, diag::warn_drv_unsupported_pic_with_mabicalls, diag::warn_drv_unsupported_sdata, diag::warn_drv_unsupported_tocdata, diag::warn_target_override_arm64ec, -1,
  /* DiagArray687 */ diag::ext_typecheck_ordered_comparison_of_function_pointers, diag::warn_typecheck_ordered_comparison_of_function_pointers, -1,
  /* DiagArray688 */ diag::ext_out_of_line_declaration, -1,
  /* DiagArray689 */ diag::ext_use_out_of_scope_declaration, -1,
  /* DiagArray690 */ diag::warn_overaligned_type, -1,
  /* DiagArray692 */ diag::ext_string_too_long, -1,
  /* DiagArray693 */ diag::warn_overloaded_shift_in_comparison, -1,
  /* DiagArray694 */ diag::warn_overloaded_virtual, -1,
  /* DiagArray696 */ diag::warn_fe_override_module, -1,
  /* DiagArray697 */ diag::warn_conflicting_overriding_param_modifiers, diag::warn_conflicting_overriding_param_types, diag::warn_conflicting_overriding_ret_type_modifiers, diag::warn_conflicting_overriding_ret_types, diag::warn_conflicting_overriding_variadic, diag::warn_non_contravariant_overriding_param_types, diag::warn_non_covariant_overriding_ret_types, -1,
  /* DiagArray698 */ diag::warn_drv_overriding_option, -1,
  /* DiagArray699 */ diag::warn_unnecessary_packed, -1,
  /* DiagArray700 */ diag::warn_unpacked_field, -1,
  /* DiagArray701 */ diag::warn_padded_struct_anon_field, diag::warn_padded_struct_field, diag::warn_padded_struct_size, -1,
  /* DiagArray702 */ diag::warn_padded_struct_anon_bitfield, diag::warn_padded_struct_bitfield, -1,
  /* DiagArray703 */ diag::warn_condition_is_assignment, diag::warn_precedence_bitwise_rel, diag::warn_precedence_conditional, -1,
  /* DiagArray704 */ diag::warn_equality_with_extra_parens, -1,
  /* DiagArray706 */ diag::remark_fe_backend_optimization_remark, -1,
  /* DiagArray707 */ diag::remark_fe_backend_optimization_remark_analysis, diag::remark_fe_backend_optimization_remark_analysis_aliasing, diag::remark_fe_backend_optimization_remark_analysis_fpcommute, -1,
  /* DiagArray708 */ diag::warn_fe_backend_optimization_failure, -1,
  /* DiagArray709 */ diag::remark_fe_backend_optimization_remark_missed, -1,
  /* DiagArray710 */ diag::warn_module_uses_date_time, -1,
  /* DiagArray711 */ diag::warn_pch_vfsoverlay_mismatch, -1,
  /* DiagArray712 */ diag::ext_aggregate_init_not_constant, diag::ext_anonymous_record_with_type, diag::ext_anonymous_struct_union_qualified, diag::ext_array_size_conversion, diag::ext_auto_new_list_init, diag::ext_binary_literal, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_c_empty_initializer, diag::ext_c_missing_varargs_arg, diag::ext_c_nullptr, diag::ext_cast_fn_obj, diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_cxx11_enum_fixed_underlying_type, diag::ext_cxx_missing_varargs_arg, diag::ext_designated_init, diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_duplicate_declspec, diag::ext_ellipsis_exception_spec, diag::ext_empty_fnmacro_arg, diag::ext_enum_value_not_int, diag::ext_enumerator_list_comma_c, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_instantiation_without_qualified_id, diag::ext_expr_not_ice, diag::ext_extern_template, diag::ext_extra_semi, diag::ext_forward_ref_enum, diag::ext_freestanding_complex, diag::ext_gnu_array_range, diag::ext_hex_constant_invalid, diag::ext_hex_literal_invalid, diag::ext_ident_list_in_param, diag::ext_in_class_initializer_non_constant, diag::ext_increment_complex, diag::ext_integer_complement_complex, diag::ext_internal_in_extern_inline_quiet, diag::ext_line_comment, diag::ext_main_used, diag::ext_mixed_decls_code, diag::ext_multi_line_line_comment, diag::ext_named_variadic_macro, diag::ext_no_newline_eof, diag::ext_nonstandard_escape, diag::ext_ns_enum_attribute, diag::ext_opencl_double_without_pragma, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_pp_bad_vaargs_use, diag::ext_pp_comma_expr, diag::ext_pp_ident_directive, diag::ext_pp_line_too_big, diag::ext_pp_opencl_variadic_macros, diag::ext_pp_warning_directive, diag::ext_return_has_void_expr, diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::ext_subscript_non_lvalue, diag::ext_thread_before, diag::ext_type_defined_in_offsetof, diag::ext_typecheck_addrof_void, diag::ext_typecheck_cast_nonscalar, diag::ext_typecheck_comparison_of_fptr_to_void, diag::ext_typecheck_cond_one_void, diag::ext_typecheck_convert_pointer_void_func, diag::ext_typecheck_ordered_comparison_of_pointer_and_zero, diag::ext_variadic_macro, diag::ext_vla, diag::ext_vla_cxx_in_gnu_mode, diag::ext_vla_cxx_in_gnu_mode_static_assert, diag::warn_defined_in_function_type_macro, diag::warn_ext_c23_attributes, diag::warn_ext_cxx11_attributes, diag::warn_format_conversion_argument_type_mismatch_pedantic, diag::warn_kern_is_method, diag::warn_strict_prototypes, -1,
  /* DiagArray713 */ diag::warn_opencl_unsupported_core_feature, diag::warn_pragma_extension_is_core, -1,
  /* DiagArray715 */ diag::warn_pessimizing_move_on_initialization, diag::warn_pessimizing_move_on_return, -1,
  /* DiagArray716 */ diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::warn_sub_ptr_zero_size_types, -1,
  /* DiagArray717 */ diag::warn_cast_nonnull_to_bool, diag::warn_impcast_pointer_to_bool, -1,
  /* DiagArray718 */ diag::warn_pointer_compare, -1,
  /* DiagArray719 */ diag::ext_typecheck_comparison_of_pointer_integer, -1,
  /* DiagArray720 */ diag::ext_typecheck_convert_incompatible_pointer_sign, -1,
  /* DiagArray721 */ diag::warn_pointer_to_enum_cast, -1,
  /* DiagArray722 */ diag::warn_pointer_to_int_cast, -1,
  /* DiagArray723 */ diag::ext_typecheck_cond_incompatible_pointers, -1,
  /* DiagArray724 */ diag::warn_poison_system_directories, -1,
  /* DiagArray725 */ diag::warn_potentially_direct_selector_expression, -1,
  /* DiagArray726 */ diag::warn_side_effects_typeid, -1,
  /* DiagArray727 */ diag::warn_pragma_attribute_unused, -1,
  /* DiagArray728 */ diag::pp_pragma_once_in_main_file, -1,
  /* DiagArray729 */ diag::warn_pragma_pack_modified_after_include, diag::warn_pragma_pack_no_pop_eof, -1,
  /* DiagArray730 */ diag::warn_pragma_pack_non_default_at_include, -1,
  /* DiagArray731 */ diag::pp_pragma_sysheader_in_main_file, -1,
  /* DiagArray732 */ diag::warn_no_support_for_eval_method_source_on_m32, diag::warn_redefine_extname_not_applied, -1,
  /* DiagArray733 */ diag::warn_cxx11_compat_constexpr_body_invalid_stmt, diag::warn_cxx11_compat_constexpr_body_multiple_return, diag::warn_cxx11_compat_constexpr_body_no_return, diag::warn_cxx11_compat_constexpr_local_var, diag::warn_cxx11_compat_constexpr_type_definition, diag::warn_cxx11_compat_decltype_auto_type_specifier, diag::warn_cxx11_compat_deduced_return_type, diag::warn_cxx11_compat_digit_separator, diag::warn_cxx11_compat_generic_lambda, diag::warn_cxx11_compat_init_capture, diag::warn_cxx11_compat_variable_template, -1,
  /* DiagArray735 */ diag::warn_cxx14_compat_class_template_argument_deduction, diag::warn_cxx14_compat_constexpr_if, diag::warn_cxx14_compat_constexpr_on_lambda, diag::warn_cxx14_compat_decomp_decl, diag::warn_cxx14_compat_fold_expression, diag::warn_cxx14_compat_init_statement, diag::warn_cxx14_compat_inline_variable, diag::warn_cxx14_compat_nested_namespace_definition, diag::warn_cxx14_compat_star_this_lambda_capture, diag::warn_cxx14_compat_static_assert_no_message, diag::warn_cxx14_compat_template_nontype_parm_auto_type, diag::warn_cxx14_compat_template_template_param_typename, diag::warn_cxx14_compat_u8_character_literal, diag::warn_cxx14_compat_using_attribute_ns, diag::warn_cxx17_compat_multi_using_declaration, diag::warn_cxx17_compat_using_declaration_pack, diag::warn_for_range_begin_end_types_differ, -1,
  /* DiagArray736 */ diag::warn_cxx14_compat_ns_enum_attribute, diag::warn_cxx17_hex_literal, -1,
  /* DiagArray737 */ diag::warn_cxx17_compat_adl_only_template_id, diag::warn_cxx17_compat_bitfield_member_init, diag::warn_cxx17_compat_capture_binding, diag::warn_cxx17_compat_constexpr_body_invalid_stmt, diag::warn_cxx17_compat_constexpr_ctor_missing_init, diag::warn_cxx17_compat_constexpr_function_try_block, diag::warn_cxx17_compat_constexpr_local_var_no_init, diag::warn_cxx17_compat_constexpr_union_ctor_no_init, diag::warn_cxx17_compat_constexpr_virtual, diag::warn_cxx17_compat_ctad_for_alias_templates, diag::warn_cxx17_compat_decomp_decl_spec, diag::warn_cxx17_compat_defaulted_comparison, diag::warn_cxx17_compat_defaulted_method_type_mismatch, diag::warn_cxx17_compat_equals_this_lambda_capture, diag::warn_cxx17_compat_explicit_bool, diag::warn_cxx17_compat_for_range_init_stmt, diag::warn_cxx17_compat_init_capture_pack, diag::warn_cxx17_compat_inline_nested_namespace_definition, diag::warn_cxx17_compat_lambda_def_ctor_assign, diag::warn_cxx17_compat_lambda_template_parameter_list, diag::warn_cxx17_compat_missing_varargs_arg, diag::warn_cxx17_compat_spaceship, diag::warn_cxx17_compat_template_nontype_parm_type, diag::warn_cxx17_compat_unicode_type, diag::warn_cxx17_compat_using_decl_class_member_enumerator, diag::warn_cxx17_compat_using_decl_non_member_enumerator, diag::warn_cxx17_compat_using_decl_scoped_enumerator, diag::warn_cxx17_compat_using_enum_declaration, -1,
  /* DiagArray738 */ diag::warn_cxx17_compat_designated_init, diag::warn_cxx17_compat_pointer_to_const_ref_member_on_rvalue, -1,
  /* DiagArray739 */ diag::ext_subscript_overload, diag::warn_cxx20_alias_in_init_statement, diag::warn_cxx20_compat_auto_expr, diag::warn_cxx20_compat_consteval_if, diag::warn_cxx20_compat_constexpr_body_invalid_stmt, diag::warn_cxx20_compat_constexpr_var, diag::warn_cxx20_compat_decl_attrs_on_lambda, diag::warn_cxx20_compat_label_end_of_compound_statement, diag::warn_cxx20_compat_operator_overload_static, diag::warn_cxx20_compat_size_t_suffix, diag::warn_cxx20_compat_static_lambda, diag::warn_cxx23_compat_pp_directive, diag::warn_cxx23_compat_warning_directive, diag::warn_cxx23_delimited_escape_sequence, -1,
  /* DiagArray741 */ diag::warn_cxx23_compat_decl_attrs_on_binding, diag::warn_cxx23_delete_with_message, diag::warn_cxx23_pack_indexing, diag::warn_cxx23_placeholder_var_definition, -1,
  /* DiagArray745 */ diag::warn_c11_compat_keyword, -1,
  /* DiagArray747 */ diag::warn_c17_compat_ellipsis_only_parameter, diag::warn_c17_compat_missing_varargs_arg, diag::warn_c17_compat_static_assert_no_message, diag::warn_c23_compat_binary_literal, diag::warn_c23_compat_bitint_suffix, diag::warn_c23_compat_digit_separator, diag::warn_c23_compat_empty_initializer, diag::warn_c23_compat_keyword, diag::warn_c23_compat_label_end_of_compound_statement, diag::warn_c23_compat_label_followed_by_declaration, diag::warn_c23_compat_literal_ucn_control_character, diag::warn_c23_compat_literal_ucn_escape_basic_scs, diag::warn_c23_compat_pp_directive, diag::warn_c23_compat_warning_directive, diag::warn_pre_c23_compat_attributes, -1,
  /* DiagArray751 */ diag::warn_omp51_compat_attributes, -1,
  /* DiagArray752 */ diag::ext_predef_outside_function, -1,
  /* DiagArray753 */ diag::warn_private_extern, -1,
  /* DiagArray754 */ diag::warn_use_of_private_header_outside_module, -1,
  /* DiagArray755 */ diag::warn_mmap_mismatched_private_module_name, diag::warn_mmap_mismatched_private_submodule, diag::warn_mmap_redundant_export_as, diag::warn_no_priv_submodule_use_toplevel, -1,
  /* DiagArray756 */ diag::warn_profile_data_missing, -1,
  /* DiagArray757 */ diag::warn_profile_data_out_of_date, -1,
  /* DiagArray758 */ diag::warn_profile_data_unprofiled, -1,
  /* DiagArray759 */ diag::warn_property_access_suggest, -1,
  /* DiagArray760 */ diag::warn_property_attr_mismatch, diag::warn_property_attribute, diag::warn_property_redecl_getter_mismatch, diag::warn_readonly_property, -1,
  /* DiagArray761 */ diag::warn_unimplemented_protocol_method, -1,
  /* DiagArray762 */ diag::warn_protocol_property_mismatch, -1,
  /* DiagArray763 */ diag::warn_avx_calling_convention, -1,
  /* DiagArray764 */ diag::warn_ptrauth_auth_null_pointer, diag::warn_ptrauth_sign_null_pointer, -1,
  /* DiagArray765 */ diag::err_func_returning_qualified_void, -1,
  /* DiagArray766 */ diag::warn_quoted_include_in_framework_header, -1,
  /* DiagArray768 */ diag::warn_for_range_ref_binds_ret_temp, -1,
  /* DiagArray769 */ diag::warn_for_range_const_ref_binds_temp_built_from_ref, diag::warn_for_range_copy, -1,
  /* DiagArray770 */ diag::warn_var_decl_not_read_only, -1,
  /* DiagArray771 */ diag::warn_auto_readonly_iboutlet_property, -1,
  /* DiagArray772 */ diag::warn_bad_receiver_type, -1,
  /* DiagArray773 */ diag::warn_receiver_forward_class, diag::warn_receiver_forward_instance, -1,
  /* DiagArray774 */ diag::ext_member_redeclared, -1,
  /* DiagArray775 */ diag::warn_consteval_if_always_true, -1,
  /* DiagArray777 */ diag::warn_redundant_move_on_return, -1,
  /* DiagArray778 */ diag::warn_redundant_parens_around_declarator, -1,
  /* DiagArray779 */ diag::ext_register_storage_class, -1,
  /* DiagArray780 */ diag::warn_reinterpret_different_from_static, -1,
  /* DiagArray781 */ diag::remark_fe_backend_plugin, -1,
  /* DiagArray783 */ diag::warn_initializer_out_of_order, diag::warn_some_initializers_out_of_order, -1,
  /* DiagArray784 */ diag::ext_designated_init_reordered, -1,
  /* DiagArray785 */ diag::warn_objc_requires_super_protocol, -1,
  /* DiagArray787 */ diag::warn_reserved_extern_symbol, -1,
  /* DiagArray788 */ diag::warn_pp_macro_is_reserved_id, -1,
  /* DiagArray789 */ diag::warn_reserved_module_name, -1,
  /* DiagArray790 */ diag::ext_ms_reserved_user_defined_literal, diag::ext_reserved_user_defined_literal, -1,
  /* DiagArray791 */ diag::warn_pragma_restrict_expansion_macro_use, -1,
  /* DiagArray792 */ diag::ext_retained_language_linkage, -1,
  /* DiagArray794 */ diag::ext_return_has_expr, diag::ext_return_missing_expr, diag::warn_return_missing_expr, -1,
  /* DiagArray795 */ diag::warn_ret_addr_label, diag::warn_ret_local_temp_addr_ref, diag::warn_ret_stack_addr_ref, -1,
  /* DiagArray797 */ diag::warn_falloff_nonvoid_coroutine, diag::warn_falloff_nonvoid_function, diag::warn_falloff_nonvoid_lambda, diag::warn_maybe_falloff_nonvoid_coroutine, diag::warn_maybe_falloff_nonvoid_function, diag::warn_maybe_falloff_nonvoid_lambda, -1,
  /* DiagArray798 */ diag::warn_return_value_udt, diag::warn_return_value_udt_incomplete, -1,
  /* DiagArray799 */ diag::ext_ovl_rewrite_equalequal_not_bool, -1,
  /* DiagArray800 */ diag::remark_cc1_round_trip_generated, -1,
  /* DiagArray801 */ diag::warn_no_dynamic_cast_with_rtti_disabled, diag::warn_no_typeid_with_rtti_disabled, -1,
  /* DiagArray802 */ diag::remark_sanitize_address_insert_extra_padding_accepted, diag::remark_sanitize_address_insert_extra_padding_rejected, -1,
  /* DiagArray803 */ diag::warn_drv_sarif_format_unstable, -1,
  /* DiagArray804 */ diag::remark_pp_search_path_usage, -1,
  /* DiagArray805 */ diag::warn_attribute_section_on_redeclaration, diag::warn_duplicate_codeseg_attribute, diag::warn_mismatched_section, -1,
  /* DiagArray806 */ diag::warn_unimplemented_selector, -1,
  /* DiagArray807 */ diag::warn_multiple_selectors, -1,
  /* DiagArray808 */ diag::warn_self_assignment_builtin, -1,
  /* DiagArray809 */ diag::warn_identity_field_assign, -1,
  /* DiagArray810 */ diag::warn_self_assignment_overloaded, -1,
  /* DiagArray811 */ diag::warn_self_move, -1,
  /* DiagArray812 */ diag::warn_semicolon_before_method_body, -1,
  /* DiagArray813 */ diag::warn_missing_sentinel, diag::warn_not_enough_argument, -1,
  /* DiagArray815 */ diag::warn_fe_serialized_diag_failure, diag::warn_fe_serialized_diag_failure_during_finalisation, diag::warn_fe_serialized_diag_merge_failure, -1,
  /* DiagArray816 */ diag::warn_decl_shadow, -1,
  /* DiagArray818 */ diag::warn_shadow_field, -1,
  /* DiagArray819 */ diag::warn_ctor_parm_shadows_field, -1,
  /* DiagArray820 */ diag::warn_modifying_shadowing_decl, -1,
  /* DiagArray821 */ diag::warn_ivar_use_hidden, -1,
  /* DiagArray822 */ diag::warn_decl_shadow_uncaptured_local, -1,
  /* DiagArray823 */ diag::warn_shift_negative, -1,
  /* DiagArray824 */ diag::warn_shift_gt_typewidth, -1,
  /* DiagArray825 */ diag::warn_shift_lhs_negative, -1,
  /* DiagArray826 */ diag::warn_addition_in_bitshift, -1,
  /* DiagArray827 */ diag::warn_shift_result_gt_typewidth, -1,
  /* DiagArray828 */ diag::warn_shift_result_sets_sign_bit, -1,
  /* DiagArray829 */ diag::warn_impcast_integer_64_32, -1,
  /* DiagArray830 */ diag::warn_mixed_sign_comparison, -1,
  /* DiagArray831 */ diag::warn_impcast_integer_sign, diag::warn_impcast_integer_sign_conditional, diag::warn_impcast_nonnegative_result, -1,
  /* DiagArray833 */ diag::warn_no_underlying_type_specified_for_enum_bitfield, -1,
  /* DiagArray834 */ diag::ext_wchar_t_sign_spec, -1,
  /* DiagArray835 */ diag::warn_impcast_single_bit_bitield_precision_constant, -1,
  /* DiagArray836 */ diag::warn_sizeof_array_param, -1,
  /* DiagArray837 */ diag::warn_sizeof_array_decay, -1,
  /* DiagArray838 */ diag::warn_division_sizeof_array, -1,
  /* DiagArray839 */ diag::warn_division_sizeof_ptr, -1,
  /* DiagArray840 */ diag::warn_sizeof_pointer_expr_memaccess, diag::warn_sizeof_pointer_type_memaccess, -1,
  /* DiagArray841 */ diag::warn_slash_u_filename, -1,
  /* DiagArray842 */ diag::warn_slh_does_not_support_asm_goto, -1,
  /* DiagArray843 */ diag::remark_sloc_usage, -1,
  /* DiagArray844 */ diag::warn_sometimes_uninit_var, -1,
  /* DiagArray845 */ diag::warn_fe_source_mgr, -1,
  /* DiagArray846 */ diag::warn_acc_clause_unimplemented, diag::warn_acc_construct_unimplemented, diag::warn_pragma_acc_ignored, -1,
  /* DiagArray847 */ diag::warn_omp_declare_variant_after_emitted, diag::warn_omp_declare_variant_after_used, diag::warn_omp_declare_variant_marked_as_declare_variant, diag::warn_omp_declare_variant_score_not_constant, diag::warn_omp_nesting_simd, diag::warn_omp_unterminated_declare_target, diag::warn_pragma_omp_ignored, diag::warn_unknown_declare_variant_isa_trait, -1,
  /* DiagArray848 */ diag::warn_sampler_initializer_invalid_bits, -1,
  /* DiagArray850 */ diag::warn_stack_exhausted, -1,
  /* DiagArray851 */ diag::warn_stack_clash_protection_inline_asm, -1,
  /* DiagArray852 */ diag::ext_in_class_initializer_float_type_cxx11, -1,
  /* DiagArray853 */ diag::ext_internal_in_extern_inline, diag::ext_internal_in_extern_inline_quiet, -1,
  /* DiagArray854 */ diag::warn_static_inline_explicit_inst_ignored, -1,
  /* DiagArray855 */ diag::warn_static_local_in_extern_inline, -1,
  /* DiagArray856 */ diag::warn_static_self_reference_in_init, -1,
  /* DiagArray857 */ diag::warn_drv_libstdcxx_not_found, -1,
  /* DiagArray869 */ diag::warn_strict_potentially_direct_selector_expression, -1,
  /* DiagArray870 */ diag::ext_compat_template_param_shadow, -1,
  /* DiagArray871 */ diag::warn_strict_prototypes, -1,
  /* DiagArray872 */ diag::warn_strict_multiple_method_decl, -1,
  /* DiagArray873 */ diag::warn_stringcompare, -1,
  /* DiagArray874 */ diag::warn_concatenated_literal_array_init, -1,
  /* DiagArray875 */ diag::warn_impcast_string_literal_to_bool, -1,
  /* DiagArray876 */ diag::warn_string_plus_char, -1,
  /* DiagArray877 */ diag::warn_string_plus_int, -1,
  /* DiagArray878 */ diag::warn_strlcpycat_wrong_size, -1,
  /* DiagArray879 */ diag::warn_strncat_large_size, diag::warn_strncat_src_size, diag::warn_strncat_wrong_size, -1,
  /* DiagArray880 */ diag::warn_suggest_destructor_marked_not_override_overriding, -1,
  /* DiagArray881 */ diag::warn_suggest_function_marked_not_override_overriding, -1,
  /* DiagArray882 */ diag::ext_typecheck_base_super, -1,
  /* DiagArray883 */ diag::warn_suspicious_bzero_size, -1,
  /* DiagArray885 */ diag::warn_attr_swift_name_decl_kind, diag::warn_attr_swift_name_decl_missing_params, diag::warn_attr_swift_name_function, diag::warn_attr_swift_name_getter_parameters, diag::warn_attr_swift_name_invalid_identifier, diag::warn_attr_swift_name_missing_parameters, diag::warn_attr_swift_name_multiple_selfs, diag::warn_attr_swift_name_num_params, diag::warn_attr_swift_name_setter_parameters, diag::warn_attr_swift_name_subscript_getter_newValue, diag::warn_attr_swift_name_subscript_invalid_parameter, diag::warn_attr_swift_name_subscript_setter_multiple_newValues, diag::warn_attr_swift_name_subscript_setter_no_newValue, -1,
  /* DiagArray886 */ diag::warn_case_value_overflow, diag::warn_missing_case, diag::warn_not_in_enum, -1,
  /* DiagArray887 */ diag::warn_bool_switch_condition, -1,
  /* DiagArray888 */ diag::warn_switch_default, -1,
  /* DiagArray889 */ diag::warn_def_missing_case, -1,
  /* DiagArray890 */ diag::warn_sync_op_misaligned, -1,
  /* DiagArray891 */ diag::warn_sync_fetch_and_nand_semantics_change, -1,
  /* DiagArray893 */ diag::warn_target_clone_mixed_values, -1,
  /* DiagArray894 */ diag::warn_comparison_bitwise_always, diag::warn_comparison_bitwise_or, -1,
  /* DiagArray895 */ diag::warn_alignment_builtin_useless, diag::warn_comparison_always, -1,
  /* DiagArray896 */ diag::warn_integer_constants_in_conditional_always_true, diag::warn_left_shift_always, diag::warn_tautological_bool_compare, -1,
  /* DiagArray898 */ diag::warn_out_of_range_compare, -1,
  /* DiagArray899 */ diag::warn_tautological_negation_and_compare, diag::warn_tautological_negation_or_compare, -1,
  /* DiagArray900 */ diag::warn_tautological_compare_objc_bool, -1,
  /* DiagArray901 */ diag::warn_tautological_overlap_comparison, -1,
  /* DiagArray902 */ diag::warn_nonnull_expr_compare, diag::warn_null_pointer_compare, -1,
  /* DiagArray903 */ diag::warn_tautological_constant_compare, -1,
  /* DiagArray904 */ diag::warn_address_of_reference_null_compare, diag::warn_this_null_compare, -1,
  /* DiagArray905 */ diag::warn_unsigned_char_always_true_comparison, -1,
  /* DiagArray906 */ diag::warn_unsigned_enum_always_true_comparison, -1,
  /* DiagArray907 */ diag::warn_unsigned_always_true_comparison, -1,
  /* DiagArray908 */ diag::warn_tautological_compare_value_range, -1,
  /* DiagArray909 */ diag::warn_tcb_enforcement_violation, -1,
  /* DiagArray910 */ diag::ext_template_after_declarative_nns, -1,
  /* DiagArray911 */ diag::warn_tentative_incomplete_array, -1,
  /* DiagArray912 */ diag::ext_typecheck_decl_incomplete_type, -1,
  /* DiagArray914 */ diag::warn_acquired_before, diag::warn_acquired_before_after_cycle, diag::warn_cannot_resolve_lock, diag::warn_double_lock, diag::warn_expecting_lock_held_on_loop, diag::warn_expecting_locked, diag::warn_fun_excludes_mutex, diag::warn_fun_requires_lock, diag::warn_fun_requires_negative_cap, diag::warn_lock_exclusive_and_shared, diag::warn_lock_some_predecessors, diag::warn_no_unlock, diag::warn_unlock_but_no_lock, diag::warn_unlock_kind_mismatch, diag::warn_var_deref_requires_any_lock, diag::warn_var_deref_requires_lock, diag::warn_variable_requires_any_lock, diag::warn_variable_requires_lock, -1,
  /* DiagArray915 */ diag::warn_thread_attribute_argument_not_lockable, diag::warn_thread_attribute_decl_not_lockable, diag::warn_thread_attribute_decl_not_pointer, diag::warn_thread_attribute_ignored, diag::warn_thread_attribute_not_on_capability_member, diag::warn_thread_attribute_not_on_non_static_member, -1,
  /* DiagArray916 */ diag::warn_thread_safety_beta, -1,
  /* DiagArray917 */ diag::warn_acquire_requires_negative_cap, -1,
  /* DiagArray918 */ diag::warn_fun_requires_lock_precise, diag::warn_var_deref_requires_lock_precise, diag::warn_variable_requires_lock_precise, -1,
  /* DiagArray919 */ diag::warn_guarded_pass_by_reference, diag::warn_pt_guarded_pass_by_reference, -1,
  /* DiagArray920 */ diag::warn_guarded_return_by_reference, diag::warn_pt_guarded_return_by_reference, -1,
  /* DiagArray921 */ diag::warn_thread_safety_verbose, -1,
  /* DiagArray922 */ diag::trigraph_converted, diag::trigraph_ends_block_comment, diag::trigraph_ignored, diag::trigraph_ignored_block_comment, -1,
  /* DiagArray924 */ diag::warn_type_safety_null_pointer_required, diag::warn_type_safety_type_mismatch, diag::warn_type_tag_for_datatype_wrong_kind, -1,
  /* DiagArray925 */ diag::ext_redefinition_of_typedef, -1,
  /* DiagArray926 */ diag::ext_typename_missing, -1,
  /* DiagArray927 */ diag::warn_fe_unable_to_open_stats_file, -1,
  /* DiagArray928 */ diag::warn_unaligned_access, -1,
  /* DiagArray929 */ diag::warn_imp_cast_drops_unaligned, -1,
  /* DiagArray930 */ diag::warn_unavailable_fwdclass_message, -1,
  /* DiagArray931 */ diag::warn_undeclared_selector, diag::warn_undeclared_selector_with_typo, -1,
  /* DiagArray932 */ diag::warn_pp_undef_identifier, -1,
  /* DiagArray933 */ diag::warn_pp_undef_prefix, -1,
  /* DiagArray934 */ diag::warn_attribute_arm_sm_incompat_builtin, -1,
  /* DiagArray935 */ diag::warn_attribute_arm_za_builtin_no_za_state, -1,
  /* DiagArray936 */ diag::warn_attribute_arm_zt0_builtin_no_zt0_state, -1,
  /* DiagArray937 */ diag::warn_address_of_reference_bool_conversion, diag::warn_this_bool_conversion, -1,
  /* DiagArray938 */ diag::warn_func_template_missing, -1,
  /* DiagArray939 */ diag::warn_undefined_inline, -1,
  /* DiagArray940 */ diag::warn_undefined_internal, -1,
  /* DiagArray941 */ diag::ext_undefined_internal_type, -1,
  /* DiagArray942 */ diag::warn_pointer_indirection_from_incompatible_type, diag::warn_undefined_reinterpret_cast, -1,
  /* DiagArray943 */ diag::warn_var_template_missing, -1,
  /* DiagArray944 */ diag::warn_throw_underaligned_obj, -1,
  /* DiagArray945 */ diag::warn_side_effects_unevaluated_context, -1,
  /* DiagArray946 */ diag::warn_unguarded_availability, -1,
  /* DiagArray947 */ diag::warn_unguarded_availability_new, -1,
  /* DiagArray948 */ diag::warn_delimited_ucn_empty, diag::warn_delimited_ucn_incomplete, diag::warn_ucn_escape_incomplete, diag::warn_ucn_escape_no_digits, diag::warn_ucn_escape_surrogate, diag::warn_ucn_not_valid_in_c89, diag::warn_ucn_not_valid_in_c89_literal, -1,
  /* DiagArray949 */ diag::warn_utf8_symbol_homoglyph, -1,
  /* DiagArray950 */ diag::ext_unicode_whitespace, -1,
  /* DiagArray951 */ diag::warn_utf8_symbol_zero_width, -1,
  /* DiagArray952 */ diag::warn_base_class_is_uninit, diag::warn_field_is_uninit, diag::warn_reference_field_is_uninit, diag::warn_uninit_byref_blockvar_captured_by_block, diag::warn_uninit_self_reference_in_init, diag::warn_uninit_self_reference_in_reference_init, diag::warn_uninit_var, -1,
  /* DiagArray953 */ diag::warn_uninit_const_reference, -1,
  /* DiagArray954 */ diag::warn_drv_potentially_misspelled_joined_argument, diag::warn_drv_unknown_argument_clang_cl, diag::warn_drv_unknown_argument_clang_cl_with_suggestion, -1,
  /* DiagArray955 */ diag::warn_omp_assume_attribute_string_unknown, -1,
  /* DiagArray956 */ diag::warn_unknown_attribute_ignored, -1,
  /* DiagArray957 */ diag::warn_drv_new_cuda_version, diag::warn_drv_partially_supported_cuda_version, -1,
  /* DiagArray958 */ diag::warn_pp_invalid_directive, -1,
  /* DiagArray959 */ diag::ext_unknown_escape, -1,
  /* DiagArray960 */ diag::ext_on_off_switch_syntax, diag::ext_pragma_syntax_eod, diag::ext_stdc_pragma_ignored, diag::warn_pragma_diagnostic_cannot_pop, diag::warn_pragma_diagnostic_invalid, diag::warn_pragma_diagnostic_invalid_option, diag::warn_pragma_diagnostic_invalid_token, diag::warn_pragma_exec_charset_expected, diag::warn_pragma_exec_charset_push_invalid, diag::warn_pragma_exec_charset_spec_invalid, diag::warn_pragma_ignored, diag::warn_pragma_include_alias_expected, diag::warn_pragma_include_alias_expected_filename, diag::warn_pragma_include_alias_mismatch_angle, diag::warn_pragma_include_alias_mismatch_quote, diag::warn_pragma_warning_expected, diag::warn_pragma_warning_expected_number, diag::warn_pragma_warning_push_level, diag::warn_pragma_warning_spec_invalid, diag::warn_stdc_fenv_round_not_supported, -1,
  /* DiagArray961 */ diag::warn_unknown_sanitizer_ignored, -1,
  /* DiagArray962 */ diag::warn_pragma_diagnostic_unknown_warning, diag::warn_unknown_diag_option, diag::warn_unknown_warning_specifier, -1,
  /* DiagArray963 */ diag::ext_template_arg_unnamed_type, -1,
  /* DiagArray964 */ diag::warn_unneeded_internal_decl, diag::warn_unneeded_static_internal_decl, -1,
  /* DiagArray965 */ diag::warn_unneeded_member_function, -1,
  /* DiagArray966 */ diag::warn_unqualified_call_to_std_cast_function, -1,
  /* DiagArray967 */ diag::warn_unreachable, -1,
  /* DiagArray969 */ diag::warn_unreachable_break, -1,
  /* DiagArray970 */ diag::warn_unreachable_fallthrough_attr, -1,
  /* DiagArray971 */ diag::warn_unreachable_association, -1,
  /* DiagArray972 */ diag::warn_unreachable_loop_increment, -1,
  /* DiagArray973 */ diag::warn_unreachable_return, -1,
  /* DiagArray974 */ diag::warn_unsafe_buffer_operation, diag::warn_unsafe_buffer_variable, -1,
  /* DiagArray975 */ diag::warn_unsafe_buffer_usage_in_container, -1,
  /* DiagArray976 */ diag::warn_unsequenced_mod_mod, diag::warn_unsequenced_mod_use, -1,
  /* DiagArray977 */ diag::warn_drv_no_floating_point_registers, diag::warn_drv_unsupported_float_abi_by_lib, -1,
  /* DiagArray978 */ diag::warn_target_unsupported_abs2008, diag::warn_target_unsupported_abslegacy, -1,
  /* DiagArray979 */ diag::warn_at_available_unchecked_use, -1,
  /* DiagArray980 */ diag::warn_target_unsupported_compact_branches, -1,
  /* DiagArray981 */ diag::warn_attribute_dll_instantiated_base_class, -1,
  /* DiagArray982 */ diag::warn_fe_backend_unsupported_fp_exceptions, diag::warn_fe_backend_unsupported_fp_rounding, -1,
  /* DiagArray983 */ diag::warn_template_qualified_friend_ignored, diag::warn_template_qualified_friend_unsupported, -1,
  /* DiagArray984 */ diag::warn_drv_unsupported_gpopt, -1,
  /* DiagArray985 */ diag::warn_target_unsupported_nan2008, diag::warn_target_unsupported_nanlegacy, -1,
  /* DiagArray986 */ diag::warn_drv_dwarf_version_limited_by_target, diag::warn_drv_unsupported_debug_info_opt_for_target, -1,
  /* DiagArray987 */ diag::warn_attribute_protected_visibility, -1,
  /* DiagArray988 */ diag::ext_partial_specs_not_deducible, -1,
  /* DiagArray991 */ diag::warn_unused_but_set_parameter, -1,
  /* DiagArray992 */ diag::warn_unused_but_set_variable, -1,
  /* DiagArray993 */ diag::warn_drv_diagnostics_hotness_requires_pgo, diag::warn_drv_diagnostics_misexpect_requires_pgo, diag::warn_drv_empty_joined_argument, diag::warn_drv_input_file_unused, diag::warn_drv_input_file_unused_by_cpp, diag::warn_drv_invalid_arch_name_with_suggestion, diag::warn_drv_large_data_threshold_invalid_code_model, diag::warn_drv_preprocessed_input_file_unused, diag::warn_drv_unused_argument, diag::warn_drv_unused_x, diag::warn_ignored_clang_option, diag::warn_ignoring_fdiscard_for_bitcode, diag::warn_ignoring_verify_debuginfo_preserve_export, -1,
  /* DiagArray994 */ diag::warn_unused_comparison, -1,
  /* DiagArray995 */ diag::warn_unused_const_variable, -1,
  /* DiagArray996 */ diag::warn_unused_exception_param, -1,
  /* DiagArray997 */ diag::warn_unused_function, -1,
  /* DiagArray998 */ diag::warn_unused_property_expr, -1,
  /* DiagArray999 */ diag::warn_unused_label, -1,
  /* DiagArray1000 */ diag::warn_unused_lambda_capture, -1,
  /* DiagArray1001 */ diag::warn_unused_local_typedef, -1,
  /* DiagArray1003 */ diag::pp_macro_not_used, -1,
  /* DiagArray1004 */ diag::warn_unused_member_function, -1,
  /* DiagArray1005 */ diag::warn_unused_parameter, -1,
  /* DiagArray1006 */ diag::warn_unused_private_field, -1,
  /* DiagArray1007 */ diag::warn_unused_property_backing_ivar, -1,
  /* DiagArray1008 */ diag::warn_unused_result, diag::warn_unused_result_msg, -1,
  /* DiagArray1009 */ diag::warn_unused_template, -1,
  /* DiagArray1010 */ diag::warn_unused_call, diag::warn_unused_comma_left_operand, diag::warn_unused_constructor, diag::warn_unused_constructor_msg, diag::warn_unused_container_subscript_expr, diag::warn_unused_expr, diag::warn_unused_voidptr, -1,
  /* DiagArray1011 */ diag::warn_unused_variable, -1,
  /* DiagArray1012 */ diag::warn_unused_volatile, -1,
  /* DiagArray1013 */ diag::warn_used_but_marked_unused, -1,
  /* DiagArray1014 */ diag::warn_user_literal_reserved, -1,
  /* DiagArray1015 */ diag::warn_diagnose_if_succeeded, -1,
  /* DiagArray1016 */ diag::warn_second_arg_of_va_start_not_last_named_param, diag::warn_second_parameter_to_va_arg_never_compatible, diag::warn_va_start_type_is_undefined, -1,
  /* DiagArray1017 */ diag::ext_named_variadic_macro, diag::ext_pp_bad_vaopt_use, diag::ext_variadic_macro, -1,
  /* DiagArray1018 */ diag::warn_typecheck_vector_element_sizes_not_equal, -1,
  /* DiagArray1019 */ diag::warn_incompatible_vectors, -1,
  /* DiagArray1021 */ diag::warn_empty_parens_are_function_decl, diag::warn_parens_disambiguated_as_function_declaration, diag::warn_parens_disambiguated_as_variable_declaration, -1,
  /* DiagArray1022 */ diag::warn_decl_in_param_list, diag::warn_redefinition_in_param_list, -1,
  /* DiagArray1023 */ diag::warn_vla_used, -1,
  /* DiagArray1024 */ diag::ext_vla_cxx, diag::ext_vla_cxx_in_gnu_mode, -1,
  /* DiagArray1025 */ diag::ext_vla, -1,
  /* DiagArray1026 */ diag::ext_vla_cxx_in_gnu_mode_static_assert, diag::ext_vla_cxx_static_assert, -1,
  /* DiagArray1027 */ diag::warn_void_pointer_to_enum_cast, -1,
  /* DiagArray1028 */ diag::warn_void_pointer_to_int_cast, -1,
  /* DiagArray1029 */ diag::ext_typecheck_indirection_through_void_pointer, -1,
  /* DiagArray1031 */ diag::warn_wasm_dynamic_exception_spec_ignored, -1,
  /* DiagArray1032 */ diag::warn_weak_template_vtable, -1,
  /* DiagArray1033 */ diag::warn_weak_vtable, -1,
  /* DiagArray1034 */ diag::ext_deprecated_string_literal_conversion, -1,
  /* DiagArray1036 */ diag::warn_xor_used_as_pow, diag::warn_xor_used_as_pow_base, diag::warn_xor_used_as_pow_base_extra, -1,
  /* DiagArray1037 */ diag::warn_zero_as_null_pointer_constant, -1,
  /* DiagArray1038 */ diag::ext_typecheck_zero_array_size, -1,
};

static const int16_t DiagSubGroups[] = {
  /* Empty */ -1,
  /* DiagSubGroup0 */ 313, -1,
  /* DiagSubGroup4 */ 19, 313, -1,
  /* DiagSubGroup12 */ 717, 873, 902, -1,
  /* DiagSubGroup19 */ 585, 703, 886, 887, 551, 700, 1024, -1,
  /* DiagSubGroup30 */ 223, -1,
  /* DiagSubGroup33 */ 40, 39, 36, -1,
  /* DiagSubGroup38 */ 35, -1,
  /* DiagSubGroup46 */ 47, -1,
  /* DiagSubGroup56 */ 415, 200, -1,
  /* DiagSubGroup60 */ 956, 405, -1,
  /* DiagSubGroup71 */ 107, 139, -1,
  /* DiagSubGroup72 */ 142, -1,
  /* DiagSubGroup75 */ 835, -1,
  /* DiagSubGroup82 */ 717, 937, -1,
  /* DiagSubGroup83 */ 82, -1,
  /* DiagSubGroup84 */ 79, -1,
  /* DiagSubGroup93 */ 96, -1,
  /* DiagSubGroup94 */ 100, -1,
  /* DiagSubGroup95 */ 104, -1,
  /* DiagSubGroup96 */ 104, 99, 97, 733, 735, 737, 739, -1,
  /* DiagSubGroup98 */ 96, 734, 736, 738, 740, -1,
  /* DiagSubGroup100 */ 101, 102, 103, -1,
  /* DiagSubGroup104 */ 105, -1,
  /* DiagSubGroup108 */ 735, 737, 739, -1,
  /* DiagSubGroup109 */ 108, 736, 738, 740, -1,
  /* DiagSubGroup110 */ 107, 106, -1,
  /* DiagSubGroup112 */ 250, 241, 113, 737, 739, -1,
  /* DiagSubGroup114 */ 112, 738, 740, -1,
  /* DiagSubGroup115 */ 111, -1,
  /* DiagSubGroup116 */ 110, -1,
  /* DiagSubGroup117 */ 112, -1,
  /* DiagSubGroup118 */ 113, -1,
  /* DiagSubGroup119 */ 115, -1,
  /* DiagSubGroup121 */ 739, -1,
  /* DiagSubGroup122 */ 121, 740, -1,
  /* DiagSubGroup124 */ 123, 120, -1,
  /* DiagSubGroup126 */ 127, -1,
  /* DiagSubGroup129 */ 121, -1,
  /* DiagSubGroup130 */ 122, -1,
  /* DiagSubGroup131 */ 124, -1,
  /* DiagSubGroup132 */ 126, -1,
  /* DiagSubGroup133 */ 128, -1,
  /* DiagSubGroup134 */ 737, -1,
  /* DiagSubGroup135 */ 738, -1,
  /* DiagSubGroup136 */ 735, -1,
  /* DiagSubGroup137 */ 736, -1,
  /* DiagSubGroup138 */ 733, -1,
  /* DiagSubGroup140 */ 734, -1,
  /* DiagSubGroup141 */ 144, 146, 733, 735, 737, 739, -1,
  /* DiagSubGroup145 */ 141, 142, 143, 734, 736, 738, 740, -1,
  /* DiagSubGroup150 */ 148, -1,
  /* DiagSubGroup151 */ 149, -1,
  /* DiagSubGroup153 */ 123, -1,
  /* DiagSubGroup154 */ 153, -1,
  /* DiagSubGroup156 */ 175, -1,
  /* DiagSubGroup159 */ 161, 160, -1,
  /* DiagSubGroup169 */ 605, -1,
  /* DiagSubGroup173 */ 172, -1,
  /* DiagSubGroup177 */ 178, 179, -1,
  /* DiagSubGroup183 */ 75, 632, -1,
  /* DiagSubGroup188 */ 82, 183, 298, 76, 325, 464, 425, 422, 497, 602, 620, 643, 831, 875, -1,
  /* DiagSubGroup189 */ 620, -1,
  /* DiagSubGroup191 */ 192, 233, 22, 190, -1,
  /* DiagSubGroup194 */ 2, -1,
  /* DiagSubGroup202 */ 204, 206, 205, 795, -1,
  /* DiagSubGroup218 */ 217, 215, -1,
  /* DiagSubGroup221 */ 223, 224, 225, 227, 228, 230, 234, 235, 236, 237, 238, 239, 226, 241, 242, 248, 250, 252, 253, 254, 255, 249, -1,
  /* DiagSubGroup228 */ 231, -1,
  /* DiagSubGroup229 */ 230, -1,
  /* DiagSubGroup230 */ 232, -1,
  /* DiagSubGroup246 */ 247, -1,
  /* DiagSubGroup255 */ 97, -1,
  /* DiagSubGroup261 */ 262, -1,
  /* DiagSubGroup266 */ 268, 267, -1,
  /* DiagSubGroup269 */ 270, -1,
  /* DiagSubGroup282 */ 235, -1,
  /* DiagSubGroup284 */ 607, -1,
  /* DiagSubGroup293 */ 317, -1,
  /* DiagSubGroup294 */ 296, 236, -1,
  /* DiagSubGroup295 */ 237, -1,
  /* DiagSubGroup298 */ 299, 300, 295, -1,
  /* DiagSubGroup299 */ 238, -1,
  /* DiagSubGroup300 */ 239, -1,
  /* DiagSubGroup313 */ 228, 561, 412, 456, 812, 564, 830, 1005, 991, 622, 623, 290, 874, 357, 160, -1,
  /* DiagSubGroup315 */ 143, 101, -1,
  /* DiagSubGroup316 */ 290, -1,
  /* DiagSubGroup325 */ 327, 328, -1,
  /* DiagSubGroup330 */ 331, 345, 608, 339, 344, 333, 332, 336, 341, -1,
  /* DiagSubGroup336 */ 337, -1,
  /* DiagSubGroup341 */ 342, -1,
  /* DiagSubGroup346 */ 335, 339, 344, -1,
  /* DiagSubGroup347 */ 336, 341, -1,
  /* DiagSubGroup351 */ 350, -1,
  /* DiagSubGroup356 */ 893, -1,
  /* DiagSubGroup358 */ 106, 111, 120, 125, -1,
  /* DiagSubGroup364 */ 365, 366, 368, 369, 370, 371, 372, 373, 374, 376, 1025, 377, 378, 379, 380, 381, 383, 384, 385, 386, 387, 774, 388, 389, 391, 392, 393, 394, 1038, 395, 396, -1,
  /* DiagSubGroup389 */ 390, -1,
  /* DiagSubGroup411 */ 409, 410, -1,
  /* DiagSubGroup412 */ 413, -1,
  /* DiagSubGroup414 */ 423, 424, -1,
  /* DiagSubGroup419 */ 420, -1,
  /* DiagSubGroup422 */ 426, 666, -1,
  /* DiagSubGroup425 */ 829, 667, -1,
  /* DiagSubGroup426 */ 416, -1,
  /* DiagSubGroup441 */ 442, 436, -1,
  /* DiagSubGroup447 */ 449, 604, -1,
  /* DiagSubGroup453 */ 241, -1,
  /* DiagSubGroup465 */ 464, -1,
  /* DiagSubGroup467 */ 468, -1,
  /* DiagSubGroup470 */ 408, -1,
  /* DiagSubGroup499 */ 144, -1,
  /* DiagSubGroup502 */ 103, -1,
  /* DiagSubGroup503 */ 329, 767, -1,
  /* DiagSubGroup515 */ 519, 524, 536, 522, 532, 541, 516, 547, 528, 548, 538, 539, 546, 530, 527, 523, 544, 540, 526, 534, 533, 531, 518, 521, 549, 517, 520, 525, 542, 537, 543, 450, -1,
  /* DiagSubGroup544 */ 545, -1,
  /* DiagSubGroup561 */ 559, -1,
  /* DiagSubGroup585 */ 45, 84, 166, 172, 218, 330, 329, 349, 414, 454, 466, 555, 556, 586, 590, 769, 782, 797, 808, 811, 836, 837, 877, 895, 922, 952, 960, 989, 1030, 648, 636, 639, 694, 753, 162, 311, 1015, -1,
  /* DiagSubGroup586 */ 715, 777, 796, 811, -1,
  /* DiagSubGroup587 */ 536, -1,
  /* DiagSubGroup593 */ 104, -1,
  /* DiagSubGroup599 */ 113, -1,
  /* DiagSubGroup601 */ 830, 188, 498, -1,
  /* DiagSubGroup604 */ 603, -1,
  /* DiagSubGroup622 */ 385, -1,
  /* DiagSubGroup625 */ 626, -1,
  /* DiagSubGroup635 */ 662, -1,
  /* DiagSubGroup642 */ 668, -1,
  /* DiagSubGroup662 */ 663, -1,
  /* DiagSubGroup665 */ 667, 666, 632, 900, -1,
  /* DiagSubGroup674 */ 846, -1,
  /* DiagSubGroup678 */ 847, 680, 682, 684, 683, 679, 681, 685, -1,
  /* DiagSubGroup684 */ 683, -1,
  /* DiagSubGroup695 */ 456, -1,
  /* DiagSubGroup699 */ 700, -1,
  /* DiagSubGroup701 */ 702, -1,
  /* DiagSubGroup703 */ 501, 500, 78, 80, 826, 693, 704, 203, -1,
  /* DiagSubGroup705 */ 946, -1,
  /* DiagSubGroup712 */ 74, 147, 101, 103, 106, 107, 111, 120, 123, 324, 358, 366, 368, 370, 371, 372, 373, 376, 377, 378, 380, 381, 383, 384, 385, 387, 388, 389, 393, 395, 396, 490, 502, 519, 520, 522, 525, 527, 532, 533, 540, 692, 1038, 271, 493, 487, 219, 430, 287, 291, 628, 321, 361, 61, 941, 792, 176, 594, -1,
  /* DiagSubGroup714 */ 248, 504, 89, 791, 320, -1,
  /* DiagSubGroup716 */ 387, -1,
  /* DiagSubGroup721 */ 1027, -1,
  /* DiagSubGroup722 */ 721, 1028, -1,
  /* DiagSubGroup729 */ 730, -1,
  /* DiagSubGroup732 */ 960, 411, 727, 729, -1,
  /* DiagSubGroup734 */ 733, 139, -1,
  /* DiagSubGroup736 */ 735, -1,
  /* DiagSubGroup738 */ 737, -1,
  /* DiagSubGroup740 */ 739, -1,
  /* DiagSubGroup742 */ 741, -1,
  /* DiagSubGroup743 */ 741, -1,
  /* DiagSubGroup744 */ 742, -1,
  /* DiagSubGroup746 */ 745, -1,
  /* DiagSubGroup748 */ 747, -1,
  /* DiagSubGroup749 */ 747, -1,
  /* DiagSubGroup750 */ 748, -1,
  /* DiagSubGroup767 */ 769, 768, -1,
  /* DiagSubGroup779 */ 250, -1,
  /* DiagSubGroup782 */ 783, 784, -1,
  /* DiagSubGroup786 */ 788, -1,
  /* DiagSubGroup787 */ 788, 789, 1014, -1,
  /* DiagSubGroup790 */ 99, -1,
  /* DiagSubGroup793 */ 795, -1,
  /* DiagSubGroup797 */ 798, 794, -1,
  /* DiagSubGroup806 */ 807, -1,
  /* DiagSubGroup808 */ 810, 809, -1,
  /* DiagSubGroup814 */ 976, -1,
  /* DiagSubGroup816 */ 820, 821, -1,
  /* DiagSubGroup817 */ 816, 819, 822, 818, -1,
  /* DiagSubGroup819 */ 820, -1,
  /* DiagSubGroup849 */ 848, -1,
  /* DiagSubGroup852 */ 391, -1,
  /* DiagSubGroup869 */ 725, -1,
  /* DiagSubGroup871 */ 244, -1,
  /* DiagSubGroup884 */ 840, 281, 615, 512, 883, -1,
  /* DiagSubGroup895 */ 896, 902, 901, 894, 904, 900, 899, -1,
  /* DiagSubGroup896 */ 898, -1,
  /* DiagSubGroup897 */ 923, 908, -1,
  /* DiagSubGroup913 */ 915, 914, 918, 919, -1,
  /* DiagSubGroup919 */ 920, -1,
  /* DiagSubGroup923 */ 903, 907, 905, 906, -1,
  /* DiagSubGroup945 */ 726, -1,
  /* DiagSubGroup946 */ 947, -1,
  /* DiagSubGroup952 */ 844, 856, 953, -1,
  /* DiagSubGroup963 */ 146, -1,
  /* DiagSubGroup967 */ 972, 970, 971, -1,
  /* DiagSubGroup968 */ 967, 969, 973, -1,
  /* DiagSubGroup974 */ 975, -1,
  /* DiagSubGroup989 */ 990, 997, 999, 1006, 1000, 1001, 1010, 1011, 992, 1007, -1,
  /* DiagSubGroup997 */ 964, -1,
  /* DiagSubGroup1002 */ 1001, -1,
  /* DiagSubGroup1004 */ 965, -1,
  /* DiagSubGroup1009 */ 964, -1,
  /* DiagSubGroup1010 */ 994, 1008, 945, -1,
  /* DiagSubGroup1011 */ 995, -1,
  /* DiagSubGroup1020 */ 1019, -1,
  /* DiagSubGroup1023 */ 1025, -1,
  /* DiagSubGroup1024 */ 1026, -1,
  /* DiagSubGroup1025 */ 1024, -1,
  /* DiagSubGroup1028 */ 1027, -1,
  /* DiagSubGroup1034 */ 255, -1,
  /* DiagSubGroup1035 */ 1034, -1,
};

static const char DiagGroupNames[] = {
    "\000\020#pragma-messages\t#warnings\020CFString-literal\003CL4\032Indep"
    "endentClass-attribute\022NSObject-attribute\026aarch64-sme-attributes\003"
    "abi\016absolute-value\024abstract-final-class\023abstract-vbase-init\007"
    "address\030address-of-packed-member\024address-of-temporary\020aggregat"
    "e-return\naix-compat\"alias-template-in-declaration-name\016align-misma"
    "tch\003all\006alloca\031alloca-with-align-alignof\027always-inline-coro"
    "utine\020ambiguous-delete\022ambiguous-ellipsis\017ambiguous-macro\031a"
    "mbiguous-member-template\033ambiguous-reversed-operator\034analyzer-inc"
    "ompatible-plugin\034android-unversioned-fallback\031anon-enum-enum-conv"
    "ersion\025anonymous-pack-parens\010apinotes\003arc%arc-bridge-casts-dis"
    "allowed-in-nonarc\036arc-maybe-repeated-use-of-weak\025arc-non-pod-mema"
    "ccess\031arc-performSelector-leaks\030arc-repeated-use-of-weak\021arc-r"
    "etain-cycles\032arc-unsafe-retained-assign\026argument-outside-range\034"
    "argument-undefined-behaviour\014array-bounds\037array-bounds-pointer-ar"
    "ithmetic\017array-parameter\003asm\022asm-operand-widths\013assign-enum"
    "\006assume\013at-protocol\034atimport-in-framework-header\015atomic-acc"
    "ess\020atomic-alignment\027atomic-implicit-seq-cst\026atomic-memory-ord"
    "ering\021atomic-properties*atomic-property-with-user-defined-accessor\035"
    "attribute-packed-for-bitfield\021attribute-warning\nattributes\024auto-"
    "decl-extensions\033auto-disable-vptr-sanitizer\013auto-import\022auto-s"
    "torage-class\013auto-var-id\014availability\030avr-rtlib-linking-quirks"
    "\016backend-plugin\030backslash-newline-escape\021bad-function-cast\016"
    "binary-literal\026bind-to-temporary-copy\024binding-in-condition\021bit"
    "-int-extension\034bitfield-constant-conversion\030bitfield-enum-convers"
    "ion\016bitfield-width\037bitwise-conditional-parentheses\032bitwise-ins"
    "tead-of-logical\026bitwise-op-parentheses\033block-capture-autoreleasin"
    "g\017bool-conversion\020bool-conversions\016bool-operation\022braced-sc"
    "alar-init\021branch-protection\013bridge-cast builtin-assume-aligned-al"
    "ignment\027builtin-macro-redefined\027builtin-memcpy-chk-size\027builti"
    "n-requires-header\nc++-compat\014c++0x-compat\020c++0x-extensions\017c+"
    "+0x-narrowing\014c++11-compat(c++11-compat-deprecated-writable-strings\025"
    "c++11-compat-pedantic*c++11-compat-reserved-user-defined-literal\020c++"
    "11-extensions\020c++11-extra-semi\026c++11-inline-namespace\017c++11-lo"
    "ng-long\017c++11-narrowing\037c++11-narrowing-const-reference\032c++14-"
    "attribute-extensions\024c++14-binary-literal\014c++14-compat\025c++14-c"
    "ompat-pedantic\020c++14-extensions\032c++17-attribute-extensions\014c++"
    "17-compat\025c++17-compat-mangling\025c++17-compat-pedantic\020c++17-ex"
    "tensions\020c++1y-extensions\014c++1z-compat\025c++1z-compat-mangling\020"
    "c++1z-extensions\032c++20-attribute-extensions\014c++20-compat\025c++20"
    "-compat-pedantic\020c++20-designator\020c++20-extensions\032c++23-attri"
    "bute-extensions\020c++23-extensions\027c++23-lambda-attributes\020c++26"
    "-extensions\014c++2a-compat\025c++2a-compat-pedantic\020c++2a-extension"
    "s\020c++2b-extensions\020c++2c-extensions\036c++98-c++11-c++14-c++17-co"
    "mpat'c++98-c++11-c++14-c++17-compat-pedantic\030c++98-c++11-c++14-compa"
    "t!c++98-c++11-c++14-compat-pedantic\022c++98-c++11-compat!c++98-c++11-c"
    "ompat-binary-literal\033c++98-c++11-compat-pedantic\014c++98-compat#c++"
    "98-compat-bind-to-temporary-copy\027c++98-compat-extra-semi%c++98-compa"
    "t-local-type-template-args\025c++98-compat-pedantic'c++98-compat-unname"
    "d-type-template-args\016c11-extensions\nc23-compat\016c23-extensions\nc"
    "2x-compat\016c2x-extensions\nc99-compat\016c99-designator\016c99-extens"
    "ions#call-to-pure-virtual-from-ctor-dtor\025called-once-parameter\ncast"
    "-align\027cast-calling-convention\022cast-function-type\033cast-functio"
    "n-type-mismatch\031cast-function-type-strict\020cast-of-sel-type\tcast-"
    "qual\023cast-qual-unrelated\nchar-align\017char-subscripts\014clang-cl-"
    "pch\020class-conversion\015class-varargs\017cmse-union-leak\005comma\007"
    "comment\010comments\036compare-distinct-pointer-types\022completion-han"
    "dler\026complex-component-init\024compound-token-split\035compound-toke"
    "n-split-by-macro\035compound-token-split-by-space\031conditional-type-m"
    "ismatch\031conditional-uninitialized\015config-macros\023constant-conve"
    "rsion\022constant-evaluated\030constant-logical-operand\023constexpr-no"
    "t-const\010consumed\nconversion\017conversion-null$coro-non-aligned-all"
    "ocation-function\tcoroutine%coroutine-missing-unhandled-exception\026co"
    "vered-switch-default\003cpp\030cstring-format-directive\026ctad-maybe-u"
    "nsupported\021ctor-dtor-privacy\003ctu\013cuda-compat\030custom-atomic-"
    "properties\027cxx-attribute-extension\010dangling\015dangling-else\016d"
    "angling-field\014dangling-gsl\031dangling-initializer-list\023darwin-sd"
    "k-settings\tdate-time\023dealloc-in-category\035debug-compression-unava"
    "ilable\033declaration-after-statement\032defaulted-function-deleted!del"
    "ayed-template-parsing-in-cxx20\026delegating-ctor-cycles delete-abstrac"
    "t-non-virtual-dtor\021delete-incomplete$delete-non-abstract-non-virtual"
    "-dtor\027delete-non-virtual-dtor#delimited-escape-sequence-extension\032"
    "deprecate-lax-vec-conv-all\ndeprecated\035deprecated-altivec-src-compat"
    "$deprecated-anon-enum-enum-conversion\030deprecated-array-compare\025de"
    "precated-attributes\023deprecated-builtins\032deprecated-comma-subscrip"
    "t\017deprecated-copy\024deprecated-copy-dtor\031deprecated-copy-with-dt"
    "or'deprecated-copy-with-user-provided-copy'deprecated-copy-with-user-pr"
    "ovided-dtor\024deprecated-coroutine\027deprecated-declarations!deprecat"
    "ed-dynamic-exception-spec\027deprecated-enum-compare#deprecated-enum-co"
    "mpare-conditional\037deprecated-enum-enum-conversion deprecated-enum-fl"
    "oat-conversion\032deprecated-implementations\031deprecated-increment-bo"
    "ol\033deprecated-literal-operator\031deprecated-module-dot-map\030depre"
    "cated-non-prototype\031deprecated-objc-isa-usage%deprecated-objc-pointe"
    "r-introspection5deprecated-objc-pointer-introspection-performSelector\021"
    "deprecated-pragma)deprecated-redundant-constexpr-static-def\023deprecat"
    "ed-register\037deprecated-static-analyzer-flag\027deprecated-this-captu"
    "re\017deprecated-type\023deprecated-volatile\033deprecated-writable-str"
    "ings\022direct-ivar-access\030disabled-macro-expansion\025disabled-opti"
    "mization\014discard-qual\034distributed-object-modifiers\013div-by-zero"
    "\020division-by-zero\036dll-attribute-on-redeclaration%dllexport-explic"
    "it-instantiation-decl\032dllimport-static-field-def\015documentation\035"
    "documentation-deprecated-sync\022documentation-html\026documentation-pe"
    "dantic\035documentation-unknown-command\036dollar-in-identifier-extensi"
    "on\020double-promotion\tdtor-name\014dtor-typedef\030duplicate-decl-spe"
    "cifier\016duplicate-enum\024duplicate-method-arg\026duplicate-method-ma"
    "tch\022duplicate-protocol\017dxil-validation\027dynamic-class-memaccess"
    "\026dynamic-exception-spec\034eager-load-cxx-named-modules\006effc++\024"
    "elaborated-enum-base\025elaborated-enum-class\022embedded-directive\nem"
    "pty-body\023empty-decomposition\017empty-init-stmt\026empty-translation"
    "-unit\013encode-type\014endif-labels\014enum-compare\030enum-compare-co"
    "nditional\023enum-compare-switch\031enum-constexpr-conversion\017enum-c"
    "onversion\024enum-enum-conversion\025enum-float-conversion\016enum-too-"
    "large\nexceptions\023excess-initializers\021excessive-regsave\025exit-t"
    "ime-destructors\024expansion-to-defined\031experimental-header-units\030"
    "explicit-initialize-call\027explicit-ownership-type\016export-unnamed\017"
    "extern-c-compat\022extern-initializer\005extra\023extra-qualification\n"
    "extra-semi\017extra-semi-stmt\014extra-tokens\021extractapi-misuse\032f"
    "inal-dtor-non-final-class\013final-macro\024fixed-enum-extension\024fix"
    "ed-point-overflow\tflag-enum\031flexible-array-extensions\020float-conv"
    "ersion\013float-equal\031float-overflow-conversion\025float-zero-conver"
    "sion\021for-loop-analysis\006format\021format-extra-args\030format-insu"
    "fficient-args\030format-invalid-specifier\016format-non-iso\021format-n"
    "onliteral\017format-overflow\033format-overflow-non-kprintf\017format-p"
    "edantic\017format-security\021format-signedness\021format-truncation\035"
    "format-truncation-non-kprintf\025format-type-confusion\nformat-y2k\022f"
    "ormat-zero-length\010format=2\016fortify-source\023four-char-constants\015"
    "frame-address\021frame-larger-than\022frame-larger-than=%framework-incl"
    "ude-private-from-public\023free-nonheap-object\013friend-enum\036functi"
    "on-def-in-objc-container\025function-multiversion\014fuse-ld-path\033fu"
    "ture-attribute-extensions\015future-compat\ngcc-compat\026generic-type-"
    "extension\023global-constructors\013global-isel\003gnu\026gnu-alignof-e"
    "xpression\024gnu-anonymous-struct\033gnu-array-member-paren-init\015gnu"
    "-auto-type\022gnu-binary-literal\016gnu-case-range\023gnu-complex-integ"
    "er gnu-compound-literal-initializer\037gnu-conditional-omitted-operand\016"
    "gnu-designator\025gnu-empty-initializer\020gnu-empty-struct\036gnu-flex"
    "ible-array-initializer\037gnu-flexible-array-union-member\024gnu-foldin"
    "g-constant\026gnu-imaginary-constant\020gnu-include-next\035gnu-inline-"
    "cpp-without-extern\022gnu-label-as-value\017gnu-line-marker\033gnu-null"
    "-pointer-arithmetic\027gnu-offsetof-extensions\021gnu-pointer-arith\023"
    "gnu-redeclared-enum\030gnu-statement-expression-gnu-statement-expressio"
    "n-from-macro-expansion\025gnu-static-float-init$gnu-string-literal-oper"
    "ator-template\016gnu-union-cast\"gnu-variable-sized-type-not-at-end\027"
    "gnu-zero-line-directive!gnu-zero-variadic-macro-arguments\024gpu-maybe-"
    "wrong-side\014header-guard\016header-hygiene\023higher-precision-fp\031"
    "hip-omp-target-directives\010hip-only\017hlsl-extensions\025idiomatic-p"
    "arentheses\022ignored-attributes)ignored-availability-without-sdk-setti"
    "ngs\013ignored-gch\035ignored-optimization-argument\030ignored-pragma-i"
    "ntrinsic\027ignored-pragma-optimize\017ignored-pragmas\022ignored-quali"
    "fiers\034ignored-reference-qualifiers\010implicit\032implicit-atomic-pr"
    "operties#implicit-const-int-float-conversion*implicit-conversion-floati"
    "ng-point-to-bool implicit-exception-spec-mismatch\024implicit-fallthrou"
    "gh!implicit-fallthrough-per-function\037implicit-fixed-point-conversion"
    "\031implicit-float-conversion\035implicit-function-declaration\014impli"
    "cit-int\027implicit-int-conversion\035implicit-int-float-conversion\024"
    "implicit-retain-self\033implicitly-unsigned-literal\006import&import-pr"
    "eprocessor-directive-pedantic\021inaccessible-base include-angled-in-mo"
    "dule-purview\032include-next-absolute-path\033include-next-outside-head"
    "er\033incompatible-exception-spec#incompatible-function-pointer-types*i"
    "ncompatible-function-pointer-types-strict\"incompatible-library-redecla"
    "ration\036incompatible-ms-pragma-section\026incompatible-ms-struct\032i"
    "ncompatible-pointer-types.incompatible-pointer-types-discards-qualifier"
    "s\032incompatible-property-type\024incompatible-sysroot'incomplete-fram"
    "ework-module-declaration\031incomplete-implementation\021incomplete-mod"
    "ule\035incomplete-setjmp-declaration\023incomplete-umbrella\026inconsis"
    "tent-dllimport(inconsistent-missing-destructor-override\035inconsistent"
    "-missing-override\016increment-bool\022infinite-recursion\tinit-self\025"
    "initializer-overrides\023injected-class-name\006inline\ninline-asm#inli"
    "ne-namespace-reopened-noninline\021inline-new-delete\024installapi-viol"
    "ation\"instantiation-after-specialization\016int-conversion\017int-conv"
    "ersions\023int-in-bool-context\023int-to-pointer-cast\030int-to-void-po"
    "inter-cast\020integer-overflow\035invalid-command-line-argument\021inva"
    "lid-constexpr\033invalid-feature-combination\020invalid-iboutlet&invali"
    "d-initializer-from-system-header\035invalid-ios-deployment-target\030in"
    "valid-no-builtin-names\020invalid-noreturn\020invalid-offsetof invalid-"
    "or-nonexistent-directory\036invalid-partial-specialization\013invalid-p"
    "ch\020invalid-pp-token\027invalid-source-encoding\035invalid-static-ass"
    "ert-message\023invalid-token-paste\032invalid-unevaluated-string\014inv"
    "alid-utf8\020jump-seh-finally\016keyword-compat\015keyword-macro\033knl"
    "-knm-isa-support-removed\026knr-promoted-parameter\030language-extensio"
    "n-token\023large-by-value-copy\006liblto\017linker-warnings\022literal-"
    "conversion\015literal-range\030local-type-template-args\027logical-not-"
    "parentheses\026logical-op-parentheses\tlong-long\015loop-analysis\017ma"
    "cro-redefined\004main\020main-return-type\027malformed-warning-check\036"
    "many-braces-around-scalar-init*mathematical-notation-identifier-extensi"
    "on\nmax-tokens\021max-unsigned-zero\026memset-transposed-args\022memsiz"
    "e-comparison\021method-signatures\tmicrosoft\022microsoft-abstract\022m"
    "icrosoft-anon-tag\016microsoft-cast\021microsoft-charize\027microsoft-c"
    "omment-paste\024microsoft-const-init\023microsoft-cpp-macro\"microsoft-"
    "default-arg-redefinition\031microsoft-drectve-section\025microsoft-end-"
    "of-file microsoft-enum-forward-reference\024microsoft-enum-value\030mic"
    "rosoft-exception-spec\020microsoft-exists#microsoft-explicit-constructo"
    "r-call\035microsoft-extra-qualification\024microsoft-fixed-enum\030micr"
    "osoft-flexible-array\016microsoft-goto\033microsoft-inaccessible-base\021"
    "microsoft-include\036microsoft-init-from-predefined\033microsoft-mutabl"
    "e-reference\031microsoft-pure-definition\032microsoft-redeclare-static\020"
    "microsoft-sealed\027microsoft-static-assert(microsoft-string-literal-fr"
    "om-predefined\022microsoft-template\031microsoft-template-shadow micros"
    "oft-union-member-reference\034microsoft-unqualified-friend\024microsoft"
    "-using-decl\032microsoft-void-pseudo-dtor\tmisexpect\026misleading-inde"
    "ntation\025mismatched-new-delete\032mismatched-parameter-types\027misma"
    "tched-return-types\017mismatched-tags\016missing-braces\021missing-cons"
    "tinit\024missing-declarations%missing-designated-field-initializers\026"
    "missing-exception-spec\032missing-field-initializers\030missing-format-"
    "attribute\024missing-include-dirs\032missing-method-return-type\020miss"
    "ing-multilib\020missing-noescape\020missing-noreturn\030missing-prototy"
    "pe-for-cc\022missing-prototypes\025missing-selector-name\017missing-sys"
    "root\035missing-variable-declarations\025misspelled-assumption\016mix-p"
    "ackoffset\014module-build\017module-conflict\033module-file-config-mism"
    "atch\025module-file-extension\015module-import\031module-import-in-exte"
    "rn-c\032module-include-translation\013module-lock\"modules-ambiguous-in"
    "ternal-linkage\037modules-import-nested-redundant\004most\004move\014ms"
    "vc-include\016msvc-not-found\tmulti-gpu\tmultichar\023multiple-move-vba"
    "se\025nan-infinity-disabled\tnarrowing\021nested-anon-types\016nested-e"
    "xterns\020new-returns-null\013newline-eof\007noderef\015noexcept-type\031"
    "non-c-typedef-for-linkage\007non-gcc\033non-literal-null-conversion'non"
    "-modular-include-in-framework-module\035non-modular-include-in-module\017"
    "non-pod-varargs\032non-power-of-two-alignment\020non-virtual-dtor\007no"
    "nnull\025nonportable-cfstrings\030nonportable-include-path!nonportable-"
    "private-apinotes-path(nonportable-private-system-apinotes-path\037nonpo"
    "rtable-system-include-path!nonportable-vector-initialization\024nontriv"
    "ial-memaccess\023nsconsumed-mismatch\022nsreturns-mismatch\017null-arit"
    "hmetic\016null-character\017null-conversion\020null-dereference\027null"
    "-pointer-arithmetic\030null-pointer-subtraction\013nullability\030nulla"
    "bility-completeness\"nullability-completeness-on-arrays\024nullability-"
    "declspec\025nullability-extension#nullability-inferred-on-nested-type\036"
    "nullable-to-nonnull-conversion+objc-autosynthesis-property-ivar-name-ma"
    "tch\035objc-bool-constant-conversion\013objc-boxing\027objc-circular-co"
    "ntainer\016objc-cocoa-api\034objc-designated-initializers\036objc-dicti"
    "onary-duplicate-keys\"objc-duplicate-category-definition\023objc-flexib"
    "le-array\037objc-forward-class-redefinition\024objc-interface-ivars\024"
    "objc-literal-compare\027objc-literal-conversion\027objc-macro-redefinit"
    "ion\021objc-messaging-id\022objc-method-access\037objc-missing-property"
    "-synthesis\030objc-missing-super-calls\032objc-multiple-method-names\"o"
    "bjc-noncopy-retain-block-property\032objc-nonunified-exceptions#objc-pr"
    "operty-assign-on-object-type\034objc-property-implementation\037objc-pr"
    "operty-implicit-mismatch*objc-property-matches-cocoa-ownership-rule\032"
    "objc-property-no-attribute\027objc-property-synthesis#objc-protocol-met"
    "hod-implementation objc-protocol-property-synthesis\030objc-protocol-qu"
    "alifiers\"objc-readonly-with-setter-property\026objc-redundant-api-use\032"
    "objc-redundant-literal-use\017objc-root-class\025objc-signed-char-bool/"
    "objc-signed-char-bool-implicit-float-conversion-objc-signed-char-bool-i"
    "mplicit-int-conversion\023objc-string-compare\031objc-string-concatenat"
    "ion\034objc-unsafe-perform-selector\003odr\016old-style-cast\024old-sty"
    "le-definition\007openacc\037openacc-deprecated-clause-alias\"openacc-se"
    "lf-if-potential-conflict\027opencl-unsupported-rgba\006openmp\024openmp"
    "-51-extensions\016openmp-clauses\021openmp-extensions\020openmp-loop-fo"
    "rm\016openmp-mapping\015openmp-target\027openmp-target-exception\016opt"
    "ion-ignored!ordered-compare-function-pointers\027out-of-line-declaratio"
    "n\025out-of-scope-function\014over-aligned\010overflow\022overlength-st"
    "rings\037overloaded-shift-op-parentheses\022overloaded-virtual\015overr"
    "ide-init\017override-module\032overriding-method-mismatch\021overriding"
    "-option\006packed\016packed-non-pod\006padded\017padded-bitfield\013par"
    "entheses\024parentheses-equality\024partial-availability\004pass\015pas"
    "s-analysis\013pass-failed\013pass-missed\015pch-date-time\014pch-vfs-di"
    "ff\010pedantic\026pedantic-core-features\017pedantic-macros\020pessimiz"
    "ing-move\015pointer-arith\027pointer-bool-conversion\017pointer-compare"
    "\027pointer-integer-compare\014pointer-sign\024pointer-to-enum-cast\023"
    "pointer-to-int-cast\025pointer-type-mismatch\031poison-system-directori"
    "es\033potentially-direct-selector potentially-evaluated-expression\026p"
    "ragma-clang-attribute\032pragma-once-outside-header\013pragma-pack\036p"
    "ragma-pack-suspicious-include#pragma-system-header-outside-header\007pr"
    "agmas\020pre-c++14-compat\031pre-c++14-compat-pedantic\020pre-c++17-com"
    "pat\031pre-c++17-compat-pedantic\020pre-c++20-compat\031pre-c++20-compa"
    "t-pedantic\020pre-c++23-compat\031pre-c++23-compat-pedantic\020pre-c++2"
    "6-compat\031pre-c++26-compat-pedantic\020pre-c++2c-compat\031pre-c++2c-"
    "compat-pedantic\016pre-c11-compat\027pre-c11-compat-pedantic\016pre-c23"
    "-compat\027pre-c23-compat-pedantic\016pre-c2x-compat\027pre-c2x-compat-"
    "pedantic\024pre-openmp-51-compat&predefined-identifier-outside-function"
    "\016private-extern\016private-header\016private-module\025profile-instr"
    "-missing\031profile-instr-out-of-date\030profile-instr-unprofiled\032pr"
    "operty-access-dot-syntax\033property-attribute-mismatch\010protocol%pro"
    "tocol-property-synthesis-ambiguity\005psabi\025ptrauth-null-pointers\032"
    "qualified-void-return-type\"quoted-include-in-framework-header\023range"
    "-loop-analysis\031range-loop-bind-reference\024range-loop-construct\017"
    "read-only-types\032readonly-iboutlet-property\015receiver-expr\026recei"
    "ver-forward-class\027redeclared-class-member\026redundant-consteval-if\017"
    "redundant-decls\016redundant-move\020redundant-parens\010register\026re"
    "interpret-base-class\025remark-backend-plugin\007reorder\014reorder-cto"
    "r\021reorder-init-list\030requires-super-attribute\021reserved-id-macro"
    "\023reserved-identifier\031reserved-macro-identifier\032reserved-module"
    "-identifier\035reserved-user-defined-literal\022restrict-expansion\031r"
    "etained-language-linkage\021return-local-addr\017return-mismatch\024ret"
    "urn-stack-address\017return-std-move\013return-type\025return-type-c-li"
    "nkage\020rewrite-not-bool\023round-trip-cc1-args\004rtti\020sanitize-ad"
    "dress\025sarif-format-unstable\021search-path-usage\007section\010selec"
    "tor\026selector-type-mismatch\013self-assign\021self-assign-field\026se"
    "lf-assign-overloaded\tself-move\034semicolon-before-method-body\010sent"
    "inel\016sequence-point\026serialized-diagnostics\006shadow\nshadow-all\014"
    "shadow-field\033shadow-field-in-constructor$shadow-field-in-constructor"
    "-modified\013shadow-ivar\027shadow-uncaptured-local\024shift-count-nega"
    "tive\024shift-count-overflow\024shift-negative-value\024shift-op-parent"
    "heses\016shift-overflow\023shift-sign-overflow\020shorten-64-to-32\014s"
    "ign-compare\017sign-conversion\nsign-promo\024signed-enum-bitfield\025s"
    "igned-unsigned-wchar'single-bit-bitfield-constant-conversion\025sizeof-"
    "array-argument\022sizeof-array-decay\020sizeof-array-div\022sizeof-poin"
    "ter-div\030sizeof-pointer-memaccess\020slash-u-filename\014slh-asm-goto"
    "\nsloc-usage\027sometimes-uninitialized\nsource-mgr\023source-uses-open"
    "acc\022source-uses-openmp\013spir-compat\014spirv-compat\017stack-exhau"
    "sted\017stack-protector\021static-float-init\020static-in-inline$static"
    "-inline-explicit-instantiation\026static-local-in-inline\020static-self"
    "-init\023stdlibcxx-not-found\017strict-aliasing\021strict-aliasing=0\021"
    "strict-aliasing=1\021strict-aliasing=2\017strict-overflow\021strict-ove"
    "rflow=0\021strict-overflow=1\021strict-overflow=2\021strict-overflow=3\021"
    "strict-overflow=4\021strict-overflow=5\"strict-potentially-direct-selec"
    "tor\036strict-primary-template-shadow\021strict-prototypes\025strict-se"
    "lector-match\016string-compare\024string-concatenation\021string-conver"
    "sion\020string-plus-char\017string-plus-int\024strlcpy-strlcat-size\014"
    "strncat-size\033suggest-destructor-override\020suggest-override\033supe"
    "r-class-method-mismatch\020suspicious-bzero\024suspicious-memaccess\024"
    "swift-name-attribute\006switch\013switch-bool\016switch-default\013swit"
    "ch-enum\016sync-alignment%sync-fetch-and-nand-semantics-changed\005synt"
    "h\036target-clones-mixed-specifiers\034tautological-bitwise-compare\024"
    "tautological-compare\035tautological-constant-compare&tautological-cons"
    "tant-in-range-compare*tautological-constant-out-of-range-compare\035tau"
    "tological-negation-compare\036tautological-objc-bool-compare\034tautolo"
    "gical-overlap-compare\034tautological-pointer-compare\037tautological-t"
    "ype-limit-compare\036tautological-undefined-compare'tautological-unsign"
    "ed-char-zero-compare'tautological-unsigned-enum-zero-compare\"tautologi"
    "cal-unsigned-zero-compare tautological-value-range-compare\017tcb-enfor"
    "cement\034template-in-declaration-name\032tentative-definition-array$te"
    "ntative-definition-incomplete-type\015thread-safety\026thread-safety-an"
    "alysis\030thread-safety-attributes\022thread-safety-beta\026thread-safe"
    "ty-negative\025thread-safety-precise\027thread-safety-reference\036thre"
    "ad-safety-reference-return\025thread-safety-verbose\ttrigraphs\013type-"
    "limits\013type-safety\024typedef-redefinition\020typename-missing\031un"
    "able-to-open-stats-file\020unaligned-access!unaligned-qualifier-implici"
    "t-cast\030unavailable-declarations\023undeclared-selector\005undef\014u"
    "ndef-prefix\027undefined-arm-streaming\020undefined-arm-za\021undefined"
    "-arm-zt0\031undefined-bool-conversion\027undefined-func-template\020und"
    "efined-inline\022undefined-internal\027undefined-internal-type\032undef"
    "ined-reinterpret-cast\026undefined-var-template\035underaligned-excepti"
    "on-object\026unevaluated-expression\026unguarded-availability\032unguar"
    "ded-availability-new\007unicode\021unicode-homoglyph\022unicode-whitesp"
    "ace\022unicode-zero-width\015uninitialized\035uninitialized-const-refer"
    "ence\020unknown-argument\022unknown-assumption\022unknown-attributes\024"
    "unknown-cuda-version\022unknown-directives\027unknown-escape-sequence\017"
    "unknown-pragmas\022unknown-sanitizers\026unknown-warning-option\032unna"
    "med-type-template-args\035unneeded-internal-declaration\030unneeded-mem"
    "ber-function\031unqualified-std-cast-call\020unreachable-code\033unreac"
    "hable-code-aggressive\026unreachable-code-break\034unreachable-code-fal"
    "lthrough\036unreachable-code-generic-assoc\037unreachable-code-loop-inc"
    "rement\027unreachable-code-return\023unsafe-buffer-usage unsafe-buffer-"
    "usage-in-container\013unsequenced\017unsupported-abi\017unsupported-abs"
    "\036unsupported-availability-guard\016unsupported-cb#unsupported-dll-ba"
    "se-class-template\036unsupported-floating-point-opt\022unsupported-frie"
    "nd\021unsupported-gpopt\017unsupported-nan\026unsupported-target-opt\026"
    "unsupported-visibility\037unusable-partial-specialization\006unused\017"
    "unused-argument\030unused-but-set-parameter\027unused-but-set-variable\034"
    "unused-command-line-argument\021unused-comparison\025unused-const-varia"
    "ble\032unused-exception-parameter\017unused-function\032unused-getter-r"
    "eturn-value\014unused-label\025unused-lambda-capture\024unused-local-ty"
    "pedef\025unused-local-typedefs\015unused-macros\026unused-member-functi"
    "on\020unused-parameter\024unused-private-field\024unused-property-ivar\015"
    "unused-result\017unused-template\014unused-value\017unused-variable\026"
    "unused-volatile-lvalue\026used-but-marked-unused\025user-defined-litera"
    "ls\025user-defined-warnings\007varargs\017variadic-macros\015vec-elem-s"
    "ize\021vector-conversion\022vector-conversions\014vexing-parse\nvisibil"
    "ity\003vla\021vla-cxx-extension\015vla-extension\033vla-extension-stati"
    "c-assert\031void-pointer-to-enum-cast\030void-pointer-to-int-cast\024vo"
    "id-ptr-dereference\025volatile-register-var\023wasm-exception-spec\025w"
    "eak-template-vtables\014weak-vtables\020writable-strings\015write-strin"
    "gs\017xor-used-as-pow\035zero-as-null-pointer-constant\021zero-length-a"
    "rray"};

#endif // GET_DIAG_ARRAYS


#ifdef DIAG_ENTRY
DIAG_ENTRY(anonymous_60 /*  */, 0, 0, /* DiagSubGroup0 */ 1, R"()")
DIAG_ENTRY(PoundPragmaMessage /* #pragma-messages */, 1, /* DiagArray1 */ 1, 0, R"()")
DIAG_ENTRY(PoundWarning /* #warnings */, 18, /* DiagArray2 */ 3, 0, R"()")
DIAG_ENTRY(anonymous_290 /* CFString-literal */, 28, /* DiagArray3 */ 5, 0, R"()")
DIAG_ENTRY(anonymous_59 /* CL4 */, 45, 0, /* DiagSubGroup4 */ 3, R"()")
DIAG_ENTRY(IndependentClassAttribute /* IndependentClass-attribute */, 49, /* DiagArray5 */ 7, 0, R"()")
DIAG_ENTRY(NSobjectAttribute /* NSObject-attribute */, 76, /* DiagArray6 */ 10, 0, R"()")
DIAG_ENTRY(AArch64SMEAttributes /* aarch64-sme-attributes */, 95, /* DiagArray7 */ 12, 0, R"()")
DIAG_ENTRY(anonymous_0 /* abi */, 118, 0, 0, R"()")
DIAG_ENTRY(AbsoluteValue /* absolute-value */, 122, /* DiagArray9 */ 15, 0, R"()")
DIAG_ENTRY(AbstractFinalClass /* abstract-final-class */, 137, /* DiagArray10 */ 20, 0, R"()")
DIAG_ENTRY(anonymous_284 /* abstract-vbase-init */, 158, /* DiagArray11 */ 22, 0, R"()")
DIAG_ENTRY(anonymous_58 /* address */, 178, 0, /* DiagSubGroup12 */ 6, R"()")
DIAG_ENTRY(anonymous_260 /* address-of-packed-member */, 186, /* DiagArray13 */ 24, 0, R"()")
DIAG_ENTRY(AddressOfTemporary /* address-of-temporary */, 211, /* DiagArray14 */ 26, 0, R"()")
DIAG_ENTRY(anonymous_2 /* aggregate-return */, 232, 0, 0, R"()")
DIAG_ENTRY(AIXCompat /* aix-compat */, 249, /* DiagArray16 */ 28, 0, R"()")
DIAG_ENTRY(anonymous_272 /* alias-template-in-declaration-name */, 260, /* DiagArray17 */ 31, 0, R"()")
DIAG_ENTRY(anonymous_261 /* align-mismatch */, 295, /* DiagArray18 */ 33, 0, R"()")
DIAG_ENTRY(All /* all */, 310, 0, /* DiagSubGroup19 */ 10, R"()")
DIAG_ENTRY(anonymous_204 /* alloca */, 314, /* DiagArray20 */ 35, 0, R"()")
DIAG_ENTRY(anonymous_205 /* alloca-with-align-alignof */, 321, /* DiagArray21 */ 37, 0, R"()")
DIAG_ENTRY(AlwaysInlineCoroutine /* always-inline-coroutine */, 347, /* DiagArray22 */ 39, 0, R"()")
DIAG_ENTRY(anonymous_267 /* ambiguous-delete */, 371, /* DiagArray23 */ 41, 0, R"()")
DIAG_ENTRY(anonymous_155 /* ambiguous-ellipsis */, 388, /* DiagArray24 */ 43, 0, R"()")
DIAG_ENTRY(AmbiguousMacro /* ambiguous-macro */, 407, /* DiagArray25 */ 45, 0, R"()")
DIAG_ENTRY(AmbigMemberTemplate /* ambiguous-member-template */, 423, /* DiagArray26 */ 47, 0, R"()")
DIAG_ENTRY(anonymous_225 /* ambiguous-reversed-operator */, 449, /* DiagArray27 */ 49, 0, R"()")
DIAG_ENTRY(anonymous_110 /* analyzer-incompatible-plugin */, 477, /* DiagArray28 */ 51, 0, R"()")
DIAG_ENTRY(anonymous_107 /* android-unversioned-fallback */, 506, /* DiagArray29 */ 53, 0, R"()")
DIAG_ENTRY(AnonEnumEnumConversion /* anon-enum-enum-conversion */, 535, /* DiagArray30 */ 55, /* DiagSubGroup30 */ 18, R"()")
DIAG_ENTRY(anonymous_156 /* anonymous-pack-parens */, 561, /* DiagArray31 */ 57, 0, R"()")
DIAG_ENTRY(anonymous_92 /* apinotes */, 583, /* DiagArray32 */ 59, 0, R"()")
DIAG_ENTRY(AutomaticReferenceCounting /* arc */, 592, 0, /* DiagSubGroup33 */ 20, R"()")
DIAG_ENTRY(anonymous_154 /* arc-bridge-casts-disallowed-in-nonarc */, 596, /* DiagArray34 */ 61, 0, R"()")
DIAG_ENTRY(ARCRepeatedUseOfWeakMaybe /* arc-maybe-repeated-use-of-weak */, 634, /* DiagArray35 */ 63, 0, R"()")
DIAG_ENTRY(ARCNonPodMemAccess /* arc-non-pod-memaccess */, 665, /* DiagArray36 */ 65, 0, R"()")
DIAG_ENTRY(anonymous_184 /* arc-performSelector-leaks */, 687, /* DiagArray37 */ 67, 0, R"()")
DIAG_ENTRY(ARCRepeatedUseOfWeak /* arc-repeated-use-of-weak */, 713, /* DiagArray38 */ 69, /* DiagSubGroup38 */ 24, R"()")
DIAG_ENTRY(ARCRetainCycles /* arc-retain-cycles */, 738, /* DiagArray39 */ 71, 0, R"()")
DIAG_ENTRY(ARCUnsafeRetainedAssign /* arc-unsafe-retained-assign */, 756, /* DiagArray40 */ 73, 0, R"()")
DIAG_ENTRY(anonymous_292 /* argument-outside-range */, 783, /* DiagArray41 */ 77, 0, R"()")
DIAG_ENTRY(anonymous_293 /* argument-undefined-behaviour */, 806, /* DiagArray42 */ 79, 0, R"()")
DIAG_ENTRY(ArrayBounds /* array-bounds */, 835, /* DiagArray43 */ 81, 0, R"()")
DIAG_ENTRY(ArrayBoundsPointerArithmetic /* array-bounds-pointer-arithmetic */, 848, /* DiagArray44 */ 87, 0, R"()")
DIAG_ENTRY(ArrayParameter /* array-parameter */, 880, /* DiagArray45 */ 90, 0, R"()")
DIAG_ENTRY(ASM /* asm */, 896, 0, /* DiagSubGroup46 */ 26, R"()")
DIAG_ENTRY(ASMOperandWidths /* asm-operand-widths */, 900, /* DiagArray47 */ 92, 0, R"()")
DIAG_ENTRY(anonymous_291 /* assign-enum */, 919, /* DiagArray48 */ 94, 0, R"()")
DIAG_ENTRY(anonymous_171 /* assume */, 931, /* DiagArray49 */ 96, 0, R"()")
DIAG_ENTRY(anonymous_57 /* at-protocol */, 938, 0, 0, R"()")
DIAG_ENTRY(FrameworkHdrAtImport /* atimport-in-framework-header */, 950, /* DiagArray51 */ 98, 0, R"()")
DIAG_ENTRY(anonymous_248 /* atomic-access */, 979, /* DiagArray52 */ 100, 0, R"()")
DIAG_ENTRY(AtomicAlignment /* atomic-alignment */, 993, /* DiagArray53 */ 102, 0, R"()")
DIAG_ENTRY(anonymous_277 /* atomic-implicit-seq-cst */, 1010, /* DiagArray54 */ 105, 0, R"()")
DIAG_ENTRY(anonymous_276 /* atomic-memory-ordering */, 1034, /* DiagArray55 */ 107, 0, R"()")
DIAG_ENTRY(AtomicProperties /* atomic-properties */, 1057, 0, /* DiagSubGroup56 */ 28, R"()")
DIAG_ENTRY(anonymous_179 /* atomic-property-with-user-defined-accessor */, 1075, /* DiagArray57 */ 109, 0, R"()")
DIAG_ENTRY(anonymous_221 /* attribute-packed-for-bitfield */, 1118, /* DiagArray58 */ 111, 0, R"()")
DIAG_ENTRY(BackendWarningAttributes /* attribute-warning */, 1148, /* DiagArray59 */ 113, 0, R"()")
DIAG_ENTRY(Attributes /* attributes */, 1166, 0, /* DiagSubGroup60 */ 31, R"()")
DIAG_ENTRY(anonymous_162 /* auto-decl-extensions */, 1177, /* DiagArray61 */ 116, 0, R"()")
DIAG_ENTRY(AutoDisableVptrSanitizer /* auto-disable-vptr-sanitizer */, 1198, /* DiagArray62 */ 118, 0, R"()")
DIAG_ENTRY(anonymous_3 /* auto-import */, 1226, 0, 0, R"()")
DIAG_ENTRY(anonymous_152 /* auto-storage-class */, 1238, /* DiagArray64 */ 120, 0, R"()")
DIAG_ENTRY(anonymous_198 /* auto-var-id */, 1257, /* DiagArray65 */ 122, 0, R"()")
DIAG_ENTRY(Availability /* availability */, 1269, /* DiagArray66 */ 124, 0, R"()")
DIAG_ENTRY(AVRRtlibLinkingQuirks /* avr-rtlib-linking-quirks */, 1282, /* DiagArray67 */ 135, 0, R"()")
DIAG_ENTRY(BackendPlugin /* backend-plugin */, 1307, /* DiagArray68 */ 141, 0, R"()")
DIAG_ENTRY(anonymous_114 /* backslash-newline-escape */, 1322, /* DiagArray69 */ 144, 0, R"()")
DIAG_ENTRY(BadFunctionCast /* bad-function-cast */, 1347, /* DiagArray70 */ 146, 0, R"()")
DIAG_ENTRY(BinaryLiteral /* binary-literal */, 1365, 0, /* DiagSubGroup71 */ 34, R"()")
DIAG_ENTRY(BindToTemporaryCopy /* bind-to-temporary-copy */, 1380, /* DiagArray72 */ 148, /* DiagSubGroup72 */ 37, R"()")
DIAG_ENTRY(anonymous_166 /* binding-in-condition */, 1403, /* DiagArray73 */ 151, 0, R"()")
DIAG_ENTRY(BitIntExtension /* bit-int-extension */, 1424, /* DiagArray74 */ 153, 0, R"()")
DIAG_ENTRY(BitFieldConstantConversion /* bitfield-constant-conversion */, 1442, /* DiagArray75 */ 156, /* DiagSubGroup75 */ 39, R"()")
DIAG_ENTRY(BitFieldEnumConversion /* bitfield-enum-conversion */, 1471, /* DiagArray76 */ 158, 0, R"()")
DIAG_ENTRY(BitFieldWidth /* bitfield-width */, 1496, /* DiagArray77 */ 162, 0, R"()")
DIAG_ENTRY(BitwiseConditionalParentheses /* bitwise-conditional-parentheses */, 1511, /* DiagArray78 */ 164, 0, R"()")
DIAG_ENTRY(BitwiseInsteadOfLogical /* bitwise-instead-of-logical */, 1543, /* DiagArray79 */ 166, 0, R"()")
DIAG_ENTRY(BitwiseOpParentheses /* bitwise-op-parentheses */, 1570, /* DiagArray80 */ 168, 0, R"()")
DIAG_ENTRY(BlockCaptureAutoReleasing /* block-capture-autoreleasing */, 1593, /* DiagArray81 */ 170, 0, R"()")
DIAG_ENTRY(BoolConversion /* bool-conversion */, 1621, /* DiagArray82 */ 172, /* DiagSubGroup82 */ 41, R"()")
DIAG_ENTRY(anonymous_65 /* bool-conversions */, 1637, 0, /* DiagSubGroup83 */ 44, R"()")
DIAG_ENTRY(BoolOperation /* bool-operation */, 1654, /* DiagArray84 */ 174, /* DiagSubGroup84 */ 46, R"()")
DIAG_ENTRY(anonymous_243 /* braced-scalar-init */, 1669, /* DiagArray85 */ 176, 0, R"()")
DIAG_ENTRY(BranchProtection /* branch-protection */, 1688, /* DiagArray86 */ 178, 0, R"()")
DIAG_ENTRY(ObjCBridge /* bridge-cast */, 1706, /* DiagArray87 */ 183, 0, R"()")
DIAG_ENTRY(anonymous_207 /* builtin-assume-aligned-alignment */, 1718, /* DiagArray88 */ 186, 0, R"()")
DIAG_ENTRY(BuiltinMacroRedefined /* builtin-macro-redefined */, 1751, /* DiagArray89 */ 188, 0, R"()")
DIAG_ENTRY(anonymous_172 /* builtin-memcpy-chk-size */, 1775, /* DiagArray90 */ 191, 0, R"()")
DIAG_ENTRY(BuiltinRequiresHeader /* builtin-requires-header */, 1799, /* DiagArray91 */ 193, 0, R"()")
DIAG_ENTRY(CXXCompat /* c++-compat */, 1823, /* DiagArray92 */ 195, 0, R"()")
DIAG_ENTRY(anonymous_25 /* c++0x-compat */, 1834, 0, /* DiagSubGroup93 */ 48, R"()")
DIAG_ENTRY(anonymous_69 /* c++0x-extensions */, 1847, 0, /* DiagSubGroup94 */ 50, R"()")
DIAG_ENTRY(anonymous_23 /* c++0x-narrowing */, 1864, 0, /* DiagSubGroup95 */ 52, R"()")
DIAG_ENTRY(CXX11Compat /* c++11-compat */, 1880, /* DiagArray96 */ 197, /* DiagSubGroup96 */ 54, R"()")
DIAG_ENTRY(CXX11CompatDeprecatedWritableStr /* c++11-compat-deprecated-writable-strings */, 1893, /* DiagArray97 */ 208, 0, R"()")
DIAG_ENTRY(CXX11CompatPedantic /* c++11-compat-pedantic */, 1934, 0, /* DiagSubGroup98 */ 62, R"()")
DIAG_ENTRY(CXX11CompatReservedUserDefinedLiteral /* c++11-compat-reserved-user-defined-literal */, 1956, /* DiagArray99 */ 210, 0, R"()")
DIAG_ENTRY(CXX11 /* c++11-extensions */, 1999, /* DiagArray100 */ 212, /* DiagSubGroup100 */ 68, R"()")
DIAG_ENTRY(CXX11ExtraSemi /* c++11-extra-semi */, 2016, /* DiagArray101 */ 239, 0, R"()")
DIAG_ENTRY(CXX11InlineNamespace /* c++11-inline-namespace */, 2033, /* DiagArray102 */ 241, 0, R"()")
DIAG_ENTRY(CXX11LongLong /* c++11-long-long */, 2056, /* DiagArray103 */ 243, 0, R"()")
DIAG_ENTRY(CXX11Narrowing /* c++11-narrowing */, 2072, /* DiagArray104 */ 245, /* DiagSubGroup104 */ 72, R"()")
DIAG_ENTRY(CXX11NarrowingConstReference /* c++11-narrowing-const-reference */, 2088, /* DiagArray105 */ 253, 0, R"()")
DIAG_ENTRY(CXX14Attrs /* c++14-attribute-extensions */, 2120, /* DiagArray106 */ 257, 0, R"()")
DIAG_ENTRY(CXX14BinaryLiteral /* c++14-binary-literal */, 2147, /* DiagArray107 */ 259, 0, R"()")
DIAG_ENTRY(CXX14Compat /* c++14-compat */, 2168, 0, /* DiagSubGroup108 */ 74, R"()")
DIAG_ENTRY(CXX14CompatPedantic /* c++14-compat-pedantic */, 2181, 0, /* DiagSubGroup109 */ 78, R"()")
DIAG_ENTRY(CXX14 /* c++14-extensions */, 2203, /* DiagArray110 */ 261, /* DiagSubGroup110 */ 83, R"()")
DIAG_ENTRY(CXX17Attrs /* c++17-attribute-extensions */, 2220, /* DiagArray111 */ 269, 0, R"()")
DIAG_ENTRY(CXX17Compat /* c++17-compat */, 2247, 0, /* DiagSubGroup112 */ 86, R"()")
DIAG_ENTRY(CXX17CompatMangling /* c++17-compat-mangling */, 2260, /* DiagArray113 */ 271, 0, R"()")
DIAG_ENTRY(CXX17CompatPedantic /* c++17-compat-pedantic */, 2282, 0, /* DiagSubGroup114 */ 92, R"()")
DIAG_ENTRY(CXX17 /* c++17-extensions */, 2304, /* DiagArray115 */ 273, /* DiagSubGroup115 */ 96, R"()")
DIAG_ENTRY(anonymous_70 /* c++1y-extensions */, 2321, 0, /* DiagSubGroup116 */ 98, R"()")
DIAG_ENTRY(anonymous_26 /* c++1z-compat */, 2338, 0, /* DiagSubGroup117 */ 100, R"()")
DIAG_ENTRY(anonymous_12 /* c++1z-compat-mangling */, 2351, 0, /* DiagSubGroup118 */ 102, R"()")
DIAG_ENTRY(anonymous_71 /* c++1z-extensions */, 2373, 0, /* DiagSubGroup119 */ 104, R"()")
DIAG_ENTRY(CXX20Attrs /* c++20-attribute-extensions */, 2390, /* DiagArray120 */ 291, 0, R"()")
DIAG_ENTRY(CXX20Compat /* c++20-compat */, 2417, /* DiagArray121 */ 293, /* DiagSubGroup121 */ 106, R"()")
DIAG_ENTRY(CXX20CompatPedantic /* c++20-compat-pedantic */, 2430, 0, /* DiagSubGroup122 */ 108, R"()")
DIAG_ENTRY(CXX20Designator /* c++20-designator */, 2452, /* DiagArray123 */ 303, 0, R"()")
DIAG_ENTRY(CXX20 /* c++20-extensions */, 2469, /* DiagArray124 */ 305, /* DiagSubGroup124 */ 111, R"()")
DIAG_ENTRY(CXX23Attrs /* c++23-attribute-extensions */, 2486, /* DiagArray125 */ 328, 0, R"()")
DIAG_ENTRY(CXX23 /* c++23-extensions */, 2513, /* DiagArray126 */ 330, /* DiagSubGroup126 */ 114, R"()")
DIAG_ENTRY(CXX23AttrsOnLambda /* c++23-lambda-attributes */, 2530, /* DiagArray127 */ 341, 0, R"()")
DIAG_ENTRY(CXX26 /* c++26-extensions */, 2554, /* DiagArray128 */ 343, 0, R"()")
DIAG_ENTRY(anonymous_27 /* c++2a-compat */, 2571, 0, /* DiagSubGroup129 */ 116, R"()")
DIAG_ENTRY(anonymous_28 /* c++2a-compat-pedantic */, 2584, 0, /* DiagSubGroup130 */ 118, R"()")
DIAG_ENTRY(anonymous_72 /* c++2a-extensions */, 2606, 0, /* DiagSubGroup131 */ 120, R"()")
DIAG_ENTRY(anonymous_73 /* c++2b-extensions */, 2623, 0, /* DiagSubGroup132 */ 122, R"()")
DIAG_ENTRY(anonymous_74 /* c++2c-extensions */, 2640, 0, /* DiagSubGroup133 */ 124, R"()")
DIAG_ENTRY(anonymous_19 /* c++98-c++11-c++14-c++17-compat */, 2657, 0, /* DiagSubGroup134 */ 126, R"()")
DIAG_ENTRY(anonymous_20 /* c++98-c++11-c++14-c++17-compat-pedantic */, 2688, 0, /* DiagSubGroup135 */ 128, R"()")
DIAG_ENTRY(anonymous_17 /* c++98-c++11-c++14-compat */, 2728, 0, /* DiagSubGroup136 */ 130, R"()")
DIAG_ENTRY(anonymous_18 /* c++98-c++11-c++14-compat-pedantic */, 2753, 0, /* DiagSubGroup137 */ 132, R"()")
DIAG_ENTRY(anonymous_15 /* c++98-c++11-compat */, 2787, 0, /* DiagSubGroup138 */ 134, R"()")
DIAG_ENTRY(CXXPre14CompatBinaryLiteral /* c++98-c++11-compat-binary-literal */, 2806, /* DiagArray139 */ 348, 0, R"()")
DIAG_ENTRY(anonymous_16 /* c++98-c++11-compat-pedantic */, 2840, 0, /* DiagSubGroup140 */ 136, R"()")
DIAG_ENTRY(CXX98Compat /* c++98-compat */, 2868, /* DiagArray141 */ 350, /* DiagSubGroup141 */ 138, R"()")
DIAG_ENTRY(CXX98CompatBindToTemporaryCopy /* c++98-compat-bind-to-temporary-copy */, 2881, /* DiagArray142 */ 409, 0, R"()")
DIAG_ENTRY(CXX98CompatExtraSemi /* c++98-compat-extra-semi */, 2917, /* DiagArray143 */ 411, 0, R"()")
DIAG_ENTRY(CXX98CompatLocalTypeTemplateArgs /* c++98-compat-local-type-template-args */, 2941, /* DiagArray144 */ 413, 0, R"()")
DIAG_ENTRY(CXX98CompatPedantic /* c++98-compat-pedantic */, 2979, /* DiagArray145 */ 415, /* DiagSubGroup145 */ 145, R"()")
DIAG_ENTRY(CXX98CompatUnnamedTypeTemplateArgs /* c++98-compat-unnamed-type-template-args */, 3001, /* DiagArray146 */ 425, 0, R"()")
DIAG_ENTRY(C11 /* c11-extensions */, 3041, /* DiagArray147 */ 427, 0, R"()")
DIAG_ENTRY(C23Compat /* c23-compat */, 3056, /* DiagArray148 */ 432, 0, R"()")
DIAG_ENTRY(C23 /* c23-extensions */, 3067, /* DiagArray149 */ 434, 0, R"()")
DIAG_ENTRY(anonymous_4 /* c2x-compat */, 3082, 0, /* DiagSubGroup150 */ 153, R"()")
DIAG_ENTRY(anonymous_75 /* c2x-extensions */, 3093, 0, /* DiagSubGroup151 */ 155, R"()")
DIAG_ENTRY(C99Compat /* c99-compat */, 3108, /* DiagArray152 */ 447, 0, R"()")
DIAG_ENTRY(C99Designator /* c99-designator */, 3119, /* DiagArray153 */ 452, /* DiagSubGroup153 */ 157, R"()")
DIAG_ENTRY(C99 /* c99-extensions */, 3134, /* DiagArray154 */ 458, /* DiagSubGroup154 */ 159, R"()")
DIAG_ENTRY(PureVirtualCallFromCtorDtor /* call-to-pure-virtual-from-ctor-dtor */, 3149, /* DiagArray155 */ 469, 0, R"()")
DIAG_ENTRY(CalledOnceParameter /* called-once-parameter */, 3185, /* DiagArray156 */ 471, /* DiagSubGroup156 */ 161, R"()")
DIAG_ENTRY(CastAlign /* cast-align */, 3207, /* DiagArray157 */ 475, 0, R"()")
DIAG_ENTRY(anonymous_279 /* cast-calling-convention */, 3218, /* DiagArray158 */ 477, 0, R"()")
DIAG_ENTRY(CastFunctionType /* cast-function-type */, 3242, 0, /* DiagSubGroup159 */ 163, R"()")
DIAG_ENTRY(CastFunctionTypeMismatch /* cast-function-type-mismatch */, 3261, /* DiagArray160 */ 479, 0, R"()")
DIAG_ENTRY(CastFunctionTypeStrict /* cast-function-type-strict */, 3289, /* DiagArray161 */ 481, 0, R"()")
DIAG_ENTRY(SelTypeCast /* cast-of-sel-type */, 3315, /* DiagArray162 */ 483, 0, R"()")
DIAG_ENTRY(CastQual /* cast-qual */, 3332, /* DiagArray163 */ 485, 0, R"()")
DIAG_ENTRY(anonymous_265 /* cast-qual-unrelated */, 3342, /* DiagArray164 */ 488, 0, R"()")
DIAG_ENTRY(anonymous_5 /* char-align */, 3362, 0, 0, R"()")
DIAG_ENTRY(CharSubscript /* char-subscripts */, 3373, /* DiagArray166 */ 490, 0, R"()")
DIAG_ENTRY(ClangClPch /* clang-cl-pch */, 3389, /* DiagArray167 */ 493, 0, R"()")
DIAG_ENTRY(ClassConversion /* class-conversion */, 3402, /* DiagArray168 */ 498, 0, R"()")
DIAG_ENTRY(ClassVarargs /* class-varargs */, 3419, /* DiagArray169 */ 502, /* DiagSubGroup169 */ 166, R"()")
DIAG_ENTRY(anonymous_208 /* cmse-union-leak */, 3433, /* DiagArray170 */ 504, 0, R"()")
DIAG_ENTRY(anonymous_160 /* comma */, 3449, /* DiagArray171 */ 506, 0, R"()")
DIAG_ENTRY(Comment /* comment */, 3455, /* DiagArray172 */ 508, 0, R"()")
DIAG_ENTRY(anonymous_63 /* comments */, 3463, 0, /* DiagSubGroup173 */ 168, R"()")
DIAG_ENTRY(CompareDistinctPointerType /* compare-distinct-pointer-types */, 3472, /* DiagArray174 */ 513, 0, R"()")
DIAG_ENTRY(CompletionHandler /* completion-handler */, 3503, /* DiagArray175 */ 515, 0, R"()")
DIAG_ENTRY(anonymous_245 /* complex-component-init */, 3522, /* DiagArray176 */ 519, 0, R"()")
DIAG_ENTRY(CompoundTokenSplit /* compound-token-split */, 3545, 0, /* DiagSubGroup177 */ 170, R"()")
DIAG_ENTRY(CompoundTokenSplitByMacro /* compound-token-split-by-macro */, 3566, /* DiagArray178 */ 521, 0, R"()")
DIAG_ENTRY(CompoundTokenSplitBySpace /* compound-token-split-by-space */, 3596, /* DiagArray179 */ 523, 0, R"()")
DIAG_ENTRY(anonymous_281 /* conditional-type-mismatch */, 3626, /* DiagArray180 */ 525, 0, R"()")
DIAG_ENTRY(UninitializedMaybe /* conditional-uninitialized */, 3652, /* DiagArray181 */ 527, 0, R"()")
DIAG_ENTRY(ConfigMacros /* config-macros */, 3678, /* DiagArray182 */ 529, 0, R"()")
DIAG_ENTRY(ConstantConversion /* constant-conversion */, 3692, /* DiagArray183 */ 531, /* DiagSubGroup183 */ 173, R"()")
DIAG_ENTRY(anonymous_82 /* constant-evaluated */, 3712, /* DiagArray184 */ 533, 0, R"()")
DIAG_ENTRY(anonymous_255 /* constant-logical-operand */, 3731, /* DiagArray185 */ 535, 0, R"()")
DIAG_ENTRY(anonymous_196 /* constexpr-not-const */, 3756, /* DiagArray186 */ 537, 0, R"()")
DIAG_ENTRY(Consumed /* consumed */, 3776, /* DiagArray187 */ 539, 0, R"()")
DIAG_ENTRY(Conversion /* conversion */, 3785, /* DiagArray188 */ 548, /* DiagSubGroup188 */ 176, R"()")
DIAG_ENTRY(anonymous_64 /* conversion-null */, 3796, 0, /* DiagSubGroup189 */ 191, R"()")
DIAG_ENTRY(CoroNonAlignedAllocationFunction /* coro-non-aligned-allocation-function */, 3812, /* DiagArray190 */ 555, 0, R"()")
DIAG_ENTRY(Coroutine /* coroutine */, 3849, /* DiagArray191 */ 557, /* DiagSubGroup191 */ 193, R"()")
DIAG_ENTRY(CoroutineMissingUnhandledException /* coroutine-missing-unhandled-exception */, 3859, /* DiagArray192 */ 559, 0, R"()")
DIAG_ENTRY(CoveredSwitchDefault /* covered-switch-default */, 3897, /* DiagArray193 */ 561, 0, R"()")
DIAG_ENTRY(anonymous_62 /* cpp */, 3920, 0, /* DiagSubGroup194 */ 198, R"()")
DIAG_ENTRY(ObjCCStringFormat /* cstring-format-directive */, 3924, /* DiagArray195 */ 563, 0, R"()")
DIAG_ENTRY(CTADMaybeUnsupported /* ctad-maybe-unsupported */, 3949, /* DiagArray196 */ 565, 0, R"()")
DIAG_ENTRY(anonymous_6 /* ctor-dtor-privacy */, 3972, 0, 0, R"()")
DIAG_ENTRY(CrossTU /* ctu */, 3990, /* DiagArray198 */ 567, 0, R"()")
DIAG_ENTRY(CudaCompat /* cuda-compat */, 3994, /* DiagArray199 */ 569, 0, R"()")
DIAG_ENTRY(CustomAtomic /* custom-atomic-properties */, 4006, /* DiagArray200 */ 575, 0, R"()")
DIAG_ENTRY(anonymous_157 /* cxx-attribute-extension */, 4031, /* DiagArray201 */ 577, 0, R"()")
DIAG_ENTRY(Dangling /* dangling */, 4055, /* DiagArray202 */ 579, /* DiagSubGroup202 */ 200, R"()")
DIAG_ENTRY(DanglingElse /* dangling-else */, 4064, /* DiagArray203 */ 582, 0, R"()")
DIAG_ENTRY(DanglingField /* dangling-field */, 4078, /* DiagArray204 */ 584, 0, R"()")
DIAG_ENTRY(DanglingGsl /* dangling-gsl */, 4093, /* DiagArray205 */ 589, 0, R"()")
DIAG_ENTRY(DanglingInitializerList /* dangling-initializer-list */, 4106, /* DiagArray206 */ 592, 0, R"()")
DIAG_ENTRY(anonymous_103 /* darwin-sdk-settings */, 4132, /* DiagArray207 */ 594, 0, R"()")
DIAG_ENTRY(anonymous_140 /* date-time */, 4152, /* DiagArray208 */ 596, 0, R"()")
DIAG_ENTRY(DeallocInCategory /* dealloc-in-category */, 4162, /* DiagArray209 */ 598, 0, R"()")
DIAG_ENTRY(anonymous_99 /* debug-compression-unavailable */, 4182, /* DiagArray210 */ 600, 0, R"()")
DIAG_ENTRY(DeclarationAfterStatement /* declaration-after-statement */, 4212, /* DiagArray211 */ 602, 0, R"()")
DIAG_ENTRY(DefaultedFunctionDeleted /* defaulted-function-deleted */, 4240, /* DiagArray212 */ 605, 0, R"()")
DIAG_ENTRY(anonymous_100 /* delayed-template-parsing-in-cxx20 */, 4267, /* DiagArray213 */ 608, 0, R"()")
DIAG_ENTRY(DelegatingCtorCycles /* delegating-ctor-cycles */, 4301, /* DiagArray214 */ 610, 0, R"()")
DIAG_ENTRY(DeleteAbstractNonVirtualDtor /* delete-abstract-non-virtual-dtor */, 4324, /* DiagArray215 */ 612, 0, R"()")
DIAG_ENTRY(DeleteIncomplete /* delete-incomplete */, 4357, /* DiagArray216 */ 614, 0, R"()")
DIAG_ENTRY(DeleteNonAbstractNonVirtualDtor /* delete-non-abstract-non-virtual-dtor */, 4375, /* DiagArray217 */ 617, 0, R"()")
DIAG_ENTRY(DeleteNonVirtualDtor /* delete-non-virtual-dtor */, 4412, 0, /* DiagSubGroup218 */ 205, R"()")
DIAG_ENTRY(anonymous_122 /* delimited-escape-sequence-extension */, 4436, /* DiagArray219 */ 619, 0, R"()")
DIAG_ENTRY(anonymous_269 /* deprecate-lax-vec-conv-all */, 4472, /* DiagArray220 */ 621, 0, R"()")
DIAG_ENTRY(Deprecated /* deprecated */, 4499, /* DiagArray221 */ 623, /* DiagSubGroup221 */ 208, R"()")
DIAG_ENTRY(anonymous_268 /* deprecated-altivec-src-compat */, 4510, /* DiagArray222 */ 633, 0, R"()")
DIAG_ENTRY(DeprecatedAnonEnumEnumConversion /* deprecated-anon-enum-enum-conversion */, 4540, /* DiagArray223 */ 635, 0, R"()")
DIAG_ENTRY(DeprecatedArrayCompare /* deprecated-array-compare */, 4577, /* DiagArray224 */ 637, 0, R"()")
DIAG_ENTRY(DeprecatedAttributes /* deprecated-attributes */, 4602, /* DiagArray225 */ 639, 0, R"()")
DIAG_ENTRY(DeprecatedBuiltins /* deprecated-builtins */, 4624, /* DiagArray226 */ 643, 0, R"()")
DIAG_ENTRY(DeprecatedCommaSubscript /* deprecated-comma-subscript */, 4644, /* DiagArray227 */ 645, 0, R"()")
DIAG_ENTRY(DeprecatedCopy /* deprecated-copy */, 4671, /* DiagArray228 */ 647, /* DiagSubGroup228 */ 231, R"()")
DIAG_ENTRY(anonymous_7 /* deprecated-copy-dtor */, 4687, 0, /* DiagSubGroup229 */ 233, R"()")
DIAG_ENTRY(DeprecatedCopyWithDtor /* deprecated-copy-with-dtor */, 4708, /* DiagArray230 */ 649, /* DiagSubGroup230 */ 235, R"()")
DIAG_ENTRY(DeprecatedCopyWithUserProvidedCopy /* deprecated-copy-with-user-provided-copy */, 4734, /* DiagArray231 */ 651, 0, R"()")
DIAG_ENTRY(DeprecatedCopyWithUserProvidedDtor /* deprecated-copy-with-user-provided-dtor */, 4774, /* DiagArray232 */ 653, 0, R"()")
DIAG_ENTRY(DeprecatedCoroutine /* deprecated-coroutine */, 4814, /* DiagArray233 */ 655, 0, R"()")
DIAG_ENTRY(DeprecatedDeclarations /* deprecated-declarations */, 4835, /* DiagArray234 */ 657, 0, R"()")
DIAG_ENTRY(DeprecatedDynamicExceptionSpec /* deprecated-dynamic-exception-spec */, 4859, /* DiagArray235 */ 664, 0, R"()")
DIAG_ENTRY(DeprecatedEnumCompare /* deprecated-enum-compare */, 4893, /* DiagArray236 */ 666, 0, R"()")
DIAG_ENTRY(DeprecatedEnumCompareConditional /* deprecated-enum-compare-conditional */, 4917, /* DiagArray237 */ 668, 0, R"()")
DIAG_ENTRY(DeprecatedEnumEnumConversion /* deprecated-enum-enum-conversion */, 4953, /* DiagArray238 */ 670, 0, R"()")
DIAG_ENTRY(DeprecatedEnumFloatConversion /* deprecated-enum-float-conversion */, 4985, /* DiagArray239 */ 672, 0, R"()")
DIAG_ENTRY(DeprecatedImplementations /* deprecated-implementations */, 5018, /* DiagArray240 */ 674, 0, R"()")
DIAG_ENTRY(DeprecatedIncrementBool /* deprecated-increment-bool */, 5045, /* DiagArray241 */ 677, 0, R"()")
DIAG_ENTRY(DeprecatedLiteralOperator /* deprecated-literal-operator */, 5071, /* DiagArray242 */ 679, 0, R"()")
DIAG_ENTRY(DeprecatedModuleDotMap /* deprecated-module-dot-map */, 5099, /* DiagArray243 */ 681, 0, R"()")
DIAG_ENTRY(DeprecatedNonPrototype /* deprecated-non-prototype */, 5125, /* DiagArray244 */ 683, 0, R"()")
DIAG_ENTRY(DeprecatedObjCIsaUsage /* deprecated-objc-isa-usage */, 5150, /* DiagArray245 */ 686, 0, R"()")
DIAG_ENTRY(ObjCPointerIntrospect /* deprecated-objc-pointer-introspection */, 5176, /* DiagArray246 */ 689, /* DiagSubGroup246 */ 237, R"()")
DIAG_ENTRY(ObjCPointerIntrospectPerformSelector /* deprecated-objc-pointer-introspection-performSelector */, 5214, /* DiagArray247 */ 691, 0, R"()")
DIAG_ENTRY(DeprecatedPragma /* deprecated-pragma */, 5268, /* DiagArray248 */ 693, 0, R"()")
DIAG_ENTRY(DeprecatedRedundantConstexprStaticDef /* deprecated-redundant-constexpr-static-def */, 5286, /* DiagArray249 */ 695, 0, R"()")
DIAG_ENTRY(DeprecatedRegister /* deprecated-register */, 5328, /* DiagArray250 */ 697, 0, R"()")
DIAG_ENTRY(DeprecatedStaticAnalyzerFlag /* deprecated-static-analyzer-flag */, 5348, /* DiagArray251 */ 699, 0, R"()")
DIAG_ENTRY(DeprecatedThisCapture /* deprecated-this-capture */, 5380, /* DiagArray252 */ 702, 0, R"()")
DIAG_ENTRY(DeprecatedType /* deprecated-type */, 5404, /* DiagArray253 */ 704, 0, R"()")
DIAG_ENTRY(DeprecatedVolatile /* deprecated-volatile */, 5420, /* DiagArray254 */ 706, 0, R"()")
DIAG_ENTRY(DeprecatedWritableStr /* deprecated-writable-strings */, 5440, 0, /* DiagSubGroup255 */ 239, R"()")
DIAG_ENTRY(anonymous_297 /* direct-ivar-access */, 5468, /* DiagArray256 */ 712, 0, R"()")
DIAG_ENTRY(anonymous_131 /* disabled-macro-expansion */, 5487, /* DiagArray257 */ 714, 0, R"()")
DIAG_ENTRY(anonymous_9 /* disabled-optimization */, 5512, 0, 0, R"()")
DIAG_ENTRY(anonymous_10 /* discard-qual */, 5534, 0, 0, R"()")
DIAG_ENTRY(DistributedObjectModifiers /* distributed-object-modifiers */, 5547, /* DiagArray260 */ 716, 0, R"()")
DIAG_ENTRY(anonymous_11 /* div-by-zero */, 5576, 0, /* DiagSubGroup261 */ 241, R"()")
DIAG_ENTRY(DivZero /* division-by-zero */, 5588, /* DiagArray262 */ 719, 0, R"()")
DIAG_ENTRY(anonymous_209 /* dll-attribute-on-redeclaration */, 5605, /* DiagArray263 */ 721, 0, R"()")
DIAG_ENTRY(DllexportExplicitInstantiationDecl /* dllexport-explicit-instantiation-decl */, 5636, /* DiagArray264 */ 723, 0, R"()")
DIAG_ENTRY(anonymous_210 /* dllimport-static-field-def */, 5674, /* DiagArray265 */ 725, 0, R"()")
DIAG_ENTRY(Documentation /* documentation */, 5701, /* DiagArray266 */ 727, /* DiagSubGroup266 */ 243, R"()")
DIAG_ENTRY(DocumentationDeprecatedSync /* documentation-deprecated-sync */, 5715, /* DiagArray267 */ 748, 0, R"()")
DIAG_ENTRY(DocumentationHTML /* documentation-html */, 5745, /* DiagArray268 */ 750, 0, R"()")
DIAG_ENTRY(DocumentationPedantic /* documentation-pedantic */, 5764, /* DiagArray269 */ 755, /* DiagSubGroup269 */ 246, R"()")
DIAG_ENTRY(DocumentationUnknownCommand /* documentation-unknown-command */, 5787, /* DiagArray270 */ 757, 0, R"()")
DIAG_ENTRY(anonymous_115 /* dollar-in-identifier-extension */, 5817, /* DiagArray271 */ 760, 0, R"()")
DIAG_ENTRY(DoublePromotion /* double-promotion */, 5848, /* DiagArray272 */ 762, 0, R"()")
DIAG_ENTRY(DtorName /* dtor-name */, 5865, /* DiagArray273 */ 764, 0, R"()")
DIAG_ENTRY(anonymous_195 /* dtor-typedef */, 5875, /* DiagArray274 */ 768, 0, R"()")
DIAG_ENTRY(DuplicateDeclSpecifier /* duplicate-decl-specifier */, 5888, /* DiagArray275 */ 770, 0, R"()")
DIAG_ENTRY(anonymous_159 /* duplicate-enum */, 5913, /* DiagArray276 */ 775, 0, R"()")
DIAG_ENTRY(DuplicateArgDecl /* duplicate-method-arg */, 5928, /* DiagArray277 */ 777, 0, R"()")
DIAG_ENTRY(MethodDuplicate /* duplicate-method-match */, 5949, /* DiagArray278 */ 779, 0, R"()")
DIAG_ENTRY(anonymous_174 /* duplicate-protocol */, 5972, /* DiagArray279 */ 781, 0, R"()")
DIAG_ENTRY(DXILValidation /* dxil-validation */, 5991, /* DiagArray280 */ 783, 0, R"()")
DIAG_ENTRY(DynamicClassMemaccess /* dynamic-class-memaccess */, 6007, /* DiagArray281 */ 785, 0, R"()")
DIAG_ENTRY(DynamicExceptionSpec /* dynamic-exception-spec */, 6031, /* DiagArray282 */ 787, /* DiagSubGroup282 */ 248, R"()")
DIAG_ENTRY(anonymous_112 /* eager-load-cxx-named-modules */, 6054, /* DiagArray283 */ 789, 0, R"()")
DIAG_ENTRY(anonymous_39 /* effc++ */, 6083, 0, /* DiagSubGroup284 */ 250, R"()")
DIAG_ENTRY(anonymous_147 /* elaborated-enum-base */, 6090, /* DiagArray285 */ 791, 0, R"()")
DIAG_ENTRY(anonymous_148 /* elaborated-enum-class */, 6111, /* DiagArray286 */ 793, 0, R"()")
DIAG_ENTRY(anonymous_137 /* embedded-directive */, 6133, /* DiagArray287 */ 795, 0, R"()")
DIAG_ENTRY(EmptyBody /* empty-body */, 6152, /* DiagArray288 */ 797, 0, R"()")
DIAG_ENTRY(anonymous_153 /* empty-decomposition */, 6163, /* DiagArray289 */ 803, 0, R"()")
DIAG_ENTRY(EmptyInitStatement /* empty-init-stmt */, 6183, /* DiagArray290 */ 805, 0, R"()")
DIAG_ENTRY(anonymous_144 /* empty-translation-unit */, 6199, /* DiagArray291 */ 807, 0, R"()")
DIAG_ENTRY(anonymous_213 /* encode-type */, 6222, /* DiagArray292 */ 809, 0, R"()")
DIAG_ENTRY(anonymous_61 /* endif-labels */, 6234, 0, /* DiagSubGroup293 */ 252, R"()")
DIAG_ENTRY(EnumCompare /* enum-compare */, 6247, /* DiagArray294 */ 811, /* DiagSubGroup294 */ 254, R"()")
DIAG_ENTRY(EnumCompareConditional /* enum-compare-conditional */, 6260, /* DiagArray295 */ 813, /* DiagSubGroup295 */ 257, R"()")
DIAG_ENTRY(EnumCompareSwitch /* enum-compare-switch */, 6285, /* DiagArray296 */ 815, 0, R"()")
DIAG_ENTRY(anonymous_81 /* enum-constexpr-conversion */, 6305, /* DiagArray297 */ 817, 0, R"()")
DIAG_ENTRY(EnumConversion /* enum-conversion */, 6331, /* DiagArray298 */ 819, /* DiagSubGroup298 */ 259, R"()")
DIAG_ENTRY(EnumEnumConversion /* enum-enum-conversion */, 6347, /* DiagArray299 */ 821, /* DiagSubGroup299 */ 263, R"()")
DIAG_ENTRY(EnumFloatConversion /* enum-float-conversion */, 6368, /* DiagArray300 */ 823, /* DiagSubGroup300 */ 265, R"()")
DIAG_ENTRY(EnumTooLarge /* enum-too-large */, 6390, /* DiagArray301 */ 825, 0, R"()")
DIAG_ENTRY(Exceptions /* exceptions */, 6405, /* DiagArray302 */ 828, 0, R"()")
DIAG_ENTRY(ExcessInitializers /* excess-initializers */, 6416, /* DiagArray303 */ 832, 0, R"()")
DIAG_ENTRY(anonymous_163 /* excessive-regsave */, 6436, /* DiagArray304 */ 837, 0, R"()")
DIAG_ENTRY(ExitTimeDestructors /* exit-time-destructors */, 6454, /* DiagArray305 */ 839, 0, R"()")
DIAG_ENTRY(ExpansionToDefined /* expansion-to-defined */, 6476, /* DiagArray306 */ 841, 0, R"()")
DIAG_ENTRY(anonymous_301 /* experimental-header-units */, 6497, /* DiagArray307 */ 844, 0, R"()")
DIAG_ENTRY(ExplicitInitializeCall /* explicit-initialize-call */, 6523, /* DiagArray308 */ 846, 0, R"()")
DIAG_ENTRY(anonymous_247 /* explicit-ownership-type */, 6548, /* DiagArray309 */ 849, 0, R"()")
DIAG_ENTRY(ExportUnnamed /* export-unnamed */, 6572, 0, 0, R"()")
DIAG_ENTRY(ExternCCompat /* extern-c-compat */, 6587, /* DiagArray311 */ 851, 0, R"()")
DIAG_ENTRY(anonymous_242 /* extern-initializer */, 6603, /* DiagArray312 */ 853, 0, R"()")
DIAG_ENTRY(Extra /* extra */, 6622, /* DiagArray313 */ 855, /* DiagSubGroup313 */ 267, R"()")
DIAG_ENTRY(anonymous_256 /* extra-qualification */, 6628, /* DiagArray314 */ 857, 0, R"()")
DIAG_ENTRY(ExtraSemi /* extra-semi */, 6648, /* DiagArray315 */ 859, /* DiagSubGroup315 */ 283, R"()")
DIAG_ENTRY(ExtraSemiStmt /* extra-semi-stmt */, 6659, /* DiagArray316 */ 862, /* DiagSubGroup316 */ 286, R"()")
DIAG_ENTRY(ExtraTokens /* extra-tokens */, 6675, /* DiagArray317 */ 864, 0, R"()")
DIAG_ENTRY(ExtractAPIMisuse /* extractapi-misuse */, 6688, /* DiagArray318 */ 867, 0, R"()")
DIAG_ENTRY(FinalDtorNonFinalClass /* final-dtor-non-final-class */, 6706, /* DiagArray319 */ 869, 0, R"()")
DIAG_ENTRY(FinalMacro /* final-macro */, 6733, /* DiagArray320 */ 871, 0, R"()")
DIAG_ENTRY(anonymous_146 /* fixed-enum-extension */, 6745, /* DiagArray321 */ 873, 0, R"()")
DIAG_ENTRY(anonymous_80 /* fixed-point-overflow */, 6766, /* DiagArray322 */ 875, 0, R"()")
DIAG_ENTRY(FlagEnum /* flag-enum */, 6787, /* DiagArray323 */ 877, 0, R"()")
DIAG_ENTRY(FlexibleArrayExtensions /* flexible-array-extensions */, 6797, /* DiagArray324 */ 879, 0, R"()")
DIAG_ENTRY(FloatConversion /* float-conversion */, 6823, /* DiagArray325 */ 882, /* DiagSubGroup325 */ 288, R"()")
DIAG_ENTRY(anonymous_249 /* float-equal */, 6840, /* DiagArray326 */ 884, 0, R"()")
DIAG_ENTRY(FloatOverflowConversion /* float-overflow-conversion */, 6852, /* DiagArray327 */ 886, 0, R"()")
DIAG_ENTRY(FloatZeroConversion /* float-zero-conversion */, 6878, /* DiagArray328 */ 889, 0, R"()")
DIAG_ENTRY(ForLoopAnalysis /* for-loop-analysis */, 6900, /* DiagArray329 */ 891, 0, R"()")
DIAG_ENTRY(Format /* format */, 6918, /* DiagArray330 */ 894, /* DiagSubGroup330 */ 291, R"()")
DIAG_ENTRY(FormatExtraArgs /* format-extra-args */, 6925, /* DiagArray331 */ 922, 0, R"()")
DIAG_ENTRY(FormatInsufficientArgs /* format-insufficient-args */, 6943, /* DiagArray332 */ 924, 0, R"()")
DIAG_ENTRY(FormatInvalidSpecifier /* format-invalid-specifier */, 6968, /* DiagArray333 */ 926, 0, R"()")
DIAG_ENTRY(FormatNonStandard /* format-non-iso */, 6993, /* DiagArray334 */ 928, 0, R"()")
DIAG_ENTRY(FormatNonLiteral /* format-nonliteral */, 7008, /* DiagArray335 */ 932, 0, R"()")
DIAG_ENTRY(FormatOverflow /* format-overflow */, 7026, /* DiagArray336 */ 934, /* DiagSubGroup336 */ 301, R"()")
DIAG_ENTRY(FormatOverflowNonKprintf /* format-overflow-non-kprintf */, 7042, /* DiagArray337 */ 936, 0, R"()")
DIAG_ENTRY(FormatPedantic /* format-pedantic */, 7070, /* DiagArray338 */ 938, 0, R"()")
DIAG_ENTRY(FormatSecurity /* format-security */, 7086, /* DiagArray339 */ 941, 0, R"()")
DIAG_ENTRY(FormatSignedness /* format-signedness */, 7102, /* DiagArray340 */ 943, 0, R"()")
DIAG_ENTRY(FormatTruncation /* format-truncation */, 7120, /* DiagArray341 */ 945, /* DiagSubGroup341 */ 303, R"()")
DIAG_ENTRY(FormatTruncationNonKprintf /* format-truncation-non-kprintf */, 7138, /* DiagArray342 */ 947, 0, R"()")
DIAG_ENTRY(FormatTypeConfusion /* format-type-confusion */, 7168, /* DiagArray343 */ 949, 0, R"()")
DIAG_ENTRY(FormatY2K /* format-y2k */, 7190, 0, 0, R"()")
DIAG_ENTRY(FormatZeroLength /* format-zero-length */, 7201, /* DiagArray345 */ 951, 0, R"()")
DIAG_ENTRY(Format2 /* format=2 */, 7220, 0, /* DiagSubGroup346 */ 305, R"()")
DIAG_ENTRY(FortifySource /* fortify-source */, 7229, /* DiagArray347 */ 953, /* DiagSubGroup347 */ 309, R"()")
DIAG_ENTRY(FourByteMultiChar /* four-char-constants */, 7244, /* DiagArray348 */ 958, 0, R"()")
DIAG_ENTRY(FrameAddress /* frame-address */, 7264, /* DiagArray349 */ 960, 0, R"()")
DIAG_ENTRY(BackendFrameLargerThan /* frame-larger-than */, 7278, /* DiagArray350 */ 962, 0, R"(More fine grained information about the stack layout is available by adding the
`-Rpass-analysis=stack-frame-layout` command-line flag to the compiler
invocation.

The diagnostic information can be saved to a file in a machine readable format,
like YAML by adding the `-foptimization-record-file=<file>` command-line flag.

Results can be filtered by function name by passing
`-mllvm -filter-print-funcs=foo`, where `foo` is the target function's name.

   .. code-block:: console

      clang -c a.cpp -Rpass-analysis=stack-frame-layout -mllvm -filter-print-funcs=foo

   .. code-block:: console

      clang -c a.cpp -Rpass-analysis=stack-frame-layout -foptimization-record-file=<file>)")
DIAG_ENTRY(anonymous_77 /* frame-larger-than= */, 7296, 0, /* DiagSubGroup351 */ 312, R"()")
DIAG_ENTRY(FrameworkIncludePrivateFromPublic /* framework-include-private-from-public */, 7315, /* DiagArray352 */ 965, 0, R"()")
DIAG_ENTRY(FreeNonHeapObject /* free-nonheap-object */, 7353, /* DiagArray353 */ 967, 0, R"()")
DIAG_ENTRY(anonymous_190 /* friend-enum */, 7373, /* DiagArray354 */ 969, 0, R"()")
DIAG_ENTRY(FunctionDefInObjCContainer /* function-def-in-objc-container */, 7385, /* DiagArray355 */ 971, 0, R"()")
DIAG_ENTRY(FunctionMultiVersioning /* function-multiversion */, 7416, /* DiagArray356 */ 973, /* DiagSubGroup356 */ 314, R"()")
DIAG_ENTRY(FUseLdPath /* fuse-ld-path */, 7438, /* DiagArray357 */ 978, 0, R"()")
DIAG_ENTRY(FutureAttrs /* future-attribute-extensions */, 7451, 0, /* DiagSubGroup358 */ 316, R"()")
DIAG_ENTRY(FutureCompat /* future-compat */, 7479, 0, 0, R"()")
DIAG_ENTRY(GccCompat /* gcc-compat */, 7493, /* DiagArray360 */ 980, 0, R"()")
DIAG_ENTRY(anonymous_150 /* generic-type-extension */, 7504, /* DiagArray361 */ 992, 0, R"()")
DIAG_ENTRY(GlobalConstructors /* global-constructors */, 7527, /* DiagArray362 */ 994, 0, R"(Emit a warning for each variable declaration that generates code run at startup.)")
DIAG_ENTRY(GlobalISel /* global-isel */, 7547, /* DiagArray363 */ 997, 0, R"()")
DIAG_ENTRY(GNU /* gnu */, 7559, 0, /* DiagSubGroup364 */ 321, R"()")
DIAG_ENTRY(GNUAlignofExpression /* gnu-alignof-expression */, 7563, /* DiagArray365 */ 1000, 0, R"()")
DIAG_ENTRY(GNUAnonymousStruct /* gnu-anonymous-struct */, 7586, /* DiagArray366 */ 1002, 0, R"()")
DIAG_ENTRY(anonymous_259 /* gnu-array-member-paren-init */, 7607, /* DiagArray367 */ 1004, 0, R"()")
DIAG_ENTRY(GNUAutoType /* gnu-auto-type */, 7635, /* DiagArray368 */ 1006, 0, R"()")
DIAG_ENTRY(GNUBinaryLiteral /* gnu-binary-literal */, 7649, 0, 0, R"()")
DIAG_ENTRY(GNUCaseRange /* gnu-case-range */, 7668, /* DiagArray370 */ 1008, 0, R"()")
DIAG_ENTRY(GNUComplexInteger /* gnu-complex-integer */, 7683, /* DiagArray371 */ 1010, 0, R"()")
DIAG_ENTRY(GNUCompoundLiteralInitializer /* gnu-compound-literal-initializer */, 7703, /* DiagArray372 */ 1012, 0, R"()")
DIAG_ENTRY(GNUConditionalOmittedOperand /* gnu-conditional-omitted-operand */, 7736, /* DiagArray373 */ 1014, 0, R"()")
DIAG_ENTRY(GNUDesignator /* gnu-designator */, 7768, /* DiagArray374 */ 1016, 0, R"()")
DIAG_ENTRY(anonymous_1 /* gnu-empty-initializer */, 7783, 0, 0, R"()")
DIAG_ENTRY(GNUEmptyStruct /* gnu-empty-struct */, 7805, /* DiagArray376 */ 1020, 0, R"()")
DIAG_ENTRY(GNUFlexibleArrayInitializer /* gnu-flexible-array-initializer */, 7822, /* DiagArray377 */ 1024, 0, R"()")
DIAG_ENTRY(GNUFlexibleArrayUnionMember /* gnu-flexible-array-union-member */, 7853, /* DiagArray378 */ 1026, 0, R"()")
DIAG_ENTRY(GNUFoldingConstant /* gnu-folding-constant */, 7885, /* DiagArray379 */ 1028, 0, R"()")
DIAG_ENTRY(GNUImaginaryConstant /* gnu-imaginary-constant */, 7906, /* DiagArray380 */ 1032, 0, R"()")
DIAG_ENTRY(GNUIncludeNext /* gnu-include-next */, 7929, /* DiagArray381 */ 1034, 0, R"()")
DIAG_ENTRY(anonymous_214 /* gnu-inline-cpp-without-extern */, 7946, /* DiagArray382 */ 1036, 0, R"()")
DIAG_ENTRY(GNULabelsAsValue /* gnu-label-as-value */, 7976, /* DiagArray383 */ 1038, 0, R"()")
DIAG_ENTRY(GNULineMarker /* gnu-line-marker */, 7995, /* DiagArray384 */ 1041, 0, R"()")
DIAG_ENTRY(GNUNullPointerArithmetic /* gnu-null-pointer-arithmetic */, 8011, /* DiagArray385 */ 1043, 0, R"()")
DIAG_ENTRY(GNUOffsetofExtensions /* gnu-offsetof-extensions */, 8039, 0, 0, R"()")
DIAG_ENTRY(GNUPointerArith /* gnu-pointer-arith */, 8063, /* DiagArray387 */ 1045, 0, R"()")
DIAG_ENTRY(GNURedeclaredEnum /* gnu-redeclared-enum */, 8081, /* DiagArray388 */ 1049, 0, R"()")
DIAG_ENTRY(GNUStatementExpression /* gnu-statement-expression */, 8101, /* DiagArray389 */ 1051, /* DiagSubGroup389 */ 353, R"()")
DIAG_ENTRY(GNUStatementExpressionFromMacroExpansion /* gnu-statement-expression-from-macro-expansion */, 8126, /* DiagArray390 */ 1053, 0, R"()")
DIAG_ENTRY(GNUStaticFloatInit /* gnu-static-float-init */, 8172, /* DiagArray391 */ 1055, 0, R"()")
DIAG_ENTRY(GNUStringLiteralOperatorTemplate /* gnu-string-literal-operator-template */, 8194, /* DiagArray392 */ 1057, 0, R"()")
DIAG_ENTRY(GNUUnionCast /* gnu-union-cast */, 8231, /* DiagArray393 */ 1059, 0, R"()")
DIAG_ENTRY(GNUVariableSizedTypeNotAtEnd /* gnu-variable-sized-type-not-at-end */, 8246, /* DiagArray394 */ 1061, 0, R"()")
DIAG_ENTRY(GNUZeroLineDirective /* gnu-zero-line-directive */, 8281, /* DiagArray395 */ 1063, 0, R"()")
DIAG_ENTRY(GNUZeroVariadicMacroArguments /* gnu-zero-variadic-macro-arguments */, 8305, /* DiagArray396 */ 1065, 0, R"()")
DIAG_ENTRY(anonymous_278 /* gpu-maybe-wrong-side */, 8339, /* DiagArray397 */ 1067, 0, R"()")
DIAG_ENTRY(anonymous_143 /* header-guard */, 8360, /* DiagArray398 */ 1069, 0, R"()")
DIAG_ENTRY(HeaderHygiene /* header-hygiene */, 8373, /* DiagArray399 */ 1071, 0, R"()")
DIAG_ENTRY(anonymous_84 /* higher-precision-fp */, 8388, /* DiagArray400 */ 1073, 0, R"()")
DIAG_ENTRY(HIPOpenMPOffloading /* hip-omp-target-directives */, 8408, /* DiagArray401 */ 1075, 0, R"()")
DIAG_ENTRY(HIPOnly /* hip-only */, 8434, /* DiagArray402 */ 1077, 0, R"()")
DIAG_ENTRY(HLSLExtension /* hlsl-extensions */, 8443, /* DiagArray403 */ 1079, 0, R"()")
DIAG_ENTRY(anonymous_273 /* idiomatic-parentheses */, 8459, /* DiagArray404 */ 1081, 0, R"()")
DIAG_ENTRY(IgnoredAttributes /* ignored-attributes */, 8481, /* DiagArray405 */ 1083, 0, R"()")
DIAG_ENTRY(anonymous_217 /* ignored-availability-without-sdk-settings */, 8500, /* DiagArray406 */ 1172, 0, R"()")
DIAG_ENTRY(IgnoredGCH /* ignored-gch */, 8542, /* DiagArray407 */ 1174, 0, R"()")
DIAG_ENTRY(IgnoredOptimizationArgument /* ignored-optimization-argument */, 8554, /* DiagArray408 */ 1177, 0, R"()")
DIAG_ENTRY(IgnoredPragmaIntrinsic /* ignored-pragma-intrinsic */, 8584, /* DiagArray409 */ 1180, 0, R"()")
DIAG_ENTRY(IgnoredPragmaOptimize /* ignored-pragma-optimize */, 8609, 0, 0, R"()")
DIAG_ENTRY(IgnoredPragmas /* ignored-pragmas */, 8633, /* DiagArray411 */ 1182, /* DiagSubGroup411 */ 355, R"()")
DIAG_ENTRY(IgnoredQualifiers /* ignored-qualifiers */, 8649, /* DiagArray412 */ 1232, /* DiagSubGroup412 */ 358, R"()")
DIAG_ENTRY(IgnoredReferenceQualifiers /* ignored-reference-qualifiers */, 8668, /* DiagArray413 */ 1237, 0, R"()")
DIAG_ENTRY(Implicit /* implicit */, 8697, 0, /* DiagSubGroup414 */ 360, R"()")
DIAG_ENTRY(ImplicitAtomic /* implicit-atomic-properties */, 8706, /* DiagArray415 */ 1239, 0, R"()")
DIAG_ENTRY(ImplicitConstIntFloatConversion /* implicit-const-int-float-conversion */, 8733, /* DiagArray416 */ 1242, 0, R"()")
DIAG_ENTRY(ImplicitConversionFloatingPointToBool /* implicit-conversion-floating-point-to-bool */, 8769, /* DiagArray417 */ 1244, 0, R"()")
DIAG_ENTRY(anonymous_289 /* implicit-exception-spec-mismatch */, 8812, /* DiagArray418 */ 1246, 0, R"()")
DIAG_ENTRY(ImplicitFallthrough /* implicit-fallthrough */, 8845, /* DiagArray419 */ 1248, /* DiagSubGroup419 */ 363, R"()")
DIAG_ENTRY(ImplicitFallthroughPerFunction /* implicit-fallthrough-per-function */, 8866, /* DiagArray420 */ 1250, 0, R"()")
DIAG_ENTRY(ImplicitFixedPointConversion /* implicit-fixed-point-conversion */, 8900, /* DiagArray421 */ 1252, 0, R"()")
DIAG_ENTRY(ImplicitFloatConversion /* implicit-float-conversion */, 8932, /* DiagArray422 */ 1254, /* DiagSubGroup422 */ 365, R"()")
DIAG_ENTRY(ImplicitFunctionDeclare /* implicit-function-declaration */, 8958, /* DiagArray423 */ 1257, 0, R"()")
DIAG_ENTRY(ImplicitInt /* implicit-int */, 8988, /* DiagArray424 */ 1263, 0, R"()")
DIAG_ENTRY(ImplicitIntConversion /* implicit-int-conversion */, 9001, /* DiagArray425 */ 1267, /* DiagSubGroup425 */ 368, R"()")
DIAG_ENTRY(ImplicitIntFloatConversion /* implicit-int-float-conversion */, 9025, /* DiagArray426 */ 1270, /* DiagSubGroup426 */ 371, R"()")
DIAG_ENTRY(anonymous_185 /* implicit-retain-self */, 9055, /* DiagArray427 */ 1272, 0, R"()")
DIAG_ENTRY(ImplicitlyUnsignedLiteral /* implicitly-unsigned-literal */, 9076, /* DiagArray428 */ 1274, 0, R"()")
DIAG_ENTRY(anonymous_30 /* import */, 9104, 0, 0, R"()")
DIAG_ENTRY(anonymous_136 /* import-preprocessor-directive-pedantic */, 9111, /* DiagArray430 */ 1276, 0, R"()")
DIAG_ENTRY(anonymous_286 /* inaccessible-base */, 9150, /* DiagArray431 */ 1278, 0, R"()")
DIAG_ENTRY(anonymous_142 /* include-angled-in-module-purview */, 9168, /* DiagArray432 */ 1280, 0, R"()")
DIAG_ENTRY(anonymous_126 /* include-next-absolute-path */, 9201, /* DiagArray433 */ 1282, 0, R"()")
DIAG_ENTRY(anonymous_125 /* include-next-outside-header */, 9228, /* DiagArray434 */ 1284, 0, R"()")
DIAG_ENTRY(IncompatibleExceptionSpec /* incompatible-exception-spec */, 9256, /* DiagArray435 */ 1286, 0, R"()")
DIAG_ENTRY(IncompatibleFunctionPointerTypes /* incompatible-function-pointer-types */, 9284, /* DiagArray436 */ 1289, 0, R"()")
DIAG_ENTRY(anonymous_275 /* incompatible-function-pointer-types-strict */, 9320, /* DiagArray437 */ 1291, 0, R"()")
DIAG_ENTRY(anonymous_168 /* incompatible-library-redeclaration */, 9363, /* DiagArray438 */ 1293, 0, R"()")
DIAG_ENTRY(IncompatibleMSPragmaSection /* incompatible-ms-pragma-section */, 9398, /* DiagArray439 */ 1295, 0, R"()")
DIAG_ENTRY(IncompatibleMSStruct /* incompatible-ms-struct */, 9429, /* DiagArray440 */ 1297, 0, R"()")
DIAG_ENTRY(IncompatiblePointerTypes /* incompatible-pointer-types */, 9452, /* DiagArray441 */ 1300, /* DiagSubGroup441 */ 373, R"()")
DIAG_ENTRY(IncompatiblePointerTypesDiscardsQualifiers /* incompatible-pointer-types-discards-qualifiers */, 9479, /* DiagArray442 */ 1302, 0, R"()")
DIAG_ENTRY(anonymous_175 /* incompatible-property-type */, 9526, /* DiagArray443 */ 1306, 0, R"()")
DIAG_ENTRY(anonymous_98 /* incompatible-sysroot */, 9553, /* DiagArray444 */ 1308, 0, R"()")
DIAG_ENTRY(IncompleteFrameworkModuleDeclaration /* incomplete-framework-module-declaration */, 9574, /* DiagArray445 */ 1310, 0, R"()")
DIAG_ENTRY(anonymous_177 /* incomplete-implementation */, 9614, /* DiagArray446 */ 1312, 0, R"()")
DIAG_ENTRY(IncompleteModule /* incomplete-module */, 9640, 0, /* DiagSubGroup447 */ 376, R"()")
DIAG_ENTRY(anonymous_167 /* incomplete-setjmp-declaration */, 9658, /* DiagArray448 */ 1314, 0, R"()")
DIAG_ENTRY(IncompleteUmbrella /* incomplete-umbrella */, 9688, /* DiagArray449 */ 1316, 0, R"()")
DIAG_ENTRY(MicrosoftInconsistentDllImport /* inconsistent-dllimport */, 9708, /* DiagArray450 */ 1320, 0, R"()")
DIAG_ENTRY(CXX11WarnInconsistentOverrideDestructor /* inconsistent-missing-destructor-override */, 9731, /* DiagArray451 */ 1323, 0, R"()")
DIAG_ENTRY(CXX11WarnInconsistentOverrideMethod /* inconsistent-missing-override */, 9772, /* DiagArray452 */ 1325, 0, R"()")
DIAG_ENTRY(IncrementBool /* increment-bool */, 9802, /* DiagArray453 */ 1327, /* DiagSubGroup453 */ 379, R"()")
DIAG_ENTRY(InfiniteRecursion /* infinite-recursion */, 9817, /* DiagArray454 */ 1329, 0, R"()")
DIAG_ENTRY(anonymous_31 /* init-self */, 9836, 0, 0, R"()")
DIAG_ENTRY(InitializerOverrides /* initializer-overrides */, 9846, /* DiagArray456 */ 1331, 0, R"()")
DIAG_ENTRY(anonymous_194 /* injected-class-name */, 9868, /* DiagArray457 */ 1335, 0, R"()")
DIAG_ENTRY(anonymous_32 /* inline */, 9888, 0, 0, R"()")
DIAG_ENTRY(BackendInlineAsm /* inline-asm */, 9895, /* DiagArray459 */ 1337, 0, R"()")
DIAG_ENTRY(InlineNamespaceReopenedNoninline /* inline-namespace-reopened-noninline */, 9906, /* DiagArray460 */ 1339, 0, R"()")
DIAG_ENTRY(anonymous_287 /* inline-new-delete */, 9942, /* DiagArray461 */ 1341, 0, R"()")
DIAG_ENTRY(InstallAPIViolation /* installapi-violation */, 9960, /* DiagArray462 */ 1343, 0, R"()")
DIAG_ENTRY(anonymous_231 /* instantiation-after-specialization */, 9981, /* DiagArray463 */ 1357, 0, R"()")
DIAG_ENTRY(IntConversion /* int-conversion */, 10016, /* DiagArray464 */ 1359, 0, R"()")
DIAG_ENTRY(anonymous_66 /* int-conversions */, 10031, 0, /* DiagSubGroup465 */ 381, R"()")
DIAG_ENTRY(IntInBoolContext /* int-in-bool-context */, 10047, /* DiagArray466 */ 1362, 0, R"()")
DIAG_ENTRY(IntToPointerCast /* int-to-pointer-cast */, 10067, /* DiagArray467 */ 1365, /* DiagSubGroup467 */ 383, R"()")
DIAG_ENTRY(IntToVoidPointerCast /* int-to-void-pointer-cast */, 10087, /* DiagArray468 */ 1367, 0, R"()")
DIAG_ENTRY(anonymous_79 /* integer-overflow */, 10112, /* DiagArray469 */ 1369, 0, R"()")
DIAG_ENTRY(InvalidCommandLineArgument /* invalid-command-line-argument */, 10129, /* DiagArray470 */ 1371, /* DiagSubGroup470 */ 385, R"()")
DIAG_ENTRY(anonymous_197 /* invalid-constexpr */, 10159, /* DiagArray471 */ 1383, 0, R"()")
DIAG_ENTRY(anonymous_89 /* invalid-feature-combination */, 10177, /* DiagArray472 */ 1385, 0, R"()")
DIAG_ENTRY(ObjCInvalidIBOutletProperty /* invalid-iboutlet */, 10205, /* DiagArray473 */ 1387, 0, R"()")
DIAG_ENTRY(anonymous_211 /* invalid-initializer-from-system-header */, 10222, /* DiagArray474 */ 1390, 0, R"()")
DIAG_ENTRY(InvalidIOSDeploymentTarget /* invalid-ios-deployment-target */, 10261, /* DiagArray475 */ 1392, 0, R"()")
DIAG_ENTRY(anonymous_223 /* invalid-no-builtin-names */, 10291, /* DiagArray476 */ 1394, 0, R"()")
DIAG_ENTRY(InvalidNoreturn /* invalid-noreturn */, 10316, /* DiagArray477 */ 1396, 0, R"()")
DIAG_ENTRY(InvalidOffsetof /* invalid-offsetof */, 10333, /* DiagArray478 */ 1399, 0, R"()")
DIAG_ENTRY(InvalidOrNonExistentDirectory /* invalid-or-nonexistent-directory */, 10350, /* DiagArray479 */ 1402, 0, R"()")
DIAG_ENTRY(anonymous_229 /* invalid-partial-specialization */, 10383, /* DiagArray480 */ 1404, 0, R"()")
DIAG_ENTRY(anonymous_33 /* invalid-pch */, 10414, 0, 0, R"()")
DIAG_ENTRY(InvalidPPToken /* invalid-pp-token */, 10426, /* DiagArray482 */ 1406, 0, R"()")
DIAG_ENTRY(InvalidSourceEncoding /* invalid-source-encoding */, 10443, /* DiagArray483 */ 1409, 0, R"()")
DIAG_ENTRY(anonymous_188 /* invalid-static-assert-message */, 10467, /* DiagArray484 */ 1412, 0, R"()")
DIAG_ENTRY(anonymous_139 /* invalid-token-paste */, 10497, /* DiagArray485 */ 1414, 0, R"()")
DIAG_ENTRY(anonymous_124 /* invalid-unevaluated-string */, 10517, /* DiagArray486 */ 1416, 0, R"()")
DIAG_ENTRY(anonymous_117 /* invalid-utf8 */, 10544, /* DiagArray487 */ 1418, 0, R"()")
DIAG_ENTRY(anonymous_270 /* jump-seh-finally */, 10557, /* DiagArray488 */ 1420, 0, R"()")
DIAG_ENTRY(KeywordCompat /* keyword-compat */, 10574, /* DiagArray489 */ 1422, 0, R"()")
DIAG_ENTRY(KeywordAsMacro /* keyword-macro */, 10589, /* DiagArray490 */ 1424, 0, R"()")
DIAG_ENTRY(anonymous_90 /* knl-knm-isa-support-removed */, 10603, /* DiagArray491 */ 1426, 0, R"()")
DIAG_ENTRY(KNRPromotedParameter /* knr-promoted-parameter */, 10631, /* DiagArray492 */ 1428, 0, R"()")
DIAG_ENTRY(anonymous_116 /* language-extension-token */, 10654, /* DiagArray493 */ 1430, 0, R"()")
DIAG_ENTRY(LargeByValueCopy /* large-by-value-copy */, 10679, /* DiagArray494 */ 1432, 0, R"()")
DIAG_ENTRY(LibLTO /* liblto */, 10699, 0, 0, R"()")
DIAG_ENTRY(LinkerWarnings /* linker-warnings */, 10706, /* DiagArray496 */ 1435, 0, R"()")
DIAG_ENTRY(LiteralConversion /* literal-conversion */, 10722, /* DiagArray497 */ 1437, 0, R"()")
DIAG_ENTRY(LiteralRange /* literal-range */, 10741, /* DiagArray498 */ 1440, 0, R"()")
DIAG_ENTRY(LocalTypeTemplateArgs /* local-type-template-args */, 10755, /* DiagArray499 */ 1444, /* DiagSubGroup499 */ 387, R"()")
DIAG_ENTRY(LogicalNotParentheses /* logical-not-parentheses */, 10780, /* DiagArray500 */ 1446, 0, R"()")
DIAG_ENTRY(LogicalOpParentheses /* logical-op-parentheses */, 10804, /* DiagArray501 */ 1448, 0, R"()")
DIAG_ENTRY(LongLong /* long-long */, 10827, /* DiagArray502 */ 1450, /* DiagSubGroup502 */ 389, R"()")
DIAG_ENTRY(LoopAnalysis /* loop-analysis */, 10837, 0, /* DiagSubGroup503 */ 391, R"()")
DIAG_ENTRY(MacroRedefined /* macro-redefined */, 10851, /* DiagArray504 */ 1452, 0, R"()")
DIAG_ENTRY(Main /* main */, 10867, /* DiagArray505 */ 1454, 0, R"()")
DIAG_ENTRY(MainReturnType /* main-return-type */, 10872, /* DiagArray506 */ 1462, 0, R"()")
DIAG_ENTRY(MalformedWarningCheck /* malformed-warning-check */, 10889, /* DiagArray507 */ 1464, 0, R"()")
DIAG_ENTRY(anonymous_244 /* many-braces-around-scalar-init */, 10913, /* DiagArray508 */ 1466, 0, R"()")
DIAG_ENTRY(anonymous_121 /* mathematical-notation-identifier-extension */, 10944, /* DiagArray509 */ 1468, 0, R"()")
DIAG_ENTRY(MaxTokens /* max-tokens */, 10987, /* DiagArray510 */ 1470, 0, R"(The warning is issued if the number of pre-processor tokens exceeds
the token limit, which can be set in three ways:

1. As a limit at a specific point in a file, using the ``clang max_tokens_here``
   pragma:

   .. code-block:: c++

      #pragma clang max_tokens_here 1234

2. As a per-translation unit limit, using the ``-fmax-tokens=`` command-line
   flag:

   .. code-block:: console

      clang -c a.cpp -fmax-tokens=1234

3. As a per-translation unit limit using the ``clang max_tokens_total`` pragma,
   which works like and overrides the ``-fmax-tokens=`` flag:

   .. code-block:: c++

      #pragma clang max_tokens_total 1234

These limits can be helpful in limiting code growth through included files.

Setting a token limit of zero means no limit.

Note that the warning is disabled by default, so -Wmax-tokens must be used
in addition with the pragmas or -fmax-tokens flag to get any warnings.)")
DIAG_ENTRY(MaxUnsignedZero /* max-unsigned-zero */, 10998, /* DiagArray511 */ 1473, 0, R"()")
DIAG_ENTRY(MemsetTransposedArgs /* memset-transposed-args */, 11016, /* DiagArray512 */ 1475, 0, R"()")
DIAG_ENTRY(anonymous_170 /* memsize-comparison */, 11039, /* DiagArray513 */ 1477, 0, R"()")
DIAG_ENTRY(MethodSignatures /* method-signatures */, 11058, /* DiagArray514 */ 1479, 0, R"()")
DIAG_ENTRY(Microsoft /* microsoft */, 11076, 0, /* DiagSubGroup515 */ 394, R"()")
DIAG_ENTRY(MicrosoftAbstract /* microsoft-abstract */, 11086, /* DiagArray516 */ 1482, 0, R"()")
DIAG_ENTRY(MicrosoftAnonTag /* microsoft-anon-tag */, 11105, /* DiagArray517 */ 1484, 0, R"()")
DIAG_ENTRY(MicrosoftCast /* microsoft-cast */, 11124, /* DiagArray518 */ 1487, 0, R"()")
DIAG_ENTRY(MicrosoftCharize /* microsoft-charize */, 11139, /* DiagArray519 */ 1490, 0, R"()")
DIAG_ENTRY(MicrosoftCommentPaste /* microsoft-comment-paste */, 11157, /* DiagArray520 */ 1492, 0, R"()")
DIAG_ENTRY(MicrosoftConstInit /* microsoft-const-init */, 11181, /* DiagArray521 */ 1494, 0, R"()")
DIAG_ENTRY(MicrosoftCppMacro /* microsoft-cpp-macro */, 11202, /* DiagArray522 */ 1496, 0, R"()")
DIAG_ENTRY(MicrosoftDefaultArgRedefinition /* microsoft-default-arg-redefinition */, 11222, /* DiagArray523 */ 1498, 0, R"()")
DIAG_ENTRY(MicrosoftDrectveSection /* microsoft-drectve-section */, 11257, /* DiagArray524 */ 1500, 0, R"()")
DIAG_ENTRY(MicrosoftEndOfFile /* microsoft-end-of-file */, 11283, /* DiagArray525 */ 1502, 0, R"()")
DIAG_ENTRY(MicrosoftEnumForwardReference /* microsoft-enum-forward-reference */, 11305, /* DiagArray526 */ 1504, 0, R"()")
DIAG_ENTRY(MicrosoftEnumValue /* microsoft-enum-value */, 11338, /* DiagArray527 */ 1506, 0, R"()")
DIAG_ENTRY(MicrosoftExceptionSpec /* microsoft-exception-spec */, 11359, /* DiagArray528 */ 1508, 0, R"()")
DIAG_ENTRY(anonymous_149 /* microsoft-exists */, 11384, /* DiagArray529 */ 1514, 0, R"()")
DIAG_ENTRY(MicrosoftExplicitConstructorCall /* microsoft-explicit-constructor-call */, 11401, /* DiagArray530 */ 1516, 0, R"()")
DIAG_ENTRY(MicrosoftExtraQualification /* microsoft-extra-qualification */, 11437, /* DiagArray531 */ 1518, 0, R"()")
DIAG_ENTRY(MicrosoftFixedEnum /* microsoft-fixed-enum */, 11467, /* DiagArray532 */ 1520, 0, R"()")
DIAG_ENTRY(MicrosoftFlexibleArray /* microsoft-flexible-array */, 11488, /* DiagArray533 */ 1522, 0, R"()")
DIAG_ENTRY(MicrosoftGoto /* microsoft-goto */, 11513, /* DiagArray534 */ 1525, 0, R"()")
DIAG_ENTRY(MicrosoftInaccessibleBase /* microsoft-inaccessible-base */, 11528, /* DiagArray535 */ 1527, 0, R"()")
DIAG_ENTRY(MicrosoftInclude /* microsoft-include */, 11556, /* DiagArray536 */ 1529, 0, R"()")
DIAG_ENTRY(MicrosoftInitFromPredefined /* microsoft-init-from-predefined */, 11574, /* DiagArray537 */ 1531, 0, R"()")
DIAG_ENTRY(MicrosoftMutableReference /* microsoft-mutable-reference */, 11605, /* DiagArray538 */ 1533, 0, R"()")
DIAG_ENTRY(MicrosoftPureDefinition /* microsoft-pure-definition */, 11633, /* DiagArray539 */ 1535, 0, R"()")
DIAG_ENTRY(MicrosoftRedeclareStatic /* microsoft-redeclare-static */, 11659, /* DiagArray540 */ 1537, 0, R"()")
DIAG_ENTRY(MicrosoftSealed /* microsoft-sealed */, 11686, /* DiagArray541 */ 1539, 0, R"()")
DIAG_ENTRY(MicrosoftStaticAssert /* microsoft-static-assert */, 11703, /* DiagArray542 */ 1541, 0, R"()")
DIAG_ENTRY(MicrosoftStringLiteralFromPredefined /* microsoft-string-literal-from-predefined */, 11727, /* DiagArray543 */ 1543, 0, R"()")
DIAG_ENTRY(MicrosoftTemplate /* microsoft-template */, 11768, /* DiagArray544 */ 1545, /* DiagSubGroup544 */ 427, R"()")
DIAG_ENTRY(MicrosoftTemplateShadow /* microsoft-template-shadow */, 11787, /* DiagArray545 */ 1556, 0, R"()")
DIAG_ENTRY(MicrosoftUnionMemberReference /* microsoft-union-member-reference */, 11813, /* DiagArray546 */ 1558, 0, R"()")
DIAG_ENTRY(MicrosoftUnqualifiedFriend /* microsoft-unqualified-friend */, 11846, /* DiagArray547 */ 1560, 0, R"()")
DIAG_ENTRY(MicrosoftUsingDecl /* microsoft-using-decl */, 11875, /* DiagArray548 */ 1562, 0, R"()")
DIAG_ENTRY(MicrosoftVoidPseudoDtor /* microsoft-void-pseudo-dtor */, 11896, /* DiagArray549 */ 1564, 0, R"()")
DIAG_ENTRY(MisExpect /* misexpect */, 11923, /* DiagArray550 */ 1566, 0, R"()")
DIAG_ENTRY(MisleadingIndentation /* misleading-indentation */, 11933, /* DiagArray551 */ 1568, 0, R"()")
DIAG_ENTRY(anonymous_266 /* mismatched-new-delete */, 11956, /* DiagArray552 */ 1570, 0, R"()")
DIAG_ENTRY(MismatchedParameterTypes /* mismatched-parameter-types */, 11978, /* DiagArray553 */ 1572, 0, R"()")
DIAG_ENTRY(MismatchedReturnTypes /* mismatched-return-types */, 12005, /* DiagArray554 */ 1574, 0, R"()")
DIAG_ENTRY(MismatchedTags /* mismatched-tags */, 12029, /* DiagArray555 */ 1576, 0, R"()")
DIAG_ENTRY(MissingBraces /* missing-braces */, 12045, /* DiagArray556 */ 1579, 0, R"()")
DIAG_ENTRY(anonymous_283 /* missing-constinit */, 12060, /* DiagArray557 */ 1581, 0, R"()")
DIAG_ENTRY(MissingDeclarations /* missing-declarations */, 12078, /* DiagArray558 */ 1583, 0, R"()")
DIAG_ENTRY(MissingDesignatedFieldInitializers /* missing-designated-field-initializers */, 12099, /* DiagArray559 */ 1588, 0, R"(Warn about designated initializers with some fields missing (only in C++).)")
DIAG_ENTRY(anonymous_193 /* missing-exception-spec */, 12137, /* DiagArray560 */ 1590, 0, R"()")
DIAG_ENTRY(MissingFieldInitializers /* missing-field-initializers */, 12160, /* DiagArray561 */ 1592, /* DiagSubGroup561 */ 429, R"()")
DIAG_ENTRY(anonymous_34 /* missing-format-attribute */, 12187, 0, 0, R"()")
DIAG_ENTRY(anonymous_35 /* missing-include-dirs */, 12212, 0, 0, R"()")
DIAG_ENTRY(MissingMethodReturnType /* missing-method-return-type */, 12233, /* DiagArray564 */ 1594, 0, R"()")
DIAG_ENTRY(anonymous_106 /* missing-multilib */, 12260, /* DiagArray565 */ 1596, 0, R"()")
DIAG_ENTRY(MissingNoEscape /* missing-noescape */, 12277, /* DiagArray566 */ 1598, 0, R"()")
DIAG_ENTRY(MissingNoreturn /* missing-noreturn */, 12294, /* DiagArray567 */ 1600, 0, R"()")
DIAG_ENTRY(anonymous_215 /* missing-prototype-for-cc */, 12311, /* DiagArray568 */ 1603, 0, R"()")
DIAG_ENTRY(anonymous_233 /* missing-prototypes */, 12336, /* DiagArray569 */ 1605, 0, R"()")
DIAG_ENTRY(anonymous_151 /* missing-selector-name */, 12355, /* DiagArray570 */ 1607, 0, R"()")
DIAG_ENTRY(anonymous_97 /* missing-sysroot */, 12377, /* DiagArray571 */ 1609, 0, R"()")
DIAG_ENTRY(anonymous_234 /* missing-variable-declarations */, 12393, /* DiagArray572 */ 1611, 0, R"()")
DIAG_ENTRY(MisspelledAssumption /* misspelled-assumption */, 12423, /* DiagArray573 */ 1613, 0, R"()")
DIAG_ENTRY(HLSLMixPackOffset /* mix-packoffset */, 12445, /* DiagArray574 */ 1615, 0, R"()")
DIAG_ENTRY(ModuleBuild /* module-build */, 12460, /* DiagArray575 */ 1617, 0, R"()")
DIAG_ENTRY(ModuleConflict /* module-conflict */, 12473, /* DiagArray576 */ 1622, 0, R"()")
DIAG_ENTRY(anonymous_111 /* module-file-config-mismatch */, 12489, /* DiagArray577 */ 1625, 0, R"()")
DIAG_ENTRY(ModuleFileExtension /* module-file-extension */, 12517, /* DiagArray578 */ 1627, 0, R"()")
DIAG_ENTRY(ModuleImport /* module-import */, 12539, /* DiagArray579 */ 1629, 0, R"()")
DIAG_ENTRY(anonymous_299 /* module-import-in-extern-c */, 12553, /* DiagArray580 */ 1631, 0, R"()")
DIAG_ENTRY(ModuleIncludeDirectiveTranslation /* module-include-translation */, 12579, /* DiagArray581 */ 1633, 0, R"()")
DIAG_ENTRY(ModuleLock /* module-lock */, 12606, /* DiagArray582 */ 1635, 0, R"()")
DIAG_ENTRY(anonymous_302 /* modules-ambiguous-internal-linkage */, 12618, /* DiagArray583 */ 1637, 0, R"()")
DIAG_ENTRY(anonymous_300 /* modules-import-nested-redundant */, 12653, /* DiagArray584 */ 1639, 0, R"()")
DIAG_ENTRY(Most /* most */, 12685, 0, /* DiagSubGroup585 */ 431, R"()")
DIAG_ENTRY(Move /* move */, 12690, 0, /* DiagSubGroup586 */ 469, R"()")
DIAG_ENTRY(anonymous_76 /* msvc-include */, 12695, 0, /* DiagSubGroup587 */ 474, R"()")
DIAG_ENTRY(anonymous_102 /* msvc-not-found */, 12708, /* DiagArray588 */ 1641, 0, R"()")
DIAG_ENTRY(MultiGPU /* multi-gpu */, 12723, /* DiagArray589 */ 1643, 0, R"()")
DIAG_ENTRY(MultiChar /* multichar */, 12733, /* DiagArray590 */ 1645, 0, R"()")
DIAG_ENTRY(anonymous_288 /* multiple-move-vbase */, 12743, /* DiagArray591 */ 1647, 0, R"()")
DIAG_ENTRY(anonymous_85 /* nan-infinity-disabled */, 12763, /* DiagArray592 */ 1649, 0, R"(This warning is enabled when source code using the macros ``INFINITY`` or ``NAN``
is compiled with floating-point options preventing these two values. This can
lead to undefined behavior. Check the order of command line arguments that modify
this behavior, such as ``-ffast-math``, ``-fhonor-infinities``, and
``-fhonor-nans`` (etc), as well as ``#pragma`` directives if this diagnostic is
generated unexpectedly.)")
DIAG_ENTRY(anonymous_24 /* narrowing */, 12785, 0, /* DiagSubGroup593 */ 476, R"()")
DIAG_ENTRY(anonymous_285 /* nested-anon-types */, 12795, /* DiagArray594 */ 1651, 0, R"()")
DIAG_ENTRY(anonymous_36 /* nested-externs */, 12813, 0, 0, R"()")
DIAG_ENTRY(OperatorNewReturnsNull /* new-returns-null */, 12828, /* DiagArray596 */ 1653, 0, R"()")
DIAG_ENTRY(NewlineEOF /* newline-eof */, 12845, /* DiagArray597 */ 1655, 0, R"()")
DIAG_ENTRY(NoDeref /* noderef */, 12857, /* DiagArray598 */ 1658, 0, R"()")
DIAG_ENTRY(NoexceptType /* noexcept-type */, 12865, 0, /* DiagSubGroup599 */ 478, R"()")
DIAG_ENTRY(anonymous_173 /* non-c-typedef-for-linkage */, 12879, /* DiagArray600 */ 1662, 0, R"()")
DIAG_ENTRY(NonGCC /* non-gcc */, 12905, 0, /* DiagSubGroup601 */ 480, R"()")
DIAG_ENTRY(NonLiteralNullConversion /* non-literal-null-conversion */, 12913, /* DiagArray602 */ 1664, 0, R"()")
DIAG_ENTRY(NonModularIncludeInFrameworkModule /* non-modular-include-in-framework-module */, 12941, /* DiagArray603 */ 1666, 0, R"()")
DIAG_ENTRY(NonModularIncludeInModule /* non-modular-include-in-module */, 12981, /* DiagArray604 */ 1668, /* DiagSubGroup604 */ 484, R"()")
DIAG_ENTRY(NonPODVarargs /* non-pod-varargs */, 13011, /* DiagArray605 */ 1670, 0, R"()")
DIAG_ENTRY(anonymous_206 /* non-power-of-two-alignment */, 13027, /* DiagArray606 */ 1675, 0, R"()")
DIAG_ENTRY(NonVirtualDtor /* non-virtual-dtor */, 13054, /* DiagArray607 */ 1677, 0, R"()")
DIAG_ENTRY(NonNull /* nonnull */, 13071, /* DiagArray608 */ 1679, 0, R"()")
DIAG_ENTRY(anonymous_38 /* nonportable-cfstrings */, 13079, 0, 0, R"()")
DIAG_ENTRY(anonymous_127 /* nonportable-include-path */, 13101, /* DiagArray610 */ 1682, 0, R"()")
DIAG_ENTRY(anonymous_93 /* nonportable-private-apinotes-path */, 13126, /* DiagArray611 */ 1684, 0, R"()")
DIAG_ENTRY(anonymous_94 /* nonportable-private-system-apinotes-path */, 13160, /* DiagArray612 */ 1686, 0, R"()")
DIAG_ENTRY(anonymous_128 /* nonportable-system-include-path */, 13201, /* DiagArray613 */ 1688, 0, R"()")
DIAG_ENTRY(anonymous_294 /* nonportable-vector-initialization */, 13233, /* DiagArray614 */ 1690, 0, R"()")
DIAG_ENTRY(NonTrivialMemaccess /* nontrivial-memaccess */, 13267, /* DiagArray615 */ 1692, 0, R"()")
DIAG_ENTRY(NSConsumedMismatch /* nsconsumed-mismatch */, 13288, /* DiagArray616 */ 1694, 0, R"()")
DIAG_ENTRY(NSReturnsMismatch /* nsreturns-mismatch */, 13308, /* DiagArray617 */ 1696, 0, R"()")
DIAG_ENTRY(NullArithmetic /* null-arithmetic */, 13327, /* DiagArray618 */ 1698, 0, R"()")
DIAG_ENTRY(NullCharacter /* null-character */, 13343, /* DiagArray619 */ 1701, 0, R"()")
DIAG_ENTRY(NullConversion /* null-conversion */, 13358, /* DiagArray620 */ 1704, 0, R"()")
DIAG_ENTRY(NullDereference /* null-dereference */, 13374, /* DiagArray621 */ 1706, 0, R"()")
DIAG_ENTRY(NullPointerArithmetic /* null-pointer-arithmetic */, 13391, /* DiagArray622 */ 1709, /* DiagSubGroup622 */ 486, R"()")
DIAG_ENTRY(NullPointerSubtraction /* null-pointer-subtraction */, 13415, /* DiagArray623 */ 1711, 0, R"()")
DIAG_ENTRY(Nullability /* nullability */, 13440, /* DiagArray624 */ 1713, 0, R"()")
DIAG_ENTRY(NullabilityCompleteness /* nullability-completeness */, 13452, /* DiagArray625 */ 1719, /* DiagSubGroup625 */ 488, R"()")
DIAG_ENTRY(NullabilityCompletenessOnArrays /* nullability-completeness-on-arrays */, 13477, /* DiagArray626 */ 1721, 0, R"()")
DIAG_ENTRY(NullabilityDeclSpec /* nullability-declspec */, 13512, /* DiagArray627 */ 1723, 0, R"()")
DIAG_ENTRY(anonymous_145 /* nullability-extension */, 13533, /* DiagArray628 */ 1725, 0, R"()")
DIAG_ENTRY(NullabilityInferredOnNestedType /* nullability-inferred-on-nested-type */, 13555, /* DiagArray629 */ 1727, 0, R"()")
DIAG_ENTRY(NullableToNonNullConversion /* nullable-to-nonnull-conversion */, 13591, /* DiagArray630 */ 1729, 0, R"()")
DIAG_ENTRY(anonymous_182 /* objc-autosynthesis-property-ivar-name-match */, 13622, /* DiagArray631 */ 1731, 0, R"()")
DIAG_ENTRY(ObjCBoolConstantConversion /* objc-bool-constant-conversion */, 13666, /* DiagArray632 */ 1733, 0, R"()")
DIAG_ENTRY(ObjCBoxing /* objc-boxing */, 13696, /* DiagArray633 */ 1735, 0, R"()")
DIAG_ENTRY(anonymous_263 /* objc-circular-container */, 13708, /* DiagArray634 */ 1737, 0, R"()")
DIAG_ENTRY(ObjCCocoaAPI /* objc-cocoa-api */, 13732, 0, /* DiagSubGroup635 */ 490, R"()")
DIAG_ENTRY(ObjCDesignatedInit /* objc-designated-initializers */, 13747, /* DiagArray636 */ 1739, 0, R"()")
DIAG_ENTRY(anonymous_203 /* objc-dictionary-duplicate-keys */, 13776, /* DiagArray637 */ 1746, 0, R"()")
DIAG_ENTRY(anonymous_88 /* objc-duplicate-category-definition */, 13807, /* DiagArray638 */ 1748, 0, R"()")
DIAG_ENTRY(ObjCFlexibleArray /* objc-flexible-array */, 13842, /* DiagArray639 */ 1750, 0, R"()")
DIAG_ENTRY(anonymous_240 /* objc-forward-class-redefinition */, 13862, /* DiagArray640 */ 1753, 0, R"()")
DIAG_ENTRY(anonymous_241 /* objc-interface-ivars */, 13894, /* DiagArray641 */ 1755, 0, R"()")
DIAG_ENTRY(ObjCLiteralComparison /* objc-literal-compare */, 13915, /* DiagArray642 */ 1757, /* DiagSubGroup642 */ 492, R"()")
DIAG_ENTRY(ObjCLiteralConversion /* objc-literal-conversion */, 13936, /* DiagArray643 */ 1759, 0, R"()")
DIAG_ENTRY(anonymous_135 /* objc-macro-redefinition */, 13960, /* DiagArray644 */ 1762, 0, R"()")
DIAG_ENTRY(anonymous_187 /* objc-messaging-id */, 13984, /* DiagArray645 */ 1764, 0, R"()")
DIAG_ENTRY(MethodAccess /* objc-method-access */, 14002, /* DiagArray646 */ 1766, 0, R"()")
DIAG_ENTRY(anonymous_183 /* objc-missing-property-synthesis */, 14021, /* DiagArray647 */ 1773, 0, R"()")
DIAG_ENTRY(ObjCMissingSuperCalls /* objc-missing-super-calls */, 14053, /* DiagArray648 */ 1775, 0, R"()")
DIAG_ENTRY(ObjCMultipleMethodNames /* objc-multiple-method-names */, 14078, /* DiagArray649 */ 1777, 0, R"()")
DIAG_ENTRY(ObjCRetainBlockProperty /* objc-noncopy-retain-block-property */, 14105, /* DiagArray650 */ 1779, 0, R"()")
DIAG_ENTRY(ObjCNonUnifiedException /* objc-nonunified-exceptions */, 14140, /* DiagArray651 */ 1781, 0, R"()")
DIAG_ENTRY(ObjCPropertyAssignOnObjectType /* objc-property-assign-on-object-type */, 14167, /* DiagArray652 */ 1783, 0, R"()")
DIAG_ENTRY(ObjCPropertyImpl /* objc-property-implementation */, 14203, /* DiagArray653 */ 1785, 0, R"()")
DIAG_ENTRY(anonymous_178 /* objc-property-implicit-mismatch */, 14232, /* DiagArray654 */ 1790, 0, R"()")
DIAG_ENTRY(anonymous_180 /* objc-property-matches-cocoa-ownership-rule */, 14264, /* DiagArray655 */ 1792, 0, R"()")
DIAG_ENTRY(ObjCPropertyNoAttribute /* objc-property-no-attribute */, 14307, /* DiagArray656 */ 1794, 0, R"()")
DIAG_ENTRY(ObjCNoPropertyAutoSynthesis /* objc-property-synthesis */, 14334, /* DiagArray657 */ 1797, 0, R"()")
DIAG_ENTRY(ObjCProtocolMethodImpl /* objc-protocol-method-implementation */, 14358, /* DiagArray658 */ 1801, 0, R"()")
DIAG_ENTRY(anonymous_181 /* objc-protocol-property-synthesis */, 14394, /* DiagArray659 */ 1803, 0, R"()")
DIAG_ENTRY(ObjCProtocolQualifiers /* objc-protocol-qualifiers */, 14427, /* DiagArray660 */ 1805, 0, R"()")
DIAG_ENTRY(ObjCReadonlyPropertyHasSetter /* objc-readonly-with-setter-property */, 14452, /* DiagArray661 */ 1807, 0, R"()")
DIAG_ENTRY(ObjCRedundantAPIUse /* objc-redundant-api-use */, 14487, 0, /* DiagSubGroup662 */ 494, R"()")
DIAG_ENTRY(ObjCRedundantLiteralUse /* objc-redundant-literal-use */, 14510, /* DiagArray663 */ 1809, 0, R"()")
DIAG_ENTRY(ObjCRootClass /* objc-root-class */, 14537, /* DiagArray664 */ 1811, 0, R"()")
DIAG_ENTRY(ObjCSignedCharBool /* objc-signed-char-bool */, 14553, 0, /* DiagSubGroup665 */ 496, R"()")
DIAG_ENTRY(ObjCSignedCharBoolImplicitFloatConversion /* objc-signed-char-bool-implicit-float-conversion */, 14575, /* DiagArray666 */ 1813, 0, R"()")
DIAG_ENTRY(ObjCSignedCharBoolImplicitIntConversion /* objc-signed-char-bool-implicit-int-conversion */, 14623, /* DiagArray667 */ 1815, 0, R"()")
DIAG_ENTRY(ObjCStringComparison /* objc-string-compare */, 14669, /* DiagArray668 */ 1817, 0, R"()")
DIAG_ENTRY(ObjCStringConcatenation /* objc-string-concatenation */, 14689, /* DiagArray669 */ 1819, 0, R"()")
DIAG_ENTRY(anonymous_264 /* objc-unsafe-perform-selector */, 14715, /* DiagArray670 */ 1821, 0, R"()")
DIAG_ENTRY(ODR /* odr */, 14744, /* DiagArray671 */ 1823, 0, R"()")
DIAG_ENTRY(OldStyleCast /* old-style-cast */, 14748, /* DiagArray672 */ 1842, 0, R"()")
DIAG_ENTRY(anonymous_40 /* old-style-definition */, 14763, 0, 0, R"()")
DIAG_ENTRY(OpenACC /* openacc */, 14784, 0, /* DiagSubGroup674 */ 501, R"()")
DIAG_ENTRY(anonymous_306 /* openacc-deprecated-clause-alias */, 14792, /* DiagArray675 */ 1844, 0, R"()")
DIAG_ENTRY(anonymous_305 /* openacc-self-if-potential-conflict */, 14824, /* DiagArray676 */ 1846, 0, R"()")
DIAG_ENTRY(OpenCLUnsupportedRGBA /* opencl-unsupported-rgba */, 14859, /* DiagArray677 */ 1848, 0, R"()")
DIAG_ENTRY(OpenMP /* openmp */, 14883, 0, /* DiagSubGroup678 */ 503, R"()")
DIAG_ENTRY(OpenMP51Ext /* openmp-51-extensions */, 14890, /* DiagArray679 */ 1850, 0, R"()")
DIAG_ENTRY(OpenMPClauses /* openmp-clauses */, 14911, /* DiagArray680 */ 1852, 0, R"()")
DIAG_ENTRY(OpenMPExtensions /* openmp-extensions */, 14926, /* DiagArray681 */ 1872, 0, R"()")
DIAG_ENTRY(OpenMPLoopForm /* openmp-loop-form */, 14944, /* DiagArray682 */ 1874, 0, R"()")
DIAG_ENTRY(OpenMPMapping /* openmp-mapping */, 14961, /* DiagArray683 */ 1877, 0, R"()")
DIAG_ENTRY(OpenMPTarget /* openmp-target */, 14976, /* DiagArray684 */ 1879, /* DiagSubGroup684 */ 512, R"()")
DIAG_ENTRY(OpenMPTargetException /* openmp-target-exception */, 14990, /* DiagArray685 */ 1883, 0, R"()")
DIAG_ENTRY(OptionIgnored /* option-ignored */, 15014, /* DiagArray686 */ 1886, 0, R"()")
DIAG_ENTRY(OrderedCompareFunctionPointers /* ordered-compare-function-pointers */, 15029, /* DiagArray687 */ 1906, 0, R"()")
DIAG_ENTRY(OutOfLineDeclaration /* out-of-line-declaration */, 15063, /* DiagArray688 */ 1909, 0, R"()")
DIAG_ENTRY(anonymous_165 /* out-of-scope-function */, 15087, /* DiagArray689 */ 1911, 0, R"()")
DIAG_ENTRY(OveralignedType /* over-aligned */, 15109, /* DiagArray690 */ 1913, 0, R"()")
DIAG_ENTRY(anonymous_41 /* overflow */, 15122, 0, 0, R"()")
DIAG_ENTRY(OverlengthStrings /* overlength-strings */, 15131, /* DiagArray692 */ 1915, 0, R"()")
DIAG_ENTRY(OverloadedShiftOpParentheses /* overloaded-shift-op-parentheses */, 15150, /* DiagArray693 */ 1917, 0, R"()")
DIAG_ENTRY(OverloadedVirtual /* overloaded-virtual */, 15182, /* DiagArray694 */ 1919, 0, R"()")
DIAG_ENTRY(anonymous_37 /* override-init */, 15201, 0, /* DiagSubGroup695 */ 514, R"()")
DIAG_ENTRY(anonymous_108 /* override-module */, 15215, /* DiagArray696 */ 1921, 0, R"()")
DIAG_ENTRY(OverridingMethodMismatch /* overriding-method-mismatch */, 15231, /* DiagArray697 */ 1923, 0, R"()")
DIAG_ENTRY(anonymous_96 /* overriding-option */, 15258, /* DiagArray698 */ 1931, 0, R"()")
DIAG_ENTRY(Packed /* packed */, 15276, /* DiagArray699 */ 1933, /* DiagSubGroup699 */ 516, R"()")
DIAG_ENTRY(PackedNonPod /* packed-non-pod */, 15283, /* DiagArray700 */ 1935, 0, R"()")
DIAG_ENTRY(Padded /* padded */, 15298, /* DiagArray701 */ 1937, /* DiagSubGroup701 */ 518, R"()")
DIAG_ENTRY(PaddedBitField /* padded-bitfield */, 15305, /* DiagArray702 */ 1941, 0, R"()")
DIAG_ENTRY(Parentheses /* parentheses */, 15321, /* DiagArray703 */ 1944, /* DiagSubGroup703 */ 520, R"()")
DIAG_ENTRY(ParenthesesOnEquality /* parentheses-equality */, 15333, /* DiagArray704 */ 1948, 0, R"()")
DIAG_ENTRY(anonymous_8 /* partial-availability */, 15354, 0, /* DiagSubGroup705 */ 529, R"()")
DIAG_ENTRY(BackendOptimizationRemark /* pass */, 15375, /* DiagArray706 */ 1950, 0, R"()")
DIAG_ENTRY(BackendOptimizationRemarkAnalysis /* pass-analysis */, 15380, /* DiagArray707 */ 1952, 0, R"()")
DIAG_ENTRY(BackendOptimizationFailure /* pass-failed */, 15394, /* DiagArray708 */ 1956, 0, R"()")
DIAG_ENTRY(BackendOptimizationRemarkMissed /* pass-missed */, 15406, /* DiagArray709 */ 1958, 0, R"()")
DIAG_ENTRY(anonymous_308 /* pch-date-time */, 15418, /* DiagArray710 */ 1960, 0, R"()")
DIAG_ENTRY(anonymous_307 /* pch-vfs-diff */, 15432, /* DiagArray711 */ 1962, 0, R"()")
DIAG_ENTRY(Pedantic /* pedantic */, 15445, /* DiagArray712 */ 1964, /* DiagSubGroup712 */ 531, R"()")
DIAG_ENTRY(OpenCLCoreFeaturesDiagGroup /* pedantic-core-features */, 15454, /* DiagArray713 */ 2047, 0, R"()")
DIAG_ENTRY(PedanticMacros /* pedantic-macros */, 15477, 0, /* DiagSubGroup714 */ 590, R"()")
DIAG_ENTRY(PessimizingMove /* pessimizing-move */, 15493, /* DiagArray715 */ 2050, 0, R"()")
DIAG_ENTRY(PointerArith /* pointer-arith */, 15510, /* DiagArray716 */ 2053, /* DiagSubGroup716 */ 596, R"()")
DIAG_ENTRY(PointerBoolConversion /* pointer-bool-conversion */, 15524, /* DiagArray717 */ 2057, 0, R"()")
DIAG_ENTRY(anonymous_218 /* pointer-compare */, 15548, /* DiagArray718 */ 2060, 0, R"()")
DIAG_ENTRY(anonymous_262 /* pointer-integer-compare */, 15564, /* DiagArray719 */ 2062, 0, R"()")
DIAG_ENTRY(anonymous_274 /* pointer-sign */, 15588, /* DiagArray720 */ 2064, 0, R"()")
DIAG_ENTRY(PointerToEnumCast /* pointer-to-enum-cast */, 15601, /* DiagArray721 */ 2066, /* DiagSubGroup721 */ 598, R"()")
DIAG_ENTRY(PointerToIntCast /* pointer-to-int-cast */, 15622, /* DiagArray722 */ 2068, /* DiagSubGroup722 */ 600, R"()")
DIAG_ENTRY(anonymous_280 /* pointer-type-mismatch */, 15642, /* DiagArray723 */ 2070, 0, R"()")
DIAG_ENTRY(anonymous_95 /* poison-system-directories */, 15664, /* DiagArray724 */ 2072, 0, R"()")
DIAG_ENTRY(ObjCPotentiallyDirectSelector /* potentially-direct-selector */, 15690, /* DiagArray725 */ 2074, 0, R"()")
DIAG_ENTRY(PotentiallyEvaluatedExpression /* potentially-evaluated-expression */, 15718, /* DiagArray726 */ 2076, 0, R"()")
DIAG_ENTRY(PragmaClangAttribute /* pragma-clang-attribute */, 15751, /* DiagArray727 */ 2078, 0, R"()")
DIAG_ENTRY(anonymous_129 /* pragma-once-outside-header */, 15774, /* DiagArray728 */ 2080, 0, R"()")
DIAG_ENTRY(PragmaPack /* pragma-pack */, 15801, /* DiagArray729 */ 2082, /* DiagSubGroup729 */ 603, R"()")
DIAG_ENTRY(PragmaPackSuspiciousInclude /* pragma-pack-suspicious-include */, 15813, /* DiagArray730 */ 2085, 0, R"()")
DIAG_ENTRY(anonymous_130 /* pragma-system-header-outside-header */, 15844, /* DiagArray731 */ 2087, 0, R"()")
DIAG_ENTRY(Pragmas /* pragmas */, 15880, /* DiagArray732 */ 2089, /* DiagSubGroup732 */ 605, R"()")
DIAG_ENTRY(CXXPre14Compat /* pre-c++14-compat */, 15888, /* DiagArray733 */ 2092, 0, R"()")
DIAG_ENTRY(CXXPre14CompatPedantic /* pre-c++14-compat-pedantic */, 15905, 0, /* DiagSubGroup734 */ 610, R"()")
DIAG_ENTRY(CXXPre17Compat /* pre-c++17-compat */, 15931, /* DiagArray735 */ 2104, 0, R"()")
DIAG_ENTRY(CXXPre17CompatPedantic /* pre-c++17-compat-pedantic */, 15948, /* DiagArray736 */ 2122, /* DiagSubGroup736 */ 613, R"()")
DIAG_ENTRY(CXXPre20Compat /* pre-c++20-compat */, 15974, /* DiagArray737 */ 2125, 0, R"()")
DIAG_ENTRY(CXXPre20CompatPedantic /* pre-c++20-compat-pedantic */, 15991, /* DiagArray738 */ 2154, /* DiagSubGroup738 */ 615, R"()")
DIAG_ENTRY(CXXPre23Compat /* pre-c++23-compat */, 16017, /* DiagArray739 */ 2157, 0, R"()")
DIAG_ENTRY(CXXPre23CompatPedantic /* pre-c++23-compat-pedantic */, 16034, 0, /* DiagSubGroup740 */ 617, R"()")
DIAG_ENTRY(CXXPre26Compat /* pre-c++26-compat */, 16060, /* DiagArray741 */ 2172, 0, R"()")
DIAG_ENTRY(CXXPre26CompatPedantic /* pre-c++26-compat-pedantic */, 16077, 0, /* DiagSubGroup742 */ 619, R"()")
DIAG_ENTRY(anonymous_21 /* pre-c++2c-compat */, 16103, 0, /* DiagSubGroup743 */ 621, R"()")
DIAG_ENTRY(anonymous_22 /* pre-c++2c-compat-pedantic */, 16120, 0, /* DiagSubGroup744 */ 623, R"()")
DIAG_ENTRY(CPre11Compat /* pre-c11-compat */, 16146, /* DiagArray745 */ 2177, 0, R"()")
DIAG_ENTRY(CPre11CompatPedantic /* pre-c11-compat-pedantic */, 16161, 0, /* DiagSubGroup746 */ 625, R"()")
DIAG_ENTRY(CPre23Compat /* pre-c23-compat */, 16185, /* DiagArray747 */ 2179, 0, R"()")
DIAG_ENTRY(CPre23CompatPedantic /* pre-c23-compat-pedantic */, 16200, 0, /* DiagSubGroup748 */ 627, R"()")
DIAG_ENTRY(anonymous_13 /* pre-c2x-compat */, 16224, 0, /* DiagSubGroup749 */ 629, R"()")
DIAG_ENTRY(anonymous_14 /* pre-c2x-compat-pedantic */, 16239, 0, /* DiagSubGroup750 */ 631, R"()")
DIAG_ENTRY(OpenMPPre51Compat /* pre-openmp-51-compat */, 16263, /* DiagArray751 */ 2195, 0, R"()")
DIAG_ENTRY(anonymous_161 /* predefined-identifier-outside-function */, 16284, /* DiagArray752 */ 2197, 0, R"()")
DIAG_ENTRY(PrivateExtern /* private-extern */, 16323, /* DiagArray753 */ 2199, 0, R"()")
DIAG_ENTRY(anonymous_141 /* private-header */, 16338, /* DiagArray754 */ 2201, 0, R"()")
DIAG_ENTRY(PrivateModule /* private-module */, 16353, /* DiagArray755 */ 2203, 0, R"()")
DIAG_ENTRY(ProfileInstrMissing /* profile-instr-missing */, 16368, /* DiagArray756 */ 2208, 0, R"()")
DIAG_ENTRY(ProfileInstrOutOfDate /* profile-instr-out-of-date */, 16390, /* DiagArray757 */ 2210, 0, R"()")
DIAG_ENTRY(ProfileInstrUnprofiled /* profile-instr-unprofiled */, 16416, /* DiagArray758 */ 2212, 0, R"()")
DIAG_ENTRY(PropertyAccessDotSyntax /* property-access-dot-syntax */, 16441, /* DiagArray759 */ 2214, 0, R"()")
DIAG_ENTRY(PropertyAttr /* property-attribute-mismatch */, 16468, /* DiagArray760 */ 2216, 0, R"()")
DIAG_ENTRY(Protocol /* protocol */, 16496, /* DiagArray761 */ 2221, 0, R"()")
DIAG_ENTRY(anonymous_176 /* protocol-property-synthesis-ambiguity */, 16505, /* DiagArray762 */ 2223, 0, R"()")
DIAG_ENTRY(anonymous_113 /* psabi */, 16543, /* DiagArray763 */ 2225, 0, R"()")
DIAG_ENTRY(PtrAuthNullPointers /* ptrauth-null-pointers */, 16549, /* DiagArray764 */ 2227, 0, R"()")
DIAG_ENTRY(anonymous_246 /* qualified-void-return-type */, 16571, /* DiagArray765 */ 2230, 0, R"()")
DIAG_ENTRY(FrameworkHdrQuotedInclude /* quoted-include-in-framework-header */, 16598, /* DiagArray766 */ 2232, 0, R"()")
DIAG_ENTRY(RangeLoopAnalysis /* range-loop-analysis */, 16633, 0, /* DiagSubGroup767 */ 633, R"()")
DIAG_ENTRY(RangeLoopBindReference /* range-loop-bind-reference */, 16653, /* DiagArray768 */ 2234, 0, R"()")
DIAG_ENTRY(RangeLoopConstruct /* range-loop-construct */, 16679, /* DiagArray769 */ 2236, 0, R"()")
DIAG_ENTRY(ReadOnlyPlacementChecks /* read-only-types */, 16700, /* DiagArray770 */ 2239, 0, R"()")
DIAG_ENTRY(anonymous_186 /* readonly-iboutlet-property */, 16716, /* DiagArray771 */ 2241, 0, R"()")
DIAG_ENTRY(ObjCReceiver /* receiver-expr */, 16743, /* DiagArray772 */ 2243, 0, R"()")
DIAG_ENTRY(ForwardClassReceiver /* receiver-forward-class */, 16757, /* DiagArray773 */ 2245, 0, R"()")
DIAG_ENTRY(RedeclaredClassMember /* redeclared-class-member */, 16780, /* DiagArray774 */ 2248, 0, R"()")
DIAG_ENTRY(anonymous_189 /* redundant-consteval-if */, 16804, /* DiagArray775 */ 2250, 0, R"()")
DIAG_ENTRY(anonymous_42 /* redundant-decls */, 16827, 0, 0, R"()")
DIAG_ENTRY(RedundantMove /* redundant-move */, 16843, /* DiagArray777 */ 2252, 0, R"()")
DIAG_ENTRY(anonymous_164 /* redundant-parens */, 16858, /* DiagArray778 */ 2254, 0, R"()")
DIAG_ENTRY(Register /* register */, 16875, /* DiagArray779 */ 2256, /* DiagSubGroup779 */ 636, R"()")
DIAG_ENTRY(ReinterpretBaseClass /* reinterpret-base-class */, 16884, /* DiagArray780 */ 2258, 0, R"()")
DIAG_ENTRY(RemarkBackendPlugin /* remark-backend-plugin */, 16907, /* DiagArray781 */ 2260, 0, R"()")
DIAG_ENTRY(Reorder /* reorder */, 16929, 0, /* DiagSubGroup782 */ 638, R"()")
DIAG_ENTRY(ReorderCtor /* reorder-ctor */, 16937, /* DiagArray783 */ 2262, 0, R"()")
DIAG_ENTRY(ReorderInitList /* reorder-init-list */, 16950, /* DiagArray784 */ 2265, 0, R"()")
DIAG_ENTRY(anonymous_224 /* requires-super-attribute */, 16968, /* DiagArray785 */ 2267, 0, R"()")
DIAG_ENTRY(ReservedIdAsMacroAlias /* reserved-id-macro */, 16993, 0, /* DiagSubGroup786 */ 641, R"()")
DIAG_ENTRY(ReservedIdentifier /* reserved-identifier */, 17011, /* DiagArray787 */ 2269, /* DiagSubGroup787 */ 643, R"()")
DIAG_ENTRY(ReservedIdAsMacro /* reserved-macro-identifier */, 17031, /* DiagArray788 */ 2271, 0, R"()")
DIAG_ENTRY(ReservedModuleIdentifier /* reserved-module-identifier */, 17057, /* DiagArray789 */ 2273, 0, R"()")
DIAG_ENTRY(ReservedUserDefinedLiteral /* reserved-user-defined-literal */, 17084, /* DiagArray790 */ 2275, /* DiagSubGroup790 */ 647, R"()")
DIAG_ENTRY(RestrictExpansionMacro /* restrict-expansion */, 17114, /* DiagArray791 */ 2278, 0, R"()")
DIAG_ENTRY(anonymous_239 /* retained-language-linkage */, 17133, /* DiagArray792 */ 2280, 0, R"()")
DIAG_ENTRY(anonymous_29 /* return-local-addr */, 17159, 0, /* DiagSubGroup793 */ 649, R"()")
DIAG_ENTRY(ReturnMismatch /* return-mismatch */, 17177, /* DiagArray794 */ 2282, 0, R"()")
DIAG_ENTRY(ReturnStackAddress /* return-stack-address */, 17193, /* DiagArray795 */ 2286, 0, R"()")
DIAG_ENTRY(ReturnStdMove /* return-std-move */, 17214, 0, 0, R"()")
DIAG_ENTRY(ReturnType /* return-type */, 17230, /* DiagArray797 */ 2290, /* DiagSubGroup797 */ 651, R"()")
DIAG_ENTRY(ReturnTypeCLinkage /* return-type-c-linkage */, 17242, /* DiagArray798 */ 2297, 0, R"()")
DIAG_ENTRY(anonymous_226 /* rewrite-not-bool */, 17264, /* DiagArray799 */ 2300, 0, R"()")
DIAG_ENTRY(RoundTripCC1Args /* round-trip-cc1-args */, 17281, /* DiagArray800 */ 2302, 0, R"()")
DIAG_ENTRY(RTTI /* rtti */, 17301, /* DiagArray801 */ 2304, 0, R"()")
DIAG_ENTRY(SanitizeAddressRemarks /* sanitize-address */, 17306, /* DiagArray802 */ 2307, 0, R"()")
DIAG_ENTRY(anonymous_105 /* sarif-format-unstable */, 17323, /* DiagArray803 */ 2310, 0, R"()")
DIAG_ENTRY(UsedSearchPath /* search-path-usage */, 17345, /* DiagArray804 */ 2312, 0, R"()")
DIAG_ENTRY(Section /* section */, 17363, /* DiagArray805 */ 2314, 0, R"()")
DIAG_ENTRY(Selector /* selector */, 17371, /* DiagArray806 */ 2318, /* DiagSubGroup806 */ 654, R"()")
DIAG_ENTRY(SelectorTypeMismatch /* selector-type-mismatch */, 17380, /* DiagArray807 */ 2320, 0, R"()")
DIAG_ENTRY(SelfAssignment /* self-assign */, 17403, /* DiagArray808 */ 2322, /* DiagSubGroup808 */ 656, R"()")
DIAG_ENTRY(SelfAssignmentField /* self-assign-field */, 17415, /* DiagArray809 */ 2324, 0, R"()")
DIAG_ENTRY(SelfAssignmentOverloaded /* self-assign-overloaded */, 17433, /* DiagArray810 */ 2326, 0, R"()")
DIAG_ENTRY(SelfMove /* self-move */, 17456, /* DiagArray811 */ 2328, 0, R"()")
DIAG_ENTRY(SemiBeforeMethodBody /* semicolon-before-method-body */, 17466, /* DiagArray812 */ 2330, 0, R"()")
DIAG_ENTRY(Sentinel /* sentinel */, 17495, /* DiagArray813 */ 2332, 0, R"()")
DIAG_ENTRY(anonymous_45 /* sequence-point */, 17504, 0, /* DiagSubGroup814 */ 659, R"()")
DIAG_ENTRY(SerializedDiagnostics /* serialized-diagnostics */, 17519, /* DiagArray815 */ 2335, 0, R"()")
DIAG_ENTRY(Shadow /* shadow */, 17542, /* DiagArray816 */ 2339, /* DiagSubGroup816 */ 661, R"()")
DIAG_ENTRY(ShadowAll /* shadow-all */, 17549, 0, /* DiagSubGroup817 */ 664, R"()")
DIAG_ENTRY(ShadowField /* shadow-field */, 17560, /* DiagArray818 */ 2341, 0, R"()")
DIAG_ENTRY(ShadowFieldInConstructor /* shadow-field-in-constructor */, 17573, /* DiagArray819 */ 2343, /* DiagSubGroup819 */ 669, R"()")
DIAG_ENTRY(ShadowFieldInConstructorModified /* shadow-field-in-constructor-modified */, 17601, /* DiagArray820 */ 2345, 0, R"()")
DIAG_ENTRY(ShadowIvar /* shadow-ivar */, 17638, /* DiagArray821 */ 2347, 0, R"()")
DIAG_ENTRY(ShadowUncapturedLocal /* shadow-uncaptured-local */, 17650, /* DiagArray822 */ 2349, 0, R"()")
DIAG_ENTRY(anonymous_251 /* shift-count-negative */, 17674, /* DiagArray823 */ 2351, 0, R"()")
DIAG_ENTRY(anonymous_252 /* shift-count-overflow */, 17695, /* DiagArray824 */ 2353, 0, R"()")
DIAG_ENTRY(anonymous_250 /* shift-negative-value */, 17716, /* DiagArray825 */ 2355, 0, R"()")
DIAG_ENTRY(ShiftOpParentheses /* shift-op-parentheses */, 17737, /* DiagArray826 */ 2357, 0, R"()")
DIAG_ENTRY(anonymous_253 /* shift-overflow */, 17758, /* DiagArray827 */ 2359, 0, R"()")
DIAG_ENTRY(anonymous_254 /* shift-sign-overflow */, 17773, /* DiagArray828 */ 2361, 0, R"()")
DIAG_ENTRY(Shorten64To32 /* shorten-64-to-32 */, 17793, /* DiagArray829 */ 2363, 0, R"()")
DIAG_ENTRY(SignCompare /* sign-compare */, 17810, /* DiagArray830 */ 2365, 0, R"()")
DIAG_ENTRY(SignConversion /* sign-conversion */, 17823, /* DiagArray831 */ 2367, 0, R"()")
DIAG_ENTRY(anonymous_43 /* sign-promo */, 17839, 0, 0, R"()")
DIAG_ENTRY(SignedEnumBitfield /* signed-enum-bitfield */, 17850, /* DiagArray833 */ 2371, 0, R"()")
DIAG_ENTRY(anonymous_296 /* signed-unsigned-wchar */, 17871, /* DiagArray834 */ 2373, 0, R"()")
DIAG_ENTRY(SingleBitBitFieldConstantConversion /* single-bit-bitfield-constant-conversion */, 17893, /* DiagArray835 */ 2375, 0, R"()")
DIAG_ENTRY(SizeofArrayArgument /* sizeof-array-argument */, 17933, /* DiagArray836 */ 2377, 0, R"()")
DIAG_ENTRY(SizeofArrayDecay /* sizeof-array-decay */, 17955, /* DiagArray837 */ 2379, 0, R"()")
DIAG_ENTRY(anonymous_220 /* sizeof-array-div */, 17974, /* DiagArray838 */ 2381, 0, R"()")
DIAG_ENTRY(anonymous_219 /* sizeof-pointer-div */, 17991, /* DiagArray839 */ 2383, 0, R"()")
DIAG_ENTRY(SizeofPointerMemaccess /* sizeof-pointer-memaccess */, 18010, /* DiagArray840 */ 2385, 0, R"()")
DIAG_ENTRY(anonymous_101 /* slash-u-filename */, 18035, /* DiagArray841 */ 2388, 0, R"()")
DIAG_ENTRY(anonymous_87 /* slh-asm-goto */, 18052, /* DiagArray842 */ 2390, 0, R"()")
DIAG_ENTRY(anonymous_91 /* sloc-usage */, 18065, /* DiagArray843 */ 2392, 0, R"()")
DIAG_ENTRY(UninitializedSometimes /* sometimes-uninitialized */, 18076, /* DiagArray844 */ 2394, 0, R"()")
DIAG_ENTRY(BackendSourceMgr /* source-mgr */, 18100, /* DiagArray845 */ 2396, 0, R"()")
DIAG_ENTRY(SourceUsesOpenACC /* source-uses-openacc */, 18111, /* DiagArray846 */ 2398, 0, R"()")
DIAG_ENTRY(SourceUsesOpenMP /* source-uses-openmp */, 18131, /* DiagArray847 */ 2402, 0, R"()")
DIAG_ENTRY(SpirCompat /* spir-compat */, 18150, /* DiagArray848 */ 2411, 0, R"()")
DIAG_ENTRY(anonymous_78 /* spirv-compat */, 18162, 0, /* DiagSubGroup849 */ 671, R"()")
DIAG_ENTRY(anonymous_83 /* stack-exhausted */, 18175, /* DiagArray850 */ 2413, 0, R"()")
DIAG_ENTRY(anonymous_86 /* stack-protector */, 18191, /* DiagArray851 */ 2415, 0, R"()")
DIAG_ENTRY(StaticFloatInit /* static-float-init */, 18207, /* DiagArray852 */ 2417, /* DiagSubGroup852 */ 673, R"()")
DIAG_ENTRY(StaticInInline /* static-in-inline */, 18225, /* DiagArray853 */ 2419, 0, R"()")
DIAG_ENTRY(anonymous_158 /* static-inline-explicit-instantiation */, 18242, /* DiagArray854 */ 2422, 0, R"()")
DIAG_ENTRY(StaticLocalInInline /* static-local-in-inline */, 18279, /* DiagArray855 */ 2424, 0, R"()")
DIAG_ENTRY(UninitializedStaticSelfInit /* static-self-init */, 18302, /* DiagArray856 */ 2426, 0, R"()")
DIAG_ENTRY(anonymous_104 /* stdlibcxx-not-found */, 18319, /* DiagArray857 */ 2428, 0, R"()")
DIAG_ENTRY(anonymous_49 /* strict-aliasing */, 18339, 0, 0, R"()")
DIAG_ENTRY(anonymous_46 /* strict-aliasing=0 */, 18355, 0, 0, R"()")
DIAG_ENTRY(anonymous_47 /* strict-aliasing=1 */, 18373, 0, 0, R"()")
DIAG_ENTRY(anonymous_48 /* strict-aliasing=2 */, 18391, 0, 0, R"()")
DIAG_ENTRY(anonymous_56 /* strict-overflow */, 18409, 0, 0, R"()")
DIAG_ENTRY(anonymous_50 /* strict-overflow=0 */, 18425, 0, 0, R"()")
DIAG_ENTRY(anonymous_51 /* strict-overflow=1 */, 18443, 0, 0, R"()")
DIAG_ENTRY(anonymous_52 /* strict-overflow=2 */, 18461, 0, 0, R"()")
DIAG_ENTRY(anonymous_53 /* strict-overflow=3 */, 18479, 0, 0, R"()")
DIAG_ENTRY(anonymous_54 /* strict-overflow=4 */, 18497, 0, 0, R"()")
DIAG_ENTRY(anonymous_55 /* strict-overflow=5 */, 18515, 0, 0, R"()")
DIAG_ENTRY(ObjCStrictPotentiallyDirectSelector /* strict-potentially-direct-selector */, 18533, /* DiagArray869 */ 2430, /* DiagSubGroup869 */ 675, R"()")
DIAG_ENTRY(anonymous_227 /* strict-primary-template-shadow */, 18568, /* DiagArray870 */ 2432, 0, R"()")
DIAG_ENTRY(StrictPrototypes /* strict-prototypes */, 18599, /* DiagArray871 */ 2434, /* DiagSubGroup871 */ 677, R"()")
DIAG_ENTRY(StrictSelector /* strict-selector-match */, 18617, /* DiagArray872 */ 2436, 0, R"()")
DIAG_ENTRY(StringCompare /* string-compare */, 18639, /* DiagArray873 */ 2438, 0, R"()")
DIAG_ENTRY(StringConcatation /* string-concatenation */, 18654, /* DiagArray874 */ 2440, 0, R"()")
DIAG_ENTRY(StringConversion /* string-conversion */, 18675, /* DiagArray875 */ 2442, 0, R"()")
DIAG_ENTRY(StringPlusChar /* string-plus-char */, 18693, /* DiagArray876 */ 2444, 0, R"()")
DIAG_ENTRY(StringPlusInt /* string-plus-int */, 18710, /* DiagArray877 */ 2446, 0, R"()")
DIAG_ENTRY(anonymous_169 /* strlcpy-strlcat-size */, 18726, /* DiagArray878 */ 2448, 0, R"()")
DIAG_ENTRY(StrncatSize /* strncat-size */, 18747, /* DiagArray879 */ 2450, 0, R"()")
DIAG_ENTRY(CXX11WarnSuggestOverrideDestructor /* suggest-destructor-override */, 18760, /* DiagArray880 */ 2454, 0, R"()")
DIAG_ENTRY(CXX11WarnSuggestOverride /* suggest-override */, 18788, /* DiagArray881 */ 2456, 0, R"()")
DIAG_ENTRY(SuperSubClassMismatch /* super-class-method-mismatch */, 18805, /* DiagArray882 */ 2458, 0, R"()")
DIAG_ENTRY(SuspiciousBzero /* suspicious-bzero */, 18833, /* DiagArray883 */ 2460, 0, R"()")
DIAG_ENTRY(SuspiciousMemaccess /* suspicious-memaccess */, 18850, 0, /* DiagSubGroup884 */ 679, R"()")
DIAG_ENTRY(SwiftNameAttribute /* swift-name-attribute */, 18871, /* DiagArray885 */ 2462, 0, R"()")
DIAG_ENTRY(Switch /* switch */, 18892, /* DiagArray886 */ 2476, 0, R"()")
DIAG_ENTRY(SwitchBool /* switch-bool */, 18899, /* DiagArray887 */ 2480, 0, R"()")
DIAG_ENTRY(SwitchDefault /* switch-default */, 18911, /* DiagArray888 */ 2482, 0, R"()")
DIAG_ENTRY(SwitchEnum /* switch-enum */, 18926, /* DiagArray889 */ 2484, 0, R"()")
DIAG_ENTRY(SyncAlignment /* sync-alignment */, 18938, /* DiagArray890 */ 2486, 0, R"()")
DIAG_ENTRY(anonymous_295 /* sync-fetch-and-nand-semantics-changed */, 18953, /* DiagArray891 */ 2488, 0, R"()")
DIAG_ENTRY(anonymous_44 /* synth */, 18991, 0, 0, R"()")
DIAG_ENTRY(TargetClonesMixedSpecifiers /* target-clones-mixed-specifiers */, 18997, /* DiagArray893 */ 2490, 0, R"()")
DIAG_ENTRY(TautologicalBitwiseCompare /* tautological-bitwise-compare */, 19028, /* DiagArray894 */ 2492, 0, R"()")
DIAG_ENTRY(TautologicalCompare /* tautological-compare */, 19057, /* DiagArray895 */ 2495, /* DiagSubGroup895 */ 685, R"()")
DIAG_ENTRY(TautologicalConstantCompare /* tautological-constant-compare */, 19078, /* DiagArray896 */ 2498, /* DiagSubGroup896 */ 693, R"()")
DIAG_ENTRY(TautologicalInRangeCompare /* tautological-constant-in-range-compare */, 19108, 0, /* DiagSubGroup897 */ 695, R"()")
DIAG_ENTRY(TautologicalOutOfRangeCompare /* tautological-constant-out-of-range-compare */, 19147, /* DiagArray898 */ 2502, 0, R"()")
DIAG_ENTRY(TautologicalNegationCompare /* tautological-negation-compare */, 19190, /* DiagArray899 */ 2504, 0, R"()")
DIAG_ENTRY(TautologicalObjCBoolCompare /* tautological-objc-bool-compare */, 19220, /* DiagArray900 */ 2507, 0, R"()")
DIAG_ENTRY(TautologicalOverlapCompare /* tautological-overlap-compare */, 19251, /* DiagArray901 */ 2509, 0, R"()")
DIAG_ENTRY(TautologicalPointerCompare /* tautological-pointer-compare */, 19280, /* DiagArray902 */ 2511, 0, R"()")
DIAG_ENTRY(TautologicalTypeLimitCompare /* tautological-type-limit-compare */, 19309, /* DiagArray903 */ 2514, 0, R"()")
DIAG_ENTRY(TautologicalUndefinedCompare /* tautological-undefined-compare */, 19341, /* DiagArray904 */ 2516, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedCharZeroCompare /* tautological-unsigned-char-zero-compare */, 19372, /* DiagArray905 */ 2519, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedEnumZeroCompare /* tautological-unsigned-enum-zero-compare */, 19412, /* DiagArray906 */ 2521, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedZeroCompare /* tautological-unsigned-zero-compare */, 19452, /* DiagArray907 */ 2523, 0, R"()")
DIAG_ENTRY(TautologicalValueRangeCompare /* tautological-value-range-compare */, 19487, /* DiagArray908 */ 2525, 0, R"()")
DIAG_ENTRY(anonymous_304 /* tcb-enforcement */, 19520, /* DiagArray909 */ 2527, 0, R"()")
DIAG_ENTRY(anonymous_271 /* template-in-declaration-name */, 19536, /* DiagArray910 */ 2529, 0, R"()")
DIAG_ENTRY(anonymous_258 /* tentative-definition-array */, 19565, /* DiagArray911 */ 2531, 0, R"()")
DIAG_ENTRY(anonymous_257 /* tentative-definition-incomplete-type */, 19592, /* DiagArray912 */ 2533, 0, R"()")
DIAG_ENTRY(ThreadSafety /* thread-safety */, 19629, 0, /* DiagSubGroup913 */ 698, R"()")
DIAG_ENTRY(ThreadSafetyAnalysis /* thread-safety-analysis */, 19643, /* DiagArray914 */ 2535, 0, R"()")
DIAG_ENTRY(ThreadSafetyAttributes /* thread-safety-attributes */, 19666, /* DiagArray915 */ 2554, 0, R"()")
DIAG_ENTRY(ThreadSafetyBeta /* thread-safety-beta */, 19691, /* DiagArray916 */ 2561, 0, R"()")
DIAG_ENTRY(ThreadSafetyNegative /* thread-safety-negative */, 19710, /* DiagArray917 */ 2563, 0, R"()")
DIAG_ENTRY(ThreadSafetyPrecise /* thread-safety-precise */, 19733, /* DiagArray918 */ 2565, 0, R"()")
DIAG_ENTRY(ThreadSafetyReference /* thread-safety-reference */, 19755, /* DiagArray919 */ 2569, /* DiagSubGroup919 */ 703, R"()")
DIAG_ENTRY(ThreadSafetyReferenceReturn /* thread-safety-reference-return */, 19779, /* DiagArray920 */ 2572, 0, R"()")
DIAG_ENTRY(ThreadSafetyVerbose /* thread-safety-verbose */, 19810, /* DiagArray921 */ 2575, 0, R"()")
DIAG_ENTRY(Trigraphs /* trigraphs */, 19832, /* DiagArray922 */ 2577, 0, R"()")
DIAG_ENTRY(TypeLimits /* type-limits */, 19842, 0, /* DiagSubGroup923 */ 705, R"()")
DIAG_ENTRY(TypeSafety /* type-safety */, 19854, /* DiagArray924 */ 2582, 0, R"()")
DIAG_ENTRY(anonymous_238 /* typedef-redefinition */, 19866, /* DiagArray925 */ 2586, 0, R"()")
DIAG_ENTRY(anonymous_232 /* typename-missing */, 19887, /* DiagArray926 */ 2588, 0, R"()")
DIAG_ENTRY(anonymous_109 /* unable-to-open-stats-file */, 19904, /* DiagArray927 */ 2590, 0, R"()")
DIAG_ENTRY(UnalignedAccess /* unaligned-access */, 19930, /* DiagArray928 */ 2592, 0, R"()")
DIAG_ENTRY(anonymous_298 /* unaligned-qualifier-implicit-cast */, 19947, /* DiagArray929 */ 2594, 0, R"()")
DIAG_ENTRY(UnavailableDeclarations /* unavailable-declarations */, 19981, /* DiagArray930 */ 2596, 0, R"()")
DIAG_ENTRY(UndeclaredSelector /* undeclared-selector */, 20006, /* DiagArray931 */ 2598, 0, R"()")
DIAG_ENTRY(anonymous_133 /* undef */, 20026, /* DiagArray932 */ 2601, 0, R"()")
DIAG_ENTRY(anonymous_134 /* undef-prefix */, 20032, /* DiagArray933 */ 2603, 0, R"()")
DIAG_ENTRY(anonymous_199 /* undefined-arm-streaming */, 20045, /* DiagArray934 */ 2605, 0, R"()")
DIAG_ENTRY(anonymous_200 /* undefined-arm-za */, 20069, /* DiagArray935 */ 2607, 0, R"()")
DIAG_ENTRY(anonymous_201 /* undefined-arm-zt0 */, 20086, /* DiagArray936 */ 2609, 0, R"()")
DIAG_ENTRY(UndefinedBoolConversion /* undefined-bool-conversion */, 20104, /* DiagArray937 */ 2611, 0, R"()")
DIAG_ENTRY(UndefinedFuncTemplate /* undefined-func-template */, 20130, /* DiagArray938 */ 2614, 0, R"()")
DIAG_ENTRY(anonymous_237 /* undefined-inline */, 20154, /* DiagArray939 */ 2616, 0, R"()")
DIAG_ENTRY(anonymous_235 /* undefined-internal */, 20171, /* DiagArray940 */ 2618, 0, R"()")
DIAG_ENTRY(anonymous_236 /* undefined-internal-type */, 20190, /* DiagArray941 */ 2620, 0, R"()")
DIAG_ENTRY(UndefinedReinterpretCast /* undefined-reinterpret-cast */, 20214, /* DiagArray942 */ 2622, 0, R"()")
DIAG_ENTRY(UndefinedVarTemplate /* undefined-var-template */, 20241, /* DiagArray943 */ 2625, 0, R"()")
DIAG_ENTRY(UnderalignedExceptionObject /* underaligned-exception-object */, 20264, /* DiagArray944 */ 2627, 0, R"()")
DIAG_ENTRY(UnevaluatedExpression /* unevaluated-expression */, 20294, /* DiagArray945 */ 2629, /* DiagSubGroup945 */ 710, R"()")
DIAG_ENTRY(UnguardedAvailability /* unguarded-availability */, 20317, /* DiagArray946 */ 2631, /* DiagSubGroup946 */ 712, R"()")
DIAG_ENTRY(UnguardedAvailabilityNew /* unguarded-availability-new */, 20340, /* DiagArray947 */ 2633, 0, R"()")
DIAG_ENTRY(Unicode /* unicode */, 20367, /* DiagArray948 */ 2635, 0, R"()")
DIAG_ENTRY(anonymous_119 /* unicode-homoglyph */, 20375, /* DiagArray949 */ 2643, 0, R"()")
DIAG_ENTRY(anonymous_118 /* unicode-whitespace */, 20393, /* DiagArray950 */ 2645, 0, R"()")
DIAG_ENTRY(anonymous_120 /* unicode-zero-width */, 20412, /* DiagArray951 */ 2647, 0, R"()")
DIAG_ENTRY(Uninitialized /* uninitialized */, 20431, /* DiagArray952 */ 2649, /* DiagSubGroup952 */ 714, R"()")
DIAG_ENTRY(UninitializedConstReference /* uninitialized-const-reference */, 20445, /* DiagArray953 */ 2657, 0, R"()")
DIAG_ENTRY(UnknownArgument /* unknown-argument */, 20475, /* DiagArray954 */ 2659, 0, R"()")
DIAG_ENTRY(UnknownAssumption /* unknown-assumption */, 20492, /* DiagArray955 */ 2663, 0, R"()")
DIAG_ENTRY(UnknownAttributes /* unknown-attributes */, 20511, /* DiagArray956 */ 2665, 0, R"()")
DIAG_ENTRY(CudaUnknownVersion /* unknown-cuda-version */, 20530, /* DiagArray957 */ 2667, 0, R"()")
DIAG_ENTRY(anonymous_138 /* unknown-directives */, 20551, /* DiagArray958 */ 2670, 0, R"()")
DIAG_ENTRY(anonymous_123 /* unknown-escape-sequence */, 20570, /* DiagArray959 */ 2672, 0, R"()")
DIAG_ENTRY(UnknownPragmas /* unknown-pragmas */, 20594, /* DiagArray960 */ 2674, 0, R"()")
DIAG_ENTRY(UnknownSanitizers /* unknown-sanitizers */, 20610, /* DiagArray961 */ 2695, 0, R"()")
DIAG_ENTRY(UnknownWarningOption /* unknown-warning-option */, 20629, /* DiagArray962 */ 2697, 0, R"()")
DIAG_ENTRY(UnnamedTypeTemplateArgs /* unnamed-type-template-args */, 20652, /* DiagArray963 */ 2701, /* DiagSubGroup963 */ 718, R"()")
DIAG_ENTRY(UnneededInternalDecl /* unneeded-internal-declaration */, 20679, /* DiagArray964 */ 2703, 0, R"()")
DIAG_ENTRY(UnneededMemberFunction /* unneeded-member-function */, 20709, /* DiagArray965 */ 2706, 0, R"()")
DIAG_ENTRY(anonymous_228 /* unqualified-std-cast-call */, 20734, /* DiagArray966 */ 2708, 0, R"()")
DIAG_ENTRY(UnreachableCode /* unreachable-code */, 20760, /* DiagArray967 */ 2710, /* DiagSubGroup967 */ 720, R"()")
DIAG_ENTRY(UnreachableCodeAggressive /* unreachable-code-aggressive */, 20777, 0, /* DiagSubGroup968 */ 724, R"()")
DIAG_ENTRY(UnreachableCodeBreak /* unreachable-code-break */, 20805, /* DiagArray969 */ 2712, 0, R"()")
DIAG_ENTRY(UnreachableCodeFallthrough /* unreachable-code-fallthrough */, 20828, /* DiagArray970 */ 2714, 0, R"()")
DIAG_ENTRY(UnreachableCodeGenericAssoc /* unreachable-code-generic-assoc */, 20857, /* DiagArray971 */ 2716, 0, R"()")
DIAG_ENTRY(UnreachableCodeLoopIncrement /* unreachable-code-loop-increment */, 20888, /* DiagArray972 */ 2718, 0, R"()")
DIAG_ENTRY(UnreachableCodeReturn /* unreachable-code-return */, 20920, /* DiagArray973 */ 2720, 0, R"()")
DIAG_ENTRY(UnsafeBufferUsage /* unsafe-buffer-usage */, 20944, /* DiagArray974 */ 2722, /* DiagSubGroup974 */ 728, R"()")
DIAG_ENTRY(UnsafeBufferUsageInContainer /* unsafe-buffer-usage-in-container */, 20964, /* DiagArray975 */ 2725, 0, R"()")
DIAG_ENTRY(Unsequenced /* unsequenced */, 20997, /* DiagArray976 */ 2727, 0, R"()")
DIAG_ENTRY(UnsupportedABI /* unsupported-abi */, 21009, /* DiagArray977 */ 2730, 0, R"()")
DIAG_ENTRY(UnsupportedAbs /* unsupported-abs */, 21025, /* DiagArray978 */ 2733, 0, R"()")
DIAG_ENTRY(anonymous_216 /* unsupported-availability-guard */, 21041, /* DiagArray979 */ 2736, 0, R"()")
DIAG_ENTRY(UnsupportedCB /* unsupported-cb */, 21072, /* DiagArray980 */ 2738, 0, R"()")
DIAG_ENTRY(anonymous_212 /* unsupported-dll-base-class-template */, 21087, /* DiagArray981 */ 2740, 0, R"()")
DIAG_ENTRY(UnsupportedFPOpt /* unsupported-floating-point-opt */, 21123, /* DiagArray982 */ 2742, 0, R"()")
DIAG_ENTRY(UnsupportedFriend /* unsupported-friend */, 21154, /* DiagArray983 */ 2745, 0, R"()")
DIAG_ENTRY(UnsupportedGPOpt /* unsupported-gpopt */, 21173, /* DiagArray984 */ 2748, 0, R"()")
DIAG_ENTRY(UnsupportedNan /* unsupported-nan */, 21191, /* DiagArray985 */ 2750, 0, R"()")
DIAG_ENTRY(UnsupportedTargetOpt /* unsupported-target-opt */, 21207, /* DiagArray986 */ 2753, 0, R"()")
DIAG_ENTRY(anonymous_222 /* unsupported-visibility */, 21230, /* DiagArray987 */ 2756, 0, R"()")
DIAG_ENTRY(anonymous_230 /* unusable-partial-specialization */, 21253, /* DiagArray988 */ 2758, 0, R"()")
DIAG_ENTRY(Unused /* unused */, 21285, 0, /* DiagSubGroup989 */ 730, R"()")
DIAG_ENTRY(UnusedArgument /* unused-argument */, 21292, 0, 0, R"()")
DIAG_ENTRY(UnusedButSetParameter /* unused-but-set-parameter */, 21308, /* DiagArray991 */ 2760, 0, R"()")
DIAG_ENTRY(UnusedButSetVariable /* unused-but-set-variable */, 21333, /* DiagArray992 */ 2762, 0, R"()")
DIAG_ENTRY(UnusedCommandLineArgument /* unused-command-line-argument */, 21357, /* DiagArray993 */ 2764, 0, R"()")
DIAG_ENTRY(UnusedComparison /* unused-comparison */, 21386, /* DiagArray994 */ 2778, 0, R"()")
DIAG_ENTRY(UnusedConstVariable /* unused-const-variable */, 21404, /* DiagArray995 */ 2780, 0, R"()")
DIAG_ENTRY(UnusedExceptionParameter /* unused-exception-parameter */, 21426, /* DiagArray996 */ 2782, 0, R"()")
DIAG_ENTRY(UnusedFunction /* unused-function */, 21453, /* DiagArray997 */ 2784, /* DiagSubGroup997 */ 741, R"()")
DIAG_ENTRY(UnusedGetterReturnValue /* unused-getter-return-value */, 21469, /* DiagArray998 */ 2786, 0, R"()")
DIAG_ENTRY(UnusedLabel /* unused-label */, 21496, /* DiagArray999 */ 2788, 0, R"()")
DIAG_ENTRY(UnusedLambdaCapture /* unused-lambda-capture */, 21509, /* DiagArray1000 */ 2790, 0, R"()")
DIAG_ENTRY(UnusedLocalTypedef /* unused-local-typedef */, 21531, /* DiagArray1001 */ 2792, 0, R"()")
DIAG_ENTRY(anonymous_68 /* unused-local-typedefs */, 21552, 0, /* DiagSubGroup1002 */ 743, R"()")
DIAG_ENTRY(anonymous_132 /* unused-macros */, 21574, /* DiagArray1003 */ 2794, 0, R"()")
DIAG_ENTRY(UnusedMemberFunction /* unused-member-function */, 21588, /* DiagArray1004 */ 2796, /* DiagSubGroup1004 */ 745, R"()")
DIAG_ENTRY(UnusedParameter /* unused-parameter */, 21611, /* DiagArray1005 */ 2798, 0, R"()")
DIAG_ENTRY(UnusedPrivateField /* unused-private-field */, 21628, /* DiagArray1006 */ 2800, 0, R"()")
DIAG_ENTRY(UnusedPropertyIvar /* unused-property-ivar */, 21649, /* DiagArray1007 */ 2802, 0, R"()")
DIAG_ENTRY(UnusedResult /* unused-result */, 21670, /* DiagArray1008 */ 2804, 0, R"()")
DIAG_ENTRY(UnusedTemplate /* unused-template */, 21684, /* DiagArray1009 */ 2807, /* DiagSubGroup1009 */ 747, R"()")
DIAG_ENTRY(UnusedValue /* unused-value */, 21700, /* DiagArray1010 */ 2809, /* DiagSubGroup1010 */ 749, R"()")
DIAG_ENTRY(UnusedVariable /* unused-variable */, 21713, /* DiagArray1011 */ 2817, /* DiagSubGroup1011 */ 753, R"()")
DIAG_ENTRY(anonymous_282 /* unused-volatile-lvalue */, 21729, /* DiagArray1012 */ 2819, 0, R"()")
DIAG_ENTRY(UsedButMarkedUnused /* used-but-marked-unused */, 21752, /* DiagArray1013 */ 2821, 0, R"()")
DIAG_ENTRY(UserDefinedLiterals /* user-defined-literals */, 21775, /* DiagArray1014 */ 2823, 0, R"()")
DIAG_ENTRY(UserDefinedWarnings /* user-defined-warnings */, 21797, /* DiagArray1015 */ 2825, 0, R"()")
DIAG_ENTRY(Varargs /* varargs */, 21819, /* DiagArray1016 */ 2827, 0, R"()")
DIAG_ENTRY(VariadicMacros /* variadic-macros */, 21827, /* DiagArray1017 */ 2831, 0, R"()")
DIAG_ENTRY(anonymous_202 /* vec-elem-size */, 21843, /* DiagArray1018 */ 2835, 0, R"()")
DIAG_ENTRY(VectorConversion /* vector-conversion */, 21857, /* DiagArray1019 */ 2837, 0, R"()")
DIAG_ENTRY(anonymous_67 /* vector-conversions */, 21875, 0, /* DiagSubGroup1020 */ 755, R"()")
DIAG_ENTRY(VexingParse /* vexing-parse */, 21894, /* DiagArray1021 */ 2839, 0, R"()")
DIAG_ENTRY(Visibility /* visibility */, 21907, /* DiagArray1022 */ 2843, 0, R"()")
DIAG_ENTRY(VLA /* vla */, 21918, /* DiagArray1023 */ 2846, /* DiagSubGroup1023 */ 757, R"()")
DIAG_ENTRY(VLACxxExtension /* vla-cxx-extension */, 21922, /* DiagArray1024 */ 2848, /* DiagSubGroup1024 */ 759, R"()")
DIAG_ENTRY(VLAExtension /* vla-extension */, 21940, /* DiagArray1025 */ 2851, /* DiagSubGroup1025 */ 761, R"()")
DIAG_ENTRY(VLAUseStaticAssert /* vla-extension-static-assert */, 21954, /* DiagArray1026 */ 2853, 0, R"()")
DIAG_ENTRY(VoidPointerToEnumCast /* void-pointer-to-enum-cast */, 21982, /* DiagArray1027 */ 2856, 0, R"()")
DIAG_ENTRY(VoidPointerToIntCast /* void-pointer-to-int-cast */, 22008, /* DiagArray1028 */ 2858, /* DiagSubGroup1028 */ 763, R"()")
DIAG_ENTRY(VoidPointerDeref /* void-ptr-dereference */, 22033, /* DiagArray1029 */ 2860, 0, R"()")
DIAG_ENTRY(VolatileRegisterVar /* volatile-register-var */, 22054, 0, 0, R"()")
DIAG_ENTRY(WebAssemblyExceptionSpec /* wasm-exception-spec */, 22076, /* DiagArray1031 */ 2862, 0, R"()")
DIAG_ENTRY(anonymous_192 /* weak-template-vtables */, 22096, /* DiagArray1032 */ 2864, 0, R"()")
DIAG_ENTRY(anonymous_191 /* weak-vtables */, 22118, /* DiagArray1033 */ 2866, 0, R"()")
DIAG_ENTRY(WritableStrings /* writable-strings */, 22131, /* DiagArray1034 */ 2868, /* DiagSubGroup1034 */ 765, R"()")
DIAG_ENTRY(GCCWriteStrings /* write-strings */, 22148, 0, /* DiagSubGroup1035 */ 767, R"(**Note:** enabling this warning in C will change the semantic behavior of the
program by treating all string literals as having type ``const char *``
instead of ``char *``. This can cause unexpected behaviors with type-sensitive
constructs like ``_Generic``.)")
DIAG_ENTRY(XorUsedAsPow /* xor-used-as-pow */, 22162, /* DiagArray1036 */ 2870, 0, R"()")
DIAG_ENTRY(anonymous_303 /* zero-as-null-pointer-constant */, 22178, /* DiagArray1037 */ 2874, 0, R"()")
DIAG_ENTRY(ZeroLengthArray /* zero-length-array */, 22208, /* DiagArray1038 */ 2876, 0, R"()")
#endif // DIAG_ENTRY


#ifdef GET_CATEGORY_TABLE
CATEGORY("", DiagCat_None)
CATEGORY("Lexical or Preprocessor Issue", DiagCat_Lexical_or_Preprocessor_Issue)
CATEGORY("Semantic Issue", DiagCat_Semantic_Issue)
CATEGORY("Parse Issue", DiagCat_Parse_Issue)
CATEGORY("Lambda Issue", DiagCat_Lambda_Issue)
CATEGORY("Verification", DiagCat_Verification)
CATEGORY("ARC Semantic Issue", DiagCat_ARC_Semantic_Issue)
CATEGORY("ARC and @properties", DiagCat_ARC_and__properties)
CATEGORY("ARC Casting Rules", DiagCat_ARC_Casting_Rules)
CATEGORY("ARC Parse Issue", DiagCat_ARC_Parse_Issue)
CATEGORY("ARC Weak References", DiagCat_ARC_Weak_References)
CATEGORY("ARC Restrictions", DiagCat_ARC_Restrictions)
CATEGORY("OpenMP Issue", DiagCat_OpenMP_Issue)
CATEGORY("Inline Assembly Issue", DiagCat_Inline_Assembly_Issue)
CATEGORY("AST Deserialization Issue", DiagCat_AST_Deserialization_Issue)
CATEGORY("Modules Issue", DiagCat_Modules_Issue)
CATEGORY("Codegen ABI Check", DiagCat_Codegen_ABI_Check)
CATEGORY("Coroutines Issue", DiagCat_Coroutines_Issue)
CATEGORY("Command line", DiagCat_Command_line)
CATEGORY("Concepts Issue", DiagCat_Concepts_Issue)
CATEGORY("Dependency Directive Source Scanner Issue", DiagCat_Dependency_Directive_Source_Scanner_Issue)
CATEGORY("Backend Issue", DiagCat_Backend_Issue)
CATEGORY("SourceMgr Reported Issue", DiagCat_SourceMgr_Reported_Issue)
CATEGORY("API Notes Issue", DiagCat_API_Notes_Issue)
CATEGORY("Related Result Type Issue", DiagCat_Related_Result_Type_Issue)
CATEGORY("AST Serialization Issue", DiagCat_AST_Serialization_Issue)
CATEGORY("Nullability Issue", DiagCat_Nullability_Issue)
CATEGORY("Generics Issue", DiagCat_Generics_Issue)
CATEGORY("User-Defined Issue", DiagCat_User_Defined_Issue)
CATEGORY("Refactoring Invocation Issue", DiagCat_Refactoring_Invocation_Issue)
CATEGORY("VTable ABI Issue", DiagCat_VTable_ABI_Issue)
CATEGORY("Value Conversion Issue", DiagCat_Value_Conversion_Issue)
CATEGORY("Documentation Issue", DiagCat_Documentation_Issue)
CATEGORY("ARC Retain Cycle", DiagCat_ARC_Retain_Cycle)
CATEGORY("Deprecations", DiagCat_Deprecations)
CATEGORY("Format String Issue", DiagCat_Format_String_Issue)
CATEGORY("Cocoa API Issue", DiagCat_Cocoa_API_Issue)
CATEGORY("#pragma message Directive", DiagCat__pragma_message_Directive)
CATEGORY("Instrumentation Issue", DiagCat_Instrumentation_Issue)
CATEGORY("Unused Entity Issue", DiagCat_Unused_Entity_Issue)
#endif // GET_CATEGORY_TABLE

