
#ifdef GET_DIAG_ARRAYS
static const int16_t DiagArrays[] = {
  /* Empty */ -1,
  /* DiagArray1 */ diag::warn_pragma_message, -1,
  /* DiagArray2 */ diag::pp_hash_warning, -1,
  /* DiagArray3 */ diag::warn_cfstring_truncated, -1,
  /* DiagArray5 */ diag::warn_independentclass_attribute, diag::warn_ptr_independentclass_attribute, -1,
  /* DiagArray6 */ diag::warn_nsobject_attribute, -1,
  /* DiagArray8 */ diag::warn_abs_too_small, diag::warn_pointer_abs, diag::warn_unsigned_abs, diag::warn_wrong_absolute_value_type, -1,
  /* DiagArray9 */ diag::warn_abstract_final_class, -1,
  /* DiagArray10 */ diag::warn_abstract_vbase_init_ignored, -1,
  /* DiagArray12 */ diag::warn_taking_address_of_packed_member, -1,
  /* DiagArray13 */ diag::ext_typecheck_addrof_temporary, -1,
  /* DiagArray15 */ diag::warn_not_xl_compatible, diag::warn_pragma_align_not_xl_compatible, -1,
  /* DiagArray16 */ diag::warn_param_mismatched_alignment, -1,
  /* DiagArray18 */ diag::warn_alloca, -1,
  /* DiagArray19 */ diag::warn_alloca_align_alignof, -1,
  /* DiagArray20 */ diag::warn_ambiguous_suitable_delete_function_found, -1,
  /* DiagArray21 */ diag::warn_misplaced_ellipsis_vararg, -1,
  /* DiagArray22 */ diag::warn_pp_ambiguous_macro, -1,
  /* DiagArray23 */ diag::ext_nested_name_member_ref_lookup_ambiguous, -1,
  /* DiagArray24 */ diag::ext_ovl_ambiguous_oper_binary_reversed, -1,
  /* DiagArray25 */ diag::warn_incompatible_analyzer_plugin_api, -1,
  /* DiagArray26 */ diag::warn_arith_conv_mixed_anon_enum_types, -1,
  /* DiagArray27 */ diag::ext_abstract_pack_declarator_parens, -1,
  /* DiagArray29 */ diag::warn_arc_bridge_cast_nonarc, -1,
  /* DiagArray30 */ diag::warn_arc_possible_repeated_use_of_weak, -1,
  /* DiagArray31 */ diag::warn_arc_object_memaccess, -1,
  /* DiagArray32 */ diag::warn_arc_perform_selector_leaks, -1,
  /* DiagArray33 */ diag::warn_arc_repeated_use_of_weak, -1,
  /* DiagArray34 */ diag::warn_arc_retain_cycle, -1,
  /* DiagArray35 */ diag::warn_arc_literal_assign, diag::warn_arc_retained_assign, diag::warn_arc_retained_property_assign, -1,
  /* DiagArray36 */ diag::warn_argument_invalid_range, -1,
  /* DiagArray37 */ diag::warn_argument_undefined_behaviour, -1,
  /* DiagArray38 */ diag::warn_array_index_exceeds_bounds, diag::warn_array_index_exceeds_max_addressable_bounds, diag::warn_array_index_precedes_bounds, diag::warn_ptr_arith_exceeds_max_addressable_bounds, diag::warn_static_array_too_small, -1,
  /* DiagArray39 */ diag::warn_ptr_arith_exceeds_bounds, diag::warn_ptr_arith_precedes_bounds, -1,
  /* DiagArray41 */ diag::warn_asm_mismatched_size_modifier, -1,
  /* DiagArray42 */ diag::warn_not_in_enum_assignment, -1,
  /* DiagArray43 */ diag::warn_assume_side_effects, -1,
  /* DiagArray45 */ diag::warn_atimport_in_framework_header, -1,
  /* DiagArray46 */ diag::warn_atomic_op_misaligned, diag::warn_atomic_op_oversized, -1,
  /* DiagArray47 */ diag::warn_atomic_implicit_seq_cst, -1,
  /* DiagArray48 */ diag::warn_atomic_op_has_invalid_memory_order, -1,
  /* DiagArray50 */ diag::warn_atomic_property_rule, -1,
  /* DiagArray51 */ diag::warn_attribute_packed_for_bitfield, -1,
  /* DiagArray52 */ diag::warn_fe_backend_warning_attr, -1,
  /* DiagArray54 */ diag::warn_drv_disabling_vptr_no_rtti_default, -1,
  /* DiagArray55 */ diag::warn_auto_module_import, -1,
  /* DiagArray56 */ diag::ext_auto_storage_class, -1,
  /* DiagArray57 */ diag::warn_auto_var_is_id, -1,
  /* DiagArray58 */ diag::warn_availability_and_unavailable, diag::warn_availability_fuchsia_unavailable_minor, diag::warn_availability_on_static_initializer, diag::warn_availability_swift_unavailable_deprecated_only, diag::warn_availability_unknown_platform, diag::warn_availability_version_ordering, diag::warn_expected_consistent_version_separator, diag::warn_mismatched_availability, diag::warn_mismatched_availability_override, diag::warn_mismatched_availability_override_unavail, -1,
  /* DiagArray59 */ diag::warn_drv_avr_family_linking_stdlibs_not_implemented, diag::warn_drv_avr_gcc_not_found, diag::warn_drv_avr_libc_not_found, diag::warn_drv_avr_linker_section_addresses_not_implemented, diag::warn_drv_avr_mcu_not_specified, diag::warn_drv_avr_stdlib_not_linked, -1,
  /* DiagArray60 */ diag::warn_fe_backend_plugin, -1,
  /* DiagArray61 */ diag::backslash_newline_space, -1,
  /* DiagArray62 */ diag::warn_bad_function_cast, -1,
  /* DiagArray64 */ diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, -1,
  /* DiagArray65 */ diag::ext_decomp_decl_cond, -1,
  /* DiagArray66 */ diag::warn_impcast_bitfield_precision_constant, -1,
  /* DiagArray67 */ diag::warn_bitfield_too_small_for_enum, diag::warn_signed_bitfield_enum_conversion, diag::warn_unsigned_bitfield_assigned_signed_enum, -1,
  /* DiagArray68 */ diag::warn_bitfield_width_exceeds_type_width, -1,
  /* DiagArray69 */ diag::warn_precedence_bitwise_conditional, -1,
  /* DiagArray70 */ diag::warn_bitwise_instead_of_logical, -1,
  /* DiagArray71 */ diag::warn_bitwise_op_in_bitwise_op, -1,
  /* DiagArray72 */ diag::warn_block_capture_autoreleasing, -1,
  /* DiagArray73 */ diag::warn_impcast_bool_to_null_pointer, -1,
  /* DiagArray75 */ diag::warn_bitwise_negation_bool, -1,
  /* DiagArray76 */ diag::warn_braces_around_init, -1,
  /* DiagArray77 */ diag::warn_objc_invalid_bridge, diag::warn_objc_invalid_bridge_to_cf, -1,
  /* DiagArray78 */ diag::warn_assume_aligned_too_great, -1,
  /* DiagArray79 */ diag::ext_pp_redef_builtin_macro, diag::ext_pp_undef_builtin_macro, -1,
  /* DiagArray80 */ diag::warn_builtin_chk_overflow, -1,
  /* DiagArray81 */ diag::warn_implicit_decl_requires_sysheader, -1,
  /* DiagArray82 */ diag::warn_zero_size_struct_union_compat, -1,
  /* DiagArray86 */ diag::ext_old_implicitly_unsigned_long_cxx, diag::warn_auto_storage_class, diag::warn_cxx11_compat_user_defined_literal, diag::warn_cxx11_keyword, diag::warn_cxx11_right_shift_in_template_arg, diag::warn_explicit_instantiation_inline_0x, diag::warn_explicit_instantiation_must_be_global_0x, diag::warn_explicit_instantiation_out_of_scope_0x, diag::warn_explicit_instantiation_unqualified_wrong_namespace_0x, diag::warn_old_implicitly_unsigned_long_cxx, -1,
  /* DiagArray87 */ diag::warn_deprecated_string_literal_conversion, -1,
  /* DiagArray89 */ diag::warn_cxx11_compat_reserved_user_defined_literal, -1,
  /* DiagArray90 */ diag::ext_alias_declaration, diag::ext_array_size_conversion, diag::ext_auto_type_specifier, diag::ext_cxx11_enum_fixed_underlying_type, diag::ext_defaulted_deleted_function, diag::ext_enum_friend, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_conversion_functions, diag::ext_extern_template, diag::ext_for_range, diag::ext_generalized_initializer_lists, diag::ext_nested_name_spec_is_enum, diag::ext_nonclass_type_friend, diag::ext_nonstatic_member_init, diag::ext_override_control_keyword, diag::ext_ref_qualifier, diag::ext_rvalue_reference, diag::ext_scoped_enum, diag::ext_static_data_member_in_union, diag::ext_template_arg_object_internal, diag::ext_template_outside_of_template, diag::ext_template_parameter_default_in_function_template, diag::ext_typename_outside_of_template, diag::ext_unelaborated_friend_type, diag::ext_variadic_templates, -1,
  /* DiagArray91 */ diag::ext_extra_semi_cxx11, -1,
  /* DiagArray92 */ diag::ext_inline_namespace, -1,
  /* DiagArray93 */ diag::ext_cxx11_longlong, -1,
  /* DiagArray94 */ diag::ext_cce_narrowing, diag::ext_init_list_constant_narrowing, diag::ext_init_list_type_narrowing, diag::ext_init_list_variable_narrowing, diag::warn_init_list_constant_narrowing, diag::warn_init_list_type_narrowing, diag::warn_init_list_variable_narrowing, -1,
  /* DiagArray95 */ diag::ext_binary_literal_cxx14, -1,
  /* DiagArray98 */ diag::ext_constexpr_body_invalid_stmt, diag::ext_constexpr_body_multiple_return, diag::ext_constexpr_local_var, diag::ext_constexpr_type_definition, diag::ext_cxx14_attr, diag::ext_decltype_auto_type_specifier, diag::ext_init_capture, diag::ext_variable_template, -1,
  /* DiagArray100 */ diag::warn_cxx17_compat_exception_spec_in_signature, -1,
  /* DiagArray102 */ diag::ext_auto_new_list_init, diag::ext_constexpr_if, diag::ext_constexpr_on_lambda_cxx17, diag::ext_cxx17_attr, diag::ext_cxx_static_assert_no_message, diag::ext_decomp_decl, diag::ext_fold_expression, diag::ext_for_range_begin_end_types_differ, diag::ext_hex_literal_invalid, diag::ext_init_statement, diag::ext_inline_variable, diag::ext_multi_using_declaration, diag::ext_nested_namespace_definition, diag::ext_ns_enum_attribute, diag::ext_star_this_lambda_capture_cxx17, diag::ext_template_template_param_typename, diag::ext_using_attribute_ns, diag::ext_using_declaration_pack, -1,
  /* DiagArray107 */ diag::warn_cxx20_compat_aggregate_init_with_ctors, diag::warn_cxx20_compat_consteval, diag::warn_cxx20_compat_constinit, diag::warn_cxx20_compat_explicit_bool, diag::warn_cxx20_compat_spaceship, diag::warn_cxx20_compat_utf8_string, diag::warn_cxx20_keyword, -1,
  /* DiagArray109 */ diag::ext_cxx_designated_init, -1,
  /* DiagArray110 */ diag::ext_adl_only_template_id, diag::ext_bitfield_member_init, diag::ext_constexpr_body_invalid_stmt_cxx20, diag::ext_constexpr_ctor_missing_init, diag::ext_constexpr_function_try_block_cxx20, diag::ext_constexpr_local_var_no_init, diag::ext_constexpr_union_ctor_no_init, diag::ext_cxx20_attr, diag::ext_decomp_decl_spec, diag::ext_defaulted_comparison, diag::ext_equals_this_lambda_capture_cxx20, diag::ext_explicit_bool, diag::ext_for_range_init_stmt, diag::ext_init_capture_pack, diag::ext_inline_nested_namespace_definition, diag::ext_lambda_template_parameter_list, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_using_decl_class_member_enumerator, diag::ext_using_decl_scoped_enumerator, diag::ext_using_enum_declaration, -1,
  /* DiagArray114 */ diag::ext_alias_in_init_statement, diag::ext_consteval_if, diag::ext_cxx2b_size_t_suffix, diag::ext_decl_attrs_on_lambda, diag::ext_lambda_missing_parens, -1,
  /* DiagArray120 */ diag::warn_cxx11_compat_binary_literal, -1,
  /* DiagArray122 */ diag::warn_cxx98_compat_alias_declaration, diag::warn_cxx98_compat_alignas, diag::warn_cxx98_compat_alignof, diag::warn_cxx98_compat_attribute, diag::warn_cxx98_compat_auto_type_specifier, diag::warn_cxx98_compat_constexpr, diag::warn_cxx98_compat_ctor_list_init, diag::warn_cxx98_compat_decltype, diag::warn_cxx98_compat_defaulted_deleted_function, diag::warn_cxx98_compat_delegating_ctor, diag::warn_cxx98_compat_empty_scalar_initializer, diag::warn_cxx98_compat_empty_sizeless_initializer, diag::warn_cxx98_compat_enum_fixed_underlying_type, diag::warn_cxx98_compat_enum_friend, diag::warn_cxx98_compat_enum_nested_name_spec, diag::warn_cxx98_compat_explicit_conversion_functions, diag::warn_cxx98_compat_for_range, diag::warn_cxx98_compat_friend_is_member, diag::warn_cxx98_compat_generalized_initializer_lists, diag::warn_cxx98_compat_goto_into_protected_scope, diag::warn_cxx98_compat_indirect_goto_in_protected_scope, diag::warn_cxx98_compat_initializer_list_init, diag::warn_cxx98_compat_inline_namespace, diag::warn_cxx98_compat_lambda, diag::warn_cxx98_compat_less_colon_colon, diag::warn_cxx98_compat_literal_operator, diag::warn_cxx98_compat_literal_ucn_control_character, diag::warn_cxx98_compat_literal_ucn_escape_basic_scs, diag::warn_cxx98_compat_noexcept_decl, diag::warn_cxx98_compat_noexcept_expr, diag::warn_cxx98_compat_non_static_member_use, diag::warn_cxx98_compat_nonclass_type_friend, diag::warn_cxx98_compat_nonstatic_member_init, diag::warn_cxx98_compat_nontrivial_union_or_anon_struct_member, diag::warn_cxx98_compat_nullptr, diag::warn_cxx98_compat_override_control_keyword, diag::warn_cxx98_compat_pass_non_pod_arg_to_vararg, diag::warn_cxx98_compat_raw_string_literal, diag::warn_cxx98_compat_ref_qualifier, diag::warn_cxx98_compat_reference_list_init, diag::warn_cxx98_compat_rvalue_reference, diag::warn_cxx98_compat_scoped_enum, diag::warn_cxx98_compat_sfinae_access_control, diag::warn_cxx98_compat_static_assert, diag::warn_cxx98_compat_static_data_member_in_union, diag::warn_cxx98_compat_switch_into_protected_scope, diag::warn_cxx98_compat_template_arg_extra_parens, diag::warn_cxx98_compat_template_arg_null, diag::warn_cxx98_compat_template_arg_object_internal, diag::warn_cxx98_compat_template_outside_of_template, diag::warn_cxx98_compat_template_parameter_default_in_function_template, diag::warn_cxx98_compat_trailing_return_type, diag::warn_cxx98_compat_two_right_angle_brackets, diag::warn_cxx98_compat_typename_outside_of_template, diag::warn_cxx98_compat_unelaborated_friend_type, diag::warn_cxx98_compat_unicode_literal, diag::warn_cxx98_compat_unicode_type, diag::warn_cxx98_compat_using_decl_constructor, diag::warn_cxx98_compat_variadic_templates, -1,
  /* DiagArray123 */ diag::warn_cxx98_compat_temp_copy, -1,
  /* DiagArray124 */ diag::warn_cxx98_compat_top_level_semi, -1,
  /* DiagArray125 */ diag::warn_cxx98_compat_template_arg_local_type, -1,
  /* DiagArray126 */ diag::warn_cxx98_compat_array_size_conversion, diag::warn_cxx98_compat_cast_fn_obj, diag::warn_cxx98_compat_empty_fnmacro_arg, diag::warn_cxx98_compat_enumerator_list_comma, diag::warn_cxx98_compat_extern_template, diag::warn_cxx98_compat_longlong, diag::warn_cxx98_compat_no_newline_eof, diag::warn_cxx98_compat_pp_line_too_big, diag::warn_cxx98_compat_variadic_macro, -1,
  /* DiagArray127 */ diag::warn_cxx98_compat_template_arg_unnamed_type, -1,
  /* DiagArray128 */ diag::ext_anonymous_union, diag::ext_c11_anonymous_struct, diag::ext_c11_feature, diag::ext_typecheck_compare_complete_incomplete_pointers, -1,
  /* DiagArray129 */ diag::ext_c_static_assert_no_message, diag::ext_parameter_name_omitted_c2x, -1,
  /* DiagArray130 */ diag::warn_c99_compat_unicode_id, diag::warn_c99_compat_unicode_literal, diag::warn_old_implicitly_unsigned_long, -1,
  /* DiagArray131 */ diag::ext_designated_init, diag::ext_designated_init_array, diag::ext_designated_init_brace_elision, diag::ext_designated_init_mixed, diag::ext_designated_init_nested, -1,
  /* DiagArray132 */ diag::ext_aggregate_init_not_constant, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_c99_whitespace_required_after_macro_name, diag::ext_empty_fnmacro_arg, diag::ext_enumerator_list_comma_c, diag::ext_hex_constant_invalid, -1,
  /* DiagArray133 */ diag::warn_call_to_pure_virtual_member_function_from_ctor_dtor, -1,
  /* DiagArray134 */ diag::warn_called_once_gets_called_twice, diag::warn_called_once_never_called, diag::warn_called_once_never_called_when, -1,
  /* DiagArray135 */ diag::warn_cast_align, -1,
  /* DiagArray136 */ diag::warn_cast_calling_conv, -1,
  /* DiagArray137 */ diag::warn_cast_function_type, -1,
  /* DiagArray138 */ diag::warn_cast_pointer_from_sel, -1,
  /* DiagArray139 */ diag::warn_cast_qual, diag::warn_cast_qual2, -1,
  /* DiagArray140 */ diag::ext_bad_cxx_cast_qualifiers_away_incoherent, -1,
  /* DiagArray142 */ diag::warn_omp_section_is_char, diag::warn_subscript_is_char, -1,
  /* DiagArray143 */ diag::warn_drv_yc_multiple_inputs_clang_cl, diag::warn_drv_ycyu_different_arg_clang_cl, diag::warn_pp_hdrstop_filename_ignored, diag::warn_pp_macro_def_mismatch_with_pch, -1,
  /* DiagArray144 */ diag::warn_conv_to_base_not_used, diag::warn_conv_to_self_not_used, diag::warn_conv_to_void_not_used, -1,
  /* DiagArray145 */ diag::warn_pass_class_arg_to_vararg, -1,
  /* DiagArray146 */ diag::warn_cmse_nonsecure_union, -1,
  /* DiagArray147 */ diag::warn_comma_operator, -1,
  /* DiagArray148 */ diag::escaped_newline_block_comment_end, diag::ext_line_comment, diag::ext_multi_line_line_comment, diag::warn_nested_block_comment, -1,
  /* DiagArray150 */ diag::ext_typecheck_comparison_of_distinct_pointers, -1,
  /* DiagArray151 */ diag::warn_completion_handler_called_twice, diag::warn_completion_handler_never_called, diag::warn_completion_handler_never_called_when, -1,
  /* DiagArray152 */ diag::ext_complex_component_init, -1,
  /* DiagArray154 */ diag::warn_compound_token_split_by_macro, -1,
  /* DiagArray155 */ diag::warn_compound_token_split_by_whitespace, -1,
  /* DiagArray156 */ diag::ext_concept_legacy_bool_keyword, -1,
  /* DiagArray157 */ diag::ext_typecheck_cond_pointer_integer_mismatch, -1,
  /* DiagArray158 */ diag::warn_maybe_uninit_var, -1,
  /* DiagArray159 */ diag::warn_module_config_macro_undef, -1,
  /* DiagArray160 */ diag::warn_impcast_integer_precision_constant, -1,
  /* DiagArray161 */ diag::warn_is_constant_evaluated_always_true_constexpr, -1,
  /* DiagArray162 */ diag::warn_logical_instead_of_bitwise, -1,
  /* DiagArray163 */ diag::warn_cxx14_compat_constexpr_not_const, -1,
  /* DiagArray164 */ diag::warn_attr_on_unconsumable_class, diag::warn_loop_state_mismatch, diag::warn_param_return_typestate_mismatch, diag::warn_param_typestate_mismatch, diag::warn_return_typestate_for_unconsumable_type, diag::warn_return_typestate_mismatch, diag::warn_use_in_invalid_state, diag::warn_use_of_temp_in_invalid_state, -1,
  /* DiagArray165 */ diag::warn_impcast_complex_scalar, diag::warn_impcast_vector_scalar, diag::warn_opencl_generic_address_space_arg, diag::warn_template_arg_negative, diag::warn_template_arg_too_large, -1,
  /* DiagArray167 */ diag::warn_coroutine_handle_address_invalid_return_type, -1,
  /* DiagArray168 */ diag::warn_coroutine_promise_unhandled_exception_required_with_exceptions, -1,
  /* DiagArray169 */ diag::warn_unreachable_default, -1,
  /* DiagArray171 */ diag::warn_objc_cdirective_format_string, -1,
  /* DiagArray172 */ diag::warn_ctad_maybe_unsupported, -1,
  /* DiagArray174 */ diag::warn_ctu_incompat_triple, -1,
  /* DiagArray175 */ diag::warn_attribute_argument_n_negative, diag::warn_cuda_attr_lambda_position, diag::warn_kern_is_inline, diag::warn_kern_is_method, diag::warn_pragma_unroll_cuda_value_in_parens, -1,
  /* DiagArray176 */ diag::warn_default_atomic_custom_getter_setter, -1,
  /* DiagArray177 */ diag::ext_cxx11_attr_placement, -1,
  /* DiagArray178 */ diag::warn_dangling_variable, diag::warn_unsupported_lifetime_extension, -1,
  /* DiagArray179 */ diag::warn_dangling_else, -1,
  /* DiagArray180 */ diag::warn_bind_ref_member_to_parameter, diag::warn_dangling_member, diag::warn_init_ptr_member_to_parameter_addr, diag::warn_new_dangling_reference, -1,
  /* DiagArray181 */ diag::warn_dangling_lifetime_pointer, diag::warn_dangling_lifetime_pointer_member, -1,
  /* DiagArray182 */ diag::warn_new_dangling_initializer_list, -1,
  /* DiagArray183 */ diag::warn_drv_darwin_sdk_invalid_settings, -1,
  /* DiagArray184 */ diag::warn_pp_date_time, -1,
  /* DiagArray185 */ diag::warn_dealloc_in_category, -1,
  /* DiagArray186 */ diag::warn_debug_compression_unavailable, -1,
  /* DiagArray187 */ diag::ext_mixed_decls_code, -1,
  /* DiagArray188 */ diag::warn_defaulted_comparison_deleted, diag::warn_defaulted_method_deleted, -1,
  /* DiagArray189 */ diag::warn_delegating_ctor_cycle, -1,
  /* DiagArray190 */ diag::warn_delete_abstract_non_virtual_dtor, -1,
  /* DiagArray191 */ diag::ext_delete_void_ptr_operand, diag::warn_delete_incomplete, -1,
  /* DiagArray192 */ diag::warn_delete_non_virtual_dtor, -1,
  /* DiagArray194 */ diag::ext_delimited_escape_sequence, -1,
  /* DiagArray195 */ diag::warn_O4_is_O3, diag::warn_access_decl_deprecated, diag::warn_deprecated_redundant_constexpr_static_def, diag::warn_drv_deprecated_arg, diag::warn_drv_treating_input_as_cxx, diag::warn_fe_concepts_ts_flag, diag::warn_option_invalid_ocl_version, diag::warn_vector_long_decl_spec_combination, -1,
  /* DiagArray196 */ diag::warn_deprecated_altivec_src_compat, -1,
  /* DiagArray197 */ diag::warn_arith_conv_mixed_anon_enum_types_cxx20, -1,
  /* DiagArray198 */ diag::warn_depr_array_comparison, -1,
  /* DiagArray199 */ diag::warn_vector_mode_deprecated, -1,
  /* DiagArray200 */ diag::warn_deprecated_comma_subscript, -1,
  /* DiagArray201 */ diag::warn_deprecated_copy, -1,
  /* DiagArray203 */ diag::warn_deprecated_copy_with_dtor, -1,
  /* DiagArray204 */ diag::warn_deprecated_copy_with_user_provided_copy, -1,
  /* DiagArray205 */ diag::warn_deprecated_copy_with_user_provided_dtor, -1,
  /* DiagArray206 */ diag::warn_deprecated_for_co_await, -1,
  /* DiagArray207 */ diag::warn_atl_uuid_deprecated, diag::warn_cstyle_param, diag::warn_deprecated, diag::warn_deprecated_fwdclass_message, diag::warn_deprecated_message, diag::warn_property_method_deprecated, -1,
  /* DiagArray208 */ diag::warn_exception_spec_deprecated, -1,
  /* DiagArray209 */ diag::warn_comparison_mixed_enum_types_cxx20, -1,
  /* DiagArray210 */ diag::warn_conditional_mixed_enum_types_cxx20, -1,
  /* DiagArray211 */ diag::warn_arith_conv_mixed_enum_types_cxx20, -1,
  /* DiagArray212 */ diag::warn_arith_conv_enum_float_cxx20, -1,
  /* DiagArray213 */ diag::warn_deprecated_coroutine_namespace, -1,
  /* DiagArray214 */ diag::warn_deprecated_def, diag::warn_unavailable_def, -1,
  /* DiagArray215 */ diag::warn_increment_bool, -1,
  /* DiagArray216 */ diag::warn_objc_isa_assign, diag::warn_objc_isa_use, -1,
  /* DiagArray217 */ diag::warn_objc_pointer_masking, -1,
  /* DiagArray218 */ diag::warn_objc_pointer_masking_performSelector, -1,
  /* DiagArray219 */ diag::warn_pragma_deprecated_macro_use, -1,
  /* DiagArray220 */ diag::warn_deprecated_register, -1,
  /* DiagArray221 */ diag::warn_deprecated_this_capture, -1,
  /* DiagArray222 */ diag::warn_deprecated_compound_assign_volatile, diag::warn_deprecated_increment_decrement_volatile, diag::warn_deprecated_simple_assign_volatile, diag::warn_deprecated_volatile_param, diag::warn_deprecated_volatile_return, diag::warn_deprecated_volatile_structured_binding, -1,
  /* DiagArray224 */ diag::warn_direct_ivar_access, -1,
  /* DiagArray225 */ diag::pp_disabled_macro_expansion, -1,
  /* DiagArray228 */ diag::warn_conflicting_param_modifiers, diag::warn_conflicting_ret_type_modifiers, -1,
  /* DiagArray230 */ diag::warn_remainder_division_by_zero, -1,
  /* DiagArray231 */ diag::warn_attribute_dll_redeclaration, -1,
  /* DiagArray232 */ diag::warn_attribute_dllexport_explicit_instantiation_decl, -1,
  /* DiagArray233 */ diag::warn_attribute_dllimport_static_field_definition, -1,
  /* DiagArray234 */ diag::warn_doc_api_container_decl_mismatch, diag::warn_doc_block_command_duplicate, diag::warn_doc_block_command_empty_paragraph, diag::warn_doc_container_decl_mismatch, diag::warn_doc_function_method_decl_mismatch, diag::warn_doc_html_start_tag_expected_ident_or_greater, diag::warn_doc_html_start_tag_expected_quoted_string, diag::warn_doc_inline_contents_no_argument, diag::warn_doc_param_duplicate, diag::warn_doc_param_invalid_direction, diag::warn_doc_param_not_attached_to_a_function_decl, diag::warn_doc_param_not_found, diag::warn_doc_returns_attached_to_a_void_function, diag::warn_doc_returns_not_attached_to_a_function_decl, diag::warn_doc_tparam_duplicate, diag::warn_doc_tparam_not_attached_to_a_template_decl, diag::warn_doc_tparam_not_found, diag::warn_not_a_doxygen_trailing_member_comment, diag::warn_verbatim_block_end_without_start, -1,
  /* DiagArray235 */ diag::warn_doc_deprecated_not_sync, -1,
  /* DiagArray236 */ diag::warn_doc_html_end_forbidden, diag::warn_doc_html_end_unbalanced, diag::warn_doc_html_missing_end_tag, diag::warn_doc_html_start_end_mismatch, -1,
  /* DiagArray237 */ diag::warn_doc_param_spaces_in_direction, -1,
  /* DiagArray238 */ diag::warn_correct_comment_command_name, diag::warn_unknown_comment_command_name, -1,
  /* DiagArray239 */ diag::ext_dollar_in_identifier, -1,
  /* DiagArray240 */ diag::warn_impcast_double_promotion, -1,
  /* DiagArray241 */ diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_qualified_dtor_named_in_lexical_scope, -1,
  /* DiagArray242 */ diag::ext_destructor_typedef_name, -1,
  /* DiagArray243 */ diag::ext_duplicate_declspec, diag::ext_warn_duplicate_declspec, diag::warn_attribute_address_multiple_identical_qualifiers, diag::warn_duplicate_declspec, -1,
  /* DiagArray244 */ diag::warn_duplicate_enum_values, -1,
  /* DiagArray245 */ diag::warn_method_param_declaration, -1,
  /* DiagArray246 */ diag::warn_duplicate_method_decl, -1,
  /* DiagArray247 */ diag::warn_duplicate_protocol_def, -1,
  /* DiagArray248 */ diag::warn_dyn_class_memaccess, -1,
  /* DiagArray249 */ diag::ext_dynamic_exception_spec, -1,
  /* DiagArray251 */ diag::ext_enum_base_in_type_specifier, -1,
  /* DiagArray252 */ diag::ext_elaborated_enum_class, -1,
  /* DiagArray253 */ diag::ext_embedded_directive, -1,
  /* DiagArray254 */ diag::warn_empty_for_body, diag::warn_empty_if_body, diag::warn_empty_range_based_for_body, diag::warn_empty_switch_body, diag::warn_empty_while_body, -1,
  /* DiagArray255 */ diag::ext_decomp_decl_empty, -1,
  /* DiagArray256 */ diag::warn_empty_init_statement, -1,
  /* DiagArray257 */ diag::ext_empty_translation_unit, -1,
  /* DiagArray258 */ diag::warn_incomplete_encoded_type, -1,
  /* DiagArray260 */ diag::warn_comparison_mixed_enum_types, -1,
  /* DiagArray261 */ diag::warn_conditional_mixed_enum_types, -1,
  /* DiagArray262 */ diag::warn_comparison_of_mixed_enum_types_switch, -1,
  /* DiagArray263 */ diag::warn_impcast_different_enum_types, -1,
  /* DiagArray264 */ diag::warn_arith_conv_mixed_enum_types, -1,
  /* DiagArray265 */ diag::warn_arith_conv_enum_float, -1,
  /* DiagArray266 */ diag::ext_enum_too_large, diag::ext_enumerator_increment_too_large, -1,
  /* DiagArray267 */ diag::warn_cdtor_function_try_handler_mem_expr, diag::warn_exception_caught_by_earlier_handler, diag::warn_throw_in_noexcept_func, -1,
  /* DiagArray268 */ diag::ext_excess_initializers, diag::ext_excess_initializers_for_sizeless_type, diag::ext_excess_initializers_in_char_array_initializer, diag::ext_initializer_string_for_char_array_too_long, -1,
  /* DiagArray269 */ diag::warn_exit_time_destructor, -1,
  /* DiagArray270 */ diag::warn_defined_in_function_type_macro, diag::warn_defined_in_object_type_macro, -1,
  /* DiagArray271 */ diag::warn_direct_initialize_call, diag::warn_direct_super_initialize_call, -1,
  /* DiagArray272 */ diag::warn_arc_strong_pointer_objc_pointer, -1,
  /* DiagArray273 */ diag::ext_export_no_name_block, diag::ext_export_no_names, -1,
  /* DiagArray274 */ diag::ext_export_using_directive, -1,
  /* DiagArray275 */ diag::warn_zero_size_struct_union_in_extern_c, -1,
  /* DiagArray276 */ diag::warn_extern_init, -1,
  /* DiagArray277 */ diag::warn_arm_interrupt_calling_convention, -1,
  /* DiagArray278 */ diag::warn_namespace_member_extra_qualification, -1,
  /* DiagArray279 */ diag::ext_extra_semi, diag::warn_extra_semi_after_mem_fn_def, -1,
  /* DiagArray280 */ diag::warn_null_statement, -1,
  /* DiagArray281 */ diag::ext_pp_extra_tokens_at_eol, diag::warn_omp_extra_tokens_at_eol, -1,
  /* DiagArray282 */ diag::warn_final_dtor_non_final_class, -1,
  /* DiagArray283 */ diag::warn_pragma_final_macro, -1,
  /* DiagArray284 */ diag::ext_clang_c_enum_fixed_underlying_type, -1,
  /* DiagArray285 */ diag::warn_fixedpoint_constant_overflow, -1,
  /* DiagArray286 */ diag::warn_flag_enum_constant_out_of_range, -1,
  /* DiagArray287 */ diag::ext_flexible_array_in_array, diag::ext_flexible_array_in_struct, -1,
  /* DiagArray288 */ diag::warn_impcast_float_integer, -1,
  /* DiagArray289 */ diag::warn_floatingpoint_eq, -1,
  /* DiagArray290 */ diag::warn_impcast_float_to_integer, diag::warn_impcast_float_to_integer_out_of_range, -1,
  /* DiagArray291 */ diag::warn_impcast_float_to_integer_zero, -1,
  /* DiagArray292 */ diag::warn_redundant_loop_iteration, diag::warn_variables_not_in_loop_body, -1,
  /* DiagArray293 */ diag::warn_format_P_no_precision, diag::warn_format_argument_needs_cast, diag::warn_format_bool_as_character, diag::warn_format_conversion_argument_type_mismatch, diag::warn_format_invalid_annotation, diag::warn_format_invalid_positional_specifier, diag::warn_format_mix_positional_nonpositional_args, diag::warn_format_nonsensical_length, diag::warn_format_string_is_wide_literal, diag::warn_format_zero_positional_specifier, diag::warn_missing_format_string, diag::warn_printf_ObjCflags_without_ObjCConversion, diag::warn_printf_asterisk_missing_arg, diag::warn_printf_asterisk_wrong_type, diag::warn_printf_empty_objc_flag, diag::warn_printf_format_string_contains_null_char, diag::warn_printf_format_string_not_null_terminated, diag::warn_printf_ignored_flag, diag::warn_printf_incomplete_specifier, diag::warn_printf_invalid_objc_flag, diag::warn_printf_nonsensical_flag, diag::warn_printf_nonsensical_optional_amount, diag::warn_printf_positional_arg_exceeds_data_args, diag::warn_scanf_nonzero_width, diag::warn_scanf_scanlist_incomplete, -1,
  /* DiagArray294 */ diag::warn_printf_data_arg_not_used, -1,
  /* DiagArray295 */ diag::warn_printf_insufficient_data_args, -1,
  /* DiagArray296 */ diag::warn_format_invalid_conversion, -1,
  /* DiagArray297 */ diag::warn_format_non_standard, diag::warn_format_non_standard_conversion_spec, diag::warn_format_non_standard_positional_arg, -1,
  /* DiagArray298 */ diag::warn_format_nonliteral, -1,
  /* DiagArray299 */ diag::warn_format_argument_needs_cast_pedantic, diag::warn_format_conversion_argument_type_mismatch_pedantic, -1,
  /* DiagArray300 */ diag::warn_format_nonliteral_noargs, -1,
  /* DiagArray301 */ diag::warn_format_conversion_argument_type_mismatch_confusion, -1,
  /* DiagArray303 */ diag::warn_empty_format_string, -1,
  /* DiagArray305 */ diag::warn_fortify_scanf_overflow, diag::warn_fortify_source_format_overflow, diag::warn_fortify_source_overflow, diag::warn_fortify_source_size_mismatch, diag::warn_fortify_strlen_overflow, -1,
  /* DiagArray306 */ diag::warn_four_char_character_literal, -1,
  /* DiagArray307 */ diag::warn_frame_address, -1,
  /* DiagArray308 */ diag::warn_fe_backend_frame_larger_than, diag::warn_fe_frame_larger_than, -1,
  /* DiagArray310 */ diag::warn_framework_include_private_from_public, -1,
  /* DiagArray311 */ diag::warn_free_nonheap_object, -1,
  /* DiagArray312 */ diag::warn_function_def_in_objc_container, -1,
  /* DiagArray313 */ diag::warn_dispatch_body_ignored, diag::warn_multiversion_duplicate_entries, diag::warn_target_clone_duplicate_options, -1,
  /* DiagArray314 */ diag::warn_drv_fuse_ld_path, -1,
  /* DiagArray316 */ diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_warn_gnu_final, diag::warn_attribute_on_function_definition, diag::warn_break_binds_to_switch, diag::warn_cleanup_ext, diag::warn_gcc_attribute_location, diag::warn_gcc_ignores_type_attr, diag::warn_gcc_variable_decl_in_for_loop, diag::warn_loop_ctrl_binds_to_inner, -1,
  /* DiagArray317 */ diag::warn_global_constructor, diag::warn_global_destructor, -1,
  /* DiagArray318 */ diag::warn_drv_global_isel_incomplete, diag::warn_drv_global_isel_incomplete_opt, -1,
  /* DiagArray320 */ diag::ext_alignof_expr, -1,
  /* DiagArray321 */ diag::ext_gnu_anonymous_struct, -1,
  /* DiagArray322 */ diag::ext_array_init_parens, -1,
  /* DiagArray323 */ diag::ext_auto_type, -1,
  /* DiagArray324 */ diag::ext_binary_literal, -1,
  /* DiagArray325 */ diag::ext_gnu_case_range, -1,
  /* DiagArray326 */ diag::ext_integer_complex, -1,
  /* DiagArray327 */ diag::ext_array_init_copy, -1,
  /* DiagArray328 */ diag::ext_gnu_conditional_expr, -1,
  /* DiagArray329 */ diag::ext_gnu_array_range, diag::ext_gnu_missing_equal_designator, diag::ext_gnu_old_style_field_designator, -1,
  /* DiagArray330 */ diag::ext_gnu_empty_initializer, -1,
  /* DiagArray331 */ diag::ext_empty_struct_union, diag::ext_flexible_array_empty_aggregate_gnu, diag::ext_no_named_members_in_struct_union, -1,
  /* DiagArray332 */ diag::ext_flexible_array_init, -1,
  /* DiagArray333 */ diag::ext_flexible_array_union_gnu, -1,
  /* DiagArray334 */ diag::ext_expr_not_ice, diag::ext_in_class_initializer_non_constant, diag::ext_vla_folded_to_constant, -1,
  /* DiagArray335 */ diag::ext_imaginary_constant, -1,
  /* DiagArray336 */ diag::ext_pp_include_next_directive, -1,
  /* DiagArray337 */ diag::warn_gnu_inline_cplusplus_without_extern, -1,
  /* DiagArray338 */ diag::ext_gnu_address_of_label, diag::ext_gnu_indirect_goto, -1,
  /* DiagArray339 */ diag::ext_forward_ref_enum_def, -1,
  /* DiagArray340 */ diag::ext_gnu_statement_expr, -1,
  /* DiagArray341 */ diag::ext_in_class_initializer_float_type, -1,
  /* DiagArray342 */ diag::ext_string_literal_operator_template, -1,
  /* DiagArray343 */ diag::ext_typecheck_cast_to_union, -1,
  /* DiagArray344 */ diag::ext_variable_sized_type_in_struct, -1,
  /* DiagArray345 */ diag::ext_pp_line_zero, -1,
  /* DiagArray346 */ diag::ext_missing_varargs_arg, diag::ext_paste_comma, -1,
  /* DiagArray347 */ diag::warn_maybe_capture_bad_target_this_ptr, -1,
  /* DiagArray348 */ diag::warn_header_guard, -1,
  /* DiagArray349 */ diag::warn_using_directive_in_header, -1,
  /* DiagArray350 */ diag::warn_ignored_hip_only_option, -1,
  /* DiagArray351 */ diag::warn_condition_is_idiomatic_assignment, -1,
  /* DiagArray352 */ diag::ext_cannot_use_trivial_abi, diag::warn_alias_to_weak_alias, diag::warn_alias_with_section, diag::warn_aligned_attr_underaligned, diag::warn_attr_abi_tag_namespace, diag::warn_attribute_after_definition_ignored, diag::warn_attribute_cmse_entry_static, diag::warn_attribute_dllexport_explicit_instantiation_def, diag::warn_attribute_has_no_effect_on_compile_time_if, diag::warn_attribute_has_no_effect_on_infinite_loop, diag::warn_attribute_iboutlet, diag::warn_attribute_ignored, diag::warn_attribute_ignored_for_field_of_type, diag::warn_attribute_ignored_on_inline, diag::warn_attribute_ignored_on_non_definition, diag::warn_attribute_invalid_on_definition, diag::warn_attribute_no_decl, diag::warn_attribute_nonnull_no_pointers, diag::warn_attribute_nonnull_parm_no_args, diag::warn_attribute_not_on_decl, diag::warn_attribute_pointer_or_reference_only, diag::warn_attribute_pointers_only, diag::warn_attribute_precede_definition, diag::warn_attribute_return_pointers_only, diag::warn_attribute_return_pointers_refs_only, diag::warn_attribute_sentinel_named_arguments, diag::warn_attribute_sentinel_not_variadic, diag::warn_attribute_type_not_supported, diag::warn_attribute_unknown_visibility, diag::warn_attribute_void_function_method, diag::warn_attribute_weak_on_field, diag::warn_attribute_weak_on_local, diag::warn_attribute_wrong_decl_type, diag::warn_attribute_wrong_decl_type_str, diag::warn_attributes_likelihood_ifstmt_conflict, diag::warn_block_literal_attributes_on_omitted_return_type, diag::warn_cconv_unsupported, diag::warn_cxx11_gnu_attribute_on_type, diag::warn_declspec_allocator_nonpointer, diag::warn_declspec_attribute_ignored, diag::warn_deprecated_anonymous_namespace, diag::warn_deprecated_ignored_on_using, diag::warn_dllimport_dropped_from_inline_function, diag::warn_duplicate_attribute, diag::warn_duplicate_attribute_exact, diag::warn_gc_attribute_weak_on_local, diag::warn_gnu_inline_attribute_requires_inline, diag::warn_ignored_ms_inheritance, diag::warn_ignored_objc_externally_retained, diag::warn_import_on_definition, diag::warn_internal_linkage_local_storage, diag::warn_interrupt_attribute_invalid, diag::warn_microsoft_qualifiers_ignored, diag::warn_mig_server_routine_does_not_return_kern_return_t, diag::warn_mismatched_import, diag::warn_mmap_unknown_attribute, diag::warn_nocf_check_attribute_ignored, diag::warn_noderef_on_non_pointer_or_array, diag::warn_nomerge_attribute_ignored_in_stmt, diag::warn_nothrow_attribute_ignored, diag::warn_ns_attribute_wrong_parameter_type, diag::warn_ns_attribute_wrong_return_type, diag::warn_objc_direct_ignored, diag::warn_objc_direct_property_ignored, diag::warn_opencl_attr_deprecated_ignored, diag::warn_require_const_init_added_too_late, diag::warn_riscv_repeated_interrupt_attribute, diag::warn_sycl_kernel_invalid_template_param_type, diag::warn_sycl_kernel_num_of_function_params, diag::warn_sycl_kernel_num_of_template_params, diag::warn_sycl_kernel_return_type, diag::warn_transparent_union_attribute_field_size_align, diag::warn_transparent_union_attribute_floating, diag::warn_transparent_union_attribute_not_definition, diag::warn_transparent_union_attribute_zero_fields, diag::warn_type_attribute_wrong_type, diag::warn_unhandled_ms_attribute_ignored, diag::warn_unsupported_target_attribute, diag::warn_wrong_clang_attr_namespace, -1,
  /* DiagArray353 */ diag::warn_missing_sdksettings_for_availability_checking, -1,
  /* DiagArray354 */ diag::warn_drv_unsupported_opt_for_target, diag::warn_ignored_gcc_optimization, -1,
  /* DiagArray355 */ diag::warn_pragma_intrinsic_builtin, -1,
  /* DiagArray356 */ diag::warn_pragma_optimize, -1,
  /* DiagArray357 */ diag::warn_pragma_align_expected_equal, diag::warn_pragma_align_invalid_option, diag::warn_pragma_comment_ignored, diag::warn_pragma_debug_missing_argument, diag::warn_pragma_debug_unexpected_command, diag::warn_pragma_debug_unknown_module, diag::warn_pragma_expected_action_or_r_paren, diag::warn_pragma_expected_colon, diag::warn_pragma_expected_colon_r_paren, diag::warn_pragma_expected_comma, diag::warn_pragma_expected_identifier, diag::warn_pragma_expected_init_seg, diag::warn_pragma_expected_integer, diag::warn_pragma_expected_lparen, diag::warn_pragma_expected_non_wide_string, diag::warn_pragma_expected_predicate, diag::warn_pragma_expected_punc, diag::warn_pragma_expected_rparen, diag::warn_pragma_expected_section_label_or_name, diag::warn_pragma_expected_section_name, diag::warn_pragma_expected_section_push_pop_or_name, diag::warn_pragma_expected_string, diag::warn_pragma_extra_tokens_at_eol, diag::warn_pragma_force_cuda_host_device_bad_arg, diag::warn_pragma_fp_ignored, diag::warn_pragma_init_seg_unsupported_target, diag::warn_pragma_invalid_action, diag::warn_pragma_invalid_argument, diag::warn_pragma_invalid_specific_action, diag::warn_pragma_missing_argument, diag::warn_pragma_ms_fenv_access, diag::warn_pragma_ms_struct, diag::warn_pragma_options_align_reset_failed, diag::warn_pragma_options_expected_align, diag::warn_pragma_pack_invalid_alignment, diag::warn_pragma_pack_malformed, diag::warn_pragma_pop_failed, diag::warn_pragma_pop_macro_no_push, diag::warn_pragma_unknown_extension, diag::warn_pragma_unsupported_action, diag::warn_pragma_unsupported_extension, diag::warn_pragma_unused_expected_var, diag::warn_pragma_unused_expected_var_arg, diag::warn_pragma_unused_undeclared_var, diag::warn_stdc_unknown_rounding_mode, -1,
  /* DiagArray358 */ diag::warn_arc_lifetime_result_type, diag::warn_block_literal_qualifiers_on_omitted_return_type, diag::warn_qual_return_type, diag::warn_typecheck_function_qualifiers_ignored, -1,
  /* DiagArray359 */ diag::warn_typecheck_reference_qualifiers, -1,
  /* DiagArray361 */ diag::warn_auto_implicit_atomic_property, diag::warn_implicit_atomic_property, -1,
  /* DiagArray362 */ diag::warn_impcast_integer_float_precision_constant, -1,
  /* DiagArray363 */ diag::warn_impcast_floating_point_to_bool, -1,
  /* DiagArray364 */ diag::ext_implicit_exception_spec_mismatch, -1,
  /* DiagArray365 */ diag::warn_unannotated_fallthrough, -1,
  /* DiagArray366 */ diag::warn_unannotated_fallthrough_per_function, -1,
  /* DiagArray367 */ diag::warn_impcast_fixed_point_range, -1,
  /* DiagArray368 */ diag::warn_impcast_float_precision, diag::warn_impcast_float_result_precision, -1,
  /* DiagArray369 */ diag::ext_implicit_function_decl, diag::ext_implicit_lib_function_decl, diag::warn_builtin_unknown, diag::warn_implicit_function_decl, -1,
  /* DiagArray370 */ diag::ext_missing_type_specifier, -1,
  /* DiagArray371 */ diag::warn_impcast_high_order_zero_bits, diag::warn_impcast_integer_precision, -1,
  /* DiagArray372 */ diag::warn_impcast_integer_float_precision, -1,
  /* DiagArray373 */ diag::warn_implicitly_retains_self, -1,
  /* DiagArray374 */ diag::ext_integer_literal_too_large_for_signed, -1,
  /* DiagArray376 */ diag::ext_pp_import_directive, -1,
  /* DiagArray377 */ diag::warn_inaccessible_base_class, -1,
  /* DiagArray378 */ diag::pp_include_next_absolute_path, -1,
  /* DiagArray379 */ diag::pp_include_next_in_primary, -1,
  /* DiagArray380 */ diag::warn_deep_exception_specs_differ, diag::warn_incompatible_exception_specs, -1,
  /* DiagArray381 */ diag::ext_typecheck_convert_incompatible_function_pointer, -1,
  /* DiagArray382 */ diag::warn_redecl_library_builtin, -1,
  /* DiagArray383 */ diag::warn_cxx_ms_struct, diag::warn_npot_ms_struct, -1,
  /* DiagArray384 */ diag::ext_typecheck_convert_incompatible_pointer, -1,
  /* DiagArray385 */ diag::ext_nested_pointer_qualifier_mismatch, diag::ext_typecheck_convert_discards_qualifiers, diag::warn_bad_cxx_cast_nested_pointer_addr_space, -1,
  /* DiagArray386 */ diag::warn_property_types_are_incompatible, -1,
  /* DiagArray387 */ diag::warn_incompatible_sysroot, -1,
  /* DiagArray388 */ diag::warn_mmap_incomplete_framework_module_declaration, -1,
  /* DiagArray389 */ diag::warn_undef_method_impl, -1,
  /* DiagArray391 */ diag::warn_implicit_decl_no_jmp_buf, -1,
  /* DiagArray392 */ diag::warn_missing_submodule, diag::warn_mmap_umbrella_dir_not_found, diag::warn_uncovered_module_header, -1,
  /* DiagArray393 */ diag::warn_redeclaration_without_attribute_prev_attribute_ignored, diag::warn_redeclaration_without_import_attribute, -1,
  /* DiagArray394 */ diag::warn_inconsistent_destructor_marked_not_override_overriding, -1,
  /* DiagArray395 */ diag::warn_inconsistent_function_marked_not_override_overriding, -1,
  /* DiagArray396 */ diag::ext_increment_bool, -1,
  /* DiagArray397 */ diag::warn_infinite_recursive_function, -1,
  /* DiagArray399 */ diag::ext_initializer_overrides, diag::warn_initializer_overrides, -1,
  /* DiagArray400 */ diag::ext_out_of_line_qualified_id_type_names_constructor, -1,
  /* DiagArray402 */ diag::warn_fe_inline_asm, -1,
  /* DiagArray403 */ diag::warn_inline_namespace_reopened_noninline, -1,
  /* DiagArray404 */ diag::ext_operator_new_delete_declared_inline, -1,
  /* DiagArray405 */ diag::warn_explicit_instantiation_after_specialization, -1,
  /* DiagArray406 */ diag::ext_typecheck_convert_int_pointer, diag::ext_typecheck_convert_pointer_int, -1,
  /* DiagArray408 */ diag::warn_enum_constant_in_bool_context, diag::warn_left_shift_in_bool_context, -1,
  /* DiagArray409 */ diag::warn_int_to_pointer_cast, -1,
  /* DiagArray410 */ diag::warn_int_to_void_pointer_cast, -1,
  /* DiagArray411 */ diag::warn_integer_constant_overflow, -1,
  /* DiagArray412 */ diag::warn_anyx86_interrupt_regsave, -1,
  /* DiagArray413 */ diag::warn_drv_missing_plugin_arg, diag::warn_drv_missing_plugin_name, diag::warn_drv_msp430_hwmult_mismatch, diag::warn_drv_msp430_hwmult_no_device, diag::warn_drv_msp430_hwmult_unsupported, diag::warn_drv_object_size_disabled_O0, diag::warn_drv_optimization_value, diag::warn_target_unsupported_extension, -1,
  /* DiagArray414 */ diag::ext_constexpr_function_never_constant_expr, -1,
  /* DiagArray415 */ diag::warn_iboutlet_object_type, diag::warn_iboutletcollection_property_assign, -1,
  /* DiagArray416 */ diag::warn_invalid_initializer_from_system_header, -1,
  /* DiagArray417 */ diag::warn_invalid_ios_deployment_target, -1,
  /* DiagArray418 */ diag::warn_attribute_no_builtin_invalid_builtin_name, -1,
  /* DiagArray419 */ diag::warn_falloff_noreturn_function, diag::warn_noreturn_function_has_return_expr, -1,
  /* DiagArray420 */ diag::ext_offsetof_non_pod_type, diag::ext_offsetof_non_standardlayout_type, -1,
  /* DiagArray421 */ diag::warn_drv_ps4_sdk_dir, diag::warn_drv_unable_to_find_directory_expected, -1,
  /* DiagArray422 */ diag::ext_partial_spec_not_more_specialized_than_primary, -1,
  /* DiagArray424 */ diag::ext_empty_character, diag::ext_unterminated_char_or_string, -1,
  /* DiagArray425 */ diag::warn_bad_character_encoding, diag::warn_bad_string_encoding, -1,
  /* DiagArray426 */ diag::ext_pp_bad_paste_ms, -1,
  /* DiagArray427 */ diag::warn_jump_out_of_seh_finally, -1,
  /* DiagArray428 */ diag::ext_keyword_as_ident, -1,
  /* DiagArray429 */ diag::warn_pp_macro_hides_keyword, -1,
  /* DiagArray430 */ diag::ext_param_promoted_not_compatible_with_prototype, -1,
  /* DiagArray431 */ diag::ext_token_used, -1,
  /* DiagArray432 */ diag::warn_parameter_size, diag::warn_return_value_size, -1,
  /* DiagArray434 */ diag::warn_fe_linking_module, -1,
  /* DiagArray435 */ diag::warn_impcast_literal_float_to_integer, diag::warn_impcast_literal_float_to_integer_out_of_range, -1,
  /* DiagArray436 */ diag::warn_float_overflow, diag::warn_float_underflow, -1,
  /* DiagArray437 */ diag::ext_template_arg_local_type, -1,
  /* DiagArray438 */ diag::warn_logical_not_on_lhs_of_check, -1,
  /* DiagArray439 */ diag::warn_logical_and_in_logical_or, -1,
  /* DiagArray440 */ diag::ext_c99_longlong, -1,
  /* DiagArray442 */ diag::ext_pp_macro_redef, -1,
  /* DiagArray443 */ diag::ext_main_used, diag::ext_noreturn_main, diag::ext_variadic_main, diag::warn_main_one_arg, diag::warn_main_redefined, diag::warn_main_returns_bool_literal, diag::warn_static_main, -1,
  /* DiagArray444 */ diag::ext_main_returns_nonint, -1,
  /* DiagArray445 */ diag::warn_has_warning_invalid_option, -1,
  /* DiagArray446 */ diag::ext_many_braces_around_init, -1,
  /* DiagArray447 */ diag::warn_max_tokens, diag::warn_max_tokens_total, -1,
  /* DiagArray448 */ diag::warn_max_unsigned_zero, -1,
  /* DiagArray449 */ diag::warn_suspicious_sizeof_memset, -1,
  /* DiagArray450 */ diag::warn_memsize_comparison, -1,
  /* DiagArray451 */ diag::warn_non_contravariant_param_types, diag::warn_non_covariant_ret_types, -1,
  /* DiagArray453 */ diag::ext_ms_abstract_keyword, -1,
  /* DiagArray454 */ diag::ext_anonymous_record_with_type, diag::ext_ms_anonymous_record, -1,
  /* DiagArray455 */ diag::ext_ms_cast_fn_obj, diag::ext_ms_impcast_fn_obj, -1,
  /* DiagArray456 */ diag::ext_charize_microsoft, -1,
  /* DiagArray457 */ diag::ext_comment_paste_microsoft, -1,
  /* DiagArray458 */ diag::ext_default_init_const, -1,
  /* DiagArray459 */ diag::ext_pp_operator_used_as_macro_name, -1,
  /* DiagArray460 */ diag::ext_param_default_argument_redefinition, -1,
  /* DiagArray461 */ diag::warn_attribute_section_drectve, -1,
  /* DiagArray462 */ diag::ext_ctrl_z_eof_microsoft, -1,
  /* DiagArray463 */ diag::ext_ms_forward_ref_enum, -1,
  /* DiagArray464 */ diag::ext_enumerator_too_large, -1,
  /* DiagArray465 */ diag::ext_ellipsis_exception_spec, diag::ext_incomplete_in_exception_spec, diag::ext_mismatched_exception_spec, diag::ext_mismatched_exception_spec_explicit_instantiation, diag::ext_ms_missing_exception_specification, diag::ext_override_exception_spec, -1,
  /* DiagArray466 */ diag::warn_microsoft_dependent_exists, -1,
  /* DiagArray467 */ diag::ext_ms_explicit_constructor_call, -1,
  /* DiagArray468 */ diag::warn_member_extra_qualification, -1,
  /* DiagArray469 */ diag::ext_ms_c_enum_fixed_underlying_type, -1,
  /* DiagArray470 */ diag::ext_flexible_array_empty_aggregate_ms, diag::ext_flexible_array_union_ms, -1,
  /* DiagArray471 */ diag::ext_goto_into_protected_scope, -1,
  /* DiagArray472 */ diag::ext_ms_ambiguous_direct_base, -1,
  /* DiagArray473 */ diag::ext_pp_include_search_ms, -1,
  /* DiagArray474 */ diag::ext_mutable_reference, -1,
  /* DiagArray475 */ diag::ext_pure_function_definition, -1,
  /* DiagArray476 */ diag::ext_static_non_static, -1,
  /* DiagArray477 */ diag::ext_ms_sealed_keyword, -1,
  /* DiagArray478 */ diag::ext_ms_static_assert, -1,
  /* DiagArray479 */ diag::ext_explicit_instantiation_duplicate, diag::ext_found_in_dependent_base, diag::ext_found_later_in_class, diag::ext_ms_delayed_template_argument, diag::ext_ms_deref_template_argument, diag::ext_ms_template_spec_redecl_out_of_scope, diag::ext_ms_template_type_arg_missing_typename, diag::ext_static_out_of_line, diag::ext_undeclared_unqual_id_with_dependent_base, -1,
  /* DiagArray480 */ diag::ext_template_param_shadow, -1,
  /* DiagArray481 */ diag::ext_union_member_of_reference_type, -1,
  /* DiagArray482 */ diag::ext_friend_tag_redecl_outside_namespace, -1,
  /* DiagArray483 */ diag::ext_ms_using_declaration_inaccessible, -1,
  /* DiagArray484 */ diag::ext_pseudo_dtor_on_void, -1,
  /* DiagArray485 */ diag::warn_misleading_indentation, -1,
  /* DiagArray486 */ diag::warn_mismatched_delete_new, -1,
  /* DiagArray487 */ diag::warn_conflicting_param_types, -1,
  /* DiagArray488 */ diag::warn_conflicting_ret_types, -1,
  /* DiagArray489 */ diag::warn_struct_class_previous_tag_mismatch, diag::warn_struct_class_tag_mismatch, -1,
  /* DiagArray490 */ diag::warn_missing_braces, -1,
  /* DiagArray491 */ diag::ext_constinit_missing, -1,
  /* DiagArray492 */ diag::ext_no_declarators, diag::ext_standalone_specifier, diag::ext_typedef_without_a_name, diag::warn_standalone_specifier, -1,
  /* DiagArray493 */ diag::ext_missing_exception_specification, -1,
  /* DiagArray494 */ diag::warn_missing_field_initializers, -1,
  /* DiagArray497 */ diag::warn_missing_method_return_type, -1,
  /* DiagArray498 */ diag::warn_overriding_method_missing_noescape, -1,
  /* DiagArray499 */ diag::warn_suggest_noreturn_block, diag::warn_suggest_noreturn_function, -1,
  /* DiagArray500 */ diag::warn_cconv_knr, -1,
  /* DiagArray501 */ diag::warn_missing_prototype, -1,
  /* DiagArray502 */ diag::warn_missing_selector_name, -1,
  /* DiagArray503 */ diag::warn_missing_sysroot, -1,
  /* DiagArray504 */ diag::warn_missing_variable_declarations, -1,
  /* DiagArray505 */ diag::warn_assume_attribute_string_unknown_suggested, -1,
  /* DiagArray506 */ diag::remark_module_build, diag::remark_module_build_done, diag::remark_module_lock_failure, diag::remark_module_lock_timeout, -1,
  /* DiagArray507 */ diag::warn_module_conflict, diag::warn_module_system_bit_conflict, -1,
  /* DiagArray508 */ diag::warn_module_config_mismatch, -1,
  /* DiagArray509 */ diag::warn_duplicate_module_file_extension, -1,
  /* DiagArray510 */ diag::remark_module_import, -1,
  /* DiagArray511 */ diag::ext_module_import_in_extern_c, -1,
  /* DiagArray512 */ diag::remark_module_lock, -1,
  /* DiagArray513 */ diag::ext_equivalent_internal_linkage_decl_in_modules, -1,
  /* DiagArray514 */ diag::ext_module_import_not_at_top_level_noop, -1,
  /* DiagArray518 */ diag::warn_drv_msvc_not_found, -1,
  /* DiagArray519 */ diag::warn_multichar_character_literal, -1,
  /* DiagArray520 */ diag::warn_vbase_moved_multiple_times, -1,
  /* DiagArray522 */ diag::ext_anonymous_record_with_anonymous_type, -1,
  /* DiagArray524 */ diag::warn_operator_new_returns_null, -1,
  /* DiagArray525 */ diag::ext_no_newline_eof, diag::warn_no_newline_eof, -1,
  /* DiagArray526 */ diag::warn_dereference_of_noderef_type, diag::warn_dereference_of_noderef_type_no_decl, diag::warn_noderef_to_dereferenceable_pointer, -1,
  /* DiagArray528 */ diag::ext_non_c_like_anon_struct_in_typedef, -1,
  /* DiagArray530 */ diag::warn_non_literal_null_pointer, -1,
  /* DiagArray531 */ diag::warn_non_modular_include_in_framework_module, -1,
  /* DiagArray532 */ diag::warn_non_modular_include_in_module, -1,
  /* DiagArray533 */ diag::warn_cannot_pass_non_pod_arg_to_vararg, diag::warn_non_pod_vararg_with_format_string, diag::warn_second_parameter_to_va_arg_not_pod, diag::warn_second_parameter_to_va_arg_ownership_qualified, -1,
  /* DiagArray534 */ diag::warn_alignment_not_power_of_two, -1,
  /* DiagArray535 */ diag::warn_non_virtual_dtor, -1,
  /* DiagArray536 */ diag::warn_null_arg, diag::warn_null_ret, -1,
  /* DiagArray538 */ diag::pp_nonportable_path, -1,
  /* DiagArray539 */ diag::pp_nonportable_system_path, -1,
  /* DiagArray540 */ diag::warn_neon_vector_initializer_non_portable, -1,
  /* DiagArray541 */ diag::warn_cstruct_memaccess, -1,
  /* DiagArray542 */ diag::warn_nsconsumed_attribute_mismatch, -1,
  /* DiagArray543 */ diag::warn_nsreturns_retained_attribute_mismatch, -1,
  /* DiagArray544 */ diag::warn_null_in_arithmetic_operation, diag::warn_null_in_comparison_operation, -1,
  /* DiagArray545 */ diag::null_in_char_or_string, diag::null_in_file, -1,
  /* DiagArray546 */ diag::warn_impcast_null_pointer_to_integer, -1,
  /* DiagArray547 */ diag::warn_binding_null_to_reference, diag::warn_indirection_through_null, -1,
  /* DiagArray548 */ diag::warn_gnu_null_ptr_arith, diag::warn_pointer_arith_null_ptr, -1,
  /* DiagArray549 */ diag::warn_pointer_sub_null_ptr, -1,
  /* DiagArray550 */ diag::warn_conflicting_nullability_attr_overriding_param_types, diag::warn_conflicting_nullability_attr_overriding_ret_types, diag::warn_mismatched_nullability_attr, diag::warn_null_resettable_setter, diag::warn_nullability_duplicate, -1,
  /* DiagArray551 */ diag::warn_nullability_missing, -1,
  /* DiagArray552 */ diag::warn_nullability_missing_array, -1,
  /* DiagArray553 */ diag::warn_nullability_declspec, -1,
  /* DiagArray554 */ diag::ext_nullability, -1,
  /* DiagArray555 */ diag::warn_nullability_inferred_on_nested_type, -1,
  /* DiagArray556 */ diag::warn_nullability_lost, -1,
  /* DiagArray557 */ diag::warn_autosynthesis_property_ivar_match, -1,
  /* DiagArray558 */ diag::warn_impcast_constant_value_to_objc_bool, -1,
  /* DiagArray559 */ diag::warn_objc_boxing_invalid_utf8_string, -1,
  /* DiagArray560 */ diag::warn_objc_circular_container, -1,
  /* DiagArray562 */ diag::warn_objc_designated_init_missing_super_call, diag::warn_objc_designated_init_non_designated_init_call, diag::warn_objc_designated_init_non_super_designated_init_call, diag::warn_objc_implementation_missing_designated_init_override, diag::warn_objc_secondary_init_missing_init_call, diag::warn_objc_secondary_init_super_init_call, -1,
  /* DiagArray563 */ diag::warn_nsdictionary_duplicate_key, -1,
  /* DiagArray564 */ diag::warn_superclass_variable_sized_type_not_at_end, diag::warn_variable_sized_ivar_visibility, -1,
  /* DiagArray565 */ diag::warn_forward_class_redefinition, -1,
  /* DiagArray566 */ diag::warn_ivars_in_interface, -1,
  /* DiagArray567 */ diag::warn_objc_literal_comparison, -1,
  /* DiagArray568 */ diag::warn_impcast_objective_c_literal_to_bool, diag::warn_objc_collection_literal_element, -1,
  /* DiagArray569 */ diag::warn_pp_objc_macro_redef_ignored, -1,
  /* DiagArray570 */ diag::warn_messaging_unqualified_id, -1,
  /* DiagArray571 */ diag::warn_class_method_not_found, diag::warn_class_method_not_found_with_typo, diag::warn_inst_method_not_found, diag::warn_instance_method_not_found_with_typo, diag::warn_instance_method_on_class_found, diag::warn_root_inst_method_not_found, -1,
  /* DiagArray572 */ diag::warn_missing_explicit_synthesis, -1,
  /* DiagArray573 */ diag::warn_objc_missing_super_call, -1,
  /* DiagArray574 */ diag::warn_multiple_method_decl, -1,
  /* DiagArray575 */ diag::warn_objc_property_retain_of_block, -1,
  /* DiagArray576 */ diag::warn_objc_pointer_cxx_catch_fragile, -1,
  /* DiagArray577 */ diag::warn_objc_property_assign_on_object, -1,
  /* DiagArray578 */ diag::warn_impl_required_for_class_property, diag::warn_impl_required_in_category_for_class_property, diag::warn_setter_getter_impl_required, diag::warn_setter_getter_impl_required_in_category, -1,
  /* DiagArray579 */ diag::warn_property_implicitly_mismatched, -1,
  /* DiagArray580 */ diag::warn_cocoa_naming_owned_rule, -1,
  /* DiagArray581 */ diag::warn_objc_property_default_assign_on_object, diag::warn_objc_property_no_assignment_attribute, -1,
  /* DiagArray582 */ diag::warn_autosynthesis_property_in_superclass, diag::warn_no_autosynthesis_property, diag::warn_no_autosynthesis_shared_ivar_property, -1,
  /* DiagArray583 */ diag::warn_category_method_impl_match, -1,
  /* DiagArray584 */ diag::warn_auto_synthesizing_protocol_property, -1,
  /* DiagArray585 */ diag::warn_objc_redundant_qualified_class_type, -1,
  /* DiagArray586 */ diag::warn_objc_readonly_property_has_setter, -1,
  /* DiagArray588 */ diag::warn_objc_redundant_literal_use, -1,
  /* DiagArray589 */ diag::warn_objc_root_class_missing, -1,
  /* DiagArray591 */ diag::warn_impcast_float_to_objc_signed_char_bool, -1,
  /* DiagArray592 */ diag::warn_impcast_int_to_objc_signed_char_bool, -1,
  /* DiagArray593 */ diag::warn_objc_string_literal_comparison, -1,
  /* DiagArray594 */ diag::warn_concatenated_nsarray_literal, -1,
  /* DiagArray595 */ diag::warn_objc_unsafe_perform_selector, -1,
  /* DiagArray596 */ diag::warn_odr_different_num_template_parameters, diag::warn_odr_different_template_parameter_kind, diag::warn_odr_field_type_inconsistent, diag::warn_odr_function_type_inconsistent, diag::warn_odr_ivar_type_inconsistent, diag::warn_odr_non_type_parameter_type_inconsistent, diag::warn_odr_objc_method_num_params_inconsistent, diag::warn_odr_objc_method_param_type_inconsistent, diag::warn_odr_objc_method_result_type_inconsistent, diag::warn_odr_objc_method_variadic_inconsistent, diag::warn_odr_objc_property_impl_kind_inconsistent, diag::warn_odr_objc_property_type_inconsistent, diag::warn_odr_objc_superclass_inconsistent, diag::warn_odr_objc_synthesize_ivar_inconsistent, diag::warn_odr_parameter_pack_non_pack, diag::warn_odr_tag_type_inconsistent, diag::warn_odr_variable_multiple_def, diag::warn_odr_variable_type_inconsistent, -1,
  /* DiagArray597 */ diag::warn_old_style_cast, -1,
  /* DiagArray599 */ diag::ext_opencl_ext_vector_type_rgba_selector, -1,
  /* DiagArray601 */ diag::ext_omp_attributes, -1,
  /* DiagArray602 */ diag::warn_omp_alignment_not_power_of_two, diag::warn_omp_allocate_thread_on_task_target_directive, diag::warn_omp_ctx_incompatible_property_for_selector, diag::warn_omp_ctx_incompatible_score_for_property, diag::warn_omp_ctx_incompatible_selector_for_set, diag::warn_omp_ctx_selector_without_properties, diag::warn_omp_declare_variant_ctx_mutiple_use, diag::warn_omp_declare_variant_ctx_not_a_property, diag::warn_omp_declare_variant_ctx_not_a_selector, diag::warn_omp_declare_variant_ctx_not_a_set, diag::warn_omp_declare_variant_expected, diag::warn_omp_declare_variant_string_literal_or_identifier, diag::warn_omp_linear_step_zero, diag::warn_omp_more_one_device_type_clause, diag::warn_omp_more_one_interop_type, diag::warn_omp_unknown_assumption_clause_missing_id, diag::warn_omp_unknown_assumption_clause_without_args, diag::warn_omp_used_different_allocator, -1,
  /* DiagArray603 */ diag::ext_omp_loop_not_canonical_init, diag::warn_omp_loop_64_bit_var, -1,
  /* DiagArray604 */ diag::warn_omp_non_trivial_type_mapped, -1,
  /* DiagArray605 */ diag::warn_drv_omp_offload_target_duplicate, diag::warn_omp_declare_target_after_first_use, diag::warn_omp_not_in_target_context, -1,
  /* DiagArray606 */ diag::warn_drv_fine_grained_bitfield_accesses_ignored, diag::warn_drv_moutline_atomics_unsupported_opt, diag::warn_drv_moutline_unsupported_opt, diag::warn_drv_ps4_force_pic, diag::warn_drv_unsupported_longcalls, diag::warn_drv_unsupported_option_for_offload_arch_req_feature, diag::warn_drv_unsupported_option_for_target, diag::warn_drv_unsupported_pic_with_mabicalls, diag::warn_drv_unsupported_sdata, diag::warn_drv_vectorize_needs_hvx, -1,
  /* DiagArray607 */ diag::ext_typecheck_ordered_comparison_of_function_pointers, diag::warn_typecheck_ordered_comparison_of_function_pointers, -1,
  /* DiagArray608 */ diag::ext_out_of_line_declaration, -1,
  /* DiagArray609 */ diag::ext_use_out_of_scope_declaration, -1,
  /* DiagArray610 */ diag::warn_overaligned_type, -1,
  /* DiagArray612 */ diag::ext_string_too_long, -1,
  /* DiagArray613 */ diag::warn_overloaded_shift_in_comparison, -1,
  /* DiagArray614 */ diag::warn_overloaded_virtual, -1,
  /* DiagArray616 */ diag::warn_fe_override_module, -1,
  /* DiagArray617 */ diag::warn_conflicting_overriding_param_modifiers, diag::warn_conflicting_overriding_param_types, diag::warn_conflicting_overriding_ret_type_modifiers, diag::warn_conflicting_overriding_ret_types, diag::warn_conflicting_overriding_variadic, diag::warn_non_contravariant_overriding_param_types, diag::warn_non_covariant_overriding_ret_types, -1,
  /* DiagArray618 */ diag::warn_drv_overriding_flag_option, -1,
  /* DiagArray619 */ diag::warn_unnecessary_packed, -1,
  /* DiagArray620 */ diag::warn_padded_struct_anon_field, diag::warn_padded_struct_field, diag::warn_padded_struct_size, -1,
  /* DiagArray621 */ diag::warn_condition_is_assignment, diag::warn_precedence_bitwise_rel, diag::warn_precedence_conditional, -1,
  /* DiagArray622 */ diag::warn_equality_with_extra_parens, -1,
  /* DiagArray624 */ diag::remark_fe_backend_optimization_remark, -1,
  /* DiagArray625 */ diag::remark_fe_backend_optimization_remark_analysis, diag::remark_fe_backend_optimization_remark_analysis_aliasing, diag::remark_fe_backend_optimization_remark_analysis_fpcommute, -1,
  /* DiagArray626 */ diag::warn_fe_backend_optimization_failure, -1,
  /* DiagArray627 */ diag::remark_fe_backend_optimization_remark_missed, -1,
  /* DiagArray628 */ diag::warn_module_uses_date_time, -1,
  /* DiagArray629 */ diag::ext_aggregate_init_not_constant, diag::ext_anonymous_record_with_type, diag::ext_anonymous_struct_union_qualified, diag::ext_array_size_conversion, diag::ext_auto_new_list_init, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_cast_fn_obj, diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_cxx11_enum_fixed_underlying_type, diag::ext_cxx14_attr, diag::ext_cxx17_attr, diag::ext_cxx20_attr, diag::ext_designated_init, diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_duplicate_declspec, diag::ext_ellipsis_exception_spec, diag::ext_empty_fnmacro_arg, diag::ext_enum_value_not_int, diag::ext_enumerator_list_comma_c, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_instantiation_without_qualified_id, diag::ext_expr_not_ice, diag::ext_extern_template, diag::ext_extra_semi, diag::ext_forward_ref_enum, diag::ext_freestanding_complex, diag::ext_gnu_array_range, diag::ext_gnu_ptr_func_arith, diag::ext_gnu_subscript_void_type, diag::ext_gnu_void_ptr, diag::ext_hex_constant_invalid, diag::ext_hex_literal_invalid, diag::ext_ident_list_in_param, diag::ext_in_class_initializer_non_constant, diag::ext_integer_complement_complex, diag::ext_integer_increment_complex, diag::ext_internal_in_extern_inline_quiet, diag::ext_line_comment, diag::ext_main_used, diag::ext_multi_line_line_comment, diag::ext_named_variadic_macro, diag::ext_no_newline_eof, diag::ext_nonstandard_escape, diag::ext_ns_enum_attribute, diag::ext_opencl_double_without_pragma, diag::ext_param_not_declared, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_pp_bad_vaargs_use, diag::ext_pp_comma_expr, diag::ext_pp_ident_directive, diag::ext_pp_line_too_big, diag::ext_pp_opencl_variadic_macros, diag::ext_pp_warning_directive, diag::ext_return_has_void_expr, diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::ext_subscript_non_lvalue, diag::ext_thread_before, diag::ext_typecheck_addrof_void, diag::ext_typecheck_cast_nonscalar, diag::ext_typecheck_comparison_of_fptr_to_void, diag::ext_typecheck_cond_one_void, diag::ext_typecheck_convert_pointer_void_func, diag::ext_typecheck_ordered_comparison_of_pointer_and_zero, diag::ext_variadic_macro, diag::warn_defined_in_function_type_macro, diag::warn_format_conversion_argument_type_mismatch_pedantic, diag::warn_kern_is_method, -1,
  /* DiagArray630 */ diag::warn_opencl_unsupported_core_feature, diag::warn_pragma_extension_is_core, -1,
  /* DiagArray632 */ diag::warn_pessimizing_move_on_initialization, diag::warn_pessimizing_move_on_return, -1,
  /* DiagArray633 */ diag::ext_gnu_ptr_func_arith, diag::ext_gnu_subscript_void_type, diag::ext_gnu_void_ptr, diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::warn_sub_ptr_zero_size_types, -1,
  /* DiagArray634 */ diag::warn_cast_nonnull_to_bool, diag::warn_impcast_pointer_to_bool, -1,
  /* DiagArray635 */ diag::warn_pointer_compare, -1,
  /* DiagArray636 */ diag::ext_typecheck_comparison_of_pointer_integer, -1,
  /* DiagArray637 */ diag::ext_typecheck_convert_incompatible_pointer_sign, -1,
  /* DiagArray638 */ diag::warn_pointer_to_enum_cast, -1,
  /* DiagArray639 */ diag::warn_pointer_to_int_cast, -1,
  /* DiagArray640 */ diag::ext_typecheck_cond_incompatible_pointers, -1,
  /* DiagArray641 */ diag::warn_poison_system_directories, -1,
  /* DiagArray642 */ diag::warn_potentially_direct_selector_expression, -1,
  /* DiagArray643 */ diag::warn_side_effects_typeid, -1,
  /* DiagArray644 */ diag::warn_pragma_attribute_unused, -1,
  /* DiagArray645 */ diag::pp_pragma_once_in_main_file, -1,
  /* DiagArray646 */ diag::warn_pragma_pack_modified_after_include, diag::warn_pragma_pack_no_pop_eof, -1,
  /* DiagArray647 */ diag::warn_pragma_pack_non_default_at_include, -1,
  /* DiagArray648 */ diag::pp_pragma_sysheader_in_main_file, -1,
  /* DiagArray649 */ diag::warn_redefine_extname_not_applied, -1,
  /* DiagArray650 */ diag::warn_cxx11_compat_constexpr_body_invalid_stmt, diag::warn_cxx11_compat_constexpr_body_multiple_return, diag::warn_cxx11_compat_constexpr_body_no_return, diag::warn_cxx11_compat_constexpr_local_var, diag::warn_cxx11_compat_constexpr_type_definition, diag::warn_cxx11_compat_decltype_auto_type_specifier, diag::warn_cxx11_compat_deduced_return_type, diag::warn_cxx11_compat_digit_separator, diag::warn_cxx11_compat_generic_lambda, diag::warn_cxx11_compat_init_capture, diag::warn_cxx11_compat_variable_template, -1,
  /* DiagArray652 */ diag::warn_cxx14_compat_class_template_argument_deduction, diag::warn_cxx14_compat_constexpr_if, diag::warn_cxx14_compat_constexpr_on_lambda, diag::warn_cxx14_compat_decomp_decl, diag::warn_cxx14_compat_fold_expression, diag::warn_cxx14_compat_init_statement, diag::warn_cxx14_compat_inline_variable, diag::warn_cxx14_compat_nested_namespace_definition, diag::warn_cxx14_compat_star_this_lambda_capture, diag::warn_cxx14_compat_static_assert_no_message, diag::warn_cxx14_compat_template_nontype_parm_auto_type, diag::warn_cxx14_compat_template_template_param_typename, diag::warn_cxx14_compat_u8_character_literal, diag::warn_cxx14_compat_using_attribute_ns, diag::warn_cxx17_compat_multi_using_declaration, diag::warn_cxx17_compat_using_declaration_pack, diag::warn_for_range_begin_end_types_differ, -1,
  /* DiagArray653 */ diag::warn_cxx14_compat_ns_enum_attribute, diag::warn_cxx17_hex_literal, -1,
  /* DiagArray654 */ diag::warn_cxx17_compat_adl_only_template_id, diag::warn_cxx17_compat_bitfield_member_init, diag::warn_cxx17_compat_constexpr_body_invalid_stmt, diag::warn_cxx17_compat_constexpr_ctor_missing_init, diag::warn_cxx17_compat_constexpr_function_try_block, diag::warn_cxx17_compat_constexpr_local_var_no_init, diag::warn_cxx17_compat_constexpr_union_ctor_no_init, diag::warn_cxx17_compat_constexpr_virtual, diag::warn_cxx17_compat_decomp_decl_spec, diag::warn_cxx17_compat_defaulted_comparison, diag::warn_cxx17_compat_defaulted_method_type_mismatch, diag::warn_cxx17_compat_equals_this_lambda_capture, diag::warn_cxx17_compat_explicit_bool, diag::warn_cxx17_compat_for_range_init_stmt, diag::warn_cxx17_compat_init_capture_pack, diag::warn_cxx17_compat_inline_nested_namespace_definition, diag::warn_cxx17_compat_lambda_def_ctor_assign, diag::warn_cxx17_compat_lambda_template_parameter_list, diag::warn_cxx17_compat_missing_varargs_arg, diag::warn_cxx17_compat_spaceship, diag::warn_cxx17_compat_template_nontype_parm_type, diag::warn_cxx17_compat_unicode_type, diag::warn_cxx17_compat_using_decl_class_member_enumerator, diag::warn_cxx17_compat_using_decl_non_member_enumerator, diag::warn_cxx17_compat_using_decl_scoped_enumerator, diag::warn_cxx17_compat_using_enum_declaration, -1,
  /* DiagArray655 */ diag::warn_cxx17_compat_designated_init, diag::warn_cxx17_compat_pointer_to_const_ref_member_on_rvalue, -1,
  /* DiagArray656 */ diag::warn_cxx20_alias_in_init_statement, diag::warn_cxx20_compat_consteval_if, diag::warn_cxx20_compat_decl_attrs_on_lambda, diag::warn_cxx20_compat_size_t_suffix, -1,
  /* DiagArray658 */ diag::warn_c17_compat_static_assert_no_message, diag::warn_c2x_compat_digit_separator, -1,
  /* DiagArray660 */ diag::warn_omp51_compat_attributes, -1,
  /* DiagArray661 */ diag::ext_predef_outside_function, -1,
  /* DiagArray662 */ diag::warn_private_extern, -1,
  /* DiagArray663 */ diag::warn_use_of_private_header_outside_module, -1,
  /* DiagArray664 */ diag::warn_mmap_mismatched_private_module_name, diag::warn_mmap_mismatched_private_submodule, diag::warn_mmap_redundant_export_as, diag::warn_no_priv_submodule_use_toplevel, -1,
  /* DiagArray665 */ diag::warn_profile_data_missing, -1,
  /* DiagArray666 */ diag::warn_profile_data_out_of_date, -1,
  /* DiagArray667 */ diag::warn_profile_data_unprofiled, -1,
  /* DiagArray668 */ diag::warn_property_access_suggest, -1,
  /* DiagArray669 */ diag::warn_property_attr_mismatch, diag::warn_property_attribute, diag::warn_property_redecl_getter_mismatch, diag::warn_readonly_property, -1,
  /* DiagArray670 */ diag::warn_unimplemented_protocol_method, -1,
  /* DiagArray671 */ diag::warn_protocol_property_mismatch, -1,
  /* DiagArray672 */ diag::warn_avx_calling_convention, -1,
  /* DiagArray673 */ diag::err_func_returning_qualified_void, -1,
  /* DiagArray674 */ diag::warn_quoted_include_in_framework_header, -1,
  /* DiagArray676 */ diag::warn_for_range_ref_binds_ret_temp, -1,
  /* DiagArray677 */ diag::warn_for_range_const_ref_binds_temp_built_from_ref, diag::warn_for_range_copy, -1,
  /* DiagArray678 */ diag::warn_auto_readonly_iboutlet_property, -1,
  /* DiagArray679 */ diag::warn_bad_receiver_type, -1,
  /* DiagArray680 */ diag::warn_receiver_forward_class, diag::warn_receiver_forward_instance, -1,
  /* DiagArray681 */ diag::ext_member_redeclared, -1,
  /* DiagArray682 */ diag::warn_consteval_if_always_true, -1,
  /* DiagArray684 */ diag::warn_redundant_move_on_return, -1,
  /* DiagArray685 */ diag::warn_redundant_parens_around_declarator, -1,
  /* DiagArray686 */ diag::ext_register_storage_class, -1,
  /* DiagArray687 */ diag::warn_reinterpret_different_from_static, -1,
  /* DiagArray688 */ diag::remark_fe_backend_plugin, -1,
  /* DiagArray690 */ diag::warn_initializer_out_of_order, diag::warn_some_initializers_out_of_order, -1,
  /* DiagArray691 */ diag::ext_designated_init_reordered, -1,
  /* DiagArray692 */ diag::warn_objc_requires_super_protocol, -1,
  /* DiagArray694 */ diag::warn_reserved_extern_symbol, -1,
  /* DiagArray695 */ diag::warn_pp_macro_is_reserved_id, -1,
  /* DiagArray696 */ diag::ext_ms_reserved_user_defined_literal, diag::ext_reserved_user_defined_literal, -1,
  /* DiagArray697 */ diag::warn_pragma_restrict_expansion_macro_use, -1,
  /* DiagArray698 */ diag::ext_retained_language_linkage, -1,
  /* DiagArray699 */ diag::warn_ret_addr_label, diag::warn_ret_local_temp_addr_ref, diag::warn_ret_stack_addr_ref, -1,
  /* DiagArray701 */ diag::ext_return_has_expr, diag::ext_return_missing_expr, diag::warn_falloff_nonvoid_coroutine, diag::warn_falloff_nonvoid_function, diag::warn_falloff_nonvoid_lambda, diag::warn_maybe_falloff_nonvoid_coroutine, diag::warn_maybe_falloff_nonvoid_function, diag::warn_maybe_falloff_nonvoid_lambda, diag::warn_return_missing_expr, -1,
  /* DiagArray702 */ diag::warn_return_value_udt, diag::warn_return_value_udt_incomplete, -1,
  /* DiagArray703 */ diag::ext_ovl_rewrite_equalequal_not_bool, -1,
  /* DiagArray704 */ diag::remark_cc1_round_trip_generated, -1,
  /* DiagArray705 */ diag::warn_no_dynamic_cast_with_rtti_disabled, diag::warn_no_typeid_with_rtti_disabled, -1,
  /* DiagArray706 */ diag::remark_sanitize_address_insert_extra_padding_accepted, diag::remark_sanitize_address_insert_extra_padding_rejected, -1,
  /* DiagArray707 */ diag::remark_pp_search_path_usage, -1,
  /* DiagArray708 */ diag::warn_attribute_section_on_redeclaration, diag::warn_duplicate_codeseg_attribute, diag::warn_mismatched_section, -1,
  /* DiagArray709 */ diag::warn_unimplemented_selector, -1,
  /* DiagArray710 */ diag::warn_multiple_selectors, -1,
  /* DiagArray711 */ diag::warn_self_assignment_builtin, -1,
  /* DiagArray712 */ diag::warn_identity_field_assign, -1,
  /* DiagArray713 */ diag::warn_self_assignment_overloaded, -1,
  /* DiagArray714 */ diag::warn_self_move, -1,
  /* DiagArray715 */ diag::warn_semicolon_before_method_body, -1,
  /* DiagArray716 */ diag::warn_missing_sentinel, diag::warn_not_enough_argument, -1,
  /* DiagArray718 */ diag::warn_fe_serialized_diag_failure, diag::warn_fe_serialized_diag_failure_during_finalisation, diag::warn_fe_serialized_diag_merge_failure, -1,
  /* DiagArray719 */ diag::warn_decl_shadow, -1,
  /* DiagArray721 */ diag::warn_shadow_field, -1,
  /* DiagArray722 */ diag::warn_ctor_parm_shadows_field, -1,
  /* DiagArray723 */ diag::warn_modifying_shadowing_decl, -1,
  /* DiagArray724 */ diag::warn_ivar_use_hidden, -1,
  /* DiagArray725 */ diag::warn_decl_shadow_uncaptured_local, -1,
  /* DiagArray726 */ diag::warn_shift_negative, -1,
  /* DiagArray727 */ diag::warn_shift_gt_typewidth, -1,
  /* DiagArray728 */ diag::warn_shift_lhs_negative, -1,
  /* DiagArray729 */ diag::warn_addition_in_bitshift, -1,
  /* DiagArray730 */ diag::warn_shift_result_gt_typewidth, -1,
  /* DiagArray731 */ diag::warn_shift_result_sets_sign_bit, -1,
  /* DiagArray732 */ diag::warn_impcast_integer_64_32, -1,
  /* DiagArray733 */ diag::warn_mixed_sign_comparison, -1,
  /* DiagArray734 */ diag::warn_impcast_integer_sign, diag::warn_impcast_integer_sign_conditional, diag::warn_impcast_nonnegative_result, -1,
  /* DiagArray736 */ diag::warn_no_underlying_type_specified_for_enum_bitfield, -1,
  /* DiagArray737 */ diag::ext_wchar_t_sign_spec, -1,
  /* DiagArray738 */ diag::warn_sizeof_array_param, -1,
  /* DiagArray739 */ diag::warn_sizeof_array_decay, -1,
  /* DiagArray740 */ diag::warn_division_sizeof_array, -1,
  /* DiagArray741 */ diag::warn_division_sizeof_ptr, -1,
  /* DiagArray742 */ diag::warn_sizeof_pointer_expr_memaccess, diag::warn_sizeof_pointer_type_memaccess, -1,
  /* DiagArray743 */ diag::warn_slash_u_filename, -1,
  /* DiagArray744 */ diag::warn_slh_does_not_support_asm_goto, -1,
  /* DiagArray745 */ diag::warn_sometimes_uninit_var, -1,
  /* DiagArray746 */ diag::warn_fe_source_mgr, -1,
  /* DiagArray747 */ diag::warn_omp_declare_variant_after_emitted, diag::warn_omp_declare_variant_after_used, diag::warn_omp_declare_variant_marked_as_declare_variant, diag::warn_omp_declare_variant_score_not_constant, diag::warn_omp_nesting_simd, diag::warn_pragma_omp_ignored, diag::warn_unknown_begin_declare_variant_isa_trait, diag::warn_unknown_declare_variant_isa_trait, -1,
  /* DiagArray748 */ diag::warn_sampler_initializer_invalid_bits, -1,
  /* DiagArray750 */ diag::warn_stack_exhausted, -1,
  /* DiagArray751 */ diag::warn_stack_clash_protection_inline_asm, -1,
  /* DiagArray752 */ diag::ext_in_class_initializer_float_type_cxx11, -1,
  /* DiagArray753 */ diag::ext_internal_in_extern_inline, diag::ext_internal_in_extern_inline_quiet, -1,
  /* DiagArray754 */ diag::warn_static_inline_explicit_inst_ignored, -1,
  /* DiagArray755 */ diag::warn_static_local_in_extern_inline, -1,
  /* DiagArray756 */ diag::warn_static_self_reference_in_init, -1,
  /* DiagArray757 */ diag::warn_drv_libstdcxx_not_found, -1,
  /* DiagArray769 */ diag::warn_strict_potentially_direct_selector_expression, -1,
  /* DiagArray770 */ diag::warn_strict_prototypes, -1,
  /* DiagArray771 */ diag::warn_strict_multiple_method_decl, -1,
  /* DiagArray772 */ diag::warn_stringcompare, -1,
  /* DiagArray773 */ diag::warn_concatenated_literal_array_init, -1,
  /* DiagArray774 */ diag::warn_impcast_string_literal_to_bool, -1,
  /* DiagArray775 */ diag::warn_string_plus_char, -1,
  /* DiagArray776 */ diag::warn_string_plus_int, -1,
  /* DiagArray777 */ diag::warn_strlcpycat_wrong_size, -1,
  /* DiagArray778 */ diag::warn_strncat_large_size, diag::warn_strncat_src_size, diag::warn_strncat_wrong_size, -1,
  /* DiagArray779 */ diag::warn_suggest_destructor_marked_not_override_overriding, -1,
  /* DiagArray780 */ diag::warn_suggest_function_marked_not_override_overriding, -1,
  /* DiagArray781 */ diag::ext_typecheck_base_super, -1,
  /* DiagArray782 */ diag::warn_suspicious_bzero_size, -1,
  /* DiagArray784 */ diag::warn_attr_swift_name_decl_kind, diag::warn_attr_swift_name_decl_missing_params, diag::warn_attr_swift_name_function, diag::warn_attr_swift_name_getter_parameters, diag::warn_attr_swift_name_invalid_identifier, diag::warn_attr_swift_name_missing_parameters, diag::warn_attr_swift_name_multiple_selfs, diag::warn_attr_swift_name_num_params, diag::warn_attr_swift_name_setter_parameters, diag::warn_attr_swift_name_subscript_getter_newValue, diag::warn_attr_swift_name_subscript_invalid_parameter, diag::warn_attr_swift_name_subscript_setter_multiple_newValues, diag::warn_attr_swift_name_subscript_setter_no_newValue, -1,
  /* DiagArray785 */ diag::warn_case_value_overflow, diag::warn_missing_case, diag::warn_not_in_enum, -1,
  /* DiagArray786 */ diag::warn_bool_switch_condition, -1,
  /* DiagArray788 */ diag::warn_def_missing_case, -1,
  /* DiagArray789 */ diag::warn_sync_fetch_and_nand_semantics_change, -1,
  /* DiagArray791 */ diag::warn_target_clone_mixed_values, -1,
  /* DiagArray792 */ diag::warn_comparison_bitwise_always, diag::warn_comparison_bitwise_or, -1,
  /* DiagArray793 */ diag::warn_alignment_builtin_useless, diag::warn_comparison_always, -1,
  /* DiagArray794 */ diag::warn_integer_constants_in_conditional_always_true, diag::warn_left_shift_always, diag::warn_tautological_bool_compare, -1,
  /* DiagArray796 */ diag::warn_out_of_range_compare, -1,
  /* DiagArray797 */ diag::warn_tautological_compare_objc_bool, -1,
  /* DiagArray798 */ diag::warn_tautological_overlap_comparison, -1,
  /* DiagArray799 */ diag::warn_nonnull_expr_compare, diag::warn_null_pointer_compare, -1,
  /* DiagArray800 */ diag::warn_tautological_constant_compare, -1,
  /* DiagArray801 */ diag::warn_address_of_reference_null_compare, diag::warn_this_null_compare, -1,
  /* DiagArray802 */ diag::warn_unsigned_char_always_true_comparison, -1,
  /* DiagArray803 */ diag::warn_unsigned_enum_always_true_comparison, -1,
  /* DiagArray804 */ diag::warn_unsigned_always_true_comparison, -1,
  /* DiagArray805 */ diag::warn_tautological_compare_value_range, -1,
  /* DiagArray806 */ diag::warn_tcb_enforcement_violation, -1,
  /* DiagArray807 */ diag::ext_typecheck_decl_incomplete_type, -1,
  /* DiagArray809 */ diag::warn_acquired_before, diag::warn_acquired_before_after_cycle, diag::warn_cannot_resolve_lock, diag::warn_double_lock, diag::warn_expecting_lock_held_on_loop, diag::warn_expecting_locked, diag::warn_fun_excludes_mutex, diag::warn_fun_requires_lock, diag::warn_fun_requires_negative_cap, diag::warn_lock_exclusive_and_shared, diag::warn_lock_some_predecessors, diag::warn_no_unlock, diag::warn_unlock_but_no_lock, diag::warn_unlock_kind_mismatch, diag::warn_var_deref_requires_any_lock, diag::warn_var_deref_requires_lock, diag::warn_variable_requires_any_lock, diag::warn_variable_requires_lock, -1,
  /* DiagArray810 */ diag::warn_thread_attribute_argument_not_lockable, diag::warn_thread_attribute_decl_not_lockable, diag::warn_thread_attribute_decl_not_pointer, diag::warn_thread_attribute_ignored, diag::warn_thread_attribute_not_on_capability_member, diag::warn_thread_attribute_not_on_non_static_member, -1,
  /* DiagArray811 */ diag::warn_thread_safety_beta, -1,
  /* DiagArray812 */ diag::warn_acquire_requires_negative_cap, -1,
  /* DiagArray813 */ diag::warn_fun_requires_lock_precise, diag::warn_var_deref_requires_lock_precise, diag::warn_variable_requires_lock_precise, -1,
  /* DiagArray814 */ diag::warn_guarded_pass_by_reference, diag::warn_pt_guarded_pass_by_reference, -1,
  /* DiagArray815 */ diag::warn_thread_safety_verbose, -1,
  /* DiagArray816 */ diag::trigraph_converted, diag::trigraph_ends_block_comment, diag::trigraph_ignored, diag::trigraph_ignored_block_comment, -1,
  /* DiagArray818 */ diag::warn_type_safety_null_pointer_required, diag::warn_type_safety_type_mismatch, diag::warn_type_tag_for_datatype_wrong_kind, -1,
  /* DiagArray819 */ diag::ext_redefinition_of_typedef, -1,
  /* DiagArray820 */ diag::ext_typename_missing, -1,
  /* DiagArray821 */ diag::warn_fe_unable_to_open_stats_file, -1,
  /* DiagArray822 */ diag::warn_unavailable_fwdclass_message, -1,
  /* DiagArray823 */ diag::warn_undeclared_selector, diag::warn_undeclared_selector_with_typo, -1,
  /* DiagArray824 */ diag::warn_pp_undef_identifier, -1,
  /* DiagArray825 */ diag::warn_pp_undef_prefix, -1,
  /* DiagArray826 */ diag::warn_address_of_reference_bool_conversion, diag::warn_this_bool_conversion, -1,
  /* DiagArray827 */ diag::warn_func_template_missing, -1,
  /* DiagArray828 */ diag::warn_undefined_inline, -1,
  /* DiagArray829 */ diag::warn_undefined_internal, -1,
  /* DiagArray830 */ diag::ext_undefined_internal_type, -1,
  /* DiagArray831 */ diag::warn_pointer_indirection_from_incompatible_type, diag::warn_undefined_reinterpret_cast, -1,
  /* DiagArray832 */ diag::warn_var_template_missing, -1,
  /* DiagArray833 */ diag::warn_throw_underaligned_obj, -1,
  /* DiagArray834 */ diag::warn_side_effects_unevaluated_context, -1,
  /* DiagArray835 */ diag::warn_unguarded_availability, -1,
  /* DiagArray836 */ diag::warn_unguarded_availability_new, -1,
  /* DiagArray837 */ diag::warn_delimited_ucn_empty, diag::warn_delimited_ucn_incomplete, diag::warn_ucn_escape_incomplete, diag::warn_ucn_escape_no_digits, diag::warn_ucn_escape_surrogate, diag::warn_ucn_not_valid_in_c89, diag::warn_ucn_not_valid_in_c89_literal, -1,
  /* DiagArray838 */ diag::warn_utf8_symbol_homoglyph, -1,
  /* DiagArray839 */ diag::ext_unicode_whitespace, -1,
  /* DiagArray840 */ diag::warn_utf8_symbol_zero_width, -1,
  /* DiagArray841 */ diag::warn_base_class_is_uninit, diag::warn_field_is_uninit, diag::warn_reference_field_is_uninit, diag::warn_uninit_byref_blockvar_captured_by_block, diag::warn_uninit_self_reference_in_init, diag::warn_uninit_self_reference_in_reference_init, diag::warn_uninit_var, -1,
  /* DiagArray842 */ diag::warn_uninit_const_reference, -1,
  /* DiagArray843 */ diag::warn_drv_unknown_argument_clang_cl, diag::warn_drv_unknown_argument_clang_cl_with_suggestion, -1,
  /* DiagArray844 */ diag::warn_assume_attribute_string_unknown, -1,
  /* DiagArray845 */ diag::warn_unknown_attribute_ignored, -1,
  /* DiagArray846 */ diag::warn_drv_new_cuda_version, diag::warn_drv_partially_supported_cuda_version, -1,
  /* DiagArray847 */ diag::ext_unknown_escape, -1,
  /* DiagArray848 */ diag::ext_on_off_switch_syntax, diag::ext_pragma_syntax_eod, diag::ext_stdc_pragma_ignored, diag::warn_pragma_diagnostic_cannot_pop, diag::warn_pragma_diagnostic_invalid, diag::warn_pragma_diagnostic_invalid_option, diag::warn_pragma_diagnostic_invalid_token, diag::warn_pragma_exec_charset_expected, diag::warn_pragma_exec_charset_push_invalid, diag::warn_pragma_exec_charset_spec_invalid, diag::warn_pragma_ignored, diag::warn_pragma_include_alias_expected, diag::warn_pragma_include_alias_expected_filename, diag::warn_pragma_include_alias_mismatch_angle, diag::warn_pragma_include_alias_mismatch_quote, diag::warn_pragma_warning_expected, diag::warn_pragma_warning_expected_number, diag::warn_pragma_warning_push_level, diag::warn_pragma_warning_spec_invalid, diag::warn_stdc_fenv_round_not_supported, -1,
  /* DiagArray849 */ diag::warn_unknown_sanitizer_ignored, -1,
  /* DiagArray850 */ diag::warn_pragma_diagnostic_unknown_warning, diag::warn_unknown_diag_option, diag::warn_unknown_warning_specifier, -1,
  /* DiagArray851 */ diag::ext_template_arg_unnamed_type, -1,
  /* DiagArray852 */ diag::warn_unneeded_internal_decl, diag::warn_unneeded_static_internal_decl, -1,
  /* DiagArray853 */ diag::warn_unneeded_member_function, -1,
  /* DiagArray854 */ diag::warn_unreachable, -1,
  /* DiagArray856 */ diag::warn_unreachable_break, -1,
  /* DiagArray857 */ diag::warn_unreachable_fallthrough_attr, -1,
  /* DiagArray858 */ diag::warn_unreachable_loop_increment, -1,
  /* DiagArray859 */ diag::warn_unreachable_return, -1,
  /* DiagArray860 */ diag::warn_unsequenced_mod_mod, diag::warn_unsequenced_mod_use, -1,
  /* DiagArray861 */ diag::warn_target_unsupported_abs2008, diag::warn_target_unsupported_abslegacy, -1,
  /* DiagArray862 */ diag::warn_at_available_unchecked_use, -1,
  /* DiagArray863 */ diag::warn_target_unsupported_compact_branches, -1,
  /* DiagArray864 */ diag::warn_attribute_dll_instantiated_base_class, -1,
  /* DiagArray865 */ diag::warn_fe_backend_unsupported_fp_exceptions, diag::warn_fe_backend_unsupported_fp_rounding, -1,
  /* DiagArray866 */ diag::warn_template_qualified_friend_ignored, diag::warn_template_qualified_friend_unsupported, -1,
  /* DiagArray867 */ diag::warn_drv_unsupported_gpopt, -1,
  /* DiagArray868 */ diag::warn_target_unsupported_nan2008, diag::warn_target_unsupported_nanlegacy, -1,
  /* DiagArray869 */ diag::warn_drv_dwarf_version_limited_by_target, diag::warn_drv_unsupported_debug_info_opt_for_target, -1,
  /* DiagArray870 */ diag::warn_attribute_protected_visibility, -1,
  /* DiagArray871 */ diag::ext_partial_specs_not_deducible, -1,
  /* DiagArray874 */ diag::warn_unused_but_set_parameter, -1,
  /* DiagArray875 */ diag::warn_unused_but_set_variable, -1,
  /* DiagArray876 */ diag::warn_drv_diagnostics_hotness_requires_pgo, diag::warn_drv_empty_joined_argument, diag::warn_drv_input_file_unused, diag::warn_drv_input_file_unused_by_cpp, diag::warn_drv_invalid_arch_name_with_suggestion, diag::warn_drv_preprocessed_input_file_unused, diag::warn_drv_unused_argument, diag::warn_ignored_clang_option, diag::warn_ignoring_fdiscard_for_bitcode, diag::warn_ignoring_verify_debuginfo_preserve_export, -1,
  /* DiagArray877 */ diag::warn_unused_comparison, -1,
  /* DiagArray878 */ diag::warn_unused_const_variable, -1,
  /* DiagArray879 */ diag::warn_unused_exception_param, -1,
  /* DiagArray880 */ diag::warn_unused_function, -1,
  /* DiagArray881 */ diag::warn_unused_property_expr, -1,
  /* DiagArray882 */ diag::warn_unused_label, -1,
  /* DiagArray883 */ diag::warn_unused_lambda_capture, -1,
  /* DiagArray884 */ diag::warn_unused_local_typedef, -1,
  /* DiagArray886 */ diag::pp_macro_not_used, -1,
  /* DiagArray887 */ diag::warn_unused_member_function, -1,
  /* DiagArray888 */ diag::warn_unused_parameter, -1,
  /* DiagArray889 */ diag::warn_unused_private_field, -1,
  /* DiagArray890 */ diag::warn_unused_property_backing_ivar, -1,
  /* DiagArray891 */ diag::warn_unused_result, diag::warn_unused_result_msg, -1,
  /* DiagArray892 */ diag::warn_unused_template, -1,
  /* DiagArray893 */ diag::warn_unused_call, diag::warn_unused_comma_left_operand, diag::warn_unused_constructor, diag::warn_unused_constructor_msg, diag::warn_unused_container_subscript_expr, diag::warn_unused_expr, diag::warn_unused_voidptr, -1,
  /* DiagArray894 */ diag::warn_unused_variable, -1,
  /* DiagArray895 */ diag::warn_unused_volatile, -1,
  /* DiagArray896 */ diag::warn_used_but_marked_unused, -1,
  /* DiagArray897 */ diag::warn_user_literal_reserved, -1,
  /* DiagArray898 */ diag::warn_diagnose_if_succeeded, -1,
  /* DiagArray899 */ diag::warn_second_arg_of_va_start_not_last_named_param, diag::warn_second_parameter_to_va_arg_never_compatible, diag::warn_va_start_type_is_undefined, -1,
  /* DiagArray900 */ diag::ext_named_variadic_macro, diag::ext_pp_bad_vaopt_use, diag::ext_variadic_macro, -1,
  /* DiagArray901 */ diag::warn_typecheck_vector_element_sizes_not_equal, -1,
  /* DiagArray902 */ diag::warn_incompatible_vectors, -1,
  /* DiagArray904 */ diag::warn_empty_parens_are_function_decl, diag::warn_parens_disambiguated_as_function_declaration, diag::warn_parens_disambiguated_as_variable_declaration, -1,
  /* DiagArray905 */ diag::warn_decl_in_param_list, diag::warn_redefinition_in_param_list, -1,
  /* DiagArray906 */ diag::warn_vla_used, -1,
  /* DiagArray907 */ diag::ext_vla, -1,
  /* DiagArray908 */ diag::warn_void_pointer_to_enum_cast, -1,
  /* DiagArray909 */ diag::warn_void_pointer_to_int_cast, -1,
  /* DiagArray910 */ diag::ext_typecheck_indirection_through_void_pointer, -1,
  /* DiagArray912 */ diag::warn_wasm_dynamic_exception_spec_ignored, -1,
  /* DiagArray913 */ diag::warn_weak_template_vtable, -1,
  /* DiagArray914 */ diag::warn_weak_vtable, -1,
  /* DiagArray915 */ diag::ext_deprecated_string_literal_conversion, -1,
  /* DiagArray917 */ diag::warn_xor_used_as_pow, diag::warn_xor_used_as_pow_base, diag::warn_xor_used_as_pow_base_extra, -1,
  /* DiagArray918 */ diag::warn_zero_as_null_pointer_constant, -1,
  /* DiagArray919 */ diag::ext_typecheck_zero_array_size, -1,
};

static const int16_t DiagSubGroups[] = {
  /* Empty */ -1,
  /* DiagSubGroup0 */ 277, -1,
  /* DiagSubGroup4 */ 17, 277, -1,
  /* DiagSubGroup11 */ 634, 772, 799, -1,
  /* DiagSubGroup17 */ 515, 621, 785, 786, 485, -1,
  /* DiagSubGroup26 */ 197, -1,
  /* DiagSubGroup28 */ 35, 34, 31, -1,
  /* DiagSubGroup33 */ 30, -1,
  /* DiagSubGroup40 */ 41, -1,
  /* DiagSubGroup49 */ 361, 176, -1,
  /* DiagSubGroup53 */ 845, 352, -1,
  /* DiagSubGroup63 */ 95, 120, 324, -1,
  /* DiagSubGroup64 */ 123, -1,
  /* DiagSubGroup73 */ 634, 826, -1,
  /* DiagSubGroup74 */ 73, -1,
  /* DiagSubGroup75 */ 70, -1,
  /* DiagSubGroup83 */ 86, -1,
  /* DiagSubGroup84 */ 90, -1,
  /* DiagSubGroup85 */ 94, -1,
  /* DiagSubGroup86 */ 94, 89, 87, 650, 652, 654, 656, -1,
  /* DiagSubGroup88 */ 86, 651, 653, 655, 657, -1,
  /* DiagSubGroup90 */ 91, 92, 93, -1,
  /* DiagSubGroup96 */ 652, 654, 656, -1,
  /* DiagSubGroup97 */ 96, 653, 655, 657, -1,
  /* DiagSubGroup98 */ 95, -1,
  /* DiagSubGroup99 */ 220, 215, 100, 654, 656, -1,
  /* DiagSubGroup101 */ 99, 655, 657, -1,
  /* DiagSubGroup103 */ 98, -1,
  /* DiagSubGroup104 */ 99, -1,
  /* DiagSubGroup105 */ 100, -1,
  /* DiagSubGroup106 */ 102, -1,
  /* DiagSubGroup107 */ 656, -1,
  /* DiagSubGroup108 */ 107, 657, -1,
  /* DiagSubGroup110 */ 109, -1,
  /* DiagSubGroup111 */ 107, -1,
  /* DiagSubGroup112 */ 108, -1,
  /* DiagSubGroup113 */ 110, -1,
  /* DiagSubGroup115 */ 654, -1,
  /* DiagSubGroup116 */ 655, -1,
  /* DiagSubGroup117 */ 652, -1,
  /* DiagSubGroup118 */ 653, -1,
  /* DiagSubGroup119 */ 650, -1,
  /* DiagSubGroup121 */ 651, -1,
  /* DiagSubGroup122 */ 125, 127, 650, 652, 654, 656, -1,
  /* DiagSubGroup126 */ 122, 123, 124, 651, 653, 655, 657, -1,
  /* DiagSubGroup131 */ 109, -1,
  /* DiagSubGroup132 */ 131, -1,
  /* DiagSubGroup134 */ 151, -1,
  /* DiagSubGroup145 */ 533, -1,
  /* DiagSubGroup149 */ 148, -1,
  /* DiagSubGroup153 */ 154, 155, -1,
  /* DiagSubGroup160 */ 66, 558, -1,
  /* DiagSubGroup165 */ 73, 160, 263, 67, 288, 732, 406, 371, 368, 435, 530, 546, 568, 734, 774, -1,
  /* DiagSubGroup166 */ 546, -1,
  /* DiagSubGroup167 */ 168, 206, -1,
  /* DiagSubGroup170 */ 2, -1,
  /* DiagSubGroup178 */ 180, 182, 181, 699, -1,
  /* DiagSubGroup193 */ 192, 190, -1,
  /* DiagSubGroup195 */ 197, 198, 199, 200, 201, 203, 207, 208, 209, 210, 211, 212, 215, 219, 220, 221, 222, 223, -1,
  /* DiagSubGroup201 */ 204, -1,
  /* DiagSubGroup202 */ 203, -1,
  /* DiagSubGroup203 */ 205, -1,
  /* DiagSubGroup206 */ 213, -1,
  /* DiagSubGroup217 */ 218, -1,
  /* DiagSubGroup223 */ 87, -1,
  /* DiagSubGroup229 */ 230, -1,
  /* DiagSubGroup234 */ 236, 235, -1,
  /* DiagSubGroup237 */ 238, -1,
  /* DiagSubGroup249 */ 208, -1,
  /* DiagSubGroup250 */ 535, -1,
  /* DiagSubGroup259 */ 281, -1,
  /* DiagSubGroup260 */ 262, 209, -1,
  /* DiagSubGroup261 */ 210, -1,
  /* DiagSubGroup263 */ 264, 265, 261, -1,
  /* DiagSubGroup264 */ 211, -1,
  /* DiagSubGroup265 */ 212, -1,
  /* DiagSubGroup277 */ 201, 494, 358, 399, 715, 497, 733, 888, 874, 548, 549, 256, 773, 314, -1,
  /* DiagSubGroup279 */ 124, 91, -1,
  /* DiagSubGroup280 */ 256, -1,
  /* DiagSubGroup288 */ 290, 291, -1,
  /* DiagSubGroup293 */ 294, 303, 536, 300, 302, 296, 295, -1,
  /* DiagSubGroup304 */ 298, 300, 302, -1,
  /* DiagSubGroup309 */ 308, -1,
  /* DiagSubGroup313 */ 791, -1,
  /* DiagSubGroup319 */ 320, 321, 323, 324, 325, 326, 327, 328, 329, 330, 331, 907, 332, 333, 334, 335, 336, 338, 681, 339, 340, 341, 342, 343, 344, 919, 345, 346, -1,
  /* DiagSubGroup357 */ 355, 356, -1,
  /* DiagSubGroup358 */ 359, -1,
  /* DiagSubGroup360 */ 369, 370, -1,
  /* DiagSubGroup365 */ 366, -1,
  /* DiagSubGroup368 */ 372, 591, -1,
  /* DiagSubGroup371 */ 592, -1,
  /* DiagSubGroup372 */ 362, -1,
  /* DiagSubGroup384 */ 385, 381, -1,
  /* DiagSubGroup390 */ 392, 532, -1,
  /* DiagSubGroup396 */ 215, -1,
  /* DiagSubGroup407 */ 406, -1,
  /* DiagSubGroup409 */ 410, -1,
  /* DiagSubGroup413 */ 354, -1,
  /* DiagSubGroup437 */ 125, -1,
  /* DiagSubGroup440 */ 93, -1,
  /* DiagSubGroup441 */ 292, 675, -1,
  /* DiagSubGroup452 */ 456, 461, 473, 459, 469, 477, 453, 482, 465, 483, 474, 475, 481, 467, 464, 460, 479, 476, 463, 471, 470, 468, 455, 458, 484, 454, 457, 462, 478, 393, -1,
  /* DiagSubGroup479 */ 480, -1,
  /* DiagSubGroup515 */ 75, 142, 148, 193, 293, 292, 307, 360, 397, 408, 489, 490, 516, 519, 677, 689, 701, 711, 714, 738, 739, 776, 793, 816, 841, 848, 872, 911, 573, 562, 564, 614, 662, 138, 275, 898, -1,
  /* DiagSubGroup516 */ 632, 684, 700, 714, -1,
  /* DiagSubGroup517 */ 473, -1,
  /* DiagSubGroup521 */ 94, -1,
  /* DiagSubGroup527 */ 100, -1,
  /* DiagSubGroup529 */ 733, 165, 436, -1,
  /* DiagSubGroup532 */ 531, -1,
  /* DiagSubGroup551 */ 552, -1,
  /* DiagSubGroup561 */ 587, -1,
  /* DiagSubGroup567 */ 593, -1,
  /* DiagSubGroup587 */ 588, -1,
  /* DiagSubGroup590 */ 592, 591, 558, 797, -1,
  /* DiagSubGroup600 */ 747, 602, 603, 605, 604, 601, -1,
  /* DiagSubGroup605 */ 604, -1,
  /* DiagSubGroup615 */ 399, -1,
  /* DiagSubGroup621 */ 439, 438, 69, 71, 729, 613, 622, 179, -1,
  /* DiagSubGroup623 */ 835, -1,
  /* DiagSubGroup629 */ 128, 91, 93, 95, 109, 287, 321, 323, 324, 325, 326, 327, 328, 330, 331, 332, 333, 335, 336, 338, 339, 340, 343, 345, 346, 429, 440, 456, 457, 459, 462, 464, 469, 470, 476, 612, 907, 919, 376, 253, 257, 554, 284, 830, 698, 152, 522, 187, 239, 431, 194, -1,
  /* DiagSubGroup631 */ 219, 442, 79, 697, 283, -1,
  /* DiagSubGroup638 */ 908, -1,
  /* DiagSubGroup639 */ 638, 909, -1,
  /* DiagSubGroup646 */ 647, -1,
  /* DiagSubGroup649 */ 848, 357, 644, 646, -1,
  /* DiagSubGroup651 */ 650, 120, -1,
  /* DiagSubGroup653 */ 652, -1,
  /* DiagSubGroup655 */ 654, -1,
  /* DiagSubGroup657 */ 656, -1,
  /* DiagSubGroup659 */ 658, -1,
  /* DiagSubGroup675 */ 677, 676, -1,
  /* DiagSubGroup686 */ 220, -1,
  /* DiagSubGroup689 */ 690, 691, -1,
  /* DiagSubGroup693 */ 695, -1,
  /* DiagSubGroup694 */ 695, -1,
  /* DiagSubGroup696 */ 89, -1,
  /* DiagSubGroup701 */ 702, -1,
  /* DiagSubGroup709 */ 710, -1,
  /* DiagSubGroup711 */ 713, 712, -1,
  /* DiagSubGroup717 */ 860, -1,
  /* DiagSubGroup719 */ 723, 724, -1,
  /* DiagSubGroup720 */ 719, 722, 725, 721, -1,
  /* DiagSubGroup722 */ 723, -1,
  /* DiagSubGroup749 */ 748, -1,
  /* DiagSubGroup752 */ 341, -1,
  /* DiagSubGroup769 */ 642, -1,
  /* DiagSubGroup783 */ 742, 248, 541, 449, 782, -1,
  /* DiagSubGroup793 */ 794, 799, 798, 792, 801, 797, -1,
  /* DiagSubGroup794 */ 796, -1,
  /* DiagSubGroup795 */ 817, 805, -1,
  /* DiagSubGroup808 */ 810, 809, 813, 814, -1,
  /* DiagSubGroup817 */ 800, 804, 802, 803, -1,
  /* DiagSubGroup834 */ 643, -1,
  /* DiagSubGroup835 */ 836, -1,
  /* DiagSubGroup841 */ 745, 756, 842, -1,
  /* DiagSubGroup851 */ 127, -1,
  /* DiagSubGroup854 */ 858, 857, -1,
  /* DiagSubGroup855 */ 854, 856, 859, -1,
  /* DiagSubGroup872 */ 873, 880, 882, 889, 883, 884, 893, 894, 875, 890, -1,
  /* DiagSubGroup880 */ 852, -1,
  /* DiagSubGroup885 */ 884, -1,
  /* DiagSubGroup887 */ 853, -1,
  /* DiagSubGroup892 */ 852, -1,
  /* DiagSubGroup893 */ 877, 891, 834, -1,
  /* DiagSubGroup894 */ 878, -1,
  /* DiagSubGroup903 */ 902, -1,
  /* DiagSubGroup906 */ 907, -1,
  /* DiagSubGroup909 */ 908, -1,
  /* DiagSubGroup915 */ 223, -1,
  /* DiagSubGroup916 */ 915, -1,
};

static const char DiagGroupNames[] = {
    "\000\020#pragma-messages\t#warnings\020CFString-literal\003CL4\032Indep"
    "endentClass-attribute\022NSObject-attribute\003abi\016absolute-value\024"
    "abstract-final-class\023abstract-vbase-init\007address\030address-of-pa"
    "cked-member\024address-of-temporary\020aggregate-return\naix-compat\016"
    "align-mismatch\003all\006alloca\031alloca-with-align-alignof\020ambiguo"
    "us-delete\022ambiguous-ellipsis\017ambiguous-macro\031ambiguous-member-"
    "template\033ambiguous-reversed-operator\034analyzer-incompatible-plugin"
    "\031anon-enum-enum-conversion\025anonymous-pack-parens\003arc%arc-bridg"
    "e-casts-disallowed-in-nonarc\036arc-maybe-repeated-use-of-weak\025arc-n"
    "on-pod-memaccess\031arc-performSelector-leaks\030arc-repeated-use-of-we"
    "ak\021arc-retain-cycles\032arc-unsafe-retained-assign\026argument-outsi"
    "de-range\034argument-undefined-behaviour\014array-bounds\037array-bound"
    "s-pointer-arithmetic\003asm\022asm-operand-widths\013assign-enum\006ass"
    "ume\013at-protocol\034atimport-in-framework-header\020atomic-alignment\027"
    "atomic-implicit-seq-cst\026atomic-memory-ordering\021atomic-properties*"
    "atomic-property-with-user-defined-accessor\035attribute-packed-for-bitf"
    "ield\021attribute-warning\nattributes\033auto-disable-vptr-sanitizer\013"
    "auto-import\022auto-storage-class\013auto-var-id\014availability\030avr"
    "-rtlib-linking-quirks\016backend-plugin\030backslash-newline-escape\021"
    "bad-function-cast\016binary-literal\026bind-to-temporary-copy\024bindin"
    "g-in-condition\034bitfield-constant-conversion\030bitfield-enum-convers"
    "ion\016bitfield-width\037bitwise-conditional-parentheses\032bitwise-ins"
    "tead-of-logical\026bitwise-op-parentheses\033block-capture-autoreleasin"
    "g\017bool-conversion\020bool-conversions\016bool-operation\022braced-sc"
    "alar-init\013bridge-cast builtin-assume-aligned-alignment\027builtin-ma"
    "cro-redefined\027builtin-memcpy-chk-size\027builtin-requires-header\nc+"
    "+-compat\014c++0x-compat\020c++0x-extensions\017c++0x-narrowing\014c++1"
    "1-compat(c++11-compat-deprecated-writable-strings\025c++11-compat-pedan"
    "tic*c++11-compat-reserved-user-defined-literal\020c++11-extensions\020c"
    "++11-extra-semi\026c++11-inline-namespace\017c++11-long-long\017c++11-n"
    "arrowing\024c++14-binary-literal\014c++14-compat\025c++14-compat-pedant"
    "ic\020c++14-extensions\014c++17-compat\025c++17-compat-mangling\025c++1"
    "7-compat-pedantic\020c++17-extensions\020c++1y-extensions\014c++1z-comp"
    "at\025c++1z-compat-mangling\020c++1z-extensions\014c++20-compat\025c++2"
    "0-compat-pedantic\020c++20-designator\020c++20-extensions\014c++2a-comp"
    "at\025c++2a-compat-pedantic\020c++2a-extensions\020c++2b-extensions\036"
    "c++98-c++11-c++14-c++17-compat'c++98-c++11-c++14-c++17-compat-pedantic\030"
    "c++98-c++11-c++14-compat!c++98-c++11-c++14-compat-pedantic\022c++98-c++"
    "11-compat!c++98-c++11-compat-binary-literal\033c++98-c++11-compat-pedan"
    "tic\014c++98-compat#c++98-compat-bind-to-temporary-copy\027c++98-compat"
    "-extra-semi%c++98-compat-local-type-template-args\025c++98-compat-pedan"
    "tic'c++98-compat-unnamed-type-template-args\016c11-extensions\016c2x-ex"
    "tensions\nc99-compat\016c99-designator\016c99-extensions#call-to-pure-v"
    "irtual-from-ctor-dtor\025called-once-parameter\ncast-align\027cast-call"
    "ing-convention\022cast-function-type\020cast-of-sel-type\tcast-qual\023"
    "cast-qual-unrelated\nchar-align\017char-subscripts\014clang-cl-pch\020c"
    "lass-conversion\015class-varargs\017cmse-union-leak\005comma\007comment"
    "\010comments\036compare-distinct-pointer-types\022completion-handler\026"
    "complex-component-init\024compound-token-split\035compound-token-split-"
    "by-macro\035compound-token-split-by-space\022concepts-ts-compat\031cond"
    "itional-type-mismatch\031conditional-uninitialized\015config-macros\023"
    "constant-conversion\022constant-evaluated\030constant-logical-operand\023"
    "constexpr-not-const\010consumed\nconversion\017conversion-null\tcorouti"
    "ne%coroutine-missing-unhandled-exception\026covered-switch-default\003c"
    "pp\030cstring-format-directive\026ctad-maybe-unsupported\021ctor-dtor-p"
    "rivacy\003ctu\013cuda-compat\030custom-atomic-properties\027cxx-attribu"
    "te-extension\010dangling\015dangling-else\016dangling-field\014dangling"
    "-gsl\031dangling-initializer-list\023darwin-sdk-settings\tdate-time\023"
    "dealloc-in-category\035debug-compression-unavailable\033declaration-aft"
    "er-statement\032defaulted-function-deleted\026delegating-ctor-cycles de"
    "lete-abstract-non-virtual-dtor\021delete-incomplete$delete-non-abstract"
    "-non-virtual-dtor\027delete-non-virtual-dtor#delimited-escape-sequence-"
    "extension\ndeprecated\035deprecated-altivec-src-compat$deprecated-anon-"
    "enum-enum-conversion\030deprecated-array-compare\025deprecated-attribut"
    "es\032deprecated-comma-subscript\017deprecated-copy\024deprecated-copy-"
    "dtor\031deprecated-copy-with-dtor'deprecated-copy-with-user-provided-co"
    "py'deprecated-copy-with-user-provided-dtor\024deprecated-coroutine\027d"
    "eprecated-declarations!deprecated-dynamic-exception-spec\027deprecated-"
    "enum-compare#deprecated-enum-compare-conditional\037deprecated-enum-enu"
    "m-conversion deprecated-enum-float-conversion!deprecated-experimental-c"
    "oroutine\032deprecated-implementations\031deprecated-increment-bool\031"
    "deprecated-objc-isa-usage%deprecated-objc-pointer-introspection5depreca"
    "ted-objc-pointer-introspection-performSelector\021deprecated-pragma\023"
    "deprecated-register\027deprecated-this-capture\023deprecated-volatile\033"
    "deprecated-writable-strings\022direct-ivar-access\030disabled-macro-exp"
    "ansion\025disabled-optimization\014discard-qual\034distributed-object-m"
    "odifiers\013div-by-zero\020division-by-zero\036dll-attribute-on-redecla"
    "ration%dllexport-explicit-instantiation-decl\032dllimport-static-field-"
    "def\015documentation\035documentation-deprecated-sync\022documentation-"
    "html\026documentation-pedantic\035documentation-unknown-command\036doll"
    "ar-in-identifier-extension\020double-promotion\tdtor-name\014dtor-typed"
    "ef\030duplicate-decl-specifier\016duplicate-enum\024duplicate-method-ar"
    "g\026duplicate-method-match\022duplicate-protocol\027dynamic-class-mema"
    "ccess\026dynamic-exception-spec\006effc++\024elaborated-enum-base\025el"
    "aborated-enum-class\022embedded-directive\nempty-body\023empty-decompos"
    "ition\017empty-init-stmt\026empty-translation-unit\013encode-type\014en"
    "dif-labels\014enum-compare\030enum-compare-conditional\023enum-compare-"
    "switch\017enum-conversion\024enum-enum-conversion\025enum-float-convers"
    "ion\016enum-too-large\nexceptions\023excess-initializers\025exit-time-d"
    "estructors\024expansion-to-defined\030explicit-initialize-call\027expli"
    "cit-ownership-type\016export-unnamed\026export-using-directive\017exter"
    "n-c-compat\022extern-initializer\005extra\023extra-qualification\nextra"
    "-semi\017extra-semi-stmt\014extra-tokens\032final-dtor-non-final-class\013"
    "final-macro\024fixed-enum-extension\024fixed-point-overflow\tflag-enum\031"
    "flexible-array-extensions\020float-conversion\013float-equal\031float-o"
    "verflow-conversion\025float-zero-conversion\021for-loop-analysis\006for"
    "mat\021format-extra-args\030format-insufficient-args\030format-invalid-"
    "specifier\016format-non-iso\021format-nonliteral\017format-pedantic\017"
    "format-security\025format-type-confusion\nformat-y2k\022format-zero-len"
    "gth\010format=2\016fortify-source\023four-char-constants\015frame-addre"
    "ss\021frame-larger-than\022frame-larger-than=%framework-include-private"
    "-from-public\023free-nonheap-object\036function-def-in-objc-container\025"
    "function-multiversion\014fuse-ld-path\015future-compat\ngcc-compat\023g"
    "lobal-constructors\013global-isel\003gnu\026gnu-alignof-expression\024g"
    "nu-anonymous-struct\033gnu-array-member-paren-init\015gnu-auto-type\022"
    "gnu-binary-literal\016gnu-case-range\023gnu-complex-integer gnu-compoun"
    "d-literal-initializer\037gnu-conditional-omitted-operand\016gnu-designa"
    "tor\025gnu-empty-initializer\020gnu-empty-struct\036gnu-flexible-array-"
    "initializer\037gnu-flexible-array-union-member\024gnu-folding-constant\026"
    "gnu-imaginary-constant\020gnu-include-next\035gnu-inline-cpp-without-ex"
    "tern\022gnu-label-as-value\023gnu-redeclared-enum\030gnu-statement-expr"
    "ession\025gnu-static-float-init$gnu-string-literal-operator-template\016"
    "gnu-union-cast\"gnu-variable-sized-type-not-at-end\027gnu-zero-line-dir"
    "ective!gnu-zero-variadic-macro-arguments\024gpu-maybe-wrong-side\014hea"
    "der-guard\016header-hygiene\010hip-only\025idiomatic-parentheses\022ign"
    "ored-attributes)ignored-availability-without-sdk-settings\035ignored-op"
    "timization-argument\030ignored-pragma-intrinsic\027ignored-pragma-optim"
    "ize\017ignored-pragmas\022ignored-qualifiers\034ignored-reference-quali"
    "fiers\010implicit\032implicit-atomic-properties#implicit-const-int-floa"
    "t-conversion*implicit-conversion-floating-point-to-bool implicit-except"
    "ion-spec-mismatch\024implicit-fallthrough!implicit-fallthrough-per-func"
    "tion\037implicit-fixed-point-conversion\031implicit-float-conversion\035"
    "implicit-function-declaration\014implicit-int\027implicit-int-conversio"
    "n\035implicit-int-float-conversion\024implicit-retain-self\033implicitl"
    "y-unsigned-literal\006import&import-preprocessor-directive-pedantic\021"
    "inaccessible-base\032include-next-absolute-path\033include-next-outside"
    "-header\033incompatible-exception-spec#incompatible-function-pointer-ty"
    "pes\"incompatible-library-redeclaration\026incompatible-ms-struct\032in"
    "compatible-pointer-types.incompatible-pointer-types-discards-qualifiers"
    "\032incompatible-property-type\024incompatible-sysroot'incomplete-frame"
    "work-module-declaration\031incomplete-implementation\021incomplete-modu"
    "le\035incomplete-setjmp-declaration\023incomplete-umbrella\026inconsist"
    "ent-dllimport(inconsistent-missing-destructor-override\035inconsistent-"
    "missing-override\016increment-bool\022infinite-recursion\tinit-self\025"
    "initializer-overrides\023injected-class-name\006inline\ninline-asm#inli"
    "ne-namespace-reopened-noninline\021inline-new-delete\"instantiation-aft"
    "er-specialization\016int-conversion\017int-conversions\023int-in-bool-c"
    "ontext\023int-to-pointer-cast\030int-to-void-pointer-cast\020integer-ov"
    "erflow\031interrupt-service-routine\035invalid-command-line-argument\021"
    "invalid-constexpr\020invalid-iboutlet&invalid-initializer-from-system-h"
    "eader\035invalid-ios-deployment-target\030invalid-no-builtin-names\020i"
    "nvalid-noreturn\020invalid-offsetof invalid-or-nonexistent-directory\036"
    "invalid-partial-specialization\013invalid-pch\020invalid-pp-token\027in"
    "valid-source-encoding\023invalid-token-paste\020jump-seh-finally\016key"
    "word-compat\015keyword-macro\026knr-promoted-parameter\030language-exte"
    "nsion-token\023large-by-value-copy\006liblto\017linker-warnings\022lite"
    "ral-conversion\015literal-range\030local-type-template-args\027logical-"
    "not-parentheses\026logical-op-parentheses\tlong-long\015loop-analysis\017"
    "macro-redefined\004main\020main-return-type\027malformed-warning-check\036"
    "many-braces-around-scalar-init\nmax-tokens\021max-unsigned-zero\026mems"
    "et-transposed-args\022memsize-comparison\021method-signatures\tmicrosof"
    "t\022microsoft-abstract\022microsoft-anon-tag\016microsoft-cast\021micr"
    "osoft-charize\027microsoft-comment-paste\024microsoft-const-init\023mic"
    "rosoft-cpp-macro\"microsoft-default-arg-redefinition\031microsoft-drect"
    "ve-section\025microsoft-end-of-file microsoft-enum-forward-reference\024"
    "microsoft-enum-value\030microsoft-exception-spec\020microsoft-exists#mi"
    "crosoft-explicit-constructor-call\035microsoft-extra-qualification\024m"
    "icrosoft-fixed-enum\030microsoft-flexible-array\016microsoft-goto\033mi"
    "crosoft-inaccessible-base\021microsoft-include\033microsoft-mutable-ref"
    "erence\031microsoft-pure-definition\032microsoft-redeclare-static\020mi"
    "crosoft-sealed\027microsoft-static-assert\022microsoft-template\031micr"
    "osoft-template-shadow microsoft-union-member-reference\034microsoft-unq"
    "ualified-friend\024microsoft-using-decl\032microsoft-void-pseudo-dtor\026"
    "misleading-indentation\025mismatched-new-delete\032mismatched-parameter"
    "-types\027mismatched-return-types\017mismatched-tags\016missing-braces\021"
    "missing-constinit\024missing-declarations\026missing-exception-spec\032"
    "missing-field-initializers\030missing-format-attribute\024missing-inclu"
    "de-dirs\032missing-method-return-type\020missing-noescape\020missing-no"
    "return\030missing-prototype-for-cc\022missing-prototypes\025missing-sel"
    "ector-name\017missing-sysroot\035missing-variable-declarations\025missp"
    "elled-assumption\014module-build\017module-conflict\033module-file-conf"
    "ig-mismatch\025module-file-extension\015module-import\031module-import-"
    "in-extern-c\013module-lock\"modules-ambiguous-internal-linkage\037modul"
    "es-import-nested-redundant\004most\004move\014msvc-include\016msvc-not-"
    "found\tmultichar\023multiple-move-vbase\tnarrowing\021nested-anon-types"
    "\016nested-externs\020new-returns-null\013newline-eof\007noderef\015noe"
    "xcept-type\031non-c-typedef-for-linkage\007non-gcc\033non-literal-null-"
    "conversion'non-modular-include-in-framework-module\035non-modular-inclu"
    "de-in-module\017non-pod-varargs\032non-power-of-two-alignment\020non-vi"
    "rtual-dtor\007nonnull\025nonportable-cfstrings\030nonportable-include-p"
    "ath\037nonportable-system-include-path!nonportable-vector-initializatio"
    "n\024nontrivial-memaccess\023nsconsumed-mismatch\022nsreturns-mismatch\017"
    "null-arithmetic\016null-character\017null-conversion\020null-dereferenc"
    "e\027null-pointer-arithmetic\030null-pointer-subtraction\013nullability"
    "\030nullability-completeness\"nullability-completeness-on-arrays\024nul"
    "lability-declspec\025nullability-extension#nullability-inferred-on-nest"
    "ed-type\036nullable-to-nonnull-conversion+objc-autosynthesis-property-i"
    "var-name-match\035objc-bool-constant-conversion\013objc-boxing\027objc-"
    "circular-container\016objc-cocoa-api\034objc-designated-initializers\036"
    "objc-dictionary-duplicate-keys\023objc-flexible-array\037objc-forward-c"
    "lass-redefinition\024objc-interface-ivars\024objc-literal-compare\027ob"
    "jc-literal-conversion\027objc-macro-redefinition\021objc-messaging-id\022"
    "objc-method-access\037objc-missing-property-synthesis\030objc-missing-s"
    "uper-calls\032objc-multiple-method-names\"objc-noncopy-retain-block-pro"
    "perty\032objc-nonunified-exceptions#objc-property-assign-on-object-type"
    "\034objc-property-implementation\037objc-property-implicit-mismatch*obj"
    "c-property-matches-cocoa-ownership-rule\032objc-property-no-attribute\027"
    "objc-property-synthesis#objc-protocol-method-implementation objc-protoc"
    "ol-property-synthesis\030objc-protocol-qualifiers\"objc-readonly-with-s"
    "etter-property\026objc-redundant-api-use\032objc-redundant-literal-use\017"
    "objc-root-class\025objc-signed-char-bool/objc-signed-char-bool-implicit"
    "-float-conversion-objc-signed-char-bool-implicit-int-conversion\023objc"
    "-string-compare\031objc-string-concatenation\034objc-unsafe-perform-sel"
    "ector\003odr\016old-style-cast\024old-style-definition\027opencl-unsupp"
    "orted-rgba\006openmp\024openmp-51-extensions\016openmp-clauses\020openm"
    "p-loop-form\016openmp-mapping\015openmp-target\016option-ignored!ordere"
    "d-compare-function-pointers\027out-of-line-declaration\025out-of-scope-"
    "function\014over-aligned\010overflow\022overlength-strings\037overloade"
    "d-shift-op-parentheses\022overloaded-virtual\015override-init\017overri"
    "de-module\032overriding-method-mismatch\023overriding-t-option\006packe"
    "d\006padded\013parentheses\024parentheses-equality\024partial-availabil"
    "ity\004pass\015pass-analysis\013pass-failed\013pass-missed\015pch-date-"
    "time\010pedantic\026pedantic-core-features\017pedantic-macros\020pessim"
    "izing-move\015pointer-arith\027pointer-bool-conversion\017pointer-compa"
    "re\027pointer-integer-compare\014pointer-sign\024pointer-to-enum-cast\023"
    "pointer-to-int-cast\025pointer-type-mismatch\031poison-system-directori"
    "es\033potentially-direct-selector potentially-evaluated-expression\026p"
    "ragma-clang-attribute\032pragma-once-outside-header\013pragma-pack\036p"
    "ragma-pack-suspicious-include#pragma-system-header-outside-header\007pr"
    "agmas\020pre-c++14-compat\031pre-c++14-compat-pedantic\020pre-c++17-com"
    "pat\031pre-c++17-compat-pedantic\020pre-c++20-compat\031pre-c++20-compa"
    "t-pedantic\020pre-c++2b-compat\031pre-c++2b-compat-pedantic\016pre-c2x-"
    "compat\027pre-c2x-compat-pedantic\024pre-openmp-51-compat&predefined-id"
    "entifier-outside-function\016private-extern\016private-header\016privat"
    "e-module\025profile-instr-missing\031profile-instr-out-of-date\030profi"
    "le-instr-unprofiled\032property-access-dot-syntax\033property-attribute"
    "-mismatch\010protocol%protocol-property-synthesis-ambiguity\005psabi\032"
    "qualified-void-return-type\"quoted-include-in-framework-header\023range"
    "-loop-analysis\031range-loop-bind-reference\024range-loop-construct\032"
    "readonly-iboutlet-property\015receiver-expr\026receiver-forward-class\027"
    "redeclared-class-member\026redundant-consteval-if\017redundant-decls\016"
    "redundant-move\020redundant-parens\010register\026reinterpret-base-clas"
    "s\025remark-backend-plugin\007reorder\014reorder-ctor\021reorder-init-l"
    "ist\030requires-super-attribute\021reserved-id-macro\023reserved-identi"
    "fier\031reserved-macro-identifier\035reserved-user-defined-literal\022r"
    "estrict-expansion\031retained-language-linkage\024return-stack-address\017"
    "return-std-move\013return-type\025return-type-c-linkage\020rewrite-not-"
    "bool\023round-trip-cc1-args\004rtti\020sanitize-address\021search-path-"
    "usage\007section\010selector\026selector-type-mismatch\013self-assign\021"
    "self-assign-field\026self-assign-overloaded\tself-move\034semicolon-bef"
    "ore-method-body\010sentinel\016sequence-point\026serialized-diagnostics"
    "\006shadow\nshadow-all\014shadow-field\033shadow-field-in-constructor$s"
    "hadow-field-in-constructor-modified\013shadow-ivar\027shadow-uncaptured"
    "-local\024shift-count-negative\024shift-count-overflow\024shift-negativ"
    "e-value\024shift-op-parentheses\016shift-overflow\023shift-sign-overflo"
    "w\020shorten-64-to-32\014sign-compare\017sign-conversion\nsign-promo\024"
    "signed-enum-bitfield\025signed-unsigned-wchar\025sizeof-array-argument\022"
    "sizeof-array-decay\020sizeof-array-div\022sizeof-pointer-div\030sizeof-"
    "pointer-memaccess\020slash-u-filename\014slh-asm-goto\027sometimes-unin"
    "itialized\nsource-mgr\022source-uses-openmp\013spir-compat\014spirv-com"
    "pat\017stack-exhausted\017stack-protector\021static-float-init\020stati"
    "c-in-inline$static-inline-explicit-instantiation\026static-local-in-inl"
    "ine\020static-self-init\023stdlibcxx-not-found\017strict-aliasing\021st"
    "rict-aliasing=0\021strict-aliasing=1\021strict-aliasing=2\017strict-ove"
    "rflow\021strict-overflow=0\021strict-overflow=1\021strict-overflow=2\021"
    "strict-overflow=3\021strict-overflow=4\021strict-overflow=5\"strict-pot"
    "entially-direct-selector\021strict-prototypes\025strict-selector-match\016"
    "string-compare\024string-concatenation\021string-conversion\020string-p"
    "lus-char\017string-plus-int\024strlcpy-strlcat-size\014strncat-size\033"
    "suggest-destructor-override\020suggest-override\033super-class-method-m"
    "ismatch\020suspicious-bzero\024suspicious-memaccess\024swift-name-attri"
    "bute\006switch\013switch-bool\016switch-default\013switch-enum%sync-fet"
    "ch-and-nand-semantics-changed\005synth\036target-clones-mixed-specifier"
    "s\034tautological-bitwise-compare\024tautological-compare\035tautologic"
    "al-constant-compare&tautological-constant-in-range-compare*tautological"
    "-constant-out-of-range-compare\036tautological-objc-bool-compare\034tau"
    "tological-overlap-compare\034tautological-pointer-compare\037tautologic"
    "al-type-limit-compare\036tautological-undefined-compare'tautological-un"
    "signed-char-zero-compare'tautological-unsigned-enum-zero-compare\"tauto"
    "logical-unsigned-zero-compare tautological-value-range-compare\017tcb-e"
    "nforcement$tentative-definition-incomplete-type\015thread-safety\026thr"
    "ead-safety-analysis\030thread-safety-attributes\022thread-safety-beta\026"
    "thread-safety-negative\025thread-safety-precise\027thread-safety-refere"
    "nce\025thread-safety-verbose\ttrigraphs\013type-limits\013type-safety\024"
    "typedef-redefinition\020typename-missing\031unable-to-open-stats-file\030"
    "unavailable-declarations\023undeclared-selector\005undef\014undef-prefi"
    "x\031undefined-bool-conversion\027undefined-func-template\020undefined-"
    "inline\022undefined-internal\027undefined-internal-type\032undefined-re"
    "interpret-cast\026undefined-var-template\035underaligned-exception-obje"
    "ct\026unevaluated-expression\026unguarded-availability\032unguarded-ava"
    "ilability-new\007unicode\021unicode-homoglyph\022unicode-whitespace\022"
    "unicode-zero-width\015uninitialized\035uninitialized-const-reference\020"
    "unknown-argument\022unknown-assumption\022unknown-attributes\024unknown"
    "-cuda-version\027unknown-escape-sequence\017unknown-pragmas\022unknown-"
    "sanitizers\026unknown-warning-option\032unnamed-type-template-args\035u"
    "nneeded-internal-declaration\030unneeded-member-function\020unreachable"
    "-code\033unreachable-code-aggressive\026unreachable-code-break\034unrea"
    "chable-code-fallthrough\037unreachable-code-loop-increment\027unreachab"
    "le-code-return\013unsequenced\017unsupported-abs\036unsupported-availab"
    "ility-guard\016unsupported-cb#unsupported-dll-base-class-template\036un"
    "supported-floating-point-opt\022unsupported-friend\021unsupported-gpopt"
    "\017unsupported-nan\026unsupported-target-opt\026unsupported-visibility"
    "\037unusable-partial-specialization\006unused\017unused-argument\030unu"
    "sed-but-set-parameter\027unused-but-set-variable\034unused-command-line"
    "-argument\021unused-comparison\025unused-const-variable\032unused-excep"
    "tion-parameter\017unused-function\032unused-getter-return-value\014unus"
    "ed-label\025unused-lambda-capture\024unused-local-typedef\025unused-loc"
    "al-typedefs\015unused-macros\026unused-member-function\020unused-parame"
    "ter\024unused-private-field\024unused-property-ivar\015unused-result\017"
    "unused-template\014unused-value\017unused-variable\026unused-volatile-l"
    "value\026used-but-marked-unused\025user-defined-literals\025user-define"
    "d-warnings\007varargs\017variadic-macros\015vec-elem-size\021vector-con"
    "version\022vector-conversions\014vexing-parse\nvisibility\003vla\015vla"
    "-extension\031void-pointer-to-enum-cast\030void-pointer-to-int-cast\024"
    "void-ptr-dereference\025volatile-register-var\023wasm-exception-spec\025"
    "weak-template-vtables\014weak-vtables\020writable-strings\015write-stri"
    "ngs\017xor-used-as-pow\035zero-as-null-pointer-constant\021zero-length-"
    "array"};

#endif // GET_DIAG_ARRAYS


#ifdef DIAG_ENTRY
DIAG_ENTRY(anonymous_53 /*  */, 0, 0, /* DiagSubGroup0 */ 1)
DIAG_ENTRY(PoundPragmaMessage /* #pragma-messages */, 1, /* DiagArray1 */ 1, 0)
DIAG_ENTRY(PoundWarning /* #warnings */, 18, /* DiagArray2 */ 3, 0)
DIAG_ENTRY(anonymous_248 /* CFString-literal */, 28, /* DiagArray3 */ 5, 0)
DIAG_ENTRY(anonymous_52 /* CL4 */, 45, 0, /* DiagSubGroup4 */ 3)
DIAG_ENTRY(IndependentClassAttribute /* IndependentClass-attribute */, 49, /* DiagArray5 */ 7, 0)
DIAG_ENTRY(NSobjectAttribute /* NSObject-attribute */, 76, /* DiagArray6 */ 10, 0)
DIAG_ENTRY(anonymous_0 /* abi */, 95, 0, 0)
DIAG_ENTRY(AbsoluteValue /* absolute-value */, 99, /* DiagArray8 */ 12, 0)
DIAG_ENTRY(AbstractFinalClass /* abstract-final-class */, 114, /* DiagArray9 */ 17, 0)
DIAG_ENTRY(anonymous_242 /* abstract-vbase-init */, 135, /* DiagArray10 */ 19, 0)
DIAG_ENTRY(anonymous_51 /* address */, 155, 0, /* DiagSubGroup11 */ 6)
DIAG_ENTRY(anonymous_222 /* address-of-packed-member */, 163, /* DiagArray12 */ 21, 0)
DIAG_ENTRY(AddressOfTemporary /* address-of-temporary */, 188, /* DiagArray13 */ 23, 0)
DIAG_ENTRY(anonymous_1 /* aggregate-return */, 209, 0, 0)
DIAG_ENTRY(AIXCompat /* aix-compat */, 226, /* DiagArray15 */ 25, 0)
DIAG_ENTRY(anonymous_223 /* align-mismatch */, 237, /* DiagArray16 */ 28, 0)
DIAG_ENTRY(All /* all */, 252, 0, /* DiagSubGroup17 */ 10)
DIAG_ENTRY(anonymous_168 /* alloca */, 256, /* DiagArray18 */ 30, 0)
DIAG_ENTRY(anonymous_169 /* alloca-with-align-alignof */, 263, /* DiagArray19 */ 32, 0)
DIAG_ENTRY(anonymous_229 /* ambiguous-delete */, 289, /* DiagArray20 */ 34, 0)
DIAG_ENTRY(anonymous_124 /* ambiguous-ellipsis */, 306, /* DiagArray21 */ 36, 0)
DIAG_ENTRY(AmbiguousMacro /* ambiguous-macro */, 325, /* DiagArray22 */ 38, 0)
DIAG_ENTRY(AmbigMemberTemplate /* ambiguous-member-template */, 341, /* DiagArray23 */ 40, 0)
DIAG_ENTRY(anonymous_189 /* ambiguous-reversed-operator */, 367, /* DiagArray24 */ 42, 0)
DIAG_ENTRY(anonymous_86 /* analyzer-incompatible-plugin */, 395, /* DiagArray25 */ 44, 0)
DIAG_ENTRY(AnonEnumEnumConversion /* anon-enum-enum-conversion */, 424, /* DiagArray26 */ 46, /* DiagSubGroup26 */ 16)
DIAG_ENTRY(anonymous_125 /* anonymous-pack-parens */, 450, /* DiagArray27 */ 48, 0)
DIAG_ENTRY(AutomaticReferenceCounting /* arc */, 472, 0, /* DiagSubGroup28 */ 18)
DIAG_ENTRY(anonymous_123 /* arc-bridge-casts-disallowed-in-nonarc */, 476, /* DiagArray29 */ 50, 0)
DIAG_ENTRY(ARCRepeatedUseOfWeakMaybe /* arc-maybe-repeated-use-of-weak */, 514, /* DiagArray30 */ 52, 0)
DIAG_ENTRY(ARCNonPodMemAccess /* arc-non-pod-memaccess */, 545, /* DiagArray31 */ 54, 0)
DIAG_ENTRY(anonymous_153 /* arc-performSelector-leaks */, 567, /* DiagArray32 */ 56, 0)
DIAG_ENTRY(ARCRepeatedUseOfWeak /* arc-repeated-use-of-weak */, 593, /* DiagArray33 */ 58, /* DiagSubGroup33 */ 22)
DIAG_ENTRY(ARCRetainCycles /* arc-retain-cycles */, 618, /* DiagArray34 */ 60, 0)
DIAG_ENTRY(ARCUnsafeRetainedAssign /* arc-unsafe-retained-assign */, 636, /* DiagArray35 */ 62, 0)
DIAG_ENTRY(anonymous_250 /* argument-outside-range */, 663, /* DiagArray36 */ 66, 0)
DIAG_ENTRY(anonymous_251 /* argument-undefined-behaviour */, 686, /* DiagArray37 */ 68, 0)
DIAG_ENTRY(ArrayBounds /* array-bounds */, 715, /* DiagArray38 */ 70, 0)
DIAG_ENTRY(ArrayBoundsPointerArithmetic /* array-bounds-pointer-arithmetic */, 728, /* DiagArray39 */ 76, 0)
DIAG_ENTRY(ASM /* asm */, 760, 0, /* DiagSubGroup40 */ 24)
DIAG_ENTRY(ASMOperandWidths /* asm-operand-widths */, 764, /* DiagArray41 */ 79, 0)
DIAG_ENTRY(anonymous_249 /* assign-enum */, 783, /* DiagArray42 */ 81, 0)
DIAG_ENTRY(anonymous_140 /* assume */, 795, /* DiagArray43 */ 83, 0)
DIAG_ENTRY(anonymous_50 /* at-protocol */, 802, 0, 0)
DIAG_ENTRY(FrameworkHdrAtImport /* atimport-in-framework-header */, 814, /* DiagArray45 */ 85, 0)
DIAG_ENTRY(AtomicAlignment /* atomic-alignment */, 843, /* DiagArray46 */ 87, 0)
DIAG_ENTRY(anonymous_235 /* atomic-implicit-seq-cst */, 860, /* DiagArray47 */ 90, 0)
DIAG_ENTRY(anonymous_234 /* atomic-memory-ordering */, 884, /* DiagArray48 */ 92, 0)
DIAG_ENTRY(AtomicProperties /* atomic-properties */, 907, 0, /* DiagSubGroup49 */ 26)
DIAG_ENTRY(anonymous_148 /* atomic-property-with-user-defined-accessor */, 925, /* DiagArray50 */ 94, 0)
DIAG_ENTRY(anonymous_185 /* attribute-packed-for-bitfield */, 968, /* DiagArray51 */ 96, 0)
DIAG_ENTRY(BackendWarningAttributes /* attribute-warning */, 998, /* DiagArray52 */ 98, 0)
DIAG_ENTRY(Attributes /* attributes */, 1016, 0, /* DiagSubGroup53 */ 29)
DIAG_ENTRY(AutoDisableVptrSanitizer /* auto-disable-vptr-sanitizer */, 1027, /* DiagArray54 */ 100, 0)
DIAG_ENTRY(AutoImport /* auto-import */, 1055, /* DiagArray55 */ 102, 0)
DIAG_ENTRY(anonymous_121 /* auto-storage-class */, 1067, /* DiagArray56 */ 104, 0)
DIAG_ENTRY(anonymous_165 /* auto-var-id */, 1086, /* DiagArray57 */ 106, 0)
DIAG_ENTRY(Availability /* availability */, 1098, /* DiagArray58 */ 108, 0)
DIAG_ENTRY(AVRRtlibLinkingQuirks /* avr-rtlib-linking-quirks */, 1111, /* DiagArray59 */ 119, 0)
DIAG_ENTRY(BackendPlugin /* backend-plugin */, 1136, /* DiagArray60 */ 126, 0)
DIAG_ENTRY(anonymous_89 /* backslash-newline-escape */, 1151, /* DiagArray61 */ 128, 0)
DIAG_ENTRY(BadFunctionCast /* bad-function-cast */, 1176, /* DiagArray62 */ 130, 0)
DIAG_ENTRY(BinaryLiteral /* binary-literal */, 1194, 0, /* DiagSubGroup63 */ 32)
DIAG_ENTRY(BindToTemporaryCopy /* bind-to-temporary-copy */, 1209, /* DiagArray64 */ 132, /* DiagSubGroup64 */ 36)
DIAG_ENTRY(anonymous_135 /* binding-in-condition */, 1232, /* DiagArray65 */ 135, 0)
DIAG_ENTRY(BitFieldConstantConversion /* bitfield-constant-conversion */, 1253, /* DiagArray66 */ 137, 0)
DIAG_ENTRY(BitFieldEnumConversion /* bitfield-enum-conversion */, 1282, /* DiagArray67 */ 139, 0)
DIAG_ENTRY(BitFieldWidth /* bitfield-width */, 1307, /* DiagArray68 */ 143, 0)
DIAG_ENTRY(BitwiseConditionalParentheses /* bitwise-conditional-parentheses */, 1322, /* DiagArray69 */ 145, 0)
DIAG_ENTRY(BitwiseInsteadOfLogical /* bitwise-instead-of-logical */, 1354, /* DiagArray70 */ 147, 0)
DIAG_ENTRY(BitwiseOpParentheses /* bitwise-op-parentheses */, 1381, /* DiagArray71 */ 149, 0)
DIAG_ENTRY(BlockCaptureAutoReleasing /* block-capture-autoreleasing */, 1404, /* DiagArray72 */ 151, 0)
DIAG_ENTRY(BoolConversion /* bool-conversion */, 1432, /* DiagArray73 */ 153, /* DiagSubGroup73 */ 38)
DIAG_ENTRY(anonymous_58 /* bool-conversions */, 1448, 0, /* DiagSubGroup74 */ 41)
DIAG_ENTRY(BoolOperation /* bool-operation */, 1465, /* DiagArray75 */ 155, /* DiagSubGroup75 */ 43)
DIAG_ENTRY(anonymous_206 /* braced-scalar-init */, 1480, /* DiagArray76 */ 157, 0)
DIAG_ENTRY(ObjCBridge /* bridge-cast */, 1499, /* DiagArray77 */ 159, 0)
DIAG_ENTRY(anonymous_171 /* builtin-assume-aligned-alignment */, 1511, /* DiagArray78 */ 162, 0)
DIAG_ENTRY(BuiltinMacroRedefined /* builtin-macro-redefined */, 1544, /* DiagArray79 */ 164, 0)
DIAG_ENTRY(anonymous_141 /* builtin-memcpy-chk-size */, 1568, /* DiagArray80 */ 167, 0)
DIAG_ENTRY(BuiltinRequiresHeader /* builtin-requires-header */, 1592, /* DiagArray81 */ 169, 0)
DIAG_ENTRY(CXXCompat /* c++-compat */, 1616, /* DiagArray82 */ 171, 0)
DIAG_ENTRY(anonymous_18 /* c++0x-compat */, 1627, 0, /* DiagSubGroup83 */ 45)
DIAG_ENTRY(anonymous_62 /* c++0x-extensions */, 1640, 0, /* DiagSubGroup84 */ 47)
DIAG_ENTRY(anonymous_16 /* c++0x-narrowing */, 1657, 0, /* DiagSubGroup85 */ 49)
DIAG_ENTRY(CXX11Compat /* c++11-compat */, 1673, /* DiagArray86 */ 173, /* DiagSubGroup86 */ 51)
DIAG_ENTRY(CXX11CompatDeprecatedWritableStr /* c++11-compat-deprecated-writable-strings */, 1686, /* DiagArray87 */ 184, 0)
DIAG_ENTRY(CXX11CompatPedantic /* c++11-compat-pedantic */, 1727, 0, /* DiagSubGroup88 */ 59)
DIAG_ENTRY(CXX11CompatReservedUserDefinedLiteral /* c++11-compat-reserved-user-defined-literal */, 1749, /* DiagArray89 */ 186, 0)
DIAG_ENTRY(CXX11 /* c++11-extensions */, 1792, /* DiagArray90 */ 188, /* DiagSubGroup90 */ 65)
DIAG_ENTRY(CXX11ExtraSemi /* c++11-extra-semi */, 1809, /* DiagArray91 */ 214, 0)
DIAG_ENTRY(CXX11InlineNamespace /* c++11-inline-namespace */, 1826, /* DiagArray92 */ 216, 0)
DIAG_ENTRY(CXX11LongLong /* c++11-long-long */, 1849, /* DiagArray93 */ 218, 0)
DIAG_ENTRY(CXX11Narrowing /* c++11-narrowing */, 1865, /* DiagArray94 */ 220, 0)
DIAG_ENTRY(CXX14BinaryLiteral /* c++14-binary-literal */, 1881, /* DiagArray95 */ 228, 0)
DIAG_ENTRY(CXX14Compat /* c++14-compat */, 1902, 0, /* DiagSubGroup96 */ 69)
DIAG_ENTRY(CXX14CompatPedantic /* c++14-compat-pedantic */, 1915, 0, /* DiagSubGroup97 */ 73)
DIAG_ENTRY(CXX14 /* c++14-extensions */, 1937, /* DiagArray98 */ 230, /* DiagSubGroup98 */ 78)
DIAG_ENTRY(CXX17Compat /* c++17-compat */, 1954, 0, /* DiagSubGroup99 */ 80)
DIAG_ENTRY(CXX17CompatMangling /* c++17-compat-mangling */, 1967, /* DiagArray100 */ 239, 0)
DIAG_ENTRY(CXX17CompatPedantic /* c++17-compat-pedantic */, 1989, 0, /* DiagSubGroup101 */ 86)
DIAG_ENTRY(CXX17 /* c++17-extensions */, 2011, /* DiagArray102 */ 241, 0)
DIAG_ENTRY(anonymous_63 /* c++1y-extensions */, 2028, 0, /* DiagSubGroup103 */ 90)
DIAG_ENTRY(anonymous_19 /* c++1z-compat */, 2045, 0, /* DiagSubGroup104 */ 92)
DIAG_ENTRY(anonymous_9 /* c++1z-compat-mangling */, 2058, 0, /* DiagSubGroup105 */ 94)
DIAG_ENTRY(anonymous_64 /* c++1z-extensions */, 2080, 0, /* DiagSubGroup106 */ 96)
DIAG_ENTRY(CXX20Compat /* c++20-compat */, 2097, /* DiagArray107 */ 260, /* DiagSubGroup107 */ 98)
DIAG_ENTRY(CXX20CompatPedantic /* c++20-compat-pedantic */, 2110, 0, /* DiagSubGroup108 */ 100)
DIAG_ENTRY(CXX20Designator /* c++20-designator */, 2132, /* DiagArray109 */ 268, 0)
DIAG_ENTRY(CXX20 /* c++20-extensions */, 2149, /* DiagArray110 */ 270, /* DiagSubGroup110 */ 103)
DIAG_ENTRY(anonymous_20 /* c++2a-compat */, 2166, 0, /* DiagSubGroup111 */ 105)
DIAG_ENTRY(anonymous_21 /* c++2a-compat-pedantic */, 2179, 0, /* DiagSubGroup112 */ 107)
DIAG_ENTRY(anonymous_65 /* c++2a-extensions */, 2201, 0, /* DiagSubGroup113 */ 109)
DIAG_ENTRY(CXX2b /* c++2b-extensions */, 2218, /* DiagArray114 */ 291, 0)
DIAG_ENTRY(anonymous_14 /* c++98-c++11-c++14-c++17-compat */, 2235, 0, /* DiagSubGroup115 */ 111)
DIAG_ENTRY(anonymous_15 /* c++98-c++11-c++14-c++17-compat-pedantic */, 2266, 0, /* DiagSubGroup116 */ 113)
DIAG_ENTRY(anonymous_12 /* c++98-c++11-c++14-compat */, 2306, 0, /* DiagSubGroup117 */ 115)
DIAG_ENTRY(anonymous_13 /* c++98-c++11-c++14-compat-pedantic */, 2331, 0, /* DiagSubGroup118 */ 117)
DIAG_ENTRY(anonymous_10 /* c++98-c++11-compat */, 2365, 0, /* DiagSubGroup119 */ 119)
DIAG_ENTRY(CXXPre14CompatBinaryLiteral /* c++98-c++11-compat-binary-literal */, 2384, /* DiagArray120 */ 297, 0)
DIAG_ENTRY(anonymous_11 /* c++98-c++11-compat-pedantic */, 2418, 0, /* DiagSubGroup121 */ 121)
DIAG_ENTRY(CXX98Compat /* c++98-compat */, 2446, /* DiagArray122 */ 299, /* DiagSubGroup122 */ 123)
DIAG_ENTRY(CXX98CompatBindToTemporaryCopy /* c++98-compat-bind-to-temporary-copy */, 2459, /* DiagArray123 */ 359, 0)
DIAG_ENTRY(CXX98CompatExtraSemi /* c++98-compat-extra-semi */, 2495, /* DiagArray124 */ 361, 0)
DIAG_ENTRY(CXX98CompatLocalTypeTemplateArgs /* c++98-compat-local-type-template-args */, 2519, /* DiagArray125 */ 363, 0)
DIAG_ENTRY(CXX98CompatPedantic /* c++98-compat-pedantic */, 2557, /* DiagArray126 */ 365, /* DiagSubGroup126 */ 130)
DIAG_ENTRY(CXX98CompatUnnamedTypeTemplateArgs /* c++98-compat-unnamed-type-template-args */, 2579, /* DiagArray127 */ 375, 0)
DIAG_ENTRY(C11 /* c11-extensions */, 2619, /* DiagArray128 */ 377, 0)
DIAG_ENTRY(C2x /* c2x-extensions */, 2634, /* DiagArray129 */ 382, 0)
DIAG_ENTRY(C99Compat /* c99-compat */, 2649, /* DiagArray130 */ 385, 0)
DIAG_ENTRY(C99Designator /* c99-designator */, 2660, /* DiagArray131 */ 389, /* DiagSubGroup131 */ 138)
DIAG_ENTRY(C99 /* c99-extensions */, 2675, /* DiagArray132 */ 395, /* DiagSubGroup132 */ 140)
DIAG_ENTRY(PureVirtualCallFromCtorDtor /* call-to-pure-virtual-from-ctor-dtor */, 2690, /* DiagArray133 */ 406, 0)
DIAG_ENTRY(CalledOnceParameter /* called-once-parameter */, 2726, /* DiagArray134 */ 408, /* DiagSubGroup134 */ 142)
DIAG_ENTRY(CastAlign /* cast-align */, 2748, /* DiagArray135 */ 412, 0)
DIAG_ENTRY(anonymous_237 /* cast-calling-convention */, 2759, /* DiagArray136 */ 414, 0)
DIAG_ENTRY(CastFunctionType /* cast-function-type */, 2783, /* DiagArray137 */ 416, 0)
DIAG_ENTRY(SelTypeCast /* cast-of-sel-type */, 2802, /* DiagArray138 */ 418, 0)
DIAG_ENTRY(CastQual /* cast-qual */, 2819, /* DiagArray139 */ 420, 0)
DIAG_ENTRY(anonymous_227 /* cast-qual-unrelated */, 2829, /* DiagArray140 */ 423, 0)
DIAG_ENTRY(anonymous_2 /* char-align */, 2849, 0, 0)
DIAG_ENTRY(CharSubscript /* char-subscripts */, 2860, /* DiagArray142 */ 425, 0)
DIAG_ENTRY(ClangClPch /* clang-cl-pch */, 2876, /* DiagArray143 */ 428, 0)
DIAG_ENTRY(ClassConversion /* class-conversion */, 2889, /* DiagArray144 */ 433, 0)
DIAG_ENTRY(ClassVarargs /* class-varargs */, 2906, /* DiagArray145 */ 437, /* DiagSubGroup145 */ 144)
DIAG_ENTRY(anonymous_172 /* cmse-union-leak */, 2920, /* DiagArray146 */ 439, 0)
DIAG_ENTRY(anonymous_130 /* comma */, 2936, /* DiagArray147 */ 441, 0)
DIAG_ENTRY(Comment /* comment */, 2942, /* DiagArray148 */ 443, 0)
DIAG_ENTRY(anonymous_56 /* comments */, 2950, 0, /* DiagSubGroup149 */ 146)
DIAG_ENTRY(CompareDistinctPointerType /* compare-distinct-pointer-types */, 2959, /* DiagArray150 */ 448, 0)
DIAG_ENTRY(CompletionHandler /* completion-handler */, 2990, /* DiagArray151 */ 450, 0)
DIAG_ENTRY(anonymous_208 /* complex-component-init */, 3009, /* DiagArray152 */ 454, 0)
DIAG_ENTRY(CompoundTokenSplit /* compound-token-split */, 3032, 0, /* DiagSubGroup153 */ 148)
DIAG_ENTRY(CompoundTokenSplitByMacro /* compound-token-split-by-macro */, 3053, /* DiagArray154 */ 456, 0)
DIAG_ENTRY(CompoundTokenSplitBySpace /* compound-token-split-by-space */, 3083, /* DiagArray155 */ 458, 0)
DIAG_ENTRY(anonymous_128 /* concepts-ts-compat */, 3113, /* DiagArray156 */ 460, 0)
DIAG_ENTRY(anonymous_239 /* conditional-type-mismatch */, 3132, /* DiagArray157 */ 462, 0)
DIAG_ENTRY(UninitializedMaybe /* conditional-uninitialized */, 3158, /* DiagArray158 */ 464, 0)
DIAG_ENTRY(ConfigMacros /* config-macros */, 3184, /* DiagArray159 */ 466, 0)
DIAG_ENTRY(ConstantConversion /* constant-conversion */, 3198, /* DiagArray160 */ 468, /* DiagSubGroup160 */ 151)
DIAG_ENTRY(anonymous_71 /* constant-evaluated */, 3218, /* DiagArray161 */ 470, 0)
DIAG_ENTRY(anonymous_217 /* constant-logical-operand */, 3237, /* DiagArray162 */ 472, 0)
DIAG_ENTRY(anonymous_163 /* constexpr-not-const */, 3262, /* DiagArray163 */ 474, 0)
DIAG_ENTRY(Consumed /* consumed */, 3282, /* DiagArray164 */ 476, 0)
DIAG_ENTRY(Conversion /* conversion */, 3291, /* DiagArray165 */ 485, /* DiagSubGroup165 */ 154)
DIAG_ENTRY(anonymous_57 /* conversion-null */, 3302, 0, /* DiagSubGroup166 */ 170)
DIAG_ENTRY(Coroutine /* coroutine */, 3318, /* DiagArray167 */ 491, /* DiagSubGroup167 */ 172)
DIAG_ENTRY(CoroutineMissingUnhandledException /* coroutine-missing-unhandled-exception */, 3328, /* DiagArray168 */ 493, 0)
DIAG_ENTRY(CoveredSwitchDefault /* covered-switch-default */, 3366, /* DiagArray169 */ 495, 0)
DIAG_ENTRY(anonymous_55 /* cpp */, 3389, 0, /* DiagSubGroup170 */ 175)
DIAG_ENTRY(ObjCCStringFormat /* cstring-format-directive */, 3393, /* DiagArray171 */ 497, 0)
DIAG_ENTRY(CTADMaybeUnsupported /* ctad-maybe-unsupported */, 3418, /* DiagArray172 */ 499, 0)
DIAG_ENTRY(anonymous_3 /* ctor-dtor-privacy */, 3441, 0, 0)
DIAG_ENTRY(CrossTU /* ctu */, 3459, /* DiagArray174 */ 501, 0)
DIAG_ENTRY(CudaCompat /* cuda-compat */, 3463, /* DiagArray175 */ 503, 0)
DIAG_ENTRY(CustomAtomic /* custom-atomic-properties */, 3475, /* DiagArray176 */ 509, 0)
DIAG_ENTRY(anonymous_126 /* cxx-attribute-extension */, 3500, /* DiagArray177 */ 511, 0)
DIAG_ENTRY(Dangling /* dangling */, 3524, /* DiagArray178 */ 513, /* DiagSubGroup178 */ 177)
DIAG_ENTRY(DanglingElse /* dangling-else */, 3533, /* DiagArray179 */ 516, 0)
DIAG_ENTRY(DanglingField /* dangling-field */, 3547, /* DiagArray180 */ 518, 0)
DIAG_ENTRY(DanglingGsl /* dangling-gsl */, 3562, /* DiagArray181 */ 523, 0)
DIAG_ENTRY(DanglingInitializerList /* dangling-initializer-list */, 3575, /* DiagArray182 */ 526, 0)
DIAG_ENTRY(anonymous_82 /* darwin-sdk-settings */, 3601, /* DiagArray183 */ 528, 0)
DIAG_ENTRY(anonymous_111 /* date-time */, 3621, /* DiagArray184 */ 530, 0)
DIAG_ENTRY(DeallocInCategory /* dealloc-in-category */, 3631, /* DiagArray185 */ 532, 0)
DIAG_ENTRY(anonymous_79 /* debug-compression-unavailable */, 3651, /* DiagArray186 */ 534, 0)
DIAG_ENTRY(anonymous_253 /* declaration-after-statement */, 3681, /* DiagArray187 */ 536, 0)
DIAG_ENTRY(DefaultedFunctionDeleted /* defaulted-function-deleted */, 3709, /* DiagArray188 */ 538, 0)
DIAG_ENTRY(DelegatingCtorCycles /* delegating-ctor-cycles */, 3736, /* DiagArray189 */ 541, 0)
DIAG_ENTRY(DeleteAbstractNonVirtualDtor /* delete-abstract-non-virtual-dtor */, 3759, /* DiagArray190 */ 543, 0)
DIAG_ENTRY(DeleteIncomplete /* delete-incomplete */, 3792, /* DiagArray191 */ 545, 0)
DIAG_ENTRY(DeleteNonAbstractNonVirtualDtor /* delete-non-abstract-non-virtual-dtor */, 3810, /* DiagArray192 */ 548, 0)
DIAG_ENTRY(DeleteNonVirtualDtor /* delete-non-virtual-dtor */, 3847, 0, /* DiagSubGroup193 */ 182)
DIAG_ENTRY(anonymous_95 /* delimited-escape-sequence-extension */, 3871, /* DiagArray194 */ 550, 0)
DIAG_ENTRY(Deprecated /* deprecated */, 3907, /* DiagArray195 */ 552, /* DiagSubGroup195 */ 185)
DIAG_ENTRY(anonymous_230 /* deprecated-altivec-src-compat */, 3918, /* DiagArray196 */ 561, 0)
DIAG_ENTRY(DeprecatedAnonEnumEnumConversion /* deprecated-anon-enum-enum-conversion */, 3948, /* DiagArray197 */ 563, 0)
DIAG_ENTRY(DeprecatedArrayCompare /* deprecated-array-compare */, 3985, /* DiagArray198 */ 565, 0)
DIAG_ENTRY(DeprecatedAttributes /* deprecated-attributes */, 4010, /* DiagArray199 */ 567, 0)
DIAG_ENTRY(DeprecatedCommaSubscript /* deprecated-comma-subscript */, 4032, /* DiagArray200 */ 569, 0)
DIAG_ENTRY(DeprecatedCopy /* deprecated-copy */, 4059, /* DiagArray201 */ 571, /* DiagSubGroup201 */ 204)
DIAG_ENTRY(anonymous_4 /* deprecated-copy-dtor */, 4075, 0, /* DiagSubGroup202 */ 206)
DIAG_ENTRY(DeprecatedCopyWithDtor /* deprecated-copy-with-dtor */, 4096, /* DiagArray203 */ 573, /* DiagSubGroup203 */ 208)
DIAG_ENTRY(DeprecatedCopyWithUserProvidedCopy /* deprecated-copy-with-user-provided-copy */, 4122, /* DiagArray204 */ 575, 0)
DIAG_ENTRY(DeprecatedCopyWithUserProvidedDtor /* deprecated-copy-with-user-provided-dtor */, 4162, /* DiagArray205 */ 577, 0)
DIAG_ENTRY(DeprecatedCoroutine /* deprecated-coroutine */, 4202, /* DiagArray206 */ 579, /* DiagSubGroup206 */ 210)
DIAG_ENTRY(DeprecatedDeclarations /* deprecated-declarations */, 4223, /* DiagArray207 */ 581, 0)
DIAG_ENTRY(DeprecatedDynamicExceptionSpec /* deprecated-dynamic-exception-spec */, 4247, /* DiagArray208 */ 588, 0)
DIAG_ENTRY(DeprecatedEnumCompare /* deprecated-enum-compare */, 4281, /* DiagArray209 */ 590, 0)
DIAG_ENTRY(DeprecatedEnumCompareConditional /* deprecated-enum-compare-conditional */, 4305, /* DiagArray210 */ 592, 0)
DIAG_ENTRY(DeprecatedEnumEnumConversion /* deprecated-enum-enum-conversion */, 4341, /* DiagArray211 */ 594, 0)
DIAG_ENTRY(DeprecatedEnumFloatConversion /* deprecated-enum-float-conversion */, 4373, /* DiagArray212 */ 596, 0)
DIAG_ENTRY(DeprecatedExperimentalCoroutine /* deprecated-experimental-coroutine */, 4406, /* DiagArray213 */ 598, 0)
DIAG_ENTRY(DeprecatedImplementations /* deprecated-implementations */, 4440, /* DiagArray214 */ 600, 0)
DIAG_ENTRY(DeprecatedIncrementBool /* deprecated-increment-bool */, 4467, /* DiagArray215 */ 603, 0)
DIAG_ENTRY(DeprecatedObjCIsaUsage /* deprecated-objc-isa-usage */, 4493, /* DiagArray216 */ 605, 0)
DIAG_ENTRY(ObjCPointerIntrospect /* deprecated-objc-pointer-introspection */, 4519, /* DiagArray217 */ 608, /* DiagSubGroup217 */ 212)
DIAG_ENTRY(ObjCPointerIntrospectPerformSelector /* deprecated-objc-pointer-introspection-performSelector */, 4557, /* DiagArray218 */ 610, 0)
DIAG_ENTRY(DeprecatedPragma /* deprecated-pragma */, 4611, /* DiagArray219 */ 612, 0)
DIAG_ENTRY(DeprecatedRegister /* deprecated-register */, 4629, /* DiagArray220 */ 614, 0)
DIAG_ENTRY(DeprecatedThisCapture /* deprecated-this-capture */, 4649, /* DiagArray221 */ 616, 0)
DIAG_ENTRY(DeprecatedVolatile /* deprecated-volatile */, 4673, /* DiagArray222 */ 618, 0)
DIAG_ENTRY(DeprecatedWritableStr /* deprecated-writable-strings */, 4693, 0, /* DiagSubGroup223 */ 214)
DIAG_ENTRY(anonymous_256 /* direct-ivar-access */, 4721, /* DiagArray224 */ 625, 0)
DIAG_ENTRY(anonymous_103 /* disabled-macro-expansion */, 4740, /* DiagArray225 */ 627, 0)
DIAG_ENTRY(anonymous_6 /* disabled-optimization */, 4765, 0, 0)
DIAG_ENTRY(anonymous_7 /* discard-qual */, 4787, 0, 0)
DIAG_ENTRY(DistributedObjectModifiers /* distributed-object-modifiers */, 4800, /* DiagArray228 */ 629, 0)
DIAG_ENTRY(anonymous_8 /* div-by-zero */, 4829, 0, /* DiagSubGroup229 */ 216)
DIAG_ENTRY(DivZero /* division-by-zero */, 4841, /* DiagArray230 */ 632, 0)
DIAG_ENTRY(anonymous_173 /* dll-attribute-on-redeclaration */, 4858, /* DiagArray231 */ 634, 0)
DIAG_ENTRY(DllexportExplicitInstantiationDecl /* dllexport-explicit-instantiation-decl */, 4889, /* DiagArray232 */ 636, 0)
DIAG_ENTRY(anonymous_174 /* dllimport-static-field-def */, 4927, /* DiagArray233 */ 638, 0)
DIAG_ENTRY(Documentation /* documentation */, 4954, /* DiagArray234 */ 640, /* DiagSubGroup234 */ 218)
DIAG_ENTRY(DocumentationDeprecatedSync /* documentation-deprecated-sync */, 4968, /* DiagArray235 */ 660, 0)
DIAG_ENTRY(DocumentationHTML /* documentation-html */, 4998, /* DiagArray236 */ 662, 0)
DIAG_ENTRY(DocumentationPedantic /* documentation-pedantic */, 5017, /* DiagArray237 */ 667, /* DiagSubGroup237 */ 221)
DIAG_ENTRY(DocumentationUnknownCommand /* documentation-unknown-command */, 5040, /* DiagArray238 */ 669, 0)
DIAG_ENTRY(anonymous_90 /* dollar-in-identifier-extension */, 5070, /* DiagArray239 */ 672, 0)
DIAG_ENTRY(DoublePromotion /* double-promotion */, 5101, /* DiagArray240 */ 674, 0)
DIAG_ENTRY(DtorName /* dtor-name */, 5118, /* DiagArray241 */ 676, 0)
DIAG_ENTRY(anonymous_162 /* dtor-typedef */, 5128, /* DiagArray242 */ 680, 0)
DIAG_ENTRY(DuplicateDeclSpecifier /* duplicate-decl-specifier */, 5141, /* DiagArray243 */ 682, 0)
DIAG_ENTRY(anonymous_129 /* duplicate-enum */, 5166, /* DiagArray244 */ 687, 0)
DIAG_ENTRY(DuplicateArgDecl /* duplicate-method-arg */, 5181, /* DiagArray245 */ 689, 0)
DIAG_ENTRY(MethodDuplicate /* duplicate-method-match */, 5202, /* DiagArray246 */ 691, 0)
DIAG_ENTRY(anonymous_143 /* duplicate-protocol */, 5225, /* DiagArray247 */ 693, 0)
DIAG_ENTRY(DynamicClassMemaccess /* dynamic-class-memaccess */, 5244, /* DiagArray248 */ 695, 0)
DIAG_ENTRY(DynamicExceptionSpec /* dynamic-exception-spec */, 5268, /* DiagArray249 */ 697, /* DiagSubGroup249 */ 223)
DIAG_ENTRY(anonymous_31 /* effc++ */, 5291, 0, /* DiagSubGroup250 */ 225)
DIAG_ENTRY(anonymous_117 /* elaborated-enum-base */, 5298, /* DiagArray251 */ 699, 0)
DIAG_ENTRY(anonymous_118 /* elaborated-enum-class */, 5319, /* DiagArray252 */ 701, 0)
DIAG_ENTRY(anonymous_109 /* embedded-directive */, 5341, /* DiagArray253 */ 703, 0)
DIAG_ENTRY(EmptyBody /* empty-body */, 5360, /* DiagArray254 */ 705, 0)
DIAG_ENTRY(anonymous_122 /* empty-decomposition */, 5371, /* DiagArray255 */ 711, 0)
DIAG_ENTRY(EmptyInitStatement /* empty-init-stmt */, 5391, /* DiagArray256 */ 713, 0)
DIAG_ENTRY(anonymous_114 /* empty-translation-unit */, 5407, /* DiagArray257 */ 715, 0)
DIAG_ENTRY(anonymous_177 /* encode-type */, 5430, /* DiagArray258 */ 717, 0)
DIAG_ENTRY(anonymous_54 /* endif-labels */, 5442, 0, /* DiagSubGroup259 */ 227)
DIAG_ENTRY(EnumCompare /* enum-compare */, 5455, /* DiagArray260 */ 719, /* DiagSubGroup260 */ 229)
DIAG_ENTRY(EnumCompareConditional /* enum-compare-conditional */, 5468, /* DiagArray261 */ 721, /* DiagSubGroup261 */ 232)
DIAG_ENTRY(EnumCompareSwitch /* enum-compare-switch */, 5493, /* DiagArray262 */ 723, 0)
DIAG_ENTRY(EnumConversion /* enum-conversion */, 5513, /* DiagArray263 */ 725, /* DiagSubGroup263 */ 234)
DIAG_ENTRY(EnumEnumConversion /* enum-enum-conversion */, 5529, /* DiagArray264 */ 727, /* DiagSubGroup264 */ 238)
DIAG_ENTRY(EnumFloatConversion /* enum-float-conversion */, 5550, /* DiagArray265 */ 729, /* DiagSubGroup265 */ 240)
DIAG_ENTRY(EnumTooLarge /* enum-too-large */, 5572, /* DiagArray266 */ 731, 0)
DIAG_ENTRY(Exceptions /* exceptions */, 5587, /* DiagArray267 */ 734, 0)
DIAG_ENTRY(ExcessInitializers /* excess-initializers */, 5598, /* DiagArray268 */ 738, 0)
DIAG_ENTRY(ExitTimeDestructors /* exit-time-destructors */, 5618, /* DiagArray269 */ 743, 0)
DIAG_ENTRY(ExpansionToDefined /* expansion-to-defined */, 5640, /* DiagArray270 */ 745, 0)
DIAG_ENTRY(ExplicitInitializeCall /* explicit-initialize-call */, 5661, /* DiagArray271 */ 748, 0)
DIAG_ENTRY(anonymous_210 /* explicit-ownership-type */, 5686, /* DiagArray272 */ 751, 0)
DIAG_ENTRY(ExportUnnamed /* export-unnamed */, 5710, /* DiagArray273 */ 753, 0)
DIAG_ENTRY(anonymous_259 /* export-using-directive */, 5725, /* DiagArray274 */ 756, 0)
DIAG_ENTRY(ExternCCompat /* extern-c-compat */, 5748, /* DiagArray275 */ 758, 0)
DIAG_ENTRY(anonymous_205 /* extern-initializer */, 5764, /* DiagArray276 */ 760, 0)
DIAG_ENTRY(Extra /* extra */, 5783, /* DiagArray277 */ 762, /* DiagSubGroup277 */ 242)
DIAG_ENTRY(anonymous_218 /* extra-qualification */, 5789, /* DiagArray278 */ 764, 0)
DIAG_ENTRY(ExtraSemi /* extra-semi */, 5809, /* DiagArray279 */ 766, /* DiagSubGroup279 */ 257)
DIAG_ENTRY(ExtraSemiStmt /* extra-semi-stmt */, 5820, /* DiagArray280 */ 769, /* DiagSubGroup280 */ 260)
DIAG_ENTRY(ExtraTokens /* extra-tokens */, 5836, /* DiagArray281 */ 771, 0)
DIAG_ENTRY(FinalDtorNonFinalClass /* final-dtor-non-final-class */, 5849, /* DiagArray282 */ 774, 0)
DIAG_ENTRY(FinalMacro /* final-macro */, 5876, /* DiagArray283 */ 776, 0)
DIAG_ENTRY(anonymous_116 /* fixed-enum-extension */, 5888, /* DiagArray284 */ 778, 0)
DIAG_ENTRY(anonymous_70 /* fixed-point-overflow */, 5909, /* DiagArray285 */ 780, 0)
DIAG_ENTRY(FlagEnum /* flag-enum */, 5930, /* DiagArray286 */ 782, 0)
DIAG_ENTRY(FlexibleArrayExtensions /* flexible-array-extensions */, 5940, /* DiagArray287 */ 784, 0)
DIAG_ENTRY(FloatConversion /* float-conversion */, 5966, /* DiagArray288 */ 787, /* DiagSubGroup288 */ 262)
DIAG_ENTRY(anonymous_211 /* float-equal */, 5983, /* DiagArray289 */ 789, 0)
DIAG_ENTRY(FloatOverflowConversion /* float-overflow-conversion */, 5995, /* DiagArray290 */ 791, 0)
DIAG_ENTRY(FloatZeroConversion /* float-zero-conversion */, 6021, /* DiagArray291 */ 794, 0)
DIAG_ENTRY(ForLoopAnalysis /* for-loop-analysis */, 6043, /* DiagArray292 */ 796, 0)
DIAG_ENTRY(Format /* format */, 6061, /* DiagArray293 */ 799, /* DiagSubGroup293 */ 265)
DIAG_ENTRY(FormatExtraArgs /* format-extra-args */, 6068, /* DiagArray294 */ 825, 0)
DIAG_ENTRY(FormatInsufficientArgs /* format-insufficient-args */, 6086, /* DiagArray295 */ 827, 0)
DIAG_ENTRY(FormatInvalidSpecifier /* format-invalid-specifier */, 6111, /* DiagArray296 */ 829, 0)
DIAG_ENTRY(FormatNonStandard /* format-non-iso */, 6136, /* DiagArray297 */ 831, 0)
DIAG_ENTRY(FormatNonLiteral /* format-nonliteral */, 6151, /* DiagArray298 */ 835, 0)
DIAG_ENTRY(FormatPedantic /* format-pedantic */, 6169, /* DiagArray299 */ 837, 0)
DIAG_ENTRY(FormatSecurity /* format-security */, 6185, /* DiagArray300 */ 840, 0)
DIAG_ENTRY(FormatTypeConfusion /* format-type-confusion */, 6201, /* DiagArray301 */ 842, 0)
DIAG_ENTRY(FormatY2K /* format-y2k */, 6223, 0, 0)
DIAG_ENTRY(FormatZeroLength /* format-zero-length */, 6234, /* DiagArray303 */ 844, 0)
DIAG_ENTRY(Format2 /* format=2 */, 6253, 0, /* DiagSubGroup304 */ 273)
DIAG_ENTRY(FortifySource /* fortify-source */, 6262, /* DiagArray305 */ 846, 0)
DIAG_ENTRY(FourByteMultiChar /* four-char-constants */, 6277, /* DiagArray306 */ 852, 0)
DIAG_ENTRY(FrameAddress /* frame-address */, 6297, /* DiagArray307 */ 854, 0)
DIAG_ENTRY(BackendFrameLargerThan /* frame-larger-than */, 6311, /* DiagArray308 */ 856, 0)
DIAG_ENTRY(anonymous_67 /* frame-larger-than= */, 6329, 0, /* DiagSubGroup309 */ 277)
DIAG_ENTRY(FrameworkIncludePrivateFromPublic /* framework-include-private-from-public */, 6348, /* DiagArray310 */ 859, 0)
DIAG_ENTRY(FreeNonHeapObject /* free-nonheap-object */, 6386, /* DiagArray311 */ 861, 0)
DIAG_ENTRY(FunctionDefInObjCContainer /* function-def-in-objc-container */, 6406, /* DiagArray312 */ 863, 0)
DIAG_ENTRY(FunctionMultiVersioning /* function-multiversion */, 6437, /* DiagArray313 */ 865, /* DiagSubGroup313 */ 279)
DIAG_ENTRY(FUseLdPath /* fuse-ld-path */, 6459, /* DiagArray314 */ 869, 0)
DIAG_ENTRY(FutureCompat /* future-compat */, 6472, 0, 0)
DIAG_ENTRY(GccCompat /* gcc-compat */, 6486, /* DiagArray316 */ 871, 0)
DIAG_ENTRY(GlobalConstructors /* global-constructors */, 6497, /* DiagArray317 */ 882, 0)
DIAG_ENTRY(GlobalISel /* global-isel */, 6517, /* DiagArray318 */ 885, 0)
DIAG_ENTRY(GNU /* gnu */, 6529, 0, /* DiagSubGroup319 */ 281)
DIAG_ENTRY(GNUAlignofExpression /* gnu-alignof-expression */, 6533, /* DiagArray320 */ 888, 0)
DIAG_ENTRY(GNUAnonymousStruct /* gnu-anonymous-struct */, 6556, /* DiagArray321 */ 890, 0)
DIAG_ENTRY(anonymous_220 /* gnu-array-member-paren-init */, 6577, /* DiagArray322 */ 892, 0)
DIAG_ENTRY(GNUAutoType /* gnu-auto-type */, 6605, /* DiagArray323 */ 894, 0)
DIAG_ENTRY(GNUBinaryLiteral /* gnu-binary-literal */, 6619, /* DiagArray324 */ 896, 0)
DIAG_ENTRY(GNUCaseRange /* gnu-case-range */, 6638, /* DiagArray325 */ 898, 0)
DIAG_ENTRY(GNUComplexInteger /* gnu-complex-integer */, 6653, /* DiagArray326 */ 900, 0)
DIAG_ENTRY(GNUCompoundLiteralInitializer /* gnu-compound-literal-initializer */, 6673, /* DiagArray327 */ 902, 0)
DIAG_ENTRY(GNUConditionalOmittedOperand /* gnu-conditional-omitted-operand */, 6706, /* DiagArray328 */ 904, 0)
DIAG_ENTRY(GNUDesignator /* gnu-designator */, 6738, /* DiagArray329 */ 906, 0)
DIAG_ENTRY(GNUEmptyInitializer /* gnu-empty-initializer */, 6753, /* DiagArray330 */ 910, 0)
DIAG_ENTRY(GNUEmptyStruct /* gnu-empty-struct */, 6775, /* DiagArray331 */ 912, 0)
DIAG_ENTRY(GNUFlexibleArrayInitializer /* gnu-flexible-array-initializer */, 6792, /* DiagArray332 */ 916, 0)
DIAG_ENTRY(GNUFlexibleArrayUnionMember /* gnu-flexible-array-union-member */, 6823, /* DiagArray333 */ 918, 0)
DIAG_ENTRY(GNUFoldingConstant /* gnu-folding-constant */, 6855, /* DiagArray334 */ 920, 0)
DIAG_ENTRY(GNUImaginaryConstant /* gnu-imaginary-constant */, 6876, /* DiagArray335 */ 924, 0)
DIAG_ENTRY(GNUIncludeNext /* gnu-include-next */, 6899, /* DiagArray336 */ 926, 0)
DIAG_ENTRY(anonymous_178 /* gnu-inline-cpp-without-extern */, 6916, /* DiagArray337 */ 928, 0)
DIAG_ENTRY(GNULabelsAsValue /* gnu-label-as-value */, 6946, /* DiagArray338 */ 930, 0)
DIAG_ENTRY(GNURedeclaredEnum /* gnu-redeclared-enum */, 6965, /* DiagArray339 */ 933, 0)
DIAG_ENTRY(GNUStatementExpression /* gnu-statement-expression */, 6985, /* DiagArray340 */ 935, 0)
DIAG_ENTRY(GNUStaticFloatInit /* gnu-static-float-init */, 7010, /* DiagArray341 */ 937, 0)
DIAG_ENTRY(GNUStringLiteralOperatorTemplate /* gnu-string-literal-operator-template */, 7032, /* DiagArray342 */ 939, 0)
DIAG_ENTRY(GNUUnionCast /* gnu-union-cast */, 7069, /* DiagArray343 */ 941, 0)
DIAG_ENTRY(GNUVariableSizedTypeNotAtEnd /* gnu-variable-sized-type-not-at-end */, 7084, /* DiagArray344 */ 943, 0)
DIAG_ENTRY(GNUZeroLineDirective /* gnu-zero-line-directive */, 7119, /* DiagArray345 */ 945, 0)
DIAG_ENTRY(GNUZeroVariadicMacroArguments /* gnu-zero-variadic-macro-arguments */, 7143, /* DiagArray346 */ 947, 0)
DIAG_ENTRY(anonymous_236 /* gpu-maybe-wrong-side */, 7177, /* DiagArray347 */ 950, 0)
DIAG_ENTRY(anonymous_113 /* header-guard */, 7198, /* DiagArray348 */ 952, 0)
DIAG_ENTRY(HeaderHygiene /* header-hygiene */, 7211, /* DiagArray349 */ 954, 0)
DIAG_ENTRY(HIPOnly /* hip-only */, 7226, /* DiagArray350 */ 956, 0)
DIAG_ENTRY(anonymous_232 /* idiomatic-parentheses */, 7235, /* DiagArray351 */ 958, 0)
DIAG_ENTRY(IgnoredAttributes /* ignored-attributes */, 7257, /* DiagArray352 */ 960, 0)
DIAG_ENTRY(anonymous_181 /* ignored-availability-without-sdk-settings */, 7276, /* DiagArray353 */ 1040, 0)
DIAG_ENTRY(IgnoredOptimizationArgument /* ignored-optimization-argument */, 7318, /* DiagArray354 */ 1042, 0)
DIAG_ENTRY(IgnoredPragmaIntrinsic /* ignored-pragma-intrinsic */, 7348, /* DiagArray355 */ 1045, 0)
DIAG_ENTRY(IgnoredPragmaOptimize /* ignored-pragma-optimize */, 7373, /* DiagArray356 */ 1047, 0)
DIAG_ENTRY(IgnoredPragmas /* ignored-pragmas */, 7397, /* DiagArray357 */ 1049, /* DiagSubGroup357 */ 310)
DIAG_ENTRY(IgnoredQualifiers /* ignored-qualifiers */, 7413, /* DiagArray358 */ 1095, /* DiagSubGroup358 */ 313)
DIAG_ENTRY(IgnoredReferenceQualifiers /* ignored-reference-qualifiers */, 7432, /* DiagArray359 */ 1100, 0)
DIAG_ENTRY(Implicit /* implicit */, 7461, 0, /* DiagSubGroup360 */ 315)
DIAG_ENTRY(ImplicitAtomic /* implicit-atomic-properties */, 7470, /* DiagArray361 */ 1102, 0)
DIAG_ENTRY(ImplicitConstIntFloatConversion /* implicit-const-int-float-conversion */, 7497, /* DiagArray362 */ 1105, 0)
DIAG_ENTRY(ImplicitConversionFloatingPointToBool /* implicit-conversion-floating-point-to-bool */, 7533, /* DiagArray363 */ 1107, 0)
DIAG_ENTRY(anonymous_247 /* implicit-exception-spec-mismatch */, 7576, /* DiagArray364 */ 1109, 0)
DIAG_ENTRY(ImplicitFallthrough /* implicit-fallthrough */, 7609, /* DiagArray365 */ 1111, /* DiagSubGroup365 */ 318)
DIAG_ENTRY(ImplicitFallthroughPerFunction /* implicit-fallthrough-per-function */, 7630, /* DiagArray366 */ 1113, 0)
DIAG_ENTRY(ImplicitFixedPointConversion /* implicit-fixed-point-conversion */, 7664, /* DiagArray367 */ 1115, 0)
DIAG_ENTRY(ImplicitFloatConversion /* implicit-float-conversion */, 7696, /* DiagArray368 */ 1117, /* DiagSubGroup368 */ 320)
DIAG_ENTRY(ImplicitFunctionDeclare /* implicit-function-declaration */, 7722, /* DiagArray369 */ 1120, 0)
DIAG_ENTRY(ImplicitInt /* implicit-int */, 7752, /* DiagArray370 */ 1125, 0)
DIAG_ENTRY(ImplicitIntConversion /* implicit-int-conversion */, 7765, /* DiagArray371 */ 1127, /* DiagSubGroup371 */ 323)
DIAG_ENTRY(ImplicitIntFloatConversion /* implicit-int-float-conversion */, 7789, /* DiagArray372 */ 1130, /* DiagSubGroup372 */ 325)
DIAG_ENTRY(anonymous_154 /* implicit-retain-self */, 7819, /* DiagArray373 */ 1132, 0)
DIAG_ENTRY(ImplicitlyUnsignedLiteral /* implicitly-unsigned-literal */, 7840, /* DiagArray374 */ 1134, 0)
DIAG_ENTRY(anonymous_22 /* import */, 7868, 0, 0)
DIAG_ENTRY(anonymous_108 /* import-preprocessor-directive-pedantic */, 7875, /* DiagArray376 */ 1136, 0)
DIAG_ENTRY(anonymous_244 /* inaccessible-base */, 7914, /* DiagArray377 */ 1138, 0)
DIAG_ENTRY(anonymous_98 /* include-next-absolute-path */, 7932, /* DiagArray378 */ 1140, 0)
DIAG_ENTRY(anonymous_97 /* include-next-outside-header */, 7959, /* DiagArray379 */ 1142, 0)
DIAG_ENTRY(IncompatibleExceptionSpec /* incompatible-exception-spec */, 7987, /* DiagArray380 */ 1144, 0)
DIAG_ENTRY(IncompatibleFunctionPointerTypes /* incompatible-function-pointer-types */, 8015, /* DiagArray381 */ 1147, 0)
DIAG_ENTRY(anonymous_137 /* incompatible-library-redeclaration */, 8051, /* DiagArray382 */ 1149, 0)
DIAG_ENTRY(IncompatibleMSStruct /* incompatible-ms-struct */, 8086, /* DiagArray383 */ 1151, 0)
DIAG_ENTRY(IncompatiblePointerTypes /* incompatible-pointer-types */, 8109, /* DiagArray384 */ 1154, /* DiagSubGroup384 */ 327)
DIAG_ENTRY(IncompatiblePointerTypesDiscardsQualifiers /* incompatible-pointer-types-discards-qualifiers */, 8136, /* DiagArray385 */ 1156, 0)
DIAG_ENTRY(anonymous_144 /* incompatible-property-type */, 8183, /* DiagArray386 */ 1160, 0)
DIAG_ENTRY(anonymous_78 /* incompatible-sysroot */, 8210, /* DiagArray387 */ 1162, 0)
DIAG_ENTRY(IncompleteFrameworkModuleDeclaration /* incomplete-framework-module-declaration */, 8231, /* DiagArray388 */ 1164, 0)
DIAG_ENTRY(anonymous_146 /* incomplete-implementation */, 8271, /* DiagArray389 */ 1166, 0)
DIAG_ENTRY(IncompleteModule /* incomplete-module */, 8297, 0, /* DiagSubGroup390 */ 330)
DIAG_ENTRY(anonymous_136 /* incomplete-setjmp-declaration */, 8315, /* DiagArray391 */ 1168, 0)
DIAG_ENTRY(IncompleteUmbrella /* incomplete-umbrella */, 8345, /* DiagArray392 */ 1170, 0)
DIAG_ENTRY(MicrosoftInconsistentDllImport /* inconsistent-dllimport */, 8365, /* DiagArray393 */ 1174, 0)
DIAG_ENTRY(CXX11WarnInconsistentOverrideDestructor /* inconsistent-missing-destructor-override */, 8388, /* DiagArray394 */ 1177, 0)
DIAG_ENTRY(CXX11WarnInconsistentOverrideMethod /* inconsistent-missing-override */, 8429, /* DiagArray395 */ 1179, 0)
DIAG_ENTRY(IncrementBool /* increment-bool */, 8459, /* DiagArray396 */ 1181, /* DiagSubGroup396 */ 333)
DIAG_ENTRY(InfiniteRecursion /* infinite-recursion */, 8474, /* DiagArray397 */ 1183, 0)
DIAG_ENTRY(anonymous_23 /* init-self */, 8493, 0, 0)
DIAG_ENTRY(InitializerOverrides /* initializer-overrides */, 8503, /* DiagArray399 */ 1185, 0)
DIAG_ENTRY(anonymous_161 /* injected-class-name */, 8525, /* DiagArray400 */ 1188, 0)
DIAG_ENTRY(anonymous_24 /* inline */, 8545, 0, 0)
DIAG_ENTRY(BackendInlineAsm /* inline-asm */, 8552, /* DiagArray402 */ 1190, 0)
DIAG_ENTRY(InlineNamespaceReopenedNoninline /* inline-namespace-reopened-noninline */, 8563, /* DiagArray403 */ 1192, 0)
DIAG_ENTRY(anonymous_245 /* inline-new-delete */, 8599, /* DiagArray404 */ 1194, 0)
DIAG_ENTRY(anonymous_193 /* instantiation-after-specialization */, 8617, /* DiagArray405 */ 1196, 0)
DIAG_ENTRY(IntConversion /* int-conversion */, 8652, /* DiagArray406 */ 1198, 0)
DIAG_ENTRY(anonymous_59 /* int-conversions */, 8667, 0, /* DiagSubGroup407 */ 335)
DIAG_ENTRY(IntInBoolContext /* int-in-bool-context */, 8683, /* DiagArray408 */ 1201, 0)
DIAG_ENTRY(IntToPointerCast /* int-to-pointer-cast */, 8703, /* DiagArray409 */ 1204, /* DiagSubGroup409 */ 337)
DIAG_ENTRY(IntToVoidPointerCast /* int-to-void-pointer-cast */, 8723, /* DiagArray410 */ 1206, 0)
DIAG_ENTRY(anonymous_69 /* integer-overflow */, 8748, /* DiagArray411 */ 1208, 0)
DIAG_ENTRY(anonymous_132 /* interrupt-service-routine */, 8765, /* DiagArray412 */ 1210, 0)
DIAG_ENTRY(InvalidCommandLineArgument /* invalid-command-line-argument */, 8791, /* DiagArray413 */ 1212, /* DiagSubGroup413 */ 339)
DIAG_ENTRY(anonymous_164 /* invalid-constexpr */, 8821, /* DiagArray414 */ 1221, 0)
DIAG_ENTRY(ObjCInvalidIBOutletProperty /* invalid-iboutlet */, 8839, /* DiagArray415 */ 1223, 0)
DIAG_ENTRY(anonymous_175 /* invalid-initializer-from-system-header */, 8856, /* DiagArray416 */ 1226, 0)
DIAG_ENTRY(InvalidIOSDeploymentTarget /* invalid-ios-deployment-target */, 8895, /* DiagArray417 */ 1228, 0)
DIAG_ENTRY(anonymous_187 /* invalid-no-builtin-names */, 8925, /* DiagArray418 */ 1230, 0)
DIAG_ENTRY(InvalidNoreturn /* invalid-noreturn */, 8950, /* DiagArray419 */ 1232, 0)
DIAG_ENTRY(InvalidOffsetof /* invalid-offsetof */, 8967, /* DiagArray420 */ 1235, 0)
DIAG_ENTRY(InvalidOrNonExistentDirectory /* invalid-or-nonexistent-directory */, 8984, /* DiagArray421 */ 1238, 0)
DIAG_ENTRY(anonymous_191 /* invalid-partial-specialization */, 9017, /* DiagArray422 */ 1241, 0)
DIAG_ENTRY(anonymous_25 /* invalid-pch */, 9048, 0, 0)
DIAG_ENTRY(InvalidPPToken /* invalid-pp-token */, 9060, /* DiagArray424 */ 1243, 0)
DIAG_ENTRY(InvalidSourceEncoding /* invalid-source-encoding */, 9077, /* DiagArray425 */ 1246, 0)
DIAG_ENTRY(anonymous_110 /* invalid-token-paste */, 9101, /* DiagArray426 */ 1249, 0)
DIAG_ENTRY(anonymous_231 /* jump-seh-finally */, 9121, /* DiagArray427 */ 1251, 0)
DIAG_ENTRY(KeywordCompat /* keyword-compat */, 9138, /* DiagArray428 */ 1253, 0)
DIAG_ENTRY(KeywordAsMacro /* keyword-macro */, 9153, /* DiagArray429 */ 1255, 0)
DIAG_ENTRY(KNRPromotedParameter /* knr-promoted-parameter */, 9167, /* DiagArray430 */ 1257, 0)
DIAG_ENTRY(anonymous_91 /* language-extension-token */, 9190, /* DiagArray431 */ 1259, 0)
DIAG_ENTRY(LargeByValueCopy /* large-by-value-copy */, 9215, /* DiagArray432 */ 1261, 0)
DIAG_ENTRY(LibLTO /* liblto */, 9235, 0, 0)
DIAG_ENTRY(LinkerWarnings /* linker-warnings */, 9242, /* DiagArray434 */ 1264, 0)
DIAG_ENTRY(LiteralConversion /* literal-conversion */, 9258, /* DiagArray435 */ 1266, 0)
DIAG_ENTRY(LiteralRange /* literal-range */, 9277, /* DiagArray436 */ 1269, 0)
DIAG_ENTRY(LocalTypeTemplateArgs /* local-type-template-args */, 9291, /* DiagArray437 */ 1272, /* DiagSubGroup437 */ 341)
DIAG_ENTRY(LogicalNotParentheses /* logical-not-parentheses */, 9316, /* DiagArray438 */ 1274, 0)
DIAG_ENTRY(LogicalOpParentheses /* logical-op-parentheses */, 9340, /* DiagArray439 */ 1276, 0)
DIAG_ENTRY(LongLong /* long-long */, 9363, /* DiagArray440 */ 1278, /* DiagSubGroup440 */ 343)
DIAG_ENTRY(LoopAnalysis /* loop-analysis */, 9373, 0, /* DiagSubGroup441 */ 345)
DIAG_ENTRY(MacroRedefined /* macro-redefined */, 9387, /* DiagArray442 */ 1280, 0)
DIAG_ENTRY(Main /* main */, 9403, /* DiagArray443 */ 1282, 0)
DIAG_ENTRY(MainReturnType /* main-return-type */, 9408, /* DiagArray444 */ 1290, 0)
DIAG_ENTRY(MalformedWarningCheck /* malformed-warning-check */, 9425, /* DiagArray445 */ 1292, 0)
DIAG_ENTRY(anonymous_207 /* many-braces-around-scalar-init */, 9449, /* DiagArray446 */ 1294, 0)
DIAG_ENTRY(MaxTokens /* max-tokens */, 9480, /* DiagArray447 */ 1296, 0)
DIAG_ENTRY(MaxUnsignedZero /* max-unsigned-zero */, 9491, /* DiagArray448 */ 1299, 0)
DIAG_ENTRY(MemsetTransposedArgs /* memset-transposed-args */, 9509, /* DiagArray449 */ 1301, 0)
DIAG_ENTRY(anonymous_139 /* memsize-comparison */, 9532, /* DiagArray450 */ 1303, 0)
DIAG_ENTRY(MethodSignatures /* method-signatures */, 9551, /* DiagArray451 */ 1305, 0)
DIAG_ENTRY(Microsoft /* microsoft */, 9569, 0, /* DiagSubGroup452 */ 348)
DIAG_ENTRY(MicrosoftAbstract /* microsoft-abstract */, 9579, /* DiagArray453 */ 1308, 0)
DIAG_ENTRY(MicrosoftAnonTag /* microsoft-anon-tag */, 9598, /* DiagArray454 */ 1310, 0)
DIAG_ENTRY(MicrosoftCast /* microsoft-cast */, 9617, /* DiagArray455 */ 1313, 0)
DIAG_ENTRY(MicrosoftCharize /* microsoft-charize */, 9632, /* DiagArray456 */ 1316, 0)
DIAG_ENTRY(MicrosoftCommentPaste /* microsoft-comment-paste */, 9650, /* DiagArray457 */ 1318, 0)
DIAG_ENTRY(MicrosoftConstInit /* microsoft-const-init */, 9674, /* DiagArray458 */ 1320, 0)
DIAG_ENTRY(MicrosoftCppMacro /* microsoft-cpp-macro */, 9695, /* DiagArray459 */ 1322, 0)
DIAG_ENTRY(MicrosoftDefaultArgRedefinition /* microsoft-default-arg-redefinition */, 9715, /* DiagArray460 */ 1324, 0)
DIAG_ENTRY(MicrosoftDrectveSection /* microsoft-drectve-section */, 9750, /* DiagArray461 */ 1326, 0)
DIAG_ENTRY(MicrosoftEndOfFile /* microsoft-end-of-file */, 9776, /* DiagArray462 */ 1328, 0)
DIAG_ENTRY(MicrosoftEnumForwardReference /* microsoft-enum-forward-reference */, 9798, /* DiagArray463 */ 1330, 0)
DIAG_ENTRY(MicrosoftEnumValue /* microsoft-enum-value */, 9831, /* DiagArray464 */ 1332, 0)
DIAG_ENTRY(MicrosoftExceptionSpec /* microsoft-exception-spec */, 9852, /* DiagArray465 */ 1334, 0)
DIAG_ENTRY(anonymous_119 /* microsoft-exists */, 9877, /* DiagArray466 */ 1341, 0)
DIAG_ENTRY(MicrosoftExplicitConstructorCall /* microsoft-explicit-constructor-call */, 9894, /* DiagArray467 */ 1343, 0)
DIAG_ENTRY(MicrosoftExtraQualification /* microsoft-extra-qualification */, 9930, /* DiagArray468 */ 1345, 0)
DIAG_ENTRY(MicrosoftFixedEnum /* microsoft-fixed-enum */, 9960, /* DiagArray469 */ 1347, 0)
DIAG_ENTRY(MicrosoftFlexibleArray /* microsoft-flexible-array */, 9981, /* DiagArray470 */ 1349, 0)
DIAG_ENTRY(MicrosoftGoto /* microsoft-goto */, 10006, /* DiagArray471 */ 1352, 0)
DIAG_ENTRY(MicrosoftInaccessibleBase /* microsoft-inaccessible-base */, 10021, /* DiagArray472 */ 1354, 0)
DIAG_ENTRY(MicrosoftInclude /* microsoft-include */, 10049, /* DiagArray473 */ 1356, 0)
DIAG_ENTRY(MicrosoftMutableReference /* microsoft-mutable-reference */, 10067, /* DiagArray474 */ 1358, 0)
DIAG_ENTRY(MicrosoftPureDefinition /* microsoft-pure-definition */, 10095, /* DiagArray475 */ 1360, 0)
DIAG_ENTRY(MicrosoftRedeclareStatic /* microsoft-redeclare-static */, 10121, /* DiagArray476 */ 1362, 0)
DIAG_ENTRY(MicrosoftSealed /* microsoft-sealed */, 10148, /* DiagArray477 */ 1364, 0)
DIAG_ENTRY(MicrosoftStaticAssert /* microsoft-static-assert */, 10165, /* DiagArray478 */ 1366, 0)
DIAG_ENTRY(MicrosoftTemplate /* microsoft-template */, 10189, /* DiagArray479 */ 1368, /* DiagSubGroup479 */ 379)
DIAG_ENTRY(MicrosoftTemplateShadow /* microsoft-template-shadow */, 10208, /* DiagArray480 */ 1378, 0)
DIAG_ENTRY(MicrosoftUnionMemberReference /* microsoft-union-member-reference */, 10234, /* DiagArray481 */ 1380, 0)
DIAG_ENTRY(MicrosoftUnqualifiedFriend /* microsoft-unqualified-friend */, 10267, /* DiagArray482 */ 1382, 0)
DIAG_ENTRY(MicrosoftUsingDecl /* microsoft-using-decl */, 10296, /* DiagArray483 */ 1384, 0)
DIAG_ENTRY(MicrosoftVoidPseudoDtor /* microsoft-void-pseudo-dtor */, 10317, /* DiagArray484 */ 1386, 0)
DIAG_ENTRY(MisleadingIndentation /* misleading-indentation */, 10344, /* DiagArray485 */ 1388, 0)
DIAG_ENTRY(anonymous_228 /* mismatched-new-delete */, 10367, /* DiagArray486 */ 1390, 0)
DIAG_ENTRY(MismatchedParameterTypes /* mismatched-parameter-types */, 10389, /* DiagArray487 */ 1392, 0)
DIAG_ENTRY(MismatchedReturnTypes /* mismatched-return-types */, 10416, /* DiagArray488 */ 1394, 0)
DIAG_ENTRY(MismatchedTags /* mismatched-tags */, 10440, /* DiagArray489 */ 1396, 0)
DIAG_ENTRY(MissingBraces /* missing-braces */, 10456, /* DiagArray490 */ 1399, 0)
DIAG_ENTRY(anonymous_241 /* missing-constinit */, 10471, /* DiagArray491 */ 1401, 0)
DIAG_ENTRY(MissingDeclarations /* missing-declarations */, 10489, /* DiagArray492 */ 1403, 0)
DIAG_ENTRY(anonymous_160 /* missing-exception-spec */, 10510, /* DiagArray493 */ 1408, 0)
DIAG_ENTRY(MissingFieldInitializers /* missing-field-initializers */, 10533, /* DiagArray494 */ 1410, 0)
DIAG_ENTRY(anonymous_26 /* missing-format-attribute */, 10560, 0, 0)
DIAG_ENTRY(anonymous_27 /* missing-include-dirs */, 10585, 0, 0)
DIAG_ENTRY(MissingMethodReturnType /* missing-method-return-type */, 10606, /* DiagArray497 */ 1412, 0)
DIAG_ENTRY(MissingNoEscape /* missing-noescape */, 10633, /* DiagArray498 */ 1414, 0)
DIAG_ENTRY(MissingNoreturn /* missing-noreturn */, 10650, /* DiagArray499 */ 1416, 0)
DIAG_ENTRY(anonymous_179 /* missing-prototype-for-cc */, 10667, /* DiagArray500 */ 1419, 0)
DIAG_ENTRY(anonymous_195 /* missing-prototypes */, 10692, /* DiagArray501 */ 1421, 0)
DIAG_ENTRY(anonymous_120 /* missing-selector-name */, 10711, /* DiagArray502 */ 1423, 0)
DIAG_ENTRY(anonymous_77 /* missing-sysroot */, 10733, /* DiagArray503 */ 1425, 0)
DIAG_ENTRY(anonymous_197 /* missing-variable-declarations */, 10749, /* DiagArray504 */ 1427, 0)
DIAG_ENTRY(MisspelledAssumption /* misspelled-assumption */, 10779, /* DiagArray505 */ 1429, 0)
DIAG_ENTRY(ModuleBuild /* module-build */, 10801, /* DiagArray506 */ 1431, 0)
DIAG_ENTRY(ModuleConflict /* module-conflict */, 10814, /* DiagArray507 */ 1436, 0)
DIAG_ENTRY(anonymous_87 /* module-file-config-mismatch */, 10830, /* DiagArray508 */ 1439, 0)
DIAG_ENTRY(ModuleFileExtension /* module-file-extension */, 10858, /* DiagArray509 */ 1441, 0)
DIAG_ENTRY(ModuleImport /* module-import */, 10880, /* DiagArray510 */ 1443, 0)
DIAG_ENTRY(anonymous_257 /* module-import-in-extern-c */, 10894, /* DiagArray511 */ 1445, 0)
DIAG_ENTRY(ModuleLock /* module-lock */, 10920, /* DiagArray512 */ 1447, 0)
DIAG_ENTRY(anonymous_260 /* modules-ambiguous-internal-linkage */, 10932, /* DiagArray513 */ 1449, 0)
DIAG_ENTRY(anonymous_258 /* modules-import-nested-redundant */, 10967, /* DiagArray514 */ 1451, 0)
DIAG_ENTRY(Most /* most */, 10999, 0, /* DiagSubGroup515 */ 381)
DIAG_ENTRY(Move /* move */, 11004, 0, /* DiagSubGroup516 */ 418)
DIAG_ENTRY(anonymous_66 /* msvc-include */, 11009, 0, /* DiagSubGroup517 */ 423)
DIAG_ENTRY(anonymous_81 /* msvc-not-found */, 11022, /* DiagArray518 */ 1453, 0)
DIAG_ENTRY(MultiChar /* multichar */, 11037, /* DiagArray519 */ 1455, 0)
DIAG_ENTRY(anonymous_246 /* multiple-move-vbase */, 11047, /* DiagArray520 */ 1457, 0)
DIAG_ENTRY(anonymous_17 /* narrowing */, 11067, 0, /* DiagSubGroup521 */ 425)
DIAG_ENTRY(anonymous_243 /* nested-anon-types */, 11077, /* DiagArray522 */ 1459, 0)
DIAG_ENTRY(anonymous_28 /* nested-externs */, 11095, 0, 0)
DIAG_ENTRY(OperatorNewReturnsNull /* new-returns-null */, 11110, /* DiagArray524 */ 1461, 0)
DIAG_ENTRY(NewlineEOF /* newline-eof */, 11127, /* DiagArray525 */ 1463, 0)
DIAG_ENTRY(NoDeref /* noderef */, 11139, /* DiagArray526 */ 1466, 0)
DIAG_ENTRY(NoexceptType /* noexcept-type */, 11147, 0, /* DiagSubGroup527 */ 427)
DIAG_ENTRY(anonymous_142 /* non-c-typedef-for-linkage */, 11161, /* DiagArray528 */ 1470, 0)
DIAG_ENTRY(NonGCC /* non-gcc */, 11187, 0, /* DiagSubGroup529 */ 429)
DIAG_ENTRY(NonLiteralNullConversion /* non-literal-null-conversion */, 11195, /* DiagArray530 */ 1472, 0)
DIAG_ENTRY(NonModularIncludeInFrameworkModule /* non-modular-include-in-framework-module */, 11223, /* DiagArray531 */ 1474, 0)
DIAG_ENTRY(NonModularIncludeInModule /* non-modular-include-in-module */, 11263, /* DiagArray532 */ 1476, /* DiagSubGroup532 */ 433)
DIAG_ENTRY(NonPODVarargs /* non-pod-varargs */, 11293, /* DiagArray533 */ 1478, 0)
DIAG_ENTRY(anonymous_170 /* non-power-of-two-alignment */, 11309, /* DiagArray534 */ 1483, 0)
DIAG_ENTRY(NonVirtualDtor /* non-virtual-dtor */, 11336, /* DiagArray535 */ 1485, 0)
DIAG_ENTRY(NonNull /* nonnull */, 11353, /* DiagArray536 */ 1487, 0)
DIAG_ENTRY(anonymous_30 /* nonportable-cfstrings */, 11361, 0, 0)
DIAG_ENTRY(anonymous_99 /* nonportable-include-path */, 11383, /* DiagArray538 */ 1490, 0)
DIAG_ENTRY(anonymous_100 /* nonportable-system-include-path */, 11408, /* DiagArray539 */ 1492, 0)
DIAG_ENTRY(anonymous_252 /* nonportable-vector-initialization */, 11440, /* DiagArray540 */ 1494, 0)
DIAG_ENTRY(NonTrivialMemaccess /* nontrivial-memaccess */, 11474, /* DiagArray541 */ 1496, 0)
DIAG_ENTRY(NSConsumedMismatch /* nsconsumed-mismatch */, 11495, /* DiagArray542 */ 1498, 0)
DIAG_ENTRY(NSReturnsMismatch /* nsreturns-mismatch */, 11515, /* DiagArray543 */ 1500, 0)
DIAG_ENTRY(NullArithmetic /* null-arithmetic */, 11534, /* DiagArray544 */ 1502, 0)
DIAG_ENTRY(NullCharacter /* null-character */, 11550, /* DiagArray545 */ 1505, 0)
DIAG_ENTRY(NullConversion /* null-conversion */, 11565, /* DiagArray546 */ 1508, 0)
DIAG_ENTRY(NullDereference /* null-dereference */, 11581, /* DiagArray547 */ 1510, 0)
DIAG_ENTRY(NullPointerArithmetic /* null-pointer-arithmetic */, 11598, /* DiagArray548 */ 1513, 0)
DIAG_ENTRY(NullPointerSubtraction /* null-pointer-subtraction */, 11622, /* DiagArray549 */ 1516, 0)
DIAG_ENTRY(Nullability /* nullability */, 11647, /* DiagArray550 */ 1518, 0)
DIAG_ENTRY(NullabilityCompleteness /* nullability-completeness */, 11659, /* DiagArray551 */ 1524, /* DiagSubGroup551 */ 435)
DIAG_ENTRY(NullabilityCompletenessOnArrays /* nullability-completeness-on-arrays */, 11684, /* DiagArray552 */ 1526, 0)
DIAG_ENTRY(NullabilityDeclSpec /* nullability-declspec */, 11719, /* DiagArray553 */ 1528, 0)
DIAG_ENTRY(anonymous_115 /* nullability-extension */, 11740, /* DiagArray554 */ 1530, 0)
DIAG_ENTRY(NullabilityInferredOnNestedType /* nullability-inferred-on-nested-type */, 11762, /* DiagArray555 */ 1532, 0)
DIAG_ENTRY(NullableToNonNullConversion /* nullable-to-nonnull-conversion */, 11798, /* DiagArray556 */ 1534, 0)
DIAG_ENTRY(anonymous_151 /* objc-autosynthesis-property-ivar-name-match */, 11829, /* DiagArray557 */ 1536, 0)
DIAG_ENTRY(ObjCBoolConstantConversion /* objc-bool-constant-conversion */, 11873, /* DiagArray558 */ 1538, 0)
DIAG_ENTRY(ObjCBoxing /* objc-boxing */, 11903, /* DiagArray559 */ 1540, 0)
DIAG_ENTRY(anonymous_225 /* objc-circular-container */, 11915, /* DiagArray560 */ 1542, 0)
DIAG_ENTRY(ObjCCocoaAPI /* objc-cocoa-api */, 11939, 0, /* DiagSubGroup561 */ 437)
DIAG_ENTRY(ObjCDesignatedInit /* objc-designated-initializers */, 11954, /* DiagArray562 */ 1544, 0)
DIAG_ENTRY(anonymous_167 /* objc-dictionary-duplicate-keys */, 11983, /* DiagArray563 */ 1551, 0)
DIAG_ENTRY(ObjCFlexibleArray /* objc-flexible-array */, 12014, /* DiagArray564 */ 1553, 0)
DIAG_ENTRY(anonymous_203 /* objc-forward-class-redefinition */, 12034, /* DiagArray565 */ 1556, 0)
DIAG_ENTRY(anonymous_204 /* objc-interface-ivars */, 12066, /* DiagArray566 */ 1558, 0)
DIAG_ENTRY(ObjCLiteralComparison /* objc-literal-compare */, 12087, /* DiagArray567 */ 1560, /* DiagSubGroup567 */ 439)
DIAG_ENTRY(ObjCLiteralConversion /* objc-literal-conversion */, 12108, /* DiagArray568 */ 1562, 0)
DIAG_ENTRY(anonymous_107 /* objc-macro-redefinition */, 12132, /* DiagArray569 */ 1565, 0)
DIAG_ENTRY(anonymous_156 /* objc-messaging-id */, 12156, /* DiagArray570 */ 1567, 0)
DIAG_ENTRY(MethodAccess /* objc-method-access */, 12174, /* DiagArray571 */ 1569, 0)
DIAG_ENTRY(anonymous_152 /* objc-missing-property-synthesis */, 12193, /* DiagArray572 */ 1576, 0)
DIAG_ENTRY(ObjCMissingSuperCalls /* objc-missing-super-calls */, 12225, /* DiagArray573 */ 1578, 0)
DIAG_ENTRY(ObjCMultipleMethodNames /* objc-multiple-method-names */, 12250, /* DiagArray574 */ 1580, 0)
DIAG_ENTRY(ObjCRetainBlockProperty /* objc-noncopy-retain-block-property */, 12277, /* DiagArray575 */ 1582, 0)
DIAG_ENTRY(ObjCNonUnifiedException /* objc-nonunified-exceptions */, 12312, /* DiagArray576 */ 1584, 0)
DIAG_ENTRY(ObjCPropertyAssignOnObjectType /* objc-property-assign-on-object-type */, 12339, /* DiagArray577 */ 1586, 0)
DIAG_ENTRY(ObjCPropertyImpl /* objc-property-implementation */, 12375, /* DiagArray578 */ 1588, 0)
DIAG_ENTRY(anonymous_147 /* objc-property-implicit-mismatch */, 12404, /* DiagArray579 */ 1593, 0)
DIAG_ENTRY(anonymous_149 /* objc-property-matches-cocoa-ownership-rule */, 12436, /* DiagArray580 */ 1595, 0)
DIAG_ENTRY(ObjCPropertyNoAttribute /* objc-property-no-attribute */, 12479, /* DiagArray581 */ 1597, 0)
DIAG_ENTRY(ObjCNoPropertyAutoSynthesis /* objc-property-synthesis */, 12506, /* DiagArray582 */ 1600, 0)
DIAG_ENTRY(ObjCProtocolMethodImpl /* objc-protocol-method-implementation */, 12530, /* DiagArray583 */ 1604, 0)
DIAG_ENTRY(anonymous_150 /* objc-protocol-property-synthesis */, 12566, /* DiagArray584 */ 1606, 0)
DIAG_ENTRY(ObjCProtocolQualifiers /* objc-protocol-qualifiers */, 12599, /* DiagArray585 */ 1608, 0)
DIAG_ENTRY(ObjCReadonlyPropertyHasSetter /* objc-readonly-with-setter-property */, 12624, /* DiagArray586 */ 1610, 0)
DIAG_ENTRY(ObjCRedundantAPIUse /* objc-redundant-api-use */, 12659, 0, /* DiagSubGroup587 */ 441)
DIAG_ENTRY(ObjCRedundantLiteralUse /* objc-redundant-literal-use */, 12682, /* DiagArray588 */ 1612, 0)
DIAG_ENTRY(ObjCRootClass /* objc-root-class */, 12709, /* DiagArray589 */ 1614, 0)
DIAG_ENTRY(ObjCSignedCharBool /* objc-signed-char-bool */, 12725, 0, /* DiagSubGroup590 */ 443)
DIAG_ENTRY(ObjCSignedCharBoolImplicitFloatConversion /* objc-signed-char-bool-implicit-float-conversion */, 12747, /* DiagArray591 */ 1616, 0)
DIAG_ENTRY(ObjCSignedCharBoolImplicitIntConversion /* objc-signed-char-bool-implicit-int-conversion */, 12795, /* DiagArray592 */ 1618, 0)
DIAG_ENTRY(ObjCStringComparison /* objc-string-compare */, 12841, /* DiagArray593 */ 1620, 0)
DIAG_ENTRY(ObjCStringConcatenation /* objc-string-concatenation */, 12861, /* DiagArray594 */ 1622, 0)
DIAG_ENTRY(anonymous_226 /* objc-unsafe-perform-selector */, 12887, /* DiagArray595 */ 1624, 0)
DIAG_ENTRY(ODR /* odr */, 12916, /* DiagArray596 */ 1626, 0)
DIAG_ENTRY(OldStyleCast /* old-style-cast */, 12920, /* DiagArray597 */ 1645, 0)
DIAG_ENTRY(anonymous_32 /* old-style-definition */, 12935, 0, 0)
DIAG_ENTRY(OpenCLUnsupportedRGBA /* opencl-unsupported-rgba */, 12956, /* DiagArray599 */ 1647, 0)
DIAG_ENTRY(OpenMP /* openmp */, 12980, 0, /* DiagSubGroup600 */ 448)
DIAG_ENTRY(OpenMP51Ext /* openmp-51-extensions */, 12987, /* DiagArray601 */ 1649, 0)
DIAG_ENTRY(OpenMPClauses /* openmp-clauses */, 13008, /* DiagArray602 */ 1651, 0)
DIAG_ENTRY(OpenMPLoopForm /* openmp-loop-form */, 13023, /* DiagArray603 */ 1670, 0)
DIAG_ENTRY(OpenMPMapping /* openmp-mapping */, 13040, /* DiagArray604 */ 1673, 0)
DIAG_ENTRY(OpenMPTarget /* openmp-target */, 13055, /* DiagArray605 */ 1675, /* DiagSubGroup605 */ 455)
DIAG_ENTRY(OptionIgnored /* option-ignored */, 13069, /* DiagArray606 */ 1679, 0)
DIAG_ENTRY(OrderedCompareFunctionPointers /* ordered-compare-function-pointers */, 13084, /* DiagArray607 */ 1690, 0)
DIAG_ENTRY(OutOfLineDeclaration /* out-of-line-declaration */, 13118, /* DiagArray608 */ 1693, 0)
DIAG_ENTRY(anonymous_134 /* out-of-scope-function */, 13142, /* DiagArray609 */ 1695, 0)
DIAG_ENTRY(OveralignedType /* over-aligned */, 13164, /* DiagArray610 */ 1697, 0)
DIAG_ENTRY(anonymous_33 /* overflow */, 13177, 0, 0)
DIAG_ENTRY(OverlengthStrings /* overlength-strings */, 13186, /* DiagArray612 */ 1699, 0)
DIAG_ENTRY(OverloadedShiftOpParentheses /* overloaded-shift-op-parentheses */, 13205, /* DiagArray613 */ 1701, 0)
DIAG_ENTRY(OverloadedVirtual /* overloaded-virtual */, 13237, /* DiagArray614 */ 1703, 0)
DIAG_ENTRY(anonymous_29 /* override-init */, 13256, 0, /* DiagSubGroup615 */ 457)
DIAG_ENTRY(anonymous_84 /* override-module */, 13270, /* DiagArray616 */ 1705, 0)
DIAG_ENTRY(OverridingMethodMismatch /* overriding-method-mismatch */, 13286, /* DiagArray617 */ 1707, 0)
DIAG_ENTRY(anonymous_76 /* overriding-t-option */, 13313, /* DiagArray618 */ 1715, 0)
DIAG_ENTRY(Packed /* packed */, 13333, /* DiagArray619 */ 1717, 0)
DIAG_ENTRY(Padded /* padded */, 13340, /* DiagArray620 */ 1719, 0)
DIAG_ENTRY(Parentheses /* parentheses */, 13347, /* DiagArray621 */ 1723, /* DiagSubGroup621 */ 459)
DIAG_ENTRY(ParenthesesOnEquality /* parentheses-equality */, 13359, /* DiagArray622 */ 1727, 0)
DIAG_ENTRY(anonymous_5 /* partial-availability */, 13380, 0, /* DiagSubGroup623 */ 468)
DIAG_ENTRY(BackendOptimizationRemark /* pass */, 13401, /* DiagArray624 */ 1729, 0)
DIAG_ENTRY(BackendOptimizationRemarkAnalysis /* pass-analysis */, 13406, /* DiagArray625 */ 1731, 0)
DIAG_ENTRY(BackendOptimizationFailure /* pass-failed */, 13420, /* DiagArray626 */ 1735, 0)
DIAG_ENTRY(BackendOptimizationRemarkMissed /* pass-missed */, 13432, /* DiagArray627 */ 1737, 0)
DIAG_ENTRY(anonymous_263 /* pch-date-time */, 13444, /* DiagArray628 */ 1739, 0)
DIAG_ENTRY(Pedantic /* pedantic */, 13458, /* DiagArray629 */ 1741, /* DiagSubGroup629 */ 470)
DIAG_ENTRY(OpenCLCoreFeaturesDiagGroup /* pedantic-core-features */, 13467, /* DiagArray630 */ 1818, 0)
DIAG_ENTRY(PedanticMacros /* pedantic-macros */, 13490, 0, /* DiagSubGroup631 */ 522)
DIAG_ENTRY(PessimizingMove /* pessimizing-move */, 13506, /* DiagArray632 */ 1821, 0)
DIAG_ENTRY(PointerArith /* pointer-arith */, 13523, /* DiagArray633 */ 1824, 0)
DIAG_ENTRY(PointerBoolConversion /* pointer-bool-conversion */, 13537, /* DiagArray634 */ 1831, 0)
DIAG_ENTRY(anonymous_182 /* pointer-compare */, 13561, /* DiagArray635 */ 1834, 0)
DIAG_ENTRY(anonymous_224 /* pointer-integer-compare */, 13577, /* DiagArray636 */ 1836, 0)
DIAG_ENTRY(anonymous_233 /* pointer-sign */, 13601, /* DiagArray637 */ 1838, 0)
DIAG_ENTRY(PointerToEnumCast /* pointer-to-enum-cast */, 13614, /* DiagArray638 */ 1840, /* DiagSubGroup638 */ 528)
DIAG_ENTRY(PointerToIntCast /* pointer-to-int-cast */, 13635, /* DiagArray639 */ 1842, /* DiagSubGroup639 */ 530)
DIAG_ENTRY(anonymous_238 /* pointer-type-mismatch */, 13655, /* DiagArray640 */ 1844, 0)
DIAG_ENTRY(anonymous_75 /* poison-system-directories */, 13677, /* DiagArray641 */ 1846, 0)
DIAG_ENTRY(ObjCPotentiallyDirectSelector /* potentially-direct-selector */, 13703, /* DiagArray642 */ 1848, 0)
DIAG_ENTRY(PotentiallyEvaluatedExpression /* potentially-evaluated-expression */, 13731, /* DiagArray643 */ 1850, 0)
DIAG_ENTRY(PragmaClangAttribute /* pragma-clang-attribute */, 13764, /* DiagArray644 */ 1852, 0)
DIAG_ENTRY(anonymous_101 /* pragma-once-outside-header */, 13787, /* DiagArray645 */ 1854, 0)
DIAG_ENTRY(PragmaPack /* pragma-pack */, 13814, /* DiagArray646 */ 1856, /* DiagSubGroup646 */ 533)
DIAG_ENTRY(PragmaPackSuspiciousInclude /* pragma-pack-suspicious-include */, 13826, /* DiagArray647 */ 1859, 0)
DIAG_ENTRY(anonymous_102 /* pragma-system-header-outside-header */, 13857, /* DiagArray648 */ 1861, 0)
DIAG_ENTRY(Pragmas /* pragmas */, 13893, /* DiagArray649 */ 1863, /* DiagSubGroup649 */ 535)
DIAG_ENTRY(CXXPre14Compat /* pre-c++14-compat */, 13901, /* DiagArray650 */ 1865, 0)
DIAG_ENTRY(CXXPre14CompatPedantic /* pre-c++14-compat-pedantic */, 13918, 0, /* DiagSubGroup651 */ 540)
DIAG_ENTRY(CXXPre17Compat /* pre-c++17-compat */, 13944, /* DiagArray652 */ 1877, 0)
DIAG_ENTRY(CXXPre17CompatPedantic /* pre-c++17-compat-pedantic */, 13961, /* DiagArray653 */ 1895, /* DiagSubGroup653 */ 543)
DIAG_ENTRY(CXXPre20Compat /* pre-c++20-compat */, 13987, /* DiagArray654 */ 1898, 0)
DIAG_ENTRY(CXXPre20CompatPedantic /* pre-c++20-compat-pedantic */, 14004, /* DiagArray655 */ 1925, /* DiagSubGroup655 */ 545)
DIAG_ENTRY(CXXPre2bCompat /* pre-c++2b-compat */, 14030, /* DiagArray656 */ 1928, 0)
DIAG_ENTRY(CXXPre2bCompatPedantic /* pre-c++2b-compat-pedantic */, 14047, 0, /* DiagSubGroup657 */ 547)
DIAG_ENTRY(CPre2xCompat /* pre-c2x-compat */, 14073, /* DiagArray658 */ 1933, 0)
DIAG_ENTRY(CPre2xCompatPedantic /* pre-c2x-compat-pedantic */, 14088, 0, /* DiagSubGroup659 */ 549)
DIAG_ENTRY(OpenMPPre51Compat /* pre-openmp-51-compat */, 14112, /* DiagArray660 */ 1936, 0)
DIAG_ENTRY(anonymous_131 /* predefined-identifier-outside-function */, 14133, /* DiagArray661 */ 1938, 0)
DIAG_ENTRY(PrivateExtern /* private-extern */, 14172, /* DiagArray662 */ 1940, 0)
DIAG_ENTRY(anonymous_112 /* private-header */, 14187, /* DiagArray663 */ 1942, 0)
DIAG_ENTRY(PrivateModule /* private-module */, 14202, /* DiagArray664 */ 1944, 0)
DIAG_ENTRY(ProfileInstrMissing /* profile-instr-missing */, 14217, /* DiagArray665 */ 1949, 0)
DIAG_ENTRY(ProfileInstrOutOfDate /* profile-instr-out-of-date */, 14239, /* DiagArray666 */ 1951, 0)
DIAG_ENTRY(ProfileInstrUnprofiled /* profile-instr-unprofiled */, 14265, /* DiagArray667 */ 1953, 0)
DIAG_ENTRY(PropertyAccessDotSyntax /* property-access-dot-syntax */, 14290, /* DiagArray668 */ 1955, 0)
DIAG_ENTRY(PropertyAttr /* property-attribute-mismatch */, 14317, /* DiagArray669 */ 1957, 0)
DIAG_ENTRY(Protocol /* protocol */, 14345, /* DiagArray670 */ 1962, 0)
DIAG_ENTRY(anonymous_145 /* protocol-property-synthesis-ambiguity */, 14354, /* DiagArray671 */ 1964, 0)
DIAG_ENTRY(anonymous_88 /* psabi */, 14392, /* DiagArray672 */ 1966, 0)
DIAG_ENTRY(anonymous_209 /* qualified-void-return-type */, 14398, /* DiagArray673 */ 1968, 0)
DIAG_ENTRY(FrameworkHdrQuotedInclude /* quoted-include-in-framework-header */, 14425, /* DiagArray674 */ 1970, 0)
DIAG_ENTRY(RangeLoopAnalysis /* range-loop-analysis */, 14460, 0, /* DiagSubGroup675 */ 551)
DIAG_ENTRY(RangeLoopBindReference /* range-loop-bind-reference */, 14480, /* DiagArray676 */ 1972, 0)
DIAG_ENTRY(RangeLoopConstruct /* range-loop-construct */, 14506, /* DiagArray677 */ 1974, 0)
DIAG_ENTRY(anonymous_155 /* readonly-iboutlet-property */, 14527, /* DiagArray678 */ 1977, 0)
DIAG_ENTRY(ObjCReceiver /* receiver-expr */, 14554, /* DiagArray679 */ 1979, 0)
DIAG_ENTRY(ForwardClassReceiver /* receiver-forward-class */, 14568, /* DiagArray680 */ 1981, 0)
DIAG_ENTRY(RedeclaredClassMember /* redeclared-class-member */, 14591, /* DiagArray681 */ 1984, 0)
DIAG_ENTRY(anonymous_157 /* redundant-consteval-if */, 14615, /* DiagArray682 */ 1986, 0)
DIAG_ENTRY(anonymous_34 /* redundant-decls */, 14638, 0, 0)
DIAG_ENTRY(RedundantMove /* redundant-move */, 14654, /* DiagArray684 */ 1988, 0)
DIAG_ENTRY(anonymous_133 /* redundant-parens */, 14669, /* DiagArray685 */ 1990, 0)
DIAG_ENTRY(Register /* register */, 14686, /* DiagArray686 */ 1992, /* DiagSubGroup686 */ 554)
DIAG_ENTRY(ReinterpretBaseClass /* reinterpret-base-class */, 14695, /* DiagArray687 */ 1994, 0)
DIAG_ENTRY(RemarkBackendPlugin /* remark-backend-plugin */, 14718, /* DiagArray688 */ 1996, 0)
DIAG_ENTRY(Reorder /* reorder */, 14740, 0, /* DiagSubGroup689 */ 556)
DIAG_ENTRY(ReorderCtor /* reorder-ctor */, 14748, /* DiagArray690 */ 1998, 0)
DIAG_ENTRY(ReorderInitList /* reorder-init-list */, 14761, /* DiagArray691 */ 2001, 0)
DIAG_ENTRY(anonymous_188 /* requires-super-attribute */, 14779, /* DiagArray692 */ 2003, 0)
DIAG_ENTRY(ReservedIdAsMacroAlias /* reserved-id-macro */, 14804, 0, /* DiagSubGroup693 */ 559)
DIAG_ENTRY(ReservedIdentifier /* reserved-identifier */, 14822, /* DiagArray694 */ 2005, /* DiagSubGroup694 */ 561)
DIAG_ENTRY(ReservedIdAsMacro /* reserved-macro-identifier */, 14842, /* DiagArray695 */ 2007, 0)
DIAG_ENTRY(ReservedUserDefinedLiteral /* reserved-user-defined-literal */, 14868, /* DiagArray696 */ 2009, /* DiagSubGroup696 */ 563)
DIAG_ENTRY(RestrictExpansionMacro /* restrict-expansion */, 14898, /* DiagArray697 */ 2012, 0)
DIAG_ENTRY(anonymous_202 /* retained-language-linkage */, 14917, /* DiagArray698 */ 2014, 0)
DIAG_ENTRY(ReturnStackAddress /* return-stack-address */, 14943, /* DiagArray699 */ 2016, 0)
DIAG_ENTRY(ReturnStdMove /* return-std-move */, 14964, 0, 0)
DIAG_ENTRY(ReturnType /* return-type */, 14980, /* DiagArray701 */ 2020, /* DiagSubGroup701 */ 565)
DIAG_ENTRY(ReturnTypeCLinkage /* return-type-c-linkage */, 14992, /* DiagArray702 */ 2030, 0)
DIAG_ENTRY(anonymous_190 /* rewrite-not-bool */, 15014, /* DiagArray703 */ 2033, 0)
DIAG_ENTRY(RoundTripCC1Args /* round-trip-cc1-args */, 15031, /* DiagArray704 */ 2035, 0)
DIAG_ENTRY(RTTI /* rtti */, 15051, /* DiagArray705 */ 2037, 0)
DIAG_ENTRY(SanitizeAddressRemarks /* sanitize-address */, 15056, /* DiagArray706 */ 2040, 0)
DIAG_ENTRY(UsedSearchPath /* search-path-usage */, 15073, /* DiagArray707 */ 2043, 0)
DIAG_ENTRY(Section /* section */, 15091, /* DiagArray708 */ 2045, 0)
DIAG_ENTRY(Selector /* selector */, 15099, /* DiagArray709 */ 2049, /* DiagSubGroup709 */ 567)
DIAG_ENTRY(SelectorTypeMismatch /* selector-type-mismatch */, 15108, /* DiagArray710 */ 2051, 0)
DIAG_ENTRY(SelfAssignment /* self-assign */, 15131, /* DiagArray711 */ 2053, /* DiagSubGroup711 */ 569)
DIAG_ENTRY(SelfAssignmentField /* self-assign-field */, 15143, /* DiagArray712 */ 2055, 0)
DIAG_ENTRY(SelfAssignmentOverloaded /* self-assign-overloaded */, 15161, /* DiagArray713 */ 2057, 0)
DIAG_ENTRY(SelfMove /* self-move */, 15184, /* DiagArray714 */ 2059, 0)
DIAG_ENTRY(SemiBeforeMethodBody /* semicolon-before-method-body */, 15194, /* DiagArray715 */ 2061, 0)
DIAG_ENTRY(Sentinel /* sentinel */, 15223, /* DiagArray716 */ 2063, 0)
DIAG_ENTRY(anonymous_38 /* sequence-point */, 15232, 0, /* DiagSubGroup717 */ 572)
DIAG_ENTRY(SerializedDiagnostics /* serialized-diagnostics */, 15247, /* DiagArray718 */ 2066, 0)
DIAG_ENTRY(Shadow /* shadow */, 15270, /* DiagArray719 */ 2070, /* DiagSubGroup719 */ 574)
DIAG_ENTRY(ShadowAll /* shadow-all */, 15277, 0, /* DiagSubGroup720 */ 577)
DIAG_ENTRY(ShadowField /* shadow-field */, 15288, /* DiagArray721 */ 2072, 0)
DIAG_ENTRY(ShadowFieldInConstructor /* shadow-field-in-constructor */, 15301, /* DiagArray722 */ 2074, /* DiagSubGroup722 */ 582)
DIAG_ENTRY(ShadowFieldInConstructorModified /* shadow-field-in-constructor-modified */, 15329, /* DiagArray723 */ 2076, 0)
DIAG_ENTRY(ShadowIvar /* shadow-ivar */, 15366, /* DiagArray724 */ 2078, 0)
DIAG_ENTRY(ShadowUncapturedLocal /* shadow-uncaptured-local */, 15378, /* DiagArray725 */ 2080, 0)
DIAG_ENTRY(anonymous_213 /* shift-count-negative */, 15402, /* DiagArray726 */ 2082, 0)
DIAG_ENTRY(anonymous_214 /* shift-count-overflow */, 15423, /* DiagArray727 */ 2084, 0)
DIAG_ENTRY(anonymous_212 /* shift-negative-value */, 15444, /* DiagArray728 */ 2086, 0)
DIAG_ENTRY(ShiftOpParentheses /* shift-op-parentheses */, 15465, /* DiagArray729 */ 2088, 0)
DIAG_ENTRY(anonymous_215 /* shift-overflow */, 15486, /* DiagArray730 */ 2090, 0)
DIAG_ENTRY(anonymous_216 /* shift-sign-overflow */, 15501, /* DiagArray731 */ 2092, 0)
DIAG_ENTRY(Shorten64To32 /* shorten-64-to-32 */, 15521, /* DiagArray732 */ 2094, 0)
DIAG_ENTRY(SignCompare /* sign-compare */, 15538, /* DiagArray733 */ 2096, 0)
DIAG_ENTRY(SignConversion /* sign-conversion */, 15551, /* DiagArray734 */ 2098, 0)
DIAG_ENTRY(anonymous_35 /* sign-promo */, 15567, 0, 0)
DIAG_ENTRY(SignedEnumBitfield /* signed-enum-bitfield */, 15578, /* DiagArray736 */ 2102, 0)
DIAG_ENTRY(anonymous_255 /* signed-unsigned-wchar */, 15599, /* DiagArray737 */ 2104, 0)
DIAG_ENTRY(SizeofArrayArgument /* sizeof-array-argument */, 15621, /* DiagArray738 */ 2106, 0)
DIAG_ENTRY(SizeofArrayDecay /* sizeof-array-decay */, 15643, /* DiagArray739 */ 2108, 0)
DIAG_ENTRY(anonymous_184 /* sizeof-array-div */, 15662, /* DiagArray740 */ 2110, 0)
DIAG_ENTRY(anonymous_183 /* sizeof-pointer-div */, 15679, /* DiagArray741 */ 2112, 0)
DIAG_ENTRY(SizeofPointerMemaccess /* sizeof-pointer-memaccess */, 15698, /* DiagArray742 */ 2114, 0)
DIAG_ENTRY(anonymous_80 /* slash-u-filename */, 15723, /* DiagArray743 */ 2117, 0)
DIAG_ENTRY(anonymous_74 /* slh-asm-goto */, 15740, /* DiagArray744 */ 2119, 0)
DIAG_ENTRY(UninitializedSometimes /* sometimes-uninitialized */, 15753, /* DiagArray745 */ 2121, 0)
DIAG_ENTRY(BackendSourceMgr /* source-mgr */, 15777, /* DiagArray746 */ 2123, 0)
DIAG_ENTRY(SourceUsesOpenMP /* source-uses-openmp */, 15788, /* DiagArray747 */ 2125, 0)
DIAG_ENTRY(SpirCompat /* spir-compat */, 15807, /* DiagArray748 */ 2134, 0)
DIAG_ENTRY(anonymous_68 /* spirv-compat */, 15819, 0, /* DiagSubGroup749 */ 584)
DIAG_ENTRY(anonymous_72 /* stack-exhausted */, 15832, /* DiagArray750 */ 2136, 0)
DIAG_ENTRY(anonymous_73 /* stack-protector */, 15848, /* DiagArray751 */ 2138, 0)
DIAG_ENTRY(StaticFloatInit /* static-float-init */, 15864, /* DiagArray752 */ 2140, /* DiagSubGroup752 */ 586)
DIAG_ENTRY(StaticInInline /* static-in-inline */, 15882, /* DiagArray753 */ 2142, 0)
DIAG_ENTRY(anonymous_127 /* static-inline-explicit-instantiation */, 15899, /* DiagArray754 */ 2145, 0)
DIAG_ENTRY(StaticLocalInInline /* static-local-in-inline */, 15936, /* DiagArray755 */ 2147, 0)
DIAG_ENTRY(UninitializedStaticSelfInit /* static-self-init */, 15959, /* DiagArray756 */ 2149, 0)
DIAG_ENTRY(anonymous_83 /* stdlibcxx-not-found */, 15976, /* DiagArray757 */ 2151, 0)
DIAG_ENTRY(anonymous_42 /* strict-aliasing */, 15996, 0, 0)
DIAG_ENTRY(anonymous_39 /* strict-aliasing=0 */, 16012, 0, 0)
DIAG_ENTRY(anonymous_40 /* strict-aliasing=1 */, 16030, 0, 0)
DIAG_ENTRY(anonymous_41 /* strict-aliasing=2 */, 16048, 0, 0)
DIAG_ENTRY(anonymous_49 /* strict-overflow */, 16066, 0, 0)
DIAG_ENTRY(anonymous_43 /* strict-overflow=0 */, 16082, 0, 0)
DIAG_ENTRY(anonymous_44 /* strict-overflow=1 */, 16100, 0, 0)
DIAG_ENTRY(anonymous_45 /* strict-overflow=2 */, 16118, 0, 0)
DIAG_ENTRY(anonymous_46 /* strict-overflow=3 */, 16136, 0, 0)
DIAG_ENTRY(anonymous_47 /* strict-overflow=4 */, 16154, 0, 0)
DIAG_ENTRY(anonymous_48 /* strict-overflow=5 */, 16172, 0, 0)
DIAG_ENTRY(ObjCStrictPotentiallyDirectSelector /* strict-potentially-direct-selector */, 16190, /* DiagArray769 */ 2153, /* DiagSubGroup769 */ 588)
DIAG_ENTRY(anonymous_196 /* strict-prototypes */, 16225, /* DiagArray770 */ 2155, 0)
DIAG_ENTRY(StrictSelector /* strict-selector-match */, 16243, /* DiagArray771 */ 2157, 0)
DIAG_ENTRY(StringCompare /* string-compare */, 16265, /* DiagArray772 */ 2159, 0)
DIAG_ENTRY(StringConcatation /* string-concatenation */, 16280, /* DiagArray773 */ 2161, 0)
DIAG_ENTRY(StringConversion /* string-conversion */, 16301, /* DiagArray774 */ 2163, 0)
DIAG_ENTRY(StringPlusChar /* string-plus-char */, 16319, /* DiagArray775 */ 2165, 0)
DIAG_ENTRY(StringPlusInt /* string-plus-int */, 16336, /* DiagArray776 */ 2167, 0)
DIAG_ENTRY(anonymous_138 /* strlcpy-strlcat-size */, 16352, /* DiagArray777 */ 2169, 0)
DIAG_ENTRY(StrncatSize /* strncat-size */, 16373, /* DiagArray778 */ 2171, 0)
DIAG_ENTRY(CXX11WarnSuggestOverrideDestructor /* suggest-destructor-override */, 16386, /* DiagArray779 */ 2175, 0)
DIAG_ENTRY(CXX11WarnSuggestOverride /* suggest-override */, 16414, /* DiagArray780 */ 2177, 0)
DIAG_ENTRY(SuperSubClassMismatch /* super-class-method-mismatch */, 16431, /* DiagArray781 */ 2179, 0)
DIAG_ENTRY(SuspiciousBzero /* suspicious-bzero */, 16459, /* DiagArray782 */ 2181, 0)
DIAG_ENTRY(SuspiciousMemaccess /* suspicious-memaccess */, 16476, 0, /* DiagSubGroup783 */ 590)
DIAG_ENTRY(SwiftNameAttribute /* swift-name-attribute */, 16497, /* DiagArray784 */ 2183, 0)
DIAG_ENTRY(Switch /* switch */, 16518, /* DiagArray785 */ 2197, 0)
DIAG_ENTRY(SwitchBool /* switch-bool */, 16525, /* DiagArray786 */ 2201, 0)
DIAG_ENTRY(anonymous_36 /* switch-default */, 16537, 0, 0)
DIAG_ENTRY(SwitchEnum /* switch-enum */, 16552, /* DiagArray788 */ 2203, 0)
DIAG_ENTRY(anonymous_254 /* sync-fetch-and-nand-semantics-changed */, 16564, /* DiagArray789 */ 2205, 0)
DIAG_ENTRY(anonymous_37 /* synth */, 16602, 0, 0)
DIAG_ENTRY(TargetClonesMixedSpecifiers /* target-clones-mixed-specifiers */, 16608, /* DiagArray791 */ 2207, 0)
DIAG_ENTRY(TautologicalBitwiseCompare /* tautological-bitwise-compare */, 16639, /* DiagArray792 */ 2209, 0)
DIAG_ENTRY(TautologicalCompare /* tautological-compare */, 16668, /* DiagArray793 */ 2212, /* DiagSubGroup793 */ 596)
DIAG_ENTRY(TautologicalConstantCompare /* tautological-constant-compare */, 16689, /* DiagArray794 */ 2215, /* DiagSubGroup794 */ 603)
DIAG_ENTRY(TautologicalInRangeCompare /* tautological-constant-in-range-compare */, 16719, 0, /* DiagSubGroup795 */ 605)
DIAG_ENTRY(TautologicalOutOfRangeCompare /* tautological-constant-out-of-range-compare */, 16758, /* DiagArray796 */ 2219, 0)
DIAG_ENTRY(TautologicalObjCBoolCompare /* tautological-objc-bool-compare */, 16801, /* DiagArray797 */ 2221, 0)
DIAG_ENTRY(TautologicalOverlapCompare /* tautological-overlap-compare */, 16832, /* DiagArray798 */ 2223, 0)
DIAG_ENTRY(TautologicalPointerCompare /* tautological-pointer-compare */, 16861, /* DiagArray799 */ 2225, 0)
DIAG_ENTRY(TautologicalTypeLimitCompare /* tautological-type-limit-compare */, 16890, /* DiagArray800 */ 2228, 0)
DIAG_ENTRY(TautologicalUndefinedCompare /* tautological-undefined-compare */, 16922, /* DiagArray801 */ 2230, 0)
DIAG_ENTRY(TautologicalUnsignedCharZeroCompare /* tautological-unsigned-char-zero-compare */, 16953, /* DiagArray802 */ 2233, 0)
DIAG_ENTRY(TautologicalUnsignedEnumZeroCompare /* tautological-unsigned-enum-zero-compare */, 16993, /* DiagArray803 */ 2235, 0)
DIAG_ENTRY(TautologicalUnsignedZeroCompare /* tautological-unsigned-zero-compare */, 17033, /* DiagArray804 */ 2237, 0)
DIAG_ENTRY(TautologicalValueRangeCompare /* tautological-value-range-compare */, 17068, /* DiagArray805 */ 2239, 0)
DIAG_ENTRY(anonymous_262 /* tcb-enforcement */, 17101, /* DiagArray806 */ 2241, 0)
DIAG_ENTRY(anonymous_219 /* tentative-definition-incomplete-type */, 17117, /* DiagArray807 */ 2243, 0)
DIAG_ENTRY(ThreadSafety /* thread-safety */, 17154, 0, /* DiagSubGroup808 */ 608)
DIAG_ENTRY(ThreadSafetyAnalysis /* thread-safety-analysis */, 17168, /* DiagArray809 */ 2245, 0)
DIAG_ENTRY(ThreadSafetyAttributes /* thread-safety-attributes */, 17191, /* DiagArray810 */ 2264, 0)
DIAG_ENTRY(ThreadSafetyBeta /* thread-safety-beta */, 17216, /* DiagArray811 */ 2271, 0)
DIAG_ENTRY(ThreadSafetyNegative /* thread-safety-negative */, 17235, /* DiagArray812 */ 2273, 0)
DIAG_ENTRY(ThreadSafetyPrecise /* thread-safety-precise */, 17258, /* DiagArray813 */ 2275, 0)
DIAG_ENTRY(ThreadSafetyReference /* thread-safety-reference */, 17280, /* DiagArray814 */ 2279, 0)
DIAG_ENTRY(ThreadSafetyVerbose /* thread-safety-verbose */, 17304, /* DiagArray815 */ 2282, 0)
DIAG_ENTRY(Trigraphs /* trigraphs */, 17326, /* DiagArray816 */ 2284, 0)
DIAG_ENTRY(TypeLimits /* type-limits */, 17336, 0, /* DiagSubGroup817 */ 613)
DIAG_ENTRY(TypeSafety /* type-safety */, 17348, /* DiagArray818 */ 2289, 0)
DIAG_ENTRY(anonymous_201 /* typedef-redefinition */, 17360, /* DiagArray819 */ 2293, 0)
DIAG_ENTRY(anonymous_194 /* typename-missing */, 17381, /* DiagArray820 */ 2295, 0)
DIAG_ENTRY(anonymous_85 /* unable-to-open-stats-file */, 17398, /* DiagArray821 */ 2297, 0)
DIAG_ENTRY(UnavailableDeclarations /* unavailable-declarations */, 17424, /* DiagArray822 */ 2299, 0)
DIAG_ENTRY(UndeclaredSelector /* undeclared-selector */, 17449, /* DiagArray823 */ 2301, 0)
DIAG_ENTRY(anonymous_105 /* undef */, 17469, /* DiagArray824 */ 2304, 0)
DIAG_ENTRY(anonymous_106 /* undef-prefix */, 17475, /* DiagArray825 */ 2306, 0)
DIAG_ENTRY(UndefinedBoolConversion /* undefined-bool-conversion */, 17488, /* DiagArray826 */ 2308, 0)
DIAG_ENTRY(UndefinedFuncTemplate /* undefined-func-template */, 17514, /* DiagArray827 */ 2311, 0)
DIAG_ENTRY(anonymous_200 /* undefined-inline */, 17538, /* DiagArray828 */ 2313, 0)
DIAG_ENTRY(anonymous_198 /* undefined-internal */, 17555, /* DiagArray829 */ 2315, 0)
DIAG_ENTRY(anonymous_199 /* undefined-internal-type */, 17574, /* DiagArray830 */ 2317, 0)
DIAG_ENTRY(UndefinedReinterpretCast /* undefined-reinterpret-cast */, 17598, /* DiagArray831 */ 2319, 0)
DIAG_ENTRY(UndefinedVarTemplate /* undefined-var-template */, 17625, /* DiagArray832 */ 2322, 0)
DIAG_ENTRY(UnderalignedExceptionObject /* underaligned-exception-object */, 17648, /* DiagArray833 */ 2324, 0)
DIAG_ENTRY(UnevaluatedExpression /* unevaluated-expression */, 17678, /* DiagArray834 */ 2326, /* DiagSubGroup834 */ 618)
DIAG_ENTRY(UnguardedAvailability /* unguarded-availability */, 17701, /* DiagArray835 */ 2328, /* DiagSubGroup835 */ 620)
DIAG_ENTRY(UnguardedAvailabilityNew /* unguarded-availability-new */, 17724, /* DiagArray836 */ 2330, 0)
DIAG_ENTRY(Unicode /* unicode */, 17751, /* DiagArray837 */ 2332, 0)
DIAG_ENTRY(anonymous_93 /* unicode-homoglyph */, 17759, /* DiagArray838 */ 2340, 0)
DIAG_ENTRY(anonymous_92 /* unicode-whitespace */, 17777, /* DiagArray839 */ 2342, 0)
DIAG_ENTRY(anonymous_94 /* unicode-zero-width */, 17796, /* DiagArray840 */ 2344, 0)
DIAG_ENTRY(Uninitialized /* uninitialized */, 17815, /* DiagArray841 */ 2346, /* DiagSubGroup841 */ 622)
DIAG_ENTRY(UninitializedConstReference /* uninitialized-const-reference */, 17829, /* DiagArray842 */ 2354, 0)
DIAG_ENTRY(UnknownArgument /* unknown-argument */, 17859, /* DiagArray843 */ 2356, 0)
DIAG_ENTRY(UnknownAssumption /* unknown-assumption */, 17876, /* DiagArray844 */ 2359, 0)
DIAG_ENTRY(UnknownAttributes /* unknown-attributes */, 17895, /* DiagArray845 */ 2361, 0)
DIAG_ENTRY(CudaUnknownVersion /* unknown-cuda-version */, 17914, /* DiagArray846 */ 2363, 0)
DIAG_ENTRY(anonymous_96 /* unknown-escape-sequence */, 17935, /* DiagArray847 */ 2366, 0)
DIAG_ENTRY(UnknownPragmas /* unknown-pragmas */, 17959, /* DiagArray848 */ 2368, 0)
DIAG_ENTRY(UnknownSanitizers /* unknown-sanitizers */, 17975, /* DiagArray849 */ 2389, 0)
DIAG_ENTRY(UnknownWarningOption /* unknown-warning-option */, 17994, /* DiagArray850 */ 2391, 0)
DIAG_ENTRY(UnnamedTypeTemplateArgs /* unnamed-type-template-args */, 18017, /* DiagArray851 */ 2395, /* DiagSubGroup851 */ 626)
DIAG_ENTRY(UnneededInternalDecl /* unneeded-internal-declaration */, 18044, /* DiagArray852 */ 2397, 0)
DIAG_ENTRY(UnneededMemberFunction /* unneeded-member-function */, 18074, /* DiagArray853 */ 2400, 0)
DIAG_ENTRY(UnreachableCode /* unreachable-code */, 18099, /* DiagArray854 */ 2402, /* DiagSubGroup854 */ 628)
DIAG_ENTRY(UnreachableCodeAggressive /* unreachable-code-aggressive */, 18116, 0, /* DiagSubGroup855 */ 631)
DIAG_ENTRY(UnreachableCodeBreak /* unreachable-code-break */, 18144, /* DiagArray856 */ 2404, 0)
DIAG_ENTRY(UnreachableCodeFallthrough /* unreachable-code-fallthrough */, 18167, /* DiagArray857 */ 2406, 0)
DIAG_ENTRY(UnreachableCodeLoopIncrement /* unreachable-code-loop-increment */, 18196, /* DiagArray858 */ 2408, 0)
DIAG_ENTRY(UnreachableCodeReturn /* unreachable-code-return */, 18228, /* DiagArray859 */ 2410, 0)
DIAG_ENTRY(Unsequenced /* unsequenced */, 18252, /* DiagArray860 */ 2412, 0)
DIAG_ENTRY(UnsupportedAbs /* unsupported-abs */, 18264, /* DiagArray861 */ 2415, 0)
DIAG_ENTRY(anonymous_180 /* unsupported-availability-guard */, 18280, /* DiagArray862 */ 2418, 0)
DIAG_ENTRY(UnsupportedCB /* unsupported-cb */, 18311, /* DiagArray863 */ 2420, 0)
DIAG_ENTRY(anonymous_176 /* unsupported-dll-base-class-template */, 18326, /* DiagArray864 */ 2422, 0)
DIAG_ENTRY(UnsupportedFPOpt /* unsupported-floating-point-opt */, 18362, /* DiagArray865 */ 2424, 0)
DIAG_ENTRY(UnsupportedFriend /* unsupported-friend */, 18393, /* DiagArray866 */ 2427, 0)
DIAG_ENTRY(UnsupportedGPOpt /* unsupported-gpopt */, 18412, /* DiagArray867 */ 2430, 0)
DIAG_ENTRY(UnsupportedNan /* unsupported-nan */, 18430, /* DiagArray868 */ 2432, 0)
DIAG_ENTRY(UnsupportedTargetOpt /* unsupported-target-opt */, 18446, /* DiagArray869 */ 2435, 0)
DIAG_ENTRY(anonymous_186 /* unsupported-visibility */, 18469, /* DiagArray870 */ 2438, 0)
DIAG_ENTRY(anonymous_192 /* unusable-partial-specialization */, 18492, /* DiagArray871 */ 2440, 0)
DIAG_ENTRY(Unused /* unused */, 18524, 0, /* DiagSubGroup872 */ 635)
DIAG_ENTRY(UnusedArgument /* unused-argument */, 18531, 0, 0)
DIAG_ENTRY(UnusedButSetParameter /* unused-but-set-parameter */, 18547, /* DiagArray874 */ 2442, 0)
DIAG_ENTRY(UnusedButSetVariable /* unused-but-set-variable */, 18572, /* DiagArray875 */ 2444, 0)
DIAG_ENTRY(UnusedCommandLineArgument /* unused-command-line-argument */, 18596, /* DiagArray876 */ 2446, 0)
DIAG_ENTRY(UnusedComparison /* unused-comparison */, 18625, /* DiagArray877 */ 2457, 0)
DIAG_ENTRY(UnusedConstVariable /* unused-const-variable */, 18643, /* DiagArray878 */ 2459, 0)
DIAG_ENTRY(UnusedExceptionParameter /* unused-exception-parameter */, 18665, /* DiagArray879 */ 2461, 0)
DIAG_ENTRY(UnusedFunction /* unused-function */, 18692, /* DiagArray880 */ 2463, /* DiagSubGroup880 */ 646)
DIAG_ENTRY(UnusedGetterReturnValue /* unused-getter-return-value */, 18708, /* DiagArray881 */ 2465, 0)
DIAG_ENTRY(UnusedLabel /* unused-label */, 18735, /* DiagArray882 */ 2467, 0)
DIAG_ENTRY(UnusedLambdaCapture /* unused-lambda-capture */, 18748, /* DiagArray883 */ 2469, 0)
DIAG_ENTRY(UnusedLocalTypedef /* unused-local-typedef */, 18770, /* DiagArray884 */ 2471, 0)
DIAG_ENTRY(anonymous_61 /* unused-local-typedefs */, 18791, 0, /* DiagSubGroup885 */ 648)
DIAG_ENTRY(anonymous_104 /* unused-macros */, 18813, /* DiagArray886 */ 2473, 0)
DIAG_ENTRY(UnusedMemberFunction /* unused-member-function */, 18827, /* DiagArray887 */ 2475, /* DiagSubGroup887 */ 650)
DIAG_ENTRY(UnusedParameter /* unused-parameter */, 18850, /* DiagArray888 */ 2477, 0)
DIAG_ENTRY(UnusedPrivateField /* unused-private-field */, 18867, /* DiagArray889 */ 2479, 0)
DIAG_ENTRY(UnusedPropertyIvar /* unused-property-ivar */, 18888, /* DiagArray890 */ 2481, 0)
DIAG_ENTRY(UnusedResult /* unused-result */, 18909, /* DiagArray891 */ 2483, 0)
DIAG_ENTRY(UnusedTemplate /* unused-template */, 18923, /* DiagArray892 */ 2486, /* DiagSubGroup892 */ 652)
DIAG_ENTRY(UnusedValue /* unused-value */, 18939, /* DiagArray893 */ 2488, /* DiagSubGroup893 */ 654)
DIAG_ENTRY(UnusedVariable /* unused-variable */, 18952, /* DiagArray894 */ 2496, /* DiagSubGroup894 */ 658)
DIAG_ENTRY(anonymous_240 /* unused-volatile-lvalue */, 18968, /* DiagArray895 */ 2498, 0)
DIAG_ENTRY(UsedButMarkedUnused /* used-but-marked-unused */, 18991, /* DiagArray896 */ 2500, 0)
DIAG_ENTRY(UserDefinedLiterals /* user-defined-literals */, 19014, /* DiagArray897 */ 2502, 0)
DIAG_ENTRY(UserDefinedWarnings /* user-defined-warnings */, 19036, /* DiagArray898 */ 2504, 0)
DIAG_ENTRY(Varargs /* varargs */, 19058, /* DiagArray899 */ 2506, 0)
DIAG_ENTRY(VariadicMacros /* variadic-macros */, 19066, /* DiagArray900 */ 2510, 0)
DIAG_ENTRY(anonymous_166 /* vec-elem-size */, 19082, /* DiagArray901 */ 2514, 0)
DIAG_ENTRY(VectorConversion /* vector-conversion */, 19096, /* DiagArray902 */ 2516, 0)
DIAG_ENTRY(anonymous_60 /* vector-conversions */, 19114, 0, /* DiagSubGroup903 */ 660)
DIAG_ENTRY(VexingParse /* vexing-parse */, 19133, /* DiagArray904 */ 2518, 0)
DIAG_ENTRY(Visibility /* visibility */, 19146, /* DiagArray905 */ 2522, 0)
DIAG_ENTRY(VLA /* vla */, 19157, /* DiagArray906 */ 2525, /* DiagSubGroup906 */ 662)
DIAG_ENTRY(VLAExtension /* vla-extension */, 19161, /* DiagArray907 */ 2527, 0)
DIAG_ENTRY(VoidPointerToEnumCast /* void-pointer-to-enum-cast */, 19175, /* DiagArray908 */ 2529, 0)
DIAG_ENTRY(VoidPointerToIntCast /* void-pointer-to-int-cast */, 19201, /* DiagArray909 */ 2531, /* DiagSubGroup909 */ 664)
DIAG_ENTRY(anonymous_221 /* void-ptr-dereference */, 19226, /* DiagArray910 */ 2533, 0)
DIAG_ENTRY(VolatileRegisterVar /* volatile-register-var */, 19247, 0, 0)
DIAG_ENTRY(WebAssemblyExceptionSpec /* wasm-exception-spec */, 19269, /* DiagArray912 */ 2535, 0)
DIAG_ENTRY(anonymous_159 /* weak-template-vtables */, 19289, /* DiagArray913 */ 2537, 0)
DIAG_ENTRY(anonymous_158 /* weak-vtables */, 19311, /* DiagArray914 */ 2539, 0)
DIAG_ENTRY(WritableStrings /* writable-strings */, 19324, /* DiagArray915 */ 2541, /* DiagSubGroup915 */ 666)
DIAG_ENTRY(GCCWriteStrings /* write-strings */, 19341, 0, /* DiagSubGroup916 */ 668)
DIAG_ENTRY(XorUsedAsPow /* xor-used-as-pow */, 19355, /* DiagArray917 */ 2543, 0)
DIAG_ENTRY(anonymous_261 /* zero-as-null-pointer-constant */, 19371, /* DiagArray918 */ 2547, 0)
DIAG_ENTRY(ZeroLengthArray /* zero-length-array */, 19401, /* DiagArray919 */ 2549, 0)
#endif // DIAG_ENTRY


#ifdef GET_CATEGORY_TABLE
CATEGORY("", DiagCat_None)
CATEGORY("Lexical or Preprocessor Issue", DiagCat_Lexical_or_Preprocessor_Issue)
CATEGORY("Semantic Issue", DiagCat_Semantic_Issue)
CATEGORY("Lambda Issue", DiagCat_Lambda_Issue)
CATEGORY("Parse Issue", DiagCat_Parse_Issue)
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
CATEGORY("Coroutines Issue", DiagCat_Coroutines_Issue)
CATEGORY("Concepts Issue", DiagCat_Concepts_Issue)
CATEGORY("Dependency Directive Source Minimization Issue", DiagCat_Dependency_Directive_Source_Minimization_Issue)
CATEGORY("Backend Issue", DiagCat_Backend_Issue)
CATEGORY("SourceMgr Reported Issue", DiagCat_SourceMgr_Reported_Issue)
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

