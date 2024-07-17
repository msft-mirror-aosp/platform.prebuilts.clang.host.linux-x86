
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
  /* DiagArray16 */ diag::ext_alias_template_in_declarative_nns, -1,
  /* DiagArray17 */ diag::warn_param_mismatched_alignment, -1,
  /* DiagArray19 */ diag::warn_alloca, -1,
  /* DiagArray20 */ diag::warn_alloca_align_alignof, -1,
  /* DiagArray21 */ diag::warn_always_inline_coroutine, -1,
  /* DiagArray22 */ diag::warn_ambiguous_suitable_delete_function_found, -1,
  /* DiagArray23 */ diag::warn_misplaced_ellipsis_vararg, -1,
  /* DiagArray24 */ diag::warn_pp_ambiguous_macro, -1,
  /* DiagArray25 */ diag::ext_nested_name_member_ref_lookup_ambiguous, -1,
  /* DiagArray26 */ diag::ext_ovl_ambiguous_oper_binary_reversed, -1,
  /* DiagArray27 */ diag::warn_incompatible_analyzer_plugin_api, -1,
  /* DiagArray28 */ diag::warn_android_unversioned_fallback, -1,
  /* DiagArray29 */ diag::warn_arith_conv_mixed_anon_enum_types, -1,
  /* DiagArray30 */ diag::ext_abstract_pack_declarator_parens, -1,
  /* DiagArray31 */ diag::warn_apinotes_message, -1,
  /* DiagArray33 */ diag::warn_arc_bridge_cast_nonarc, -1,
  /* DiagArray34 */ diag::warn_arc_possible_repeated_use_of_weak, -1,
  /* DiagArray35 */ diag::warn_arc_object_memaccess, -1,
  /* DiagArray36 */ diag::warn_arc_perform_selector_leaks, -1,
  /* DiagArray37 */ diag::warn_arc_repeated_use_of_weak, -1,
  /* DiagArray38 */ diag::warn_arc_retain_cycle, -1,
  /* DiagArray39 */ diag::warn_arc_literal_assign, diag::warn_arc_retained_assign, diag::warn_arc_retained_property_assign, -1,
  /* DiagArray40 */ diag::warn_argument_invalid_range, -1,
  /* DiagArray41 */ diag::warn_argument_undefined_behaviour, -1,
  /* DiagArray42 */ diag::warn_array_index_exceeds_bounds, diag::warn_array_index_exceeds_max_addressable_bounds, diag::warn_array_index_precedes_bounds, diag::warn_ptr_arith_exceeds_max_addressable_bounds, diag::warn_static_array_too_small, -1,
  /* DiagArray43 */ diag::warn_ptr_arith_exceeds_bounds, diag::warn_ptr_arith_precedes_bounds, -1,
  /* DiagArray44 */ diag::warn_inconsistent_array_form, -1,
  /* DiagArray46 */ diag::warn_asm_mismatched_size_modifier, -1,
  /* DiagArray47 */ diag::warn_not_in_enum_assignment, -1,
  /* DiagArray48 */ diag::warn_assume_side_effects, -1,
  /* DiagArray50 */ diag::warn_atimport_in_framework_header, -1,
  /* DiagArray51 */ diag::warn_atomic_member_access, -1,
  /* DiagArray52 */ diag::warn_atomic_op_misaligned, diag::warn_atomic_op_oversized, -1,
  /* DiagArray53 */ diag::warn_atomic_implicit_seq_cst, -1,
  /* DiagArray54 */ diag::warn_atomic_op_has_invalid_memory_order, -1,
  /* DiagArray56 */ diag::warn_atomic_property_rule, -1,
  /* DiagArray57 */ diag::warn_attribute_packed_for_bitfield, -1,
  /* DiagArray58 */ diag::warn_fe_backend_warning_attr, diag::warn_toc_unsupported_type, -1,
  /* DiagArray60 */ diag::ext_c23_auto_non_plain_identifier, -1,
  /* DiagArray61 */ diag::warn_drv_disabling_vptr_no_rtti_default, -1,
  /* DiagArray63 */ diag::ext_auto_storage_class, -1,
  /* DiagArray64 */ diag::warn_auto_var_is_id, -1,
  /* DiagArray65 */ diag::warn_availability_and_unavailable, diag::warn_availability_fuchsia_unavailable_minor, diag::warn_availability_on_static_initializer, diag::warn_availability_swift_unavailable_deprecated_only, diag::warn_availability_unknown_platform, diag::warn_availability_version_ordering, diag::warn_expected_consistent_version_separator, diag::warn_mismatched_availability, diag::warn_mismatched_availability_override, diag::warn_mismatched_availability_override_unavail, -1,
  /* DiagArray66 */ diag::warn_drv_avr_family_linking_stdlibs_not_implemented, diag::warn_drv_avr_libc_not_found, diag::warn_drv_avr_linker_section_addresses_not_implemented, diag::warn_drv_avr_mcu_not_specified, diag::warn_drv_avr_stdlib_not_linked, -1,
  /* DiagArray67 */ diag::warn_fe_backend_plugin, diag::warn_fe_backend_resource_limit, -1,
  /* DiagArray68 */ diag::backslash_newline_space, -1,
  /* DiagArray69 */ diag::warn_bad_function_cast, -1,
  /* DiagArray71 */ diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, -1,
  /* DiagArray72 */ diag::ext_decomp_decl_cond, -1,
  /* DiagArray73 */ diag::ext_bit_int, -1,
  /* DiagArray74 */ diag::warn_impcast_bitfield_precision_constant, -1,
  /* DiagArray75 */ diag::warn_bitfield_too_small_for_enum, diag::warn_signed_bitfield_enum_conversion, diag::warn_unsigned_bitfield_assigned_signed_enum, -1,
  /* DiagArray76 */ diag::warn_bitfield_width_exceeds_type_width, -1,
  /* DiagArray77 */ diag::warn_precedence_bitwise_conditional, -1,
  /* DiagArray78 */ diag::warn_bitwise_instead_of_logical, -1,
  /* DiagArray79 */ diag::warn_bitwise_op_in_bitwise_op, -1,
  /* DiagArray80 */ diag::warn_block_capture_autoreleasing, -1,
  /* DiagArray81 */ diag::warn_impcast_bool_to_null_pointer, -1,
  /* DiagArray83 */ diag::warn_bitwise_negation_bool, -1,
  /* DiagArray84 */ diag::warn_braces_around_init, -1,
  /* DiagArray85 */ diag::warn_incompatible_branch_protection_option, diag::warn_target_unsupported_branch_protection_attribute, diag::warn_unsupported_branch_protection, diag::warn_unsupported_branch_protection_spec, -1,
  /* DiagArray86 */ diag::warn_objc_invalid_bridge, diag::warn_objc_invalid_bridge_to_cf, -1,
  /* DiagArray87 */ diag::warn_assume_aligned_too_great, -1,
  /* DiagArray88 */ diag::ext_pp_redef_builtin_macro, diag::ext_pp_undef_builtin_macro, -1,
  /* DiagArray89 */ diag::warn_builtin_chk_overflow, -1,
  /* DiagArray90 */ diag::warn_implicit_decl_requires_sysheader, -1,
  /* DiagArray91 */ diag::warn_zero_size_struct_union_compat, -1,
  /* DiagArray95 */ diag::ext_old_implicitly_unsigned_long_cxx, diag::warn_auto_storage_class, diag::warn_cxx11_compat_user_defined_literal, diag::warn_cxx11_keyword, diag::warn_cxx11_right_shift_in_template_arg, diag::warn_explicit_instantiation_inline_0x, diag::warn_explicit_instantiation_must_be_global_0x, diag::warn_explicit_instantiation_out_of_scope_0x, diag::warn_explicit_instantiation_unqualified_wrong_namespace_0x, diag::warn_old_implicitly_unsigned_long_cxx, -1,
  /* DiagArray96 */ diag::warn_deprecated_string_literal_conversion, -1,
  /* DiagArray98 */ diag::warn_cxx11_compat_reserved_user_defined_literal, -1,
  /* DiagArray99 */ diag::ext_alias_declaration, diag::ext_array_size_conversion, diag::ext_auto_type_specifier, diag::ext_cxx11_enum_fixed_underlying_type, diag::ext_defaulted_deleted_function, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_conversion_functions, diag::ext_extern_template, diag::ext_for_range, diag::ext_generalized_initializer_lists, diag::ext_nested_name_spec_is_enum, diag::ext_nonclass_type_friend, diag::ext_nonstatic_member_init, diag::ext_override_control_keyword, diag::ext_ref_qualifier, diag::ext_rvalue_reference, diag::ext_scoped_enum, diag::ext_static_data_member_in_union, diag::ext_template_arg_object_internal, diag::ext_template_outside_of_template, diag::ext_template_parameter_default_in_function_template, diag::ext_typename_outside_of_template, diag::ext_unelaborated_friend_type, diag::ext_variadic_templates, diag::warn_ext_cxx11_attributes, -1,
  /* DiagArray100 */ diag::ext_extra_semi_cxx11, -1,
  /* DiagArray101 */ diag::ext_inline_namespace, -1,
  /* DiagArray102 */ diag::ext_cxx11_longlong, -1,
  /* DiagArray103 */ diag::ext_cce_narrowing, diag::ext_init_list_constant_narrowing, diag::ext_init_list_type_narrowing, diag::ext_init_list_variable_narrowing, diag::warn_init_list_constant_narrowing, diag::warn_init_list_type_narrowing, diag::warn_init_list_variable_narrowing, -1,
  /* DiagArray104 */ diag::ext_init_list_constant_narrowing_const_reference, diag::ext_init_list_type_narrowing_const_reference, diag::ext_init_list_variable_narrowing_const_reference, -1,
  /* DiagArray105 */ diag::ext_cxx14_attr, -1,
  /* DiagArray106 */ diag::ext_binary_literal_cxx14, -1,
  /* DiagArray109 */ diag::ext_constexpr_body_invalid_stmt, diag::ext_constexpr_body_multiple_return, diag::ext_constexpr_local_var, diag::ext_constexpr_type_definition, diag::ext_decltype_auto_type_specifier, diag::ext_init_capture, diag::ext_variable_template, -1,
  /* DiagArray110 */ diag::ext_cxx17_attr, -1,
  /* DiagArray112 */ diag::warn_cxx17_compat_exception_spec_in_signature, -1,
  /* DiagArray114 */ diag::ext_auto_new_list_init, diag::ext_constexpr_if, diag::ext_constexpr_on_lambda_cxx17, diag::ext_cxx_static_assert_no_message, diag::ext_decomp_decl, diag::ext_fold_expression, diag::ext_for_range_begin_end_types_differ, diag::ext_hex_literal_invalid, diag::ext_init_statement, diag::ext_inline_variable, diag::ext_multi_using_declaration, diag::ext_nested_namespace_definition, diag::ext_ns_enum_attribute, diag::ext_star_this_lambda_capture_cxx17, diag::ext_template_template_param_typename, diag::ext_using_attribute_ns, diag::ext_using_declaration_pack, -1,
  /* DiagArray119 */ diag::ext_cxx20_attr, -1,
  /* DiagArray120 */ diag::warn_cxx17_compat_implicit_typename, diag::warn_cxx20_compat_aggregate_init_with_ctors, diag::warn_cxx20_compat_consteval, diag::warn_cxx20_compat_constinit, diag::warn_cxx20_compat_explicit_bool, diag::warn_cxx20_compat_spaceship, diag::warn_cxx20_compat_use_of_unaddressable_function, diag::warn_cxx20_compat_utf8_string, diag::warn_cxx20_keyword, -1,
  /* DiagArray122 */ diag::ext_cxx_designated_init, -1,
  /* DiagArray123 */ diag::ext_adl_only_template_id, diag::ext_bitfield_member_init, diag::ext_capture_binding, diag::ext_constexpr_body_invalid_stmt_cxx20, diag::ext_constexpr_ctor_missing_init, diag::ext_constexpr_function_try_block_cxx20, diag::ext_constexpr_local_var_no_init, diag::ext_constexpr_union_ctor_no_init, diag::ext_decomp_decl_spec, diag::ext_defaulted_comparison, diag::ext_equals_this_lambda_capture_cxx20, diag::ext_explicit_bool, diag::ext_for_range_init_stmt, diag::ext_implicit_typename, diag::ext_init_capture_pack, diag::ext_inline_nested_namespace_definition, diag::ext_lambda_template_parameter_list, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_using_decl_scoped_enumerator, diag::ext_using_enum_declaration, diag::warn_cxx17_compat_aggregate_init_paren_list, -1,
  /* DiagArray124 */ diag::ext_cxx23_attr, -1,
  /* DiagArray125 */ diag::err_static_lambda, diag::ext_alias_in_init_statement, diag::ext_consteval_if, diag::ext_constexpr_body_invalid_stmt_cxx23, diag::ext_constexpr_static_var, diag::ext_cxx23_pp_directive, diag::ext_cxx23_size_t_suffix, diag::ext_cxx_label_end_of_compound_statement, diag::ext_lambda_missing_parens, diag::ext_operator_overload_static, -1,
  /* DiagArray126 */ diag::ext_decl_attrs_on_lambda, -1,
  /* DiagArray127 */ diag::ext_pack_indexing, diag::ext_placeholder_var_definition, -1,
  /* DiagArray138 */ diag::warn_cxx11_compat_binary_literal, -1,
  /* DiagArray140 */ diag::warn_cxx98_compat_alias_declaration, diag::warn_cxx98_compat_alignas, diag::warn_cxx98_compat_alignof, diag::warn_cxx98_compat_attribute, diag::warn_cxx98_compat_auto_type_specifier, diag::warn_cxx98_compat_constexpr, diag::warn_cxx98_compat_ctor_list_init, diag::warn_cxx98_compat_decltype, diag::warn_cxx98_compat_defaulted_deleted_function, diag::warn_cxx98_compat_delegating_ctor, diag::warn_cxx98_compat_empty_scalar_initializer, diag::warn_cxx98_compat_empty_sizeless_initializer, diag::warn_cxx98_compat_enum_fixed_underlying_type, diag::warn_cxx98_compat_enum_nested_name_spec, diag::warn_cxx98_compat_explicit_conversion_functions, diag::warn_cxx98_compat_for_range, diag::warn_cxx98_compat_friend_is_member, diag::warn_cxx98_compat_generalized_initializer_lists, diag::warn_cxx98_compat_goto_into_protected_scope, diag::warn_cxx98_compat_indirect_goto_in_protected_scope, diag::warn_cxx98_compat_initializer_list_init, diag::warn_cxx98_compat_inline_namespace, diag::warn_cxx98_compat_lambda, diag::warn_cxx98_compat_less_colon_colon, diag::warn_cxx98_compat_literal_operator, diag::warn_cxx98_compat_literal_ucn_control_character, diag::warn_cxx98_compat_literal_ucn_escape_basic_scs, diag::warn_cxx98_compat_noexcept_decl, diag::warn_cxx98_compat_noexcept_expr, diag::warn_cxx98_compat_non_static_member_use, diag::warn_cxx98_compat_nonclass_type_friend, diag::warn_cxx98_compat_nonstatic_member_init, diag::warn_cxx98_compat_nontrivial_union_or_anon_struct_member, diag::warn_cxx98_compat_nullptr, diag::warn_cxx98_compat_override_control_keyword, diag::warn_cxx98_compat_pass_non_pod_arg_to_vararg, diag::warn_cxx98_compat_raw_string_literal, diag::warn_cxx98_compat_ref_qualifier, diag::warn_cxx98_compat_reference_list_init, diag::warn_cxx98_compat_rvalue_reference, diag::warn_cxx98_compat_scoped_enum, diag::warn_cxx98_compat_sfinae_access_control, diag::warn_cxx98_compat_static_assert, diag::warn_cxx98_compat_static_data_member_in_union, diag::warn_cxx98_compat_switch_into_protected_scope, diag::warn_cxx98_compat_template_arg_extra_parens, diag::warn_cxx98_compat_template_arg_null, diag::warn_cxx98_compat_template_arg_object_internal, diag::warn_cxx98_compat_template_outside_of_template, diag::warn_cxx98_compat_template_parameter_default_in_function_template, diag::warn_cxx98_compat_trailing_return_type, diag::warn_cxx98_compat_two_right_angle_brackets, diag::warn_cxx98_compat_typename_outside_of_template, diag::warn_cxx98_compat_unelaborated_friend_type, diag::warn_cxx98_compat_unicode_literal, diag::warn_cxx98_compat_unicode_type, diag::warn_cxx98_compat_using_decl_constructor, diag::warn_cxx98_compat_variadic_templates, -1,
  /* DiagArray141 */ diag::warn_cxx98_compat_temp_copy, -1,
  /* DiagArray142 */ diag::warn_cxx98_compat_top_level_semi, -1,
  /* DiagArray143 */ diag::warn_cxx98_compat_template_arg_local_type, -1,
  /* DiagArray144 */ diag::warn_cxx98_compat_array_size_conversion, diag::warn_cxx98_compat_cast_fn_obj, diag::warn_cxx98_compat_empty_fnmacro_arg, diag::warn_cxx98_compat_enumerator_list_comma, diag::warn_cxx98_compat_extern_template, diag::warn_cxx98_compat_longlong, diag::warn_cxx98_compat_no_newline_eof, diag::warn_cxx98_compat_pp_line_too_big, diag::warn_cxx98_compat_variadic_macro, -1,
  /* DiagArray145 */ diag::warn_cxx98_compat_template_arg_unnamed_type, -1,
  /* DiagArray146 */ diag::ext_anonymous_union, diag::ext_c11_anonymous_struct, diag::ext_c11_feature, diag::ext_typecheck_compare_complete_incomplete_pointers, -1,
  /* DiagArray147 */ diag::warn_c23_keyword, -1,
  /* DiagArray148 */ diag::ext_binary_literal, diag::ext_c23_bitint_suffix, diag::ext_c23_pp_directive, diag::ext_c_empty_initializer, diag::ext_c_label_end_of_compound_statement, diag::ext_c_label_followed_by_declaration, diag::ext_c_nullptr, diag::ext_c_static_assert_no_message, diag::ext_parameter_name_omitted_c23, diag::warn_ext_c23_attributes, -1,
  /* DiagArray151 */ diag::warn_c99_compat_unicode_id, diag::warn_c99_compat_unicode_literal, diag::warn_c99_keyword, diag::warn_old_implicitly_unsigned_long, -1,
  /* DiagArray152 */ diag::ext_designated_init, diag::ext_designated_init_array, diag::ext_designated_init_brace_elision, diag::ext_designated_init_mixed, diag::ext_designated_init_nested, -1,
  /* DiagArray153 */ diag::ext_aggregate_init_not_constant, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_c99_whitespace_required_after_macro_name, diag::ext_empty_fnmacro_arg, diag::ext_enumerator_list_comma_c, diag::ext_hex_constant_invalid, -1,
  /* DiagArray154 */ diag::warn_call_to_pure_virtual_member_function_from_ctor_dtor, -1,
  /* DiagArray155 */ diag::warn_called_once_gets_called_twice, diag::warn_called_once_never_called, diag::warn_called_once_never_called_when, -1,
  /* DiagArray156 */ diag::warn_cast_align, -1,
  /* DiagArray157 */ diag::warn_cast_calling_conv, -1,
  /* DiagArray158 */ diag::warn_cast_function_type, -1,
  /* DiagArray159 */ diag::warn_cast_function_type_strict, -1,
  /* DiagArray160 */ diag::warn_cast_pointer_from_sel, -1,
  /* DiagArray161 */ diag::warn_cast_qual, diag::warn_cast_qual2, -1,
  /* DiagArray162 */ diag::ext_bad_cxx_cast_qualifiers_away_incoherent, -1,
  /* DiagArray164 */ diag::warn_omp_section_is_char, diag::warn_subscript_is_char, -1,
  /* DiagArray165 */ diag::warn_drv_yc_multiple_inputs_clang_cl, diag::warn_drv_ycyu_different_arg_clang_cl, diag::warn_pp_hdrstop_filename_ignored, diag::warn_pp_macro_def_mismatch_with_pch, -1,
  /* DiagArray166 */ diag::warn_conv_to_base_not_used, diag::warn_conv_to_self_not_used, diag::warn_conv_to_void_not_used, -1,
  /* DiagArray167 */ diag::warn_pass_class_arg_to_vararg, -1,
  /* DiagArray168 */ diag::warn_cmse_nonsecure_union, -1,
  /* DiagArray169 */ diag::warn_comma_operator, -1,
  /* DiagArray170 */ diag::escaped_newline_block_comment_end, diag::ext_line_comment, diag::ext_multi_line_line_comment, diag::warn_nested_block_comment, -1,
  /* DiagArray172 */ diag::ext_typecheck_comparison_of_distinct_pointers, -1,
  /* DiagArray173 */ diag::warn_completion_handler_called_twice, diag::warn_completion_handler_never_called, diag::warn_completion_handler_never_called_when, -1,
  /* DiagArray174 */ diag::ext_complex_component_init, -1,
  /* DiagArray176 */ diag::warn_compound_token_split_by_macro, -1,
  /* DiagArray177 */ diag::warn_compound_token_split_by_whitespace, -1,
  /* DiagArray178 */ diag::ext_typecheck_cond_pointer_integer_mismatch, -1,
  /* DiagArray179 */ diag::warn_maybe_uninit_var, -1,
  /* DiagArray180 */ diag::warn_module_config_macro_undef, -1,
  /* DiagArray181 */ diag::warn_impcast_integer_precision_constant, -1,
  /* DiagArray182 */ diag::warn_is_constant_evaluated_always_true_constexpr, -1,
  /* DiagArray183 */ diag::warn_logical_instead_of_bitwise, -1,
  /* DiagArray184 */ diag::warn_cxx14_compat_constexpr_not_const, -1,
  /* DiagArray185 */ diag::warn_attr_on_unconsumable_class, diag::warn_loop_state_mismatch, diag::warn_param_return_typestate_mismatch, diag::warn_param_typestate_mismatch, diag::warn_return_typestate_for_unconsumable_type, diag::warn_return_typestate_mismatch, diag::warn_use_in_invalid_state, diag::warn_use_of_temp_in_invalid_state, -1,
  /* DiagArray186 */ diag::warn_hlsl_impcast_vector_truncation, diag::warn_impcast_complex_scalar, diag::warn_impcast_vector_scalar, diag::warn_opencl_generic_address_space_arg, diag::warn_template_arg_negative, diag::warn_template_arg_too_large, -1,
  /* DiagArray188 */ diag::warn_non_aligned_allocation_function, -1,
  /* DiagArray189 */ diag::warn_coroutine_handle_address_invalid_return_type, -1,
  /* DiagArray190 */ diag::warn_coroutine_promise_unhandled_exception_required_with_exceptions, -1,
  /* DiagArray191 */ diag::warn_unreachable_default, -1,
  /* DiagArray193 */ diag::warn_objc_cdirective_format_string, -1,
  /* DiagArray194 */ diag::warn_ctad_maybe_unsupported, -1,
  /* DiagArray196 */ diag::warn_ctu_incompat_triple, -1,
  /* DiagArray197 */ diag::warn_attribute_argument_n_negative, diag::warn_cuda_attr_lambda_position, diag::warn_kern_is_inline, diag::warn_kern_is_method, diag::warn_pragma_unroll_cuda_value_in_parens, -1,
  /* DiagArray198 */ diag::warn_default_atomic_custom_getter_setter, -1,
  /* DiagArray199 */ diag::ext_cxx11_attr_placement, -1,
  /* DiagArray200 */ diag::warn_dangling_variable, diag::warn_unsupported_lifetime_extension, -1,
  /* DiagArray201 */ diag::warn_dangling_else, -1,
  /* DiagArray202 */ diag::warn_bind_ref_member_to_parameter, diag::warn_dangling_member, diag::warn_init_ptr_member_to_parameter_addr, diag::warn_new_dangling_reference, -1,
  /* DiagArray203 */ diag::warn_dangling_lifetime_pointer, diag::warn_dangling_lifetime_pointer_member, -1,
  /* DiagArray204 */ diag::warn_new_dangling_initializer_list, -1,
  /* DiagArray205 */ diag::warn_drv_darwin_sdk_invalid_settings, -1,
  /* DiagArray206 */ diag::warn_pp_date_time, -1,
  /* DiagArray207 */ diag::warn_dealloc_in_category, -1,
  /* DiagArray208 */ diag::warn_debug_compression_unavailable, -1,
  /* DiagArray209 */ diag::ext_mixed_decls_code, diag::warn_mixed_decls_code, -1,
  /* DiagArray210 */ diag::warn_defaulted_comparison_deleted, diag::warn_defaulted_method_deleted, -1,
  /* DiagArray211 */ diag::warn_drv_delayed_template_parsing_after_cxx20, -1,
  /* DiagArray212 */ diag::warn_delegating_ctor_cycle, -1,
  /* DiagArray213 */ diag::warn_delete_abstract_non_virtual_dtor, -1,
  /* DiagArray214 */ diag::ext_delete_void_ptr_operand, diag::warn_delete_incomplete, -1,
  /* DiagArray215 */ diag::warn_delete_non_virtual_dtor, -1,
  /* DiagArray217 */ diag::ext_delimited_escape_sequence, -1,
  /* DiagArray218 */ diag::warn_deprecated_lax_vec_conv_all, -1,
  /* DiagArray219 */ diag::warn_O4_is_O3, diag::warn_access_decl_deprecated, diag::warn_drv_deprecated_arg, diag::warn_drv_deprecated_custom, diag::warn_drv_treating_input_as_cxx, diag::warn_omp_depend_in_ordered_deprecated, diag::warn_omp_minus_in_reduction_deprecated, diag::warn_option_invalid_ocl_version, diag::warn_vector_long_decl_spec_combination, -1,
  /* DiagArray220 */ diag::warn_deprecated_altivec_src_compat, -1,
  /* DiagArray221 */ diag::warn_arith_conv_mixed_anon_enum_types_cxx20, -1,
  /* DiagArray222 */ diag::warn_depr_array_comparison, -1,
  /* DiagArray223 */ diag::warn_deprecated_noreturn_spelling, diag::warn_type_attribute_deprecated_on_decl, diag::warn_vector_mode_deprecated, -1,
  /* DiagArray224 */ diag::warn_deprecated_builtin, -1,
  /* DiagArray225 */ diag::warn_deprecated_comma_subscript, -1,
  /* DiagArray226 */ diag::warn_deprecated_copy, -1,
  /* DiagArray228 */ diag::warn_deprecated_copy_with_dtor, -1,
  /* DiagArray229 */ diag::warn_deprecated_copy_with_user_provided_copy, -1,
  /* DiagArray230 */ diag::warn_deprecated_copy_with_user_provided_dtor, -1,
  /* DiagArray231 */ diag::warn_deprecated_for_co_await, -1,
  /* DiagArray232 */ diag::warn_atl_uuid_deprecated, diag::warn_cstyle_param, diag::warn_deprecated, diag::warn_deprecated_fwdclass_message, diag::warn_deprecated_message, diag::warn_property_method_deprecated, -1,
  /* DiagArray233 */ diag::warn_exception_spec_deprecated, -1,
  /* DiagArray234 */ diag::warn_comparison_mixed_enum_types_cxx20, -1,
  /* DiagArray235 */ diag::warn_conditional_mixed_enum_types_cxx20, -1,
  /* DiagArray236 */ diag::warn_arith_conv_mixed_enum_types_cxx20, -1,
  /* DiagArray237 */ diag::warn_arith_conv_enum_float_cxx20, -1,
  /* DiagArray238 */ diag::warn_deprecated_def, diag::warn_unavailable_def, -1,
  /* DiagArray239 */ diag::warn_increment_bool, -1,
  /* DiagArray240 */ diag::warn_deprecated_literal_operator_id, -1,
  /* DiagArray241 */ diag::warn_deprecated_module_dot_map, -1,
  /* DiagArray242 */ diag::warn_non_prototype_changes_behavior, diag::warn_strict_uses_without_prototype, -1,
  /* DiagArray243 */ diag::warn_objc_isa_assign, diag::warn_objc_isa_use, -1,
  /* DiagArray244 */ diag::warn_objc_pointer_masking, -1,
  /* DiagArray245 */ diag::warn_objc_pointer_masking_performSelector, -1,
  /* DiagArray246 */ diag::warn_pragma_deprecated_macro_use, -1,
  /* DiagArray247 */ diag::warn_deprecated_redundant_constexpr_static_def, -1,
  /* DiagArray248 */ diag::warn_deprecated_register, -1,
  /* DiagArray249 */ diag::warn_analyzer_deprecated_option, diag::warn_analyzer_deprecated_option_with_alternative, -1,
  /* DiagArray250 */ diag::warn_deprecated_this_capture, -1,
  /* DiagArray251 */ diag::warn_ext_int_deprecated, -1,
  /* DiagArray252 */ diag::warn_deprecated_increment_decrement_volatile, diag::warn_deprecated_simple_assign_volatile, diag::warn_deprecated_volatile_param, diag::warn_deprecated_volatile_return, diag::warn_deprecated_volatile_structured_binding, -1,
  /* DiagArray254 */ diag::warn_direct_ivar_access, -1,
  /* DiagArray255 */ diag::pp_disabled_macro_expansion, -1,
  /* DiagArray258 */ diag::warn_conflicting_param_modifiers, diag::warn_conflicting_ret_type_modifiers, -1,
  /* DiagArray260 */ diag::warn_remainder_division_by_zero, -1,
  /* DiagArray261 */ diag::warn_attribute_dll_redeclaration, -1,
  /* DiagArray262 */ diag::warn_attribute_dllexport_explicit_instantiation_decl, -1,
  /* DiagArray263 */ diag::warn_attribute_dllimport_static_field_definition, -1,
  /* DiagArray264 */ diag::warn_doc_api_container_decl_mismatch, diag::warn_doc_block_command_duplicate, diag::warn_doc_block_command_empty_paragraph, diag::warn_doc_container_decl_mismatch, diag::warn_doc_function_method_decl_mismatch, diag::warn_doc_html_start_tag_expected_ident_or_greater, diag::warn_doc_html_start_tag_expected_quoted_string, diag::warn_doc_inline_command_not_enough_arguments, diag::warn_doc_param_duplicate, diag::warn_doc_param_invalid_direction, diag::warn_doc_param_not_attached_to_a_function_decl, diag::warn_doc_param_not_found, diag::warn_doc_returns_attached_to_a_void_function, diag::warn_doc_returns_not_attached_to_a_function_decl, diag::warn_doc_tparam_duplicate, diag::warn_doc_tparam_not_attached_to_a_template_decl, diag::warn_doc_tparam_not_found, diag::warn_not_a_doxygen_trailing_member_comment, diag::warn_splice_in_doxygen_comment, diag::warn_verbatim_block_end_without_start, -1,
  /* DiagArray265 */ diag::warn_doc_deprecated_not_sync, -1,
  /* DiagArray266 */ diag::warn_doc_html_end_forbidden, diag::warn_doc_html_end_unbalanced, diag::warn_doc_html_missing_end_tag, diag::warn_doc_html_start_end_mismatch, -1,
  /* DiagArray267 */ diag::warn_doc_param_spaces_in_direction, -1,
  /* DiagArray268 */ diag::warn_correct_comment_command_name, diag::warn_unknown_comment_command_name, -1,
  /* DiagArray269 */ diag::ext_dollar_in_identifier, -1,
  /* DiagArray270 */ diag::warn_impcast_double_promotion, -1,
  /* DiagArray271 */ diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_qualified_dtor_named_in_lexical_scope, -1,
  /* DiagArray272 */ diag::ext_destructor_typedef_name, -1,
  /* DiagArray273 */ diag::ext_duplicate_declspec, diag::ext_warn_duplicate_declspec, diag::warn_attribute_address_multiple_identical_qualifiers, diag::warn_duplicate_declspec, -1,
  /* DiagArray274 */ diag::warn_duplicate_enum_values, -1,
  /* DiagArray275 */ diag::warn_method_param_declaration, -1,
  /* DiagArray276 */ diag::warn_duplicate_method_decl, -1,
  /* DiagArray277 */ diag::warn_duplicate_protocol_def, -1,
  /* DiagArray278 */ diag::warn_drv_dxc_missing_dxv, -1,
  /* DiagArray279 */ diag::warn_dyn_class_memaccess, -1,
  /* DiagArray280 */ diag::ext_dynamic_exception_spec, -1,
  /* DiagArray281 */ diag::warn_eagerly_load_for_standard_cplusplus_modules, -1,
  /* DiagArray283 */ diag::ext_enum_base_in_type_specifier, -1,
  /* DiagArray284 */ diag::ext_elaborated_enum_class, -1,
  /* DiagArray285 */ diag::ext_embedded_directive, -1,
  /* DiagArray286 */ diag::warn_empty_for_body, diag::warn_empty_if_body, diag::warn_empty_range_based_for_body, diag::warn_empty_switch_body, diag::warn_empty_while_body, -1,
  /* DiagArray287 */ diag::ext_decomp_decl_empty, -1,
  /* DiagArray288 */ diag::warn_empty_init_statement, -1,
  /* DiagArray289 */ diag::ext_empty_translation_unit, -1,
  /* DiagArray290 */ diag::warn_incomplete_encoded_type, -1,
  /* DiagArray292 */ diag::warn_comparison_mixed_enum_types, -1,
  /* DiagArray293 */ diag::warn_conditional_mixed_enum_types, -1,
  /* DiagArray294 */ diag::warn_comparison_of_mixed_enum_types_switch, -1,
  /* DiagArray295 */ diag::warn_constexpr_unscoped_enum_out_of_range, -1,
  /* DiagArray296 */ diag::warn_impcast_different_enum_types, -1,
  /* DiagArray297 */ diag::warn_arith_conv_mixed_enum_types, -1,
  /* DiagArray298 */ diag::warn_arith_conv_enum_float, -1,
  /* DiagArray299 */ diag::ext_enum_too_large, diag::ext_enumerator_increment_too_large, -1,
  /* DiagArray300 */ diag::warn_cdtor_function_try_handler_mem_expr, diag::warn_exception_caught_by_earlier_handler, diag::warn_throw_in_noexcept_func, -1,
  /* DiagArray301 */ diag::ext_excess_initializers, diag::ext_excess_initializers_for_sizeless_type, diag::ext_excess_initializers_in_char_array_initializer, diag::ext_initializer_string_for_char_array_too_long, -1,
  /* DiagArray302 */ diag::warn_anyx86_excessive_regsave, -1,
  /* DiagArray303 */ diag::warn_exit_time_destructor, -1,
  /* DiagArray304 */ diag::warn_defined_in_function_type_macro, diag::warn_defined_in_object_type_macro, -1,
  /* DiagArray305 */ diag::warn_experimental_header_unit, -1,
  /* DiagArray306 */ diag::warn_direct_initialize_call, diag::warn_direct_super_initialize_call, -1,
  /* DiagArray307 */ diag::warn_arc_strong_pointer_objc_pointer, -1,
  /* DiagArray309 */ diag::warn_zero_size_struct_union_in_extern_c, -1,
  /* DiagArray310 */ diag::warn_extern_init, -1,
  /* DiagArray311 */ diag::warn_arm_interrupt_calling_convention, -1,
  /* DiagArray312 */ diag::warn_namespace_member_extra_qualification, -1,
  /* DiagArray313 */ diag::ext_extra_semi, diag::warn_extra_semi_after_mem_fn_def, -1,
  /* DiagArray314 */ diag::warn_null_statement, -1,
  /* DiagArray315 */ diag::ext_pp_extra_tokens_at_eol, diag::warn_omp_extra_tokens_at_eol, -1,
  /* DiagArray316 */ diag::warn_final_dtor_non_final_class, -1,
  /* DiagArray317 */ diag::warn_pragma_final_macro, -1,
  /* DiagArray318 */ diag::ext_clang_c_enum_fixed_underlying_type, -1,
  /* DiagArray319 */ diag::warn_fixedpoint_constant_overflow, -1,
  /* DiagArray320 */ diag::warn_flag_enum_constant_out_of_range, -1,
  /* DiagArray321 */ diag::ext_flexible_array_in_array, diag::ext_flexible_array_in_struct, -1,
  /* DiagArray322 */ diag::warn_impcast_float_integer, -1,
  /* DiagArray323 */ diag::warn_floatingpoint_eq, -1,
  /* DiagArray324 */ diag::warn_impcast_float_to_integer, diag::warn_impcast_float_to_integer_out_of_range, -1,
  /* DiagArray325 */ diag::warn_impcast_float_to_integer_zero, -1,
  /* DiagArray326 */ diag::warn_redundant_loop_iteration, diag::warn_variables_not_in_loop_body, -1,
  /* DiagArray327 */ diag::warn_format_P_no_precision, diag::warn_format_argument_needs_cast, diag::warn_format_bool_as_character, diag::warn_format_conversion_argument_type_mismatch, diag::warn_format_invalid_annotation, diag::warn_format_invalid_positional_specifier, diag::warn_format_mix_positional_nonpositional_args, diag::warn_format_nonsensical_length, diag::warn_format_string_is_wide_literal, diag::warn_format_zero_positional_specifier, diag::warn_missing_format_string, diag::warn_printf_ObjCflags_without_ObjCConversion, diag::warn_printf_asterisk_missing_arg, diag::warn_printf_asterisk_wrong_type, diag::warn_printf_empty_objc_flag, diag::warn_printf_format_string_contains_null_char, diag::warn_printf_format_string_not_null_terminated, diag::warn_printf_ignored_flag, diag::warn_printf_incomplete_specifier, diag::warn_printf_invalid_objc_flag, diag::warn_printf_narg_not_supported, diag::warn_printf_nonsensical_flag, diag::warn_printf_nonsensical_optional_amount, diag::warn_printf_positional_arg_exceeds_data_args, diag::warn_scanf_nonzero_width, diag::warn_scanf_scanlist_incomplete, -1,
  /* DiagArray328 */ diag::warn_printf_data_arg_not_used, -1,
  /* DiagArray329 */ diag::warn_printf_insufficient_data_args, -1,
  /* DiagArray330 */ diag::warn_format_invalid_conversion, -1,
  /* DiagArray331 */ diag::warn_format_non_standard, diag::warn_format_non_standard_conversion_spec, diag::warn_format_non_standard_positional_arg, -1,
  /* DiagArray332 */ diag::warn_format_nonliteral, -1,
  /* DiagArray333 */ diag::warn_format_overflow, -1,
  /* DiagArray334 */ diag::warn_format_overflow_non_kprintf, -1,
  /* DiagArray335 */ diag::warn_format_argument_needs_cast_pedantic, diag::warn_format_conversion_argument_type_mismatch_pedantic, -1,
  /* DiagArray336 */ diag::warn_format_nonliteral_noargs, -1,
  /* DiagArray337 */ diag::warn_format_truncation, -1,
  /* DiagArray338 */ diag::warn_format_truncation_non_kprintf, -1,
  /* DiagArray339 */ diag::warn_format_conversion_argument_type_mismatch_confusion, -1,
  /* DiagArray341 */ diag::warn_empty_format_string, -1,
  /* DiagArray343 */ diag::warn_fortify_scanf_overflow, diag::warn_fortify_source_overflow, diag::warn_fortify_source_size_mismatch, diag::warn_fortify_strlen_overflow, -1,
  /* DiagArray344 */ diag::warn_four_char_character_literal, -1,
  /* DiagArray345 */ diag::warn_frame_address, -1,
  /* DiagArray346 */ diag::warn_fe_backend_frame_larger_than, diag::warn_fe_frame_larger_than, -1,
  /* DiagArray348 */ diag::warn_framework_include_private_from_public, -1,
  /* DiagArray349 */ diag::warn_free_nonheap_object, -1,
  /* DiagArray350 */ diag::ext_enum_friend, -1,
  /* DiagArray351 */ diag::warn_function_def_in_objc_container, -1,
  /* DiagArray352 */ diag::warn_dispatch_body_ignored, diag::warn_multiversion_duplicate_entries, diag::warn_target_clone_duplicate_options, diag::warn_target_clone_no_impact_options, -1,
  /* DiagArray353 */ diag::warn_drv_fuse_ld_path, -1,
  /* DiagArray356 */ diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_warn_gnu_final, diag::warn_attribute_on_function_definition, diag::warn_break_binds_to_switch, diag::warn_cleanup_ext, diag::warn_gcc_attribute_location, diag::warn_gcc_ignores_type_attr, diag::warn_gcc_requires_variadic_function, diag::warn_gcc_variable_decl_in_for_loop, diag::warn_loop_ctrl_binds_to_inner, -1,
  /* DiagArray357 */ diag::ext_generic_with_type_arg, -1,
  /* DiagArray358 */ diag::warn_global_constructor, diag::warn_global_destructor, -1,
  /* DiagArray359 */ diag::warn_drv_global_isel_incomplete, diag::warn_drv_global_isel_incomplete_opt, -1,
  /* DiagArray361 */ diag::ext_alignof_expr, -1,
  /* DiagArray362 */ diag::ext_gnu_anonymous_struct, -1,
  /* DiagArray363 */ diag::ext_array_init_parens, -1,
  /* DiagArray364 */ diag::ext_auto_type, -1,
  /* DiagArray366 */ diag::ext_gnu_case_range, -1,
  /* DiagArray367 */ diag::ext_integer_complex, -1,
  /* DiagArray368 */ diag::ext_array_init_copy, -1,
  /* DiagArray369 */ diag::ext_gnu_conditional_expr, -1,
  /* DiagArray370 */ diag::ext_gnu_array_range, diag::ext_gnu_missing_equal_designator, diag::ext_gnu_old_style_field_designator, -1,
  /* DiagArray372 */ diag::ext_empty_struct_union, diag::ext_flexible_array_empty_aggregate_gnu, diag::ext_no_named_members_in_struct_union, -1,
  /* DiagArray373 */ diag::ext_flexible_array_init, -1,
  /* DiagArray374 */ diag::ext_flexible_array_union_gnu, -1,
  /* DiagArray375 */ diag::ext_expr_not_ice, diag::ext_in_class_initializer_non_constant, diag::ext_vla_folded_to_constant, -1,
  /* DiagArray376 */ diag::ext_imaginary_constant, -1,
  /* DiagArray377 */ diag::ext_pp_include_next_directive, -1,
  /* DiagArray378 */ diag::warn_gnu_inline_cplusplus_without_extern, -1,
  /* DiagArray379 */ diag::ext_gnu_address_of_label, diag::ext_gnu_indirect_goto, -1,
  /* DiagArray380 */ diag::ext_pp_gnu_line_directive, -1,
  /* DiagArray381 */ diag::warn_gnu_null_ptr_arith, -1,
  /* DiagArray382 */ diag::ext_type_defined_in_offsetof, -1,
  /* DiagArray383 */ diag::ext_gnu_ptr_func_arith, diag::ext_gnu_subscript_void_type, diag::ext_gnu_void_ptr, -1,
  /* DiagArray384 */ diag::ext_forward_ref_enum_def, -1,
  /* DiagArray385 */ diag::ext_gnu_statement_expr, -1,
  /* DiagArray386 */ diag::ext_gnu_statement_expr_macro, -1,
  /* DiagArray387 */ diag::ext_in_class_initializer_float_type, -1,
  /* DiagArray388 */ diag::ext_string_literal_operator_template, -1,
  /* DiagArray389 */ diag::ext_typecheck_cast_to_union, -1,
  /* DiagArray390 */ diag::ext_variable_sized_type_in_struct, -1,
  /* DiagArray391 */ diag::ext_pp_line_zero, -1,
  /* DiagArray392 */ diag::ext_missing_varargs_arg, diag::ext_paste_comma, -1,
  /* DiagArray393 */ diag::warn_maybe_capture_bad_target_this_ptr, -1,
  /* DiagArray394 */ diag::warn_header_guard, -1,
  /* DiagArray395 */ diag::warn_using_directive_in_header, -1,
  /* DiagArray396 */ diag::warn_hip_omp_target_directives, -1,
  /* DiagArray397 */ diag::warn_ignored_hip_only_option, -1,
  /* DiagArray398 */ diag::ext_hlsl_access_specifiers, -1,
  /* DiagArray399 */ diag::warn_condition_is_idiomatic_assignment, -1,
  /* DiagArray400 */ diag::ext_cannot_use_trivial_abi, diag::warn_alias_to_weak_alias, diag::warn_alias_with_section, diag::warn_aligned_attr_underaligned, diag::warn_attr_abi_tag_namespace, diag::warn_attribute_after_definition_ignored, diag::warn_attribute_cmse_entry_static, diag::warn_attribute_dllexport_explicit_instantiation_def, diag::warn_attribute_has_no_effect_on_compile_time_if, diag::warn_attribute_has_no_effect_on_infinite_loop, diag::warn_attribute_iboutlet, diag::warn_attribute_ignored, diag::warn_attribute_ignored_for_field_of_type, diag::warn_attribute_ignored_no_calls_in_stmt, diag::warn_attribute_ignored_non_function_pointer, diag::warn_attribute_ignored_on_inline, diag::warn_attribute_ignored_on_non_definition, diag::warn_attribute_invalid_on_definition, diag::warn_attribute_no_decl, diag::warn_attribute_nonnull_no_pointers, diag::warn_attribute_nonnull_parm_no_args, diag::warn_attribute_not_on_decl, diag::warn_attribute_pointer_or_reference_only, diag::warn_attribute_pointers_only, diag::warn_attribute_precede_definition, diag::warn_attribute_return_pointers_only, diag::warn_attribute_return_pointers_refs_only, diag::warn_attribute_sentinel_named_arguments, diag::warn_attribute_sentinel_not_variadic, diag::warn_attribute_type_not_supported, diag::warn_attribute_type_not_supported_global, diag::warn_attribute_unknown_visibility, diag::warn_attribute_void_function_method, diag::warn_attribute_weak_on_field, diag::warn_attribute_weak_on_local, diag::warn_attribute_wrong_decl_type, diag::warn_attribute_wrong_decl_type_str, diag::warn_attributes_likelihood_ifstmt_conflict, diag::warn_block_literal_attributes_on_omitted_return_type, diag::warn_cconv_unsupported, diag::warn_const_attr_with_pure_attr, diag::warn_cuda_maxclusterrank_sm_90, diag::warn_cxx11_gnu_attribute_on_type, diag::warn_declspec_allocator_nonpointer, diag::warn_declspec_attribute_ignored, diag::warn_deprecated_anonymous_namespace, diag::warn_deprecated_ignored_on_using, diag::warn_dllimport_dropped_from_inline_function, diag::warn_duplicate_attribute, diag::warn_duplicate_attribute_exact, diag::warn_function_attribute_ignored_in_stmt, diag::warn_function_stmt_attribute_precedence, diag::warn_gc_attribute_weak_on_local, diag::warn_gnu_inline_attribute_requires_inline, diag::warn_ignored_ms_inheritance, diag::warn_ignored_objc_externally_retained, diag::warn_import_on_definition, diag::warn_internal_linkage_local_storage, diag::warn_interrupt_attribute_invalid, diag::warn_microsoft_qualifiers_ignored, diag::warn_mig_server_routine_does_not_return_kern_return_t, diag::warn_mismatched_import, diag::warn_mmap_unknown_attribute, diag::warn_nocf_check_attribute_ignored, diag::warn_noderef_on_non_pointer_or_array, diag::warn_nothrow_attribute_ignored, diag::warn_ns_attribute_wrong_parameter_type, diag::warn_ns_attribute_wrong_return_type, diag::warn_objc_direct_ignored, diag::warn_objc_direct_property_ignored, diag::warn_opencl_attr_deprecated_ignored, diag::warn_pure_function_returns_void, diag::warn_require_const_init_added_too_late, diag::warn_riscv_repeated_interrupt_attribute, diag::warn_sycl_kernel_invalid_template_param_type, diag::warn_sycl_kernel_num_of_function_params, diag::warn_sycl_kernel_num_of_template_params, diag::warn_sycl_kernel_return_type, diag::warn_transparent_union_attribute_field_size_align, diag::warn_transparent_union_attribute_floating, diag::warn_transparent_union_attribute_not_definition, diag::warn_transparent_union_attribute_zero_fields, diag::warn_type_attribute_wrong_type, diag::warn_unhandled_ms_attribute_ignored, diag::warn_unsupported_target_attribute, diag::warn_unused_result_typedef_unsupported_spelling, diag::warn_wrong_clang_attr_namespace, -1,
  /* DiagArray401 */ diag::warn_missing_sdksettings_for_availability_checking, -1,
  /* DiagArray402 */ diag::warn_drv_pch_ignoring_gch_dir, diag::warn_drv_pch_ignoring_gch_file, -1,
  /* DiagArray403 */ diag::warn_drv_unsupported_opt_for_target, diag::warn_ignored_gcc_optimization, -1,
  /* DiagArray404 */ diag::warn_pragma_intrinsic_builtin, -1,
  /* DiagArray406 */ diag::warn_clause_expected_string, diag::warn_pragma_align_expected_equal, diag::warn_pragma_align_invalid_option, diag::warn_pragma_comment_ignored, diag::warn_pragma_debug_dependent_argument, diag::warn_pragma_debug_missing_argument, diag::warn_pragma_debug_missing_command, diag::warn_pragma_debug_unexpected_argument, diag::warn_pragma_debug_unexpected_command, diag::warn_pragma_debug_unknown_module, diag::warn_pragma_expected_action_or_r_paren, diag::warn_pragma_expected_colon, diag::warn_pragma_expected_colon_r_paren, diag::warn_pragma_expected_comma, diag::warn_pragma_expected_identifier, diag::warn_pragma_expected_init_seg, diag::warn_pragma_expected_integer, diag::warn_pragma_expected_lparen, diag::warn_pragma_expected_non_wide_string, diag::warn_pragma_expected_predicate, diag::warn_pragma_expected_punc, diag::warn_pragma_expected_rparen, diag::warn_pragma_expected_section_label_or_name, diag::warn_pragma_expected_section_name, diag::warn_pragma_expected_section_push_pop_or_name, diag::warn_pragma_expected_string, diag::warn_pragma_extra_tokens_at_eol, diag::warn_pragma_force_cuda_host_device_bad_arg, diag::warn_pragma_fp_ignored, diag::warn_pragma_init_seg_unsupported_target, diag::warn_pragma_invalid_action, diag::warn_pragma_invalid_argument, diag::warn_pragma_invalid_specific_action, diag::warn_pragma_missing_argument, diag::warn_pragma_ms_fenv_access, diag::warn_pragma_ms_struct, diag::warn_pragma_options_align_reset_failed, diag::warn_pragma_options_expected_align, diag::warn_pragma_pack_invalid_alignment, diag::warn_pragma_pack_malformed, diag::warn_pragma_pop_failed, diag::warn_pragma_pop_macro_no_push, diag::warn_pragma_unknown_extension, diag::warn_pragma_unsupported_action, diag::warn_pragma_unsupported_extension, diag::warn_pragma_unused_expected_var, diag::warn_pragma_unused_expected_var_arg, diag::warn_pragma_unused_undeclared_var, diag::warn_stdc_unknown_rounding_mode, -1,
  /* DiagArray407 */ diag::warn_arc_lifetime_result_type, diag::warn_block_literal_qualifiers_on_omitted_return_type, diag::warn_qual_return_type, diag::warn_typecheck_function_qualifiers_ignored, -1,
  /* DiagArray408 */ diag::warn_typecheck_reference_qualifiers, -1,
  /* DiagArray410 */ diag::warn_auto_implicit_atomic_property, diag::warn_implicit_atomic_property, -1,
  /* DiagArray411 */ diag::warn_impcast_integer_float_precision_constant, -1,
  /* DiagArray412 */ diag::warn_impcast_floating_point_to_bool, -1,
  /* DiagArray413 */ diag::ext_implicit_exception_spec_mismatch, -1,
  /* DiagArray414 */ diag::warn_unannotated_fallthrough, -1,
  /* DiagArray415 */ diag::warn_unannotated_fallthrough_per_function, -1,
  /* DiagArray416 */ diag::warn_impcast_fixed_point_range, -1,
  /* DiagArray417 */ diag::warn_impcast_float_precision, diag::warn_impcast_float_result_precision, -1,
  /* DiagArray418 */ diag::ext_implicit_function_decl_c99, diag::ext_implicit_lib_function_decl, diag::ext_implicit_lib_function_decl_c99, diag::warn_builtin_unknown, diag::warn_implicit_function_decl, -1,
  /* DiagArray419 */ diag::ext_missing_type_specifier, diag::ext_param_not_declared, diag::warn_missing_type_specifier, -1,
  /* DiagArray420 */ diag::warn_impcast_high_order_zero_bits, diag::warn_impcast_integer_precision, -1,
  /* DiagArray421 */ diag::warn_impcast_integer_float_precision, -1,
  /* DiagArray422 */ diag::warn_implicitly_retains_self, -1,
  /* DiagArray423 */ diag::ext_integer_literal_too_large_for_signed, -1,
  /* DiagArray425 */ diag::ext_pp_import_directive, -1,
  /* DiagArray426 */ diag::warn_inaccessible_base_class, -1,
  /* DiagArray427 */ diag::warn_pp_include_angled_in_module_purview, -1,
  /* DiagArray428 */ diag::pp_include_next_absolute_path, -1,
  /* DiagArray429 */ diag::pp_include_next_in_primary, -1,
  /* DiagArray430 */ diag::warn_deep_exception_specs_differ, diag::warn_incompatible_exception_specs, -1,
  /* DiagArray431 */ diag::ext_typecheck_convert_incompatible_function_pointer, -1,
  /* DiagArray432 */ diag::warn_typecheck_convert_incompatible_function_pointer_strict, -1,
  /* DiagArray433 */ diag::warn_redecl_library_builtin, -1,
  /* DiagArray434 */ diag::warn_section_msvc_compat, -1,
  /* DiagArray435 */ diag::warn_cxx_ms_struct, diag::warn_npot_ms_struct, -1,
  /* DiagArray436 */ diag::ext_typecheck_convert_incompatible_pointer, -1,
  /* DiagArray437 */ diag::ext_nested_pointer_qualifier_mismatch, diag::ext_typecheck_convert_discards_qualifiers, diag::warn_bad_cxx_cast_nested_pointer_addr_space, -1,
  /* DiagArray438 */ diag::warn_property_types_are_incompatible, -1,
  /* DiagArray439 */ diag::warn_incompatible_sysroot, -1,
  /* DiagArray440 */ diag::warn_mmap_incomplete_framework_module_declaration, -1,
  /* DiagArray441 */ diag::warn_undef_method_impl, -1,
  /* DiagArray443 */ diag::warn_implicit_decl_no_jmp_buf, -1,
  /* DiagArray444 */ diag::warn_missing_submodule, diag::warn_mmap_umbrella_dir_not_found, diag::warn_uncovered_module_header, -1,
  /* DiagArray445 */ diag::warn_redeclaration_without_attribute_prev_attribute_ignored, diag::warn_redeclaration_without_import_attribute, -1,
  /* DiagArray446 */ diag::warn_inconsistent_destructor_marked_not_override_overriding, -1,
  /* DiagArray447 */ diag::warn_inconsistent_function_marked_not_override_overriding, -1,
  /* DiagArray448 */ diag::ext_increment_bool, -1,
  /* DiagArray449 */ diag::warn_infinite_recursive_function, -1,
  /* DiagArray451 */ diag::ext_initializer_overrides, diag::ext_initializer_union_overrides, diag::warn_initializer_overrides, -1,
  /* DiagArray452 */ diag::ext_out_of_line_qualified_id_type_names_constructor, -1,
  /* DiagArray454 */ diag::warn_fe_inline_asm, -1,
  /* DiagArray455 */ diag::warn_inline_namespace_reopened_noninline, -1,
  /* DiagArray456 */ diag::ext_operator_new_delete_declared_inline, -1,
  /* DiagArray457 */ diag::warn_explicit_instantiation_after_specialization, -1,
  /* DiagArray458 */ diag::ext_typecheck_convert_int_pointer, diag::ext_typecheck_convert_pointer_int, -1,
  /* DiagArray460 */ diag::warn_enum_constant_in_bool_context, diag::warn_left_shift_in_bool_context, -1,
  /* DiagArray461 */ diag::warn_int_to_pointer_cast, -1,
  /* DiagArray462 */ diag::warn_int_to_void_pointer_cast, -1,
  /* DiagArray463 */ diag::warn_integer_constant_overflow, -1,
  /* DiagArray464 */ diag::warn_drv_missing_plugin_arg, diag::warn_drv_missing_plugin_name, diag::warn_drv_msp430_hwmult_mismatch, diag::warn_drv_msp430_hwmult_no_device, diag::warn_drv_msp430_hwmult_unsupported, diag::warn_drv_object_size_disabled_O0, diag::warn_drv_optimization_value, diag::warn_fe_backend_invalid_feature_flag, diag::warn_fe_backend_readonly_feature_flag, diag::warn_target_unrecognized_env, diag::warn_target_unsupported_extension, -1,
  /* DiagArray465 */ diag::ext_constexpr_function_never_constant_expr, -1,
  /* DiagArray466 */ diag::warn_invalid_feature_combination, -1,
  /* DiagArray467 */ diag::warn_iboutlet_object_type, diag::warn_iboutletcollection_property_assign, -1,
  /* DiagArray468 */ diag::warn_invalid_initializer_from_system_header, -1,
  /* DiagArray469 */ diag::warn_invalid_ios_deployment_target, -1,
  /* DiagArray470 */ diag::warn_attribute_no_builtin_invalid_builtin_name, -1,
  /* DiagArray471 */ diag::warn_falloff_noreturn_function, diag::warn_noreturn_function_has_return_expr, -1,
  /* DiagArray472 */ diag::ext_offsetof_non_pod_type, diag::ext_offsetof_non_standardlayout_type, -1,
  /* DiagArray473 */ diag::warn_drv_unable_to_find_directory_expected, -1,
  /* DiagArray474 */ diag::ext_partial_spec_not_more_specialized_than_primary, -1,
  /* DiagArray476 */ diag::ext_empty_character, diag::ext_unterminated_char_or_string, -1,
  /* DiagArray477 */ diag::warn_bad_character_encoding, diag::warn_bad_string_encoding, -1,
  /* DiagArray478 */ diag::warn_static_assert_message_constexpr, -1,
  /* DiagArray479 */ diag::ext_pp_bad_paste_ms, -1,
  /* DiagArray480 */ diag::warn_unevaluated_string_prefix, -1,
  /* DiagArray481 */ diag::warn_invalid_utf8_in_comment, -1,
  /* DiagArray482 */ diag::warn_jump_out_of_seh_finally, -1,
  /* DiagArray483 */ diag::ext_keyword_as_ident, -1,
  /* DiagArray484 */ diag::warn_pp_macro_hides_keyword, -1,
  /* DiagArray485 */ diag::warn_knl_knm_isa_support_removed, -1,
  /* DiagArray486 */ diag::ext_param_promoted_not_compatible_with_prototype, -1,
  /* DiagArray487 */ diag::ext_token_used, -1,
  /* DiagArray488 */ diag::warn_parameter_size, diag::warn_return_value_size, -1,
  /* DiagArray490 */ diag::warn_fe_linking_module, -1,
  /* DiagArray491 */ diag::warn_impcast_literal_float_to_integer, diag::warn_impcast_literal_float_to_integer_out_of_range, -1,
  /* DiagArray492 */ diag::warn_float_compare_literal, diag::warn_float_overflow, diag::warn_float_underflow, -1,
  /* DiagArray493 */ diag::ext_template_arg_local_type, -1,
  /* DiagArray494 */ diag::warn_logical_not_on_lhs_of_check, -1,
  /* DiagArray495 */ diag::warn_logical_and_in_logical_or, -1,
  /* DiagArray496 */ diag::ext_c99_longlong, -1,
  /* DiagArray498 */ diag::ext_pp_macro_redef, -1,
  /* DiagArray499 */ diag::ext_main_used, diag::ext_noreturn_main, diag::ext_variadic_main, diag::warn_main_one_arg, diag::warn_main_redefined, diag::warn_main_returns_bool_literal, diag::warn_static_main, -1,
  /* DiagArray500 */ diag::ext_main_returns_nonint, -1,
  /* DiagArray501 */ diag::warn_has_warning_invalid_option, -1,
  /* DiagArray502 */ diag::ext_many_braces_around_init, -1,
  /* DiagArray503 */ diag::ext_mathematical_notation, -1,
  /* DiagArray504 */ diag::warn_max_tokens, diag::warn_max_tokens_total, -1,
  /* DiagArray505 */ diag::warn_max_unsigned_zero, -1,
  /* DiagArray506 */ diag::warn_suspicious_sizeof_memset, -1,
  /* DiagArray507 */ diag::warn_memsize_comparison, -1,
  /* DiagArray508 */ diag::warn_non_contravariant_param_types, diag::warn_non_covariant_ret_types, -1,
  /* DiagArray510 */ diag::ext_ms_abstract_keyword, -1,
  /* DiagArray511 */ diag::ext_anonymous_record_with_type, diag::ext_ms_anonymous_record, -1,
  /* DiagArray512 */ diag::ext_ms_cast_fn_obj, diag::ext_ms_impcast_fn_obj, -1,
  /* DiagArray513 */ diag::ext_charize_microsoft, -1,
  /* DiagArray514 */ diag::ext_comment_paste_microsoft, -1,
  /* DiagArray515 */ diag::ext_default_init_const, -1,
  /* DiagArray516 */ diag::ext_pp_operator_used_as_macro_name, -1,
  /* DiagArray517 */ diag::ext_param_default_argument_redefinition, -1,
  /* DiagArray518 */ diag::warn_attribute_section_drectve, -1,
  /* DiagArray519 */ diag::ext_ctrl_z_eof_microsoft, -1,
  /* DiagArray520 */ diag::ext_ms_forward_ref_enum, -1,
  /* DiagArray521 */ diag::ext_enumerator_too_large, -1,
  /* DiagArray522 */ diag::ext_ellipsis_exception_spec, diag::ext_incomplete_in_exception_spec, diag::ext_mismatched_exception_spec, diag::ext_mismatched_exception_spec_explicit_instantiation, diag::ext_override_exception_spec, -1,
  /* DiagArray523 */ diag::warn_microsoft_dependent_exists, -1,
  /* DiagArray524 */ diag::ext_ms_explicit_constructor_call, -1,
  /* DiagArray525 */ diag::warn_member_extra_qualification, -1,
  /* DiagArray526 */ diag::ext_ms_c_enum_fixed_underlying_type, -1,
  /* DiagArray527 */ diag::ext_flexible_array_empty_aggregate_ms, diag::ext_flexible_array_union_ms, -1,
  /* DiagArray528 */ diag::ext_goto_into_protected_scope, -1,
  /* DiagArray529 */ diag::ext_ms_ambiguous_direct_base, -1,
  /* DiagArray530 */ diag::ext_pp_include_search_ms, -1,
  /* DiagArray531 */ diag::ext_init_from_predefined, -1,
  /* DiagArray532 */ diag::ext_mutable_reference, -1,
  /* DiagArray533 */ diag::ext_pure_function_definition, -1,
  /* DiagArray534 */ diag::ext_static_non_static, -1,
  /* DiagArray535 */ diag::ext_ms_sealed_keyword, -1,
  /* DiagArray536 */ diag::ext_ms_static_assert, -1,
  /* DiagArray537 */ diag::ext_string_literal_from_predefined, -1,
  /* DiagArray538 */ diag::ext_explicit_instantiation_duplicate, diag::ext_found_in_dependent_base, diag::ext_found_later_in_class, diag::ext_ms_delayed_template_argument, diag::ext_ms_deref_template_argument, diag::ext_ms_template_spec_redecl_out_of_scope, diag::ext_ms_template_type_arg_missing_typename, diag::ext_static_out_of_line, diag::ext_undeclared_unqual_id_with_dependent_base, diag::ext_unqualified_base_class, -1,
  /* DiagArray539 */ diag::ext_template_param_shadow, -1,
  /* DiagArray540 */ diag::ext_union_member_of_reference_type, -1,
  /* DiagArray541 */ diag::ext_friend_tag_redecl_outside_namespace, -1,
  /* DiagArray542 */ diag::ext_ms_using_declaration_inaccessible, -1,
  /* DiagArray543 */ diag::ext_pseudo_dtor_on_void, -1,
  /* DiagArray544 */ diag::warn_profile_data_misexpect, -1,
  /* DiagArray545 */ diag::warn_misleading_indentation, -1,
  /* DiagArray546 */ diag::warn_mismatched_delete_new, -1,
  /* DiagArray547 */ diag::warn_conflicting_param_types, -1,
  /* DiagArray548 */ diag::warn_conflicting_ret_types, -1,
  /* DiagArray549 */ diag::warn_struct_class_previous_tag_mismatch, diag::warn_struct_class_tag_mismatch, -1,
  /* DiagArray550 */ diag::warn_missing_braces, -1,
  /* DiagArray551 */ diag::ext_constinit_missing, -1,
  /* DiagArray552 */ diag::ext_no_declarators, diag::ext_standalone_specifier, diag::ext_typedef_without_a_name, diag::warn_standalone_specifier, -1,
  /* DiagArray553 */ diag::warn_missing_designated_field_initializers, -1,
  /* DiagArray554 */ diag::ext_missing_exception_specification, -1,
  /* DiagArray555 */ diag::warn_missing_field_initializers, -1,
  /* DiagArray558 */ diag::warn_missing_method_return_type, -1,
  /* DiagArray559 */ diag::warn_drv_missing_multilib, -1,
  /* DiagArray560 */ diag::warn_overriding_method_missing_noescape, -1,
  /* DiagArray561 */ diag::warn_suggest_noreturn_block, diag::warn_suggest_noreturn_function, -1,
  /* DiagArray562 */ diag::warn_cconv_knr, -1,
  /* DiagArray563 */ diag::warn_missing_prototype, -1,
  /* DiagArray564 */ diag::warn_missing_selector_name, -1,
  /* DiagArray565 */ diag::warn_missing_sysroot, -1,
  /* DiagArray566 */ diag::warn_missing_variable_declarations, -1,
  /* DiagArray567 */ diag::warn_omp_assume_attribute_string_unknown_suggested, -1,
  /* DiagArray568 */ diag::remark_module_build, diag::remark_module_build_done, diag::remark_module_lock_failure, diag::remark_module_lock_timeout, -1,
  /* DiagArray569 */ diag::warn_module_conflict, diag::warn_module_system_bit_conflict, -1,
  /* DiagArray570 */ diag::warn_module_config_mismatch, -1,
  /* DiagArray571 */ diag::warn_duplicate_module_file_extension, -1,
  /* DiagArray572 */ diag::remark_module_import, -1,
  /* DiagArray573 */ diag::ext_module_import_in_extern_c, -1,
  /* DiagArray574 */ diag::remark_pp_include_directive_modular_translation, -1,
  /* DiagArray575 */ diag::remark_module_lock, -1,
  /* DiagArray576 */ diag::ext_equivalent_internal_linkage_decl_in_modules, -1,
  /* DiagArray577 */ diag::ext_module_import_not_at_top_level_noop, -1,
  /* DiagArray581 */ diag::warn_drv_msvc_not_found, -1,
  /* DiagArray582 */ diag::warn_drv_multi_gpu_arch, -1,
  /* DiagArray583 */ diag::warn_multichar_character_literal, -1,
  /* DiagArray584 */ diag::warn_vbase_moved_multiple_times, -1,
  /* DiagArray585 */ diag::warn_fp_nan_inf_when_disabled, -1,
  /* DiagArray587 */ diag::ext_anonymous_record_with_anonymous_type, -1,
  /* DiagArray589 */ diag::warn_operator_new_returns_null, -1,
  /* DiagArray590 */ diag::ext_no_newline_eof, diag::warn_no_newline_eof, -1,
  /* DiagArray591 */ diag::warn_dereference_of_noderef_type, diag::warn_dereference_of_noderef_type_no_decl, diag::warn_noderef_to_dereferenceable_pointer, -1,
  /* DiagArray593 */ diag::ext_non_c_like_anon_struct_in_typedef, -1,
  /* DiagArray595 */ diag::warn_non_literal_null_pointer, -1,
  /* DiagArray596 */ diag::warn_non_modular_include_in_framework_module, -1,
  /* DiagArray597 */ diag::warn_non_modular_include_in_module, -1,
  /* DiagArray598 */ diag::warn_cannot_pass_non_pod_arg_to_vararg, diag::warn_non_pod_vararg_with_format_string, diag::warn_second_parameter_to_va_arg_not_pod, diag::warn_second_parameter_to_va_arg_ownership_qualified, -1,
  /* DiagArray599 */ diag::warn_alignment_not_power_of_two, -1,
  /* DiagArray600 */ diag::warn_non_virtual_dtor, -1,
  /* DiagArray601 */ diag::warn_null_arg, diag::warn_null_ret, -1,
  /* DiagArray603 */ diag::pp_nonportable_path, -1,
  /* DiagArray604 */ diag::warn_apinotes_private_case, -1,
  /* DiagArray605 */ diag::warn_apinotes_private_case_system, -1,
  /* DiagArray606 */ diag::pp_nonportable_system_path, -1,
  /* DiagArray607 */ diag::warn_neon_vector_initializer_non_portable, -1,
  /* DiagArray608 */ diag::warn_cstruct_memaccess, -1,
  /* DiagArray609 */ diag::warn_nsconsumed_attribute_mismatch, -1,
  /* DiagArray610 */ diag::warn_nsreturns_retained_attribute_mismatch, -1,
  /* DiagArray611 */ diag::warn_null_in_arithmetic_operation, diag::warn_null_in_comparison_operation, -1,
  /* DiagArray612 */ diag::null_in_char_or_string, diag::null_in_file, -1,
  /* DiagArray613 */ diag::warn_impcast_null_pointer_to_integer, -1,
  /* DiagArray614 */ diag::warn_binding_null_to_reference, diag::warn_indirection_through_null, -1,
  /* DiagArray615 */ diag::warn_pointer_arith_null_ptr, -1,
  /* DiagArray616 */ diag::warn_pointer_sub_null_ptr, -1,
  /* DiagArray617 */ diag::warn_conflicting_nullability_attr_overriding_param_types, diag::warn_conflicting_nullability_attr_overriding_ret_types, diag::warn_mismatched_nullability_attr, diag::warn_null_resettable_setter, diag::warn_nullability_duplicate, -1,
  /* DiagArray618 */ diag::warn_nullability_missing, -1,
  /* DiagArray619 */ diag::warn_nullability_missing_array, -1,
  /* DiagArray620 */ diag::warn_nullability_declspec, -1,
  /* DiagArray621 */ diag::ext_nullability, -1,
  /* DiagArray622 */ diag::warn_nullability_inferred_on_nested_type, -1,
  /* DiagArray623 */ diag::warn_nullability_lost, -1,
  /* DiagArray624 */ diag::warn_autosynthesis_property_ivar_match, -1,
  /* DiagArray625 */ diag::warn_impcast_constant_value_to_objc_bool, -1,
  /* DiagArray626 */ diag::warn_objc_boxing_invalid_utf8_string, -1,
  /* DiagArray627 */ diag::warn_objc_circular_container, -1,
  /* DiagArray629 */ diag::warn_objc_designated_init_missing_super_call, diag::warn_objc_designated_init_non_designated_init_call, diag::warn_objc_designated_init_non_super_designated_init_call, diag::warn_objc_implementation_missing_designated_init_override, diag::warn_objc_secondary_init_missing_init_call, diag::warn_objc_secondary_init_super_init_call, -1,
  /* DiagArray630 */ diag::warn_nsdictionary_duplicate_key, -1,
  /* DiagArray631 */ diag::warn_dup_category_def, -1,
  /* DiagArray632 */ diag::warn_superclass_variable_sized_type_not_at_end, diag::warn_variable_sized_ivar_visibility, -1,
  /* DiagArray633 */ diag::warn_forward_class_redefinition, -1,
  /* DiagArray634 */ diag::warn_ivars_in_interface, -1,
  /* DiagArray635 */ diag::warn_objc_literal_comparison, -1,
  /* DiagArray636 */ diag::warn_impcast_objective_c_literal_to_bool, diag::warn_objc_collection_literal_element, -1,
  /* DiagArray637 */ diag::warn_pp_objc_macro_redef_ignored, -1,
  /* DiagArray638 */ diag::warn_messaging_unqualified_id, -1,
  /* DiagArray639 */ diag::warn_class_method_not_found, diag::warn_class_method_not_found_with_typo, diag::warn_inst_method_not_found, diag::warn_instance_method_not_found_with_typo, diag::warn_instance_method_on_class_found, diag::warn_root_inst_method_not_found, -1,
  /* DiagArray640 */ diag::warn_missing_explicit_synthesis, -1,
  /* DiagArray641 */ diag::warn_objc_missing_super_call, -1,
  /* DiagArray642 */ diag::warn_multiple_method_decl, -1,
  /* DiagArray643 */ diag::warn_objc_property_retain_of_block, -1,
  /* DiagArray644 */ diag::warn_objc_pointer_cxx_catch_fragile, -1,
  /* DiagArray645 */ diag::warn_objc_property_assign_on_object, -1,
  /* DiagArray646 */ diag::warn_impl_required_for_class_property, diag::warn_impl_required_in_category_for_class_property, diag::warn_setter_getter_impl_required, diag::warn_setter_getter_impl_required_in_category, -1,
  /* DiagArray647 */ diag::warn_property_implicitly_mismatched, -1,
  /* DiagArray648 */ diag::warn_cocoa_naming_owned_rule, -1,
  /* DiagArray649 */ diag::warn_objc_property_default_assign_on_object, diag::warn_objc_property_no_assignment_attribute, -1,
  /* DiagArray650 */ diag::warn_autosynthesis_property_in_superclass, diag::warn_no_autosynthesis_property, diag::warn_no_autosynthesis_shared_ivar_property, -1,
  /* DiagArray651 */ diag::warn_category_method_impl_match, -1,
  /* DiagArray652 */ diag::warn_auto_synthesizing_protocol_property, -1,
  /* DiagArray653 */ diag::warn_objc_redundant_qualified_class_type, -1,
  /* DiagArray654 */ diag::warn_objc_readonly_property_has_setter, -1,
  /* DiagArray656 */ diag::warn_objc_redundant_literal_use, -1,
  /* DiagArray657 */ diag::warn_objc_root_class_missing, -1,
  /* DiagArray659 */ diag::warn_impcast_float_to_objc_signed_char_bool, -1,
  /* DiagArray660 */ diag::warn_impcast_int_to_objc_signed_char_bool, -1,
  /* DiagArray661 */ diag::warn_objc_string_literal_comparison, -1,
  /* DiagArray662 */ diag::warn_concatenated_nsarray_literal, -1,
  /* DiagArray663 */ diag::warn_objc_unsafe_perform_selector, -1,
  /* DiagArray664 */ diag::warn_odr_different_num_template_parameters, diag::warn_odr_different_template_parameter_kind, diag::warn_odr_field_type_inconsistent, diag::warn_odr_function_type_inconsistent, diag::warn_odr_ivar_type_inconsistent, diag::warn_odr_non_type_parameter_type_inconsistent, diag::warn_odr_objc_method_num_params_inconsistent, diag::warn_odr_objc_method_param_type_inconsistent, diag::warn_odr_objc_method_result_type_inconsistent, diag::warn_odr_objc_method_variadic_inconsistent, diag::warn_odr_objc_property_impl_kind_inconsistent, diag::warn_odr_objc_property_type_inconsistent, diag::warn_odr_objc_superclass_inconsistent, diag::warn_odr_objc_synthesize_ivar_inconsistent, diag::warn_odr_parameter_pack_non_pack, diag::warn_odr_tag_type_inconsistent, diag::warn_odr_variable_multiple_def, diag::warn_odr_variable_type_inconsistent, -1,
  /* DiagArray665 */ diag::warn_old_style_cast, -1,
  /* DiagArray668 */ diag::ext_opencl_ext_vector_type_rgba_selector, -1,
  /* DiagArray670 */ diag::ext_omp_attributes, -1,
  /* DiagArray671 */ diag::warn_omp_alignment_not_power_of_two, diag::warn_omp_allocate_thread_on_task_target_directive, diag::warn_omp_ctx_incompatible_property_for_selector, diag::warn_omp_ctx_incompatible_score_for_property, diag::warn_omp_ctx_incompatible_selector_for_set, diag::warn_omp_ctx_selector_without_properties, diag::warn_omp_declare_variant_ctx_mutiple_use, diag::warn_omp_declare_variant_ctx_not_a_property, diag::warn_omp_declare_variant_ctx_not_a_selector, diag::warn_omp_declare_variant_ctx_not_a_set, diag::warn_omp_declare_variant_expected, diag::warn_omp_declare_variant_string_literal_or_identifier, diag::warn_omp_linear_step_zero, diag::warn_omp_more_one_device_type_clause, diag::warn_omp_more_one_interop_type, diag::warn_omp_more_one_omp_all_memory, diag::warn_omp_unknown_assumption_clause_missing_id, diag::warn_omp_unknown_assumption_clause_without_args, diag::warn_omp_used_different_allocator, -1,
  /* DiagArray672 */ diag::warn_omp_invalid_attribute_for_ompx_attributes, -1,
  /* DiagArray673 */ diag::ext_omp_loop_not_canonical_init, diag::warn_omp_loop_64_bit_var, -1,
  /* DiagArray674 */ diag::warn_omp_non_trivial_type_mapped, -1,
  /* DiagArray675 */ diag::warn_drv_omp_offload_target_duplicate, diag::warn_omp_declare_target_after_first_use, diag::warn_omp_not_in_target_context, -1,
  /* DiagArray676 */ diag::warn_throw_not_valid_on_target, diag::warn_try_not_valid_on_target, -1,
  /* DiagArray677 */ diag::warn_drv_fine_grained_bitfield_accesses_ignored, diag::warn_drv_fjmc_for_elf_only, diag::warn_drv_jmc_requires_debuginfo, diag::warn_drv_loongarch_conflicting_implied_val, diag::warn_drv_moutline_atomics_unsupported_opt, diag::warn_drv_moutline_unsupported_opt, diag::warn_drv_needs_hvx, diag::warn_drv_ps_force_pic, diag::warn_drv_unsupported_diag_option_for_flang, diag::warn_drv_unsupported_longcalls, diag::warn_drv_unsupported_option_for_flang, diag::warn_drv_unsupported_option_for_offload_arch_req_feature, diag::warn_drv_unsupported_option_for_processor, diag::warn_drv_unsupported_option_for_target, diag::warn_drv_unsupported_pic_with_mabicalls, diag::warn_drv_unsupported_sdata, diag::warn_drv_unsupported_tocdata, diag::warn_target_override_arm64ec, -1,
  /* DiagArray678 */ diag::ext_typecheck_ordered_comparison_of_function_pointers, diag::warn_typecheck_ordered_comparison_of_function_pointers, -1,
  /* DiagArray679 */ diag::ext_out_of_line_declaration, -1,
  /* DiagArray680 */ diag::ext_use_out_of_scope_declaration, -1,
  /* DiagArray681 */ diag::warn_overaligned_type, -1,
  /* DiagArray683 */ diag::ext_string_too_long, -1,
  /* DiagArray684 */ diag::warn_overloaded_shift_in_comparison, -1,
  /* DiagArray685 */ diag::warn_overloaded_virtual, -1,
  /* DiagArray687 */ diag::warn_fe_override_module, -1,
  /* DiagArray688 */ diag::warn_conflicting_overriding_param_modifiers, diag::warn_conflicting_overriding_param_types, diag::warn_conflicting_overriding_ret_type_modifiers, diag::warn_conflicting_overriding_ret_types, diag::warn_conflicting_overriding_variadic, diag::warn_non_contravariant_overriding_param_types, diag::warn_non_covariant_overriding_ret_types, -1,
  /* DiagArray689 */ diag::warn_drv_overriding_option, -1,
  /* DiagArray690 */ diag::warn_unnecessary_packed, -1,
  /* DiagArray691 */ diag::warn_unpacked_field, -1,
  /* DiagArray692 */ diag::warn_padded_struct_anon_field, diag::warn_padded_struct_field, diag::warn_padded_struct_size, -1,
  /* DiagArray693 */ diag::warn_padded_struct_anon_bitfield, diag::warn_padded_struct_bitfield, -1,
  /* DiagArray694 */ diag::warn_condition_is_assignment, diag::warn_precedence_bitwise_rel, diag::warn_precedence_conditional, -1,
  /* DiagArray695 */ diag::warn_equality_with_extra_parens, -1,
  /* DiagArray697 */ diag::remark_fe_backend_optimization_remark, -1,
  /* DiagArray698 */ diag::remark_fe_backend_optimization_remark_analysis, diag::remark_fe_backend_optimization_remark_analysis_aliasing, diag::remark_fe_backend_optimization_remark_analysis_fpcommute, -1,
  /* DiagArray699 */ diag::warn_fe_backend_optimization_failure, -1,
  /* DiagArray700 */ diag::remark_fe_backend_optimization_remark_missed, -1,
  /* DiagArray701 */ diag::warn_module_uses_date_time, -1,
  /* DiagArray702 */ diag::warn_pch_vfsoverlay_mismatch, -1,
  /* DiagArray703 */ diag::ext_aggregate_init_not_constant, diag::ext_anonymous_record_with_type, diag::ext_anonymous_struct_union_qualified, diag::ext_array_size_conversion, diag::ext_auto_new_list_init, diag::ext_binary_literal, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_c_empty_initializer, diag::ext_c_nullptr, diag::ext_cast_fn_obj, diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_cxx11_enum_fixed_underlying_type, diag::ext_designated_init, diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_duplicate_declspec, diag::ext_ellipsis_exception_spec, diag::ext_empty_fnmacro_arg, diag::ext_enum_value_not_int, diag::ext_enumerator_list_comma_c, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_instantiation_without_qualified_id, diag::ext_expr_not_ice, diag::ext_extern_template, diag::ext_extra_semi, diag::ext_forward_ref_enum, diag::ext_freestanding_complex, diag::ext_gnu_array_range, diag::ext_hex_constant_invalid, diag::ext_hex_literal_invalid, diag::ext_ident_list_in_param, diag::ext_in_class_initializer_non_constant, diag::ext_integer_complement_complex, diag::ext_integer_increment_complex, diag::ext_internal_in_extern_inline_quiet, diag::ext_line_comment, diag::ext_main_used, diag::ext_mixed_decls_code, diag::ext_multi_line_line_comment, diag::ext_named_variadic_macro, diag::ext_no_newline_eof, diag::ext_nonstandard_escape, diag::ext_ns_enum_attribute, diag::ext_opencl_double_without_pragma, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_pp_bad_vaargs_use, diag::ext_pp_comma_expr, diag::ext_pp_ident_directive, diag::ext_pp_line_too_big, diag::ext_pp_opencl_variadic_macros, diag::ext_pp_warning_directive, diag::ext_return_has_void_expr, diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::ext_subscript_non_lvalue, diag::ext_thread_before, diag::ext_typecheck_addrof_void, diag::ext_typecheck_cast_nonscalar, diag::ext_typecheck_comparison_of_fptr_to_void, diag::ext_typecheck_cond_one_void, diag::ext_typecheck_convert_pointer_void_func, diag::ext_typecheck_ordered_comparison_of_pointer_and_zero, diag::ext_variadic_macro, diag::ext_vla, diag::ext_vla_cxx_in_gnu_mode, diag::ext_vla_cxx_in_gnu_mode_static_assert, diag::warn_defined_in_function_type_macro, diag::warn_ext_c23_attributes, diag::warn_ext_cxx11_attributes, diag::warn_format_conversion_argument_type_mismatch_pedantic, diag::warn_kern_is_method, diag::warn_strict_prototypes, -1,
  /* DiagArray704 */ diag::warn_opencl_unsupported_core_feature, diag::warn_pragma_extension_is_core, -1,
  /* DiagArray706 */ diag::warn_pessimizing_move_on_initialization, diag::warn_pessimizing_move_on_return, -1,
  /* DiagArray707 */ diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::warn_sub_ptr_zero_size_types, -1,
  /* DiagArray708 */ diag::warn_cast_nonnull_to_bool, diag::warn_impcast_pointer_to_bool, -1,
  /* DiagArray709 */ diag::warn_pointer_compare, -1,
  /* DiagArray710 */ diag::ext_typecheck_comparison_of_pointer_integer, -1,
  /* DiagArray711 */ diag::ext_typecheck_convert_incompatible_pointer_sign, -1,
  /* DiagArray712 */ diag::warn_pointer_to_enum_cast, -1,
  /* DiagArray713 */ diag::warn_pointer_to_int_cast, -1,
  /* DiagArray714 */ diag::ext_typecheck_cond_incompatible_pointers, -1,
  /* DiagArray715 */ diag::warn_poison_system_directories, -1,
  /* DiagArray716 */ diag::warn_potentially_direct_selector_expression, -1,
  /* DiagArray717 */ diag::warn_side_effects_typeid, -1,
  /* DiagArray718 */ diag::warn_pragma_attribute_unused, -1,
  /* DiagArray719 */ diag::pp_pragma_once_in_main_file, -1,
  /* DiagArray720 */ diag::warn_pragma_pack_modified_after_include, diag::warn_pragma_pack_no_pop_eof, -1,
  /* DiagArray721 */ diag::warn_pragma_pack_non_default_at_include, -1,
  /* DiagArray722 */ diag::pp_pragma_sysheader_in_main_file, -1,
  /* DiagArray723 */ diag::warn_no_support_for_eval_method_source_on_m32, diag::warn_redefine_extname_not_applied, -1,
  /* DiagArray724 */ diag::warn_cxx11_compat_constexpr_body_invalid_stmt, diag::warn_cxx11_compat_constexpr_body_multiple_return, diag::warn_cxx11_compat_constexpr_body_no_return, diag::warn_cxx11_compat_constexpr_local_var, diag::warn_cxx11_compat_constexpr_type_definition, diag::warn_cxx11_compat_decltype_auto_type_specifier, diag::warn_cxx11_compat_deduced_return_type, diag::warn_cxx11_compat_digit_separator, diag::warn_cxx11_compat_generic_lambda, diag::warn_cxx11_compat_init_capture, diag::warn_cxx11_compat_variable_template, -1,
  /* DiagArray726 */ diag::warn_cxx14_compat_class_template_argument_deduction, diag::warn_cxx14_compat_constexpr_if, diag::warn_cxx14_compat_constexpr_on_lambda, diag::warn_cxx14_compat_decomp_decl, diag::warn_cxx14_compat_fold_expression, diag::warn_cxx14_compat_init_statement, diag::warn_cxx14_compat_inline_variable, diag::warn_cxx14_compat_nested_namespace_definition, diag::warn_cxx14_compat_star_this_lambda_capture, diag::warn_cxx14_compat_static_assert_no_message, diag::warn_cxx14_compat_template_nontype_parm_auto_type, diag::warn_cxx14_compat_template_template_param_typename, diag::warn_cxx14_compat_u8_character_literal, diag::warn_cxx14_compat_using_attribute_ns, diag::warn_cxx17_compat_multi_using_declaration, diag::warn_cxx17_compat_using_declaration_pack, diag::warn_for_range_begin_end_types_differ, -1,
  /* DiagArray727 */ diag::warn_cxx14_compat_ns_enum_attribute, diag::warn_cxx17_hex_literal, -1,
  /* DiagArray728 */ diag::warn_cxx17_compat_adl_only_template_id, diag::warn_cxx17_compat_bitfield_member_init, diag::warn_cxx17_compat_capture_binding, diag::warn_cxx17_compat_constexpr_body_invalid_stmt, diag::warn_cxx17_compat_constexpr_ctor_missing_init, diag::warn_cxx17_compat_constexpr_function_try_block, diag::warn_cxx17_compat_constexpr_local_var_no_init, diag::warn_cxx17_compat_constexpr_union_ctor_no_init, diag::warn_cxx17_compat_constexpr_virtual, diag::warn_cxx17_compat_ctad_for_alias_templates, diag::warn_cxx17_compat_decomp_decl_spec, diag::warn_cxx17_compat_defaulted_comparison, diag::warn_cxx17_compat_defaulted_method_type_mismatch, diag::warn_cxx17_compat_equals_this_lambda_capture, diag::warn_cxx17_compat_explicit_bool, diag::warn_cxx17_compat_for_range_init_stmt, diag::warn_cxx17_compat_init_capture_pack, diag::warn_cxx17_compat_inline_nested_namespace_definition, diag::warn_cxx17_compat_lambda_def_ctor_assign, diag::warn_cxx17_compat_lambda_template_parameter_list, diag::warn_cxx17_compat_missing_varargs_arg, diag::warn_cxx17_compat_spaceship, diag::warn_cxx17_compat_template_nontype_parm_type, diag::warn_cxx17_compat_unicode_type, diag::warn_cxx17_compat_using_decl_class_member_enumerator, diag::warn_cxx17_compat_using_decl_non_member_enumerator, diag::warn_cxx17_compat_using_decl_scoped_enumerator, diag::warn_cxx17_compat_using_enum_declaration, -1,
  /* DiagArray729 */ diag::warn_cxx17_compat_designated_init, diag::warn_cxx17_compat_pointer_to_const_ref_member_on_rvalue, -1,
  /* DiagArray730 */ diag::ext_subscript_overload, diag::warn_cxx20_alias_in_init_statement, diag::warn_cxx20_compat_auto_expr, diag::warn_cxx20_compat_consteval_if, diag::warn_cxx20_compat_constexpr_body_invalid_stmt, diag::warn_cxx20_compat_constexpr_var, diag::warn_cxx20_compat_decl_attrs_on_lambda, diag::warn_cxx20_compat_label_end_of_compound_statement, diag::warn_cxx20_compat_operator_overload_static, diag::warn_cxx20_compat_size_t_suffix, diag::warn_cxx20_compat_static_lambda, diag::warn_cxx23_compat_pp_directive, diag::warn_cxx23_compat_warning_directive, diag::warn_cxx23_delimited_escape_sequence, -1,
  /* DiagArray732 */ diag::warn_cxx23_pack_indexing, diag::warn_cxx23_placeholder_var_definition, -1,
  /* DiagArray736 */ diag::warn_c11_compat_keyword, -1,
  /* DiagArray738 */ diag::warn_c17_compat_ellipsis_only_parameter, diag::warn_c17_compat_static_assert_no_message, diag::warn_c23_compat_binary_literal, diag::warn_c23_compat_bitint_suffix, diag::warn_c23_compat_digit_separator, diag::warn_c23_compat_empty_initializer, diag::warn_c23_compat_keyword, diag::warn_c23_compat_label_end_of_compound_statement, diag::warn_c23_compat_label_followed_by_declaration, diag::warn_c23_compat_literal_ucn_control_character, diag::warn_c23_compat_literal_ucn_escape_basic_scs, diag::warn_c23_compat_pp_directive, diag::warn_c23_compat_warning_directive, diag::warn_pre_c23_compat_attributes, -1,
  /* DiagArray742 */ diag::warn_omp51_compat_attributes, -1,
  /* DiagArray743 */ diag::ext_predef_outside_function, -1,
  /* DiagArray744 */ diag::warn_private_extern, -1,
  /* DiagArray745 */ diag::warn_use_of_private_header_outside_module, -1,
  /* DiagArray746 */ diag::warn_mmap_mismatched_private_module_name, diag::warn_mmap_mismatched_private_submodule, diag::warn_mmap_redundant_export_as, diag::warn_no_priv_submodule_use_toplevel, -1,
  /* DiagArray747 */ diag::warn_profile_data_missing, -1,
  /* DiagArray748 */ diag::warn_profile_data_out_of_date, -1,
  /* DiagArray749 */ diag::warn_profile_data_unprofiled, -1,
  /* DiagArray750 */ diag::warn_property_access_suggest, -1,
  /* DiagArray751 */ diag::warn_property_attr_mismatch, diag::warn_property_attribute, diag::warn_property_redecl_getter_mismatch, diag::warn_readonly_property, -1,
  /* DiagArray752 */ diag::warn_unimplemented_protocol_method, -1,
  /* DiagArray753 */ diag::warn_protocol_property_mismatch, -1,
  /* DiagArray754 */ diag::warn_avx_calling_convention, -1,
  /* DiagArray755 */ diag::err_func_returning_qualified_void, -1,
  /* DiagArray756 */ diag::warn_quoted_include_in_framework_header, -1,
  /* DiagArray758 */ diag::warn_for_range_ref_binds_ret_temp, -1,
  /* DiagArray759 */ diag::warn_for_range_const_ref_binds_temp_built_from_ref, diag::warn_for_range_copy, -1,
  /* DiagArray760 */ diag::warn_var_decl_not_read_only, -1,
  /* DiagArray761 */ diag::warn_auto_readonly_iboutlet_property, -1,
  /* DiagArray762 */ diag::warn_bad_receiver_type, -1,
  /* DiagArray763 */ diag::warn_receiver_forward_class, diag::warn_receiver_forward_instance, -1,
  /* DiagArray764 */ diag::ext_member_redeclared, -1,
  /* DiagArray765 */ diag::warn_consteval_if_always_true, -1,
  /* DiagArray767 */ diag::warn_redundant_move_on_return, -1,
  /* DiagArray768 */ diag::warn_redundant_parens_around_declarator, -1,
  /* DiagArray769 */ diag::ext_register_storage_class, -1,
  /* DiagArray770 */ diag::warn_reinterpret_different_from_static, -1,
  /* DiagArray771 */ diag::remark_fe_backend_plugin, -1,
  /* DiagArray773 */ diag::warn_initializer_out_of_order, diag::warn_some_initializers_out_of_order, -1,
  /* DiagArray774 */ diag::ext_designated_init_reordered, -1,
  /* DiagArray775 */ diag::warn_objc_requires_super_protocol, -1,
  /* DiagArray777 */ diag::warn_reserved_extern_symbol, -1,
  /* DiagArray778 */ diag::warn_pp_macro_is_reserved_id, -1,
  /* DiagArray779 */ diag::warn_reserved_module_name, -1,
  /* DiagArray780 */ diag::ext_ms_reserved_user_defined_literal, diag::ext_reserved_user_defined_literal, -1,
  /* DiagArray781 */ diag::warn_pragma_restrict_expansion_macro_use, -1,
  /* DiagArray782 */ diag::ext_retained_language_linkage, -1,
  /* DiagArray784 */ diag::ext_return_has_expr, diag::ext_return_missing_expr, diag::warn_return_missing_expr, -1,
  /* DiagArray785 */ diag::warn_ret_addr_label, diag::warn_ret_local_temp_addr_ref, diag::warn_ret_stack_addr_ref, -1,
  /* DiagArray787 */ diag::warn_falloff_nonvoid_coroutine, diag::warn_falloff_nonvoid_function, diag::warn_falloff_nonvoid_lambda, diag::warn_maybe_falloff_nonvoid_coroutine, diag::warn_maybe_falloff_nonvoid_function, diag::warn_maybe_falloff_nonvoid_lambda, -1,
  /* DiagArray788 */ diag::warn_return_value_udt, diag::warn_return_value_udt_incomplete, -1,
  /* DiagArray789 */ diag::ext_ovl_rewrite_equalequal_not_bool, -1,
  /* DiagArray790 */ diag::remark_cc1_round_trip_generated, -1,
  /* DiagArray791 */ diag::warn_no_dynamic_cast_with_rtti_disabled, diag::warn_no_typeid_with_rtti_disabled, -1,
  /* DiagArray792 */ diag::remark_sanitize_address_insert_extra_padding_accepted, diag::remark_sanitize_address_insert_extra_padding_rejected, -1,
  /* DiagArray793 */ diag::warn_drv_sarif_format_unstable, -1,
  /* DiagArray794 */ diag::remark_pp_search_path_usage, -1,
  /* DiagArray795 */ diag::warn_attribute_section_on_redeclaration, diag::warn_duplicate_codeseg_attribute, diag::warn_mismatched_section, -1,
  /* DiagArray796 */ diag::warn_unimplemented_selector, -1,
  /* DiagArray797 */ diag::warn_multiple_selectors, -1,
  /* DiagArray798 */ diag::warn_self_assignment_builtin, -1,
  /* DiagArray799 */ diag::warn_identity_field_assign, -1,
  /* DiagArray800 */ diag::warn_self_assignment_overloaded, -1,
  /* DiagArray801 */ diag::warn_self_move, -1,
  /* DiagArray802 */ diag::warn_semicolon_before_method_body, -1,
  /* DiagArray803 */ diag::warn_missing_sentinel, diag::warn_not_enough_argument, -1,
  /* DiagArray805 */ diag::warn_fe_serialized_diag_failure, diag::warn_fe_serialized_diag_failure_during_finalisation, diag::warn_fe_serialized_diag_merge_failure, -1,
  /* DiagArray806 */ diag::warn_decl_shadow, -1,
  /* DiagArray808 */ diag::warn_shadow_field, -1,
  /* DiagArray809 */ diag::warn_ctor_parm_shadows_field, -1,
  /* DiagArray810 */ diag::warn_modifying_shadowing_decl, -1,
  /* DiagArray811 */ diag::warn_ivar_use_hidden, -1,
  /* DiagArray812 */ diag::warn_decl_shadow_uncaptured_local, -1,
  /* DiagArray813 */ diag::warn_shift_negative, -1,
  /* DiagArray814 */ diag::warn_shift_gt_typewidth, -1,
  /* DiagArray815 */ diag::warn_shift_lhs_negative, -1,
  /* DiagArray816 */ diag::warn_addition_in_bitshift, -1,
  /* DiagArray817 */ diag::warn_shift_result_gt_typewidth, -1,
  /* DiagArray818 */ diag::warn_shift_result_sets_sign_bit, -1,
  /* DiagArray819 */ diag::warn_impcast_integer_64_32, -1,
  /* DiagArray820 */ diag::warn_mixed_sign_comparison, -1,
  /* DiagArray821 */ diag::warn_impcast_integer_sign, diag::warn_impcast_integer_sign_conditional, diag::warn_impcast_nonnegative_result, -1,
  /* DiagArray823 */ diag::warn_no_underlying_type_specified_for_enum_bitfield, -1,
  /* DiagArray824 */ diag::ext_wchar_t_sign_spec, -1,
  /* DiagArray825 */ diag::warn_impcast_single_bit_bitield_precision_constant, -1,
  /* DiagArray826 */ diag::warn_sizeof_array_param, -1,
  /* DiagArray827 */ diag::warn_sizeof_array_decay, -1,
  /* DiagArray828 */ diag::warn_division_sizeof_array, -1,
  /* DiagArray829 */ diag::warn_division_sizeof_ptr, -1,
  /* DiagArray830 */ diag::warn_sizeof_pointer_expr_memaccess, diag::warn_sizeof_pointer_type_memaccess, -1,
  /* DiagArray831 */ diag::warn_slash_u_filename, -1,
  /* DiagArray832 */ diag::warn_slh_does_not_support_asm_goto, -1,
  /* DiagArray833 */ diag::remark_sloc_usage, -1,
  /* DiagArray834 */ diag::warn_sometimes_uninit_var, -1,
  /* DiagArray835 */ diag::warn_fe_source_mgr, -1,
  /* DiagArray836 */ diag::warn_acc_clause_unimplemented, diag::warn_acc_construct_unimplemented, diag::warn_pragma_acc_ignored, -1,
  /* DiagArray837 */ diag::warn_omp_declare_variant_after_emitted, diag::warn_omp_declare_variant_after_used, diag::warn_omp_declare_variant_marked_as_declare_variant, diag::warn_omp_declare_variant_score_not_constant, diag::warn_omp_nesting_simd, diag::warn_omp_unterminated_declare_target, diag::warn_pragma_omp_ignored, diag::warn_unknown_declare_variant_isa_trait, -1,
  /* DiagArray838 */ diag::warn_sampler_initializer_invalid_bits, -1,
  /* DiagArray840 */ diag::warn_stack_exhausted, -1,
  /* DiagArray841 */ diag::warn_stack_clash_protection_inline_asm, -1,
  /* DiagArray842 */ diag::ext_in_class_initializer_float_type_cxx11, -1,
  /* DiagArray843 */ diag::ext_internal_in_extern_inline, diag::ext_internal_in_extern_inline_quiet, -1,
  /* DiagArray844 */ diag::warn_static_inline_explicit_inst_ignored, -1,
  /* DiagArray845 */ diag::warn_static_local_in_extern_inline, -1,
  /* DiagArray846 */ diag::warn_static_self_reference_in_init, -1,
  /* DiagArray847 */ diag::warn_drv_libstdcxx_not_found, -1,
  /* DiagArray859 */ diag::warn_strict_potentially_direct_selector_expression, -1,
  /* DiagArray860 */ diag::ext_compat_template_param_shadow, -1,
  /* DiagArray861 */ diag::warn_strict_prototypes, -1,
  /* DiagArray862 */ diag::warn_strict_multiple_method_decl, -1,
  /* DiagArray863 */ diag::warn_stringcompare, -1,
  /* DiagArray864 */ diag::warn_concatenated_literal_array_init, -1,
  /* DiagArray865 */ diag::warn_impcast_string_literal_to_bool, -1,
  /* DiagArray866 */ diag::warn_string_plus_char, -1,
  /* DiagArray867 */ diag::warn_string_plus_int, -1,
  /* DiagArray868 */ diag::warn_strlcpycat_wrong_size, -1,
  /* DiagArray869 */ diag::warn_strncat_large_size, diag::warn_strncat_src_size, diag::warn_strncat_wrong_size, -1,
  /* DiagArray870 */ diag::warn_suggest_destructor_marked_not_override_overriding, -1,
  /* DiagArray871 */ diag::warn_suggest_function_marked_not_override_overriding, -1,
  /* DiagArray872 */ diag::ext_typecheck_base_super, -1,
  /* DiagArray873 */ diag::warn_suspicious_bzero_size, -1,
  /* DiagArray875 */ diag::warn_attr_swift_name_decl_kind, diag::warn_attr_swift_name_decl_missing_params, diag::warn_attr_swift_name_function, diag::warn_attr_swift_name_getter_parameters, diag::warn_attr_swift_name_invalid_identifier, diag::warn_attr_swift_name_missing_parameters, diag::warn_attr_swift_name_multiple_selfs, diag::warn_attr_swift_name_num_params, diag::warn_attr_swift_name_setter_parameters, diag::warn_attr_swift_name_subscript_getter_newValue, diag::warn_attr_swift_name_subscript_invalid_parameter, diag::warn_attr_swift_name_subscript_setter_multiple_newValues, diag::warn_attr_swift_name_subscript_setter_no_newValue, -1,
  /* DiagArray876 */ diag::warn_case_value_overflow, diag::warn_missing_case, diag::warn_not_in_enum, -1,
  /* DiagArray877 */ diag::warn_bool_switch_condition, -1,
  /* DiagArray878 */ diag::warn_switch_default, -1,
  /* DiagArray879 */ diag::warn_def_missing_case, -1,
  /* DiagArray880 */ diag::warn_sync_op_misaligned, -1,
  /* DiagArray881 */ diag::warn_sync_fetch_and_nand_semantics_change, -1,
  /* DiagArray883 */ diag::warn_target_clone_mixed_values, -1,
  /* DiagArray884 */ diag::warn_comparison_bitwise_always, diag::warn_comparison_bitwise_or, -1,
  /* DiagArray885 */ diag::warn_alignment_builtin_useless, diag::warn_comparison_always, -1,
  /* DiagArray886 */ diag::warn_integer_constants_in_conditional_always_true, diag::warn_left_shift_always, diag::warn_tautological_bool_compare, -1,
  /* DiagArray888 */ diag::warn_out_of_range_compare, -1,
  /* DiagArray889 */ diag::warn_tautological_negation_and_compare, diag::warn_tautological_negation_or_compare, -1,
  /* DiagArray890 */ diag::warn_tautological_compare_objc_bool, -1,
  /* DiagArray891 */ diag::warn_tautological_overlap_comparison, -1,
  /* DiagArray892 */ diag::warn_nonnull_expr_compare, diag::warn_null_pointer_compare, -1,
  /* DiagArray893 */ diag::warn_tautological_constant_compare, -1,
  /* DiagArray894 */ diag::warn_address_of_reference_null_compare, diag::warn_this_null_compare, -1,
  /* DiagArray895 */ diag::warn_unsigned_char_always_true_comparison, -1,
  /* DiagArray896 */ diag::warn_unsigned_enum_always_true_comparison, -1,
  /* DiagArray897 */ diag::warn_unsigned_always_true_comparison, -1,
  /* DiagArray898 */ diag::warn_tautological_compare_value_range, -1,
  /* DiagArray899 */ diag::warn_tcb_enforcement_violation, -1,
  /* DiagArray900 */ diag::ext_template_after_declarative_nns, -1,
  /* DiagArray901 */ diag::ext_typecheck_decl_incomplete_type, -1,
  /* DiagArray903 */ diag::warn_acquired_before, diag::warn_acquired_before_after_cycle, diag::warn_cannot_resolve_lock, diag::warn_double_lock, diag::warn_expecting_lock_held_on_loop, diag::warn_expecting_locked, diag::warn_fun_excludes_mutex, diag::warn_fun_requires_lock, diag::warn_fun_requires_negative_cap, diag::warn_lock_exclusive_and_shared, diag::warn_lock_some_predecessors, diag::warn_no_unlock, diag::warn_unlock_but_no_lock, diag::warn_unlock_kind_mismatch, diag::warn_var_deref_requires_any_lock, diag::warn_var_deref_requires_lock, diag::warn_variable_requires_any_lock, diag::warn_variable_requires_lock, -1,
  /* DiagArray904 */ diag::warn_thread_attribute_argument_not_lockable, diag::warn_thread_attribute_decl_not_lockable, diag::warn_thread_attribute_decl_not_pointer, diag::warn_thread_attribute_ignored, diag::warn_thread_attribute_not_on_capability_member, diag::warn_thread_attribute_not_on_non_static_member, -1,
  /* DiagArray905 */ diag::warn_thread_safety_beta, -1,
  /* DiagArray906 */ diag::warn_acquire_requires_negative_cap, -1,
  /* DiagArray907 */ diag::warn_fun_requires_lock_precise, diag::warn_var_deref_requires_lock_precise, diag::warn_variable_requires_lock_precise, -1,
  /* DiagArray908 */ diag::warn_guarded_pass_by_reference, diag::warn_pt_guarded_pass_by_reference, -1,
  /* DiagArray909 */ diag::warn_guarded_return_by_reference, diag::warn_pt_guarded_return_by_reference, -1,
  /* DiagArray910 */ diag::warn_thread_safety_verbose, -1,
  /* DiagArray911 */ diag::trigraph_converted, diag::trigraph_ends_block_comment, diag::trigraph_ignored, diag::trigraph_ignored_block_comment, -1,
  /* DiagArray913 */ diag::warn_type_safety_null_pointer_required, diag::warn_type_safety_type_mismatch, diag::warn_type_tag_for_datatype_wrong_kind, -1,
  /* DiagArray914 */ diag::ext_redefinition_of_typedef, -1,
  /* DiagArray915 */ diag::ext_typename_missing, -1,
  /* DiagArray916 */ diag::warn_fe_unable_to_open_stats_file, -1,
  /* DiagArray917 */ diag::warn_unaligned_access, -1,
  /* DiagArray918 */ diag::warn_imp_cast_drops_unaligned, -1,
  /* DiagArray919 */ diag::warn_unavailable_fwdclass_message, -1,
  /* DiagArray920 */ diag::warn_undeclared_selector, diag::warn_undeclared_selector_with_typo, -1,
  /* DiagArray921 */ diag::warn_pp_undef_identifier, -1,
  /* DiagArray922 */ diag::warn_pp_undef_prefix, -1,
  /* DiagArray923 */ diag::warn_attribute_arm_sm_incompat_builtin, -1,
  /* DiagArray924 */ diag::warn_attribute_arm_za_builtin_no_za_state, -1,
  /* DiagArray925 */ diag::warn_attribute_arm_zt0_builtin_no_zt0_state, -1,
  /* DiagArray926 */ diag::warn_address_of_reference_bool_conversion, diag::warn_this_bool_conversion, -1,
  /* DiagArray927 */ diag::warn_func_template_missing, -1,
  /* DiagArray928 */ diag::warn_undefined_inline, -1,
  /* DiagArray929 */ diag::warn_undefined_internal, -1,
  /* DiagArray930 */ diag::ext_undefined_internal_type, -1,
  /* DiagArray931 */ diag::warn_pointer_indirection_from_incompatible_type, diag::warn_undefined_reinterpret_cast, -1,
  /* DiagArray932 */ diag::warn_var_template_missing, -1,
  /* DiagArray933 */ diag::warn_throw_underaligned_obj, -1,
  /* DiagArray934 */ diag::warn_side_effects_unevaluated_context, -1,
  /* DiagArray935 */ diag::warn_unguarded_availability, -1,
  /* DiagArray936 */ diag::warn_unguarded_availability_new, -1,
  /* DiagArray937 */ diag::warn_delimited_ucn_empty, diag::warn_delimited_ucn_incomplete, diag::warn_ucn_escape_incomplete, diag::warn_ucn_escape_no_digits, diag::warn_ucn_escape_surrogate, diag::warn_ucn_not_valid_in_c89, diag::warn_ucn_not_valid_in_c89_literal, -1,
  /* DiagArray938 */ diag::warn_utf8_symbol_homoglyph, -1,
  /* DiagArray939 */ diag::ext_unicode_whitespace, -1,
  /* DiagArray940 */ diag::warn_utf8_symbol_zero_width, -1,
  /* DiagArray941 */ diag::warn_base_class_is_uninit, diag::warn_field_is_uninit, diag::warn_reference_field_is_uninit, diag::warn_uninit_byref_blockvar_captured_by_block, diag::warn_uninit_self_reference_in_init, diag::warn_uninit_self_reference_in_reference_init, diag::warn_uninit_var, -1,
  /* DiagArray942 */ diag::warn_uninit_const_reference, -1,
  /* DiagArray943 */ diag::warn_drv_potentially_misspelled_joined_argument, diag::warn_drv_unknown_argument_clang_cl, diag::warn_drv_unknown_argument_clang_cl_with_suggestion, -1,
  /* DiagArray944 */ diag::warn_omp_assume_attribute_string_unknown, -1,
  /* DiagArray945 */ diag::warn_unknown_attribute_ignored, -1,
  /* DiagArray946 */ diag::warn_drv_new_cuda_version, diag::warn_drv_partially_supported_cuda_version, -1,
  /* DiagArray947 */ diag::warn_pp_invalid_directive, -1,
  /* DiagArray948 */ diag::ext_unknown_escape, -1,
  /* DiagArray949 */ diag::ext_on_off_switch_syntax, diag::ext_pragma_syntax_eod, diag::ext_stdc_pragma_ignored, diag::warn_pragma_diagnostic_cannot_pop, diag::warn_pragma_diagnostic_invalid, diag::warn_pragma_diagnostic_invalid_option, diag::warn_pragma_diagnostic_invalid_token, diag::warn_pragma_exec_charset_expected, diag::warn_pragma_exec_charset_push_invalid, diag::warn_pragma_exec_charset_spec_invalid, diag::warn_pragma_ignored, diag::warn_pragma_include_alias_expected, diag::warn_pragma_include_alias_expected_filename, diag::warn_pragma_include_alias_mismatch_angle, diag::warn_pragma_include_alias_mismatch_quote, diag::warn_pragma_warning_expected, diag::warn_pragma_warning_expected_number, diag::warn_pragma_warning_push_level, diag::warn_pragma_warning_spec_invalid, diag::warn_stdc_fenv_round_not_supported, -1,
  /* DiagArray950 */ diag::warn_unknown_sanitizer_ignored, -1,
  /* DiagArray951 */ diag::warn_pragma_diagnostic_unknown_warning, diag::warn_unknown_diag_option, diag::warn_unknown_warning_specifier, -1,
  /* DiagArray952 */ diag::ext_template_arg_unnamed_type, -1,
  /* DiagArray953 */ diag::warn_unneeded_internal_decl, diag::warn_unneeded_static_internal_decl, -1,
  /* DiagArray954 */ diag::warn_unneeded_member_function, -1,
  /* DiagArray955 */ diag::warn_unqualified_call_to_std_cast_function, -1,
  /* DiagArray956 */ diag::warn_unreachable, -1,
  /* DiagArray958 */ diag::warn_unreachable_break, -1,
  /* DiagArray959 */ diag::warn_unreachable_fallthrough_attr, -1,
  /* DiagArray960 */ diag::warn_unreachable_association, -1,
  /* DiagArray961 */ diag::warn_unreachable_loop_increment, -1,
  /* DiagArray962 */ diag::warn_unreachable_return, -1,
  /* DiagArray963 */ diag::warn_unsafe_buffer_operation, diag::warn_unsafe_buffer_variable, -1,
  /* DiagArray964 */ diag::warn_unsafe_buffer_usage_in_container, -1,
  /* DiagArray965 */ diag::warn_unsequenced_mod_mod, diag::warn_unsequenced_mod_use, -1,
  /* DiagArray966 */ diag::warn_drv_no_floating_point_registers, diag::warn_drv_unsupported_float_abi_by_lib, -1,
  /* DiagArray967 */ diag::warn_target_unsupported_abs2008, diag::warn_target_unsupported_abslegacy, -1,
  /* DiagArray968 */ diag::warn_at_available_unchecked_use, -1,
  /* DiagArray969 */ diag::warn_target_unsupported_compact_branches, -1,
  /* DiagArray970 */ diag::warn_attribute_dll_instantiated_base_class, -1,
  /* DiagArray971 */ diag::warn_fe_backend_unsupported_fp_exceptions, diag::warn_fe_backend_unsupported_fp_rounding, -1,
  /* DiagArray972 */ diag::warn_template_qualified_friend_ignored, diag::warn_template_qualified_friend_unsupported, -1,
  /* DiagArray973 */ diag::warn_drv_unsupported_gpopt, -1,
  /* DiagArray974 */ diag::warn_target_unsupported_nan2008, diag::warn_target_unsupported_nanlegacy, -1,
  /* DiagArray975 */ diag::warn_drv_dwarf_version_limited_by_target, diag::warn_drv_unsupported_debug_info_opt_for_target, -1,
  /* DiagArray976 */ diag::warn_attribute_protected_visibility, -1,
  /* DiagArray977 */ diag::ext_partial_specs_not_deducible, -1,
  /* DiagArray980 */ diag::warn_unused_but_set_parameter, -1,
  /* DiagArray981 */ diag::warn_unused_but_set_variable, -1,
  /* DiagArray982 */ diag::warn_drv_diagnostics_hotness_requires_pgo, diag::warn_drv_diagnostics_misexpect_requires_pgo, diag::warn_drv_empty_joined_argument, diag::warn_drv_input_file_unused, diag::warn_drv_input_file_unused_by_cpp, diag::warn_drv_invalid_arch_name_with_suggestion, diag::warn_drv_large_data_threshold_invalid_code_model, diag::warn_drv_preprocessed_input_file_unused, diag::warn_drv_unused_argument, diag::warn_drv_unused_x, diag::warn_ignored_clang_option, diag::warn_ignoring_fdiscard_for_bitcode, diag::warn_ignoring_verify_debuginfo_preserve_export, -1,
  /* DiagArray983 */ diag::warn_unused_comparison, -1,
  /* DiagArray984 */ diag::warn_unused_const_variable, -1,
  /* DiagArray985 */ diag::warn_unused_exception_param, -1,
  /* DiagArray986 */ diag::warn_unused_function, -1,
  /* DiagArray987 */ diag::warn_unused_property_expr, -1,
  /* DiagArray988 */ diag::warn_unused_label, -1,
  /* DiagArray989 */ diag::warn_unused_lambda_capture, -1,
  /* DiagArray990 */ diag::warn_unused_local_typedef, -1,
  /* DiagArray992 */ diag::pp_macro_not_used, -1,
  /* DiagArray993 */ diag::warn_unused_member_function, -1,
  /* DiagArray994 */ diag::warn_unused_parameter, -1,
  /* DiagArray995 */ diag::warn_unused_private_field, -1,
  /* DiagArray996 */ diag::warn_unused_property_backing_ivar, -1,
  /* DiagArray997 */ diag::warn_unused_result, diag::warn_unused_result_msg, -1,
  /* DiagArray998 */ diag::warn_unused_template, -1,
  /* DiagArray999 */ diag::warn_unused_call, diag::warn_unused_comma_left_operand, diag::warn_unused_constructor, diag::warn_unused_constructor_msg, diag::warn_unused_container_subscript_expr, diag::warn_unused_expr, diag::warn_unused_voidptr, -1,
  /* DiagArray1000 */ diag::warn_unused_variable, -1,
  /* DiagArray1001 */ diag::warn_unused_volatile, -1,
  /* DiagArray1002 */ diag::warn_used_but_marked_unused, -1,
  /* DiagArray1003 */ diag::warn_user_literal_reserved, -1,
  /* DiagArray1004 */ diag::warn_diagnose_if_succeeded, -1,
  /* DiagArray1005 */ diag::warn_second_arg_of_va_start_not_last_named_param, diag::warn_second_parameter_to_va_arg_never_compatible, diag::warn_va_start_type_is_undefined, -1,
  /* DiagArray1006 */ diag::ext_named_variadic_macro, diag::ext_pp_bad_vaopt_use, diag::ext_variadic_macro, -1,
  /* DiagArray1007 */ diag::warn_typecheck_vector_element_sizes_not_equal, -1,
  /* DiagArray1008 */ diag::warn_incompatible_vectors, -1,
  /* DiagArray1010 */ diag::warn_empty_parens_are_function_decl, diag::warn_parens_disambiguated_as_function_declaration, diag::warn_parens_disambiguated_as_variable_declaration, -1,
  /* DiagArray1011 */ diag::warn_decl_in_param_list, diag::warn_redefinition_in_param_list, -1,
  /* DiagArray1012 */ diag::warn_vla_used, -1,
  /* DiagArray1013 */ diag::ext_vla_cxx, diag::ext_vla_cxx_in_gnu_mode, -1,
  /* DiagArray1014 */ diag::ext_vla, -1,
  /* DiagArray1015 */ diag::ext_vla_cxx_in_gnu_mode_static_assert, diag::ext_vla_cxx_static_assert, -1,
  /* DiagArray1016 */ diag::warn_void_pointer_to_enum_cast, -1,
  /* DiagArray1017 */ diag::warn_void_pointer_to_int_cast, -1,
  /* DiagArray1018 */ diag::ext_typecheck_indirection_through_void_pointer, -1,
  /* DiagArray1020 */ diag::warn_wasm_dynamic_exception_spec_ignored, -1,
  /* DiagArray1021 */ diag::warn_weak_template_vtable, -1,
  /* DiagArray1022 */ diag::warn_weak_vtable, -1,
  /* DiagArray1023 */ diag::ext_deprecated_string_literal_conversion, -1,
  /* DiagArray1025 */ diag::warn_xor_used_as_pow, diag::warn_xor_used_as_pow_base, diag::warn_xor_used_as_pow_base_extra, -1,
  /* DiagArray1026 */ diag::warn_zero_as_null_pointer_constant, -1,
  /* DiagArray1027 */ diag::ext_typecheck_zero_array_size, -1,
};

static const int16_t DiagSubGroups[] = {
  /* Empty */ -1,
  /* DiagSubGroup0 */ 311, -1,
  /* DiagSubGroup4 */ 18, 311, -1,
  /* DiagSubGroup11 */ 708, 863, 892, -1,
  /* DiagSubGroup18 */ 578, 694, 876, 877, 545, 691, 1013, -1,
  /* DiagSubGroup29 */ 221, -1,
  /* DiagSubGroup32 */ 39, 38, 35, -1,
  /* DiagSubGroup37 */ 34, -1,
  /* DiagSubGroup45 */ 46, -1,
  /* DiagSubGroup55 */ 410, 198, -1,
  /* DiagSubGroup59 */ 945, 400, -1,
  /* DiagSubGroup70 */ 106, 138, -1,
  /* DiagSubGroup71 */ 141, -1,
  /* DiagSubGroup74 */ 825, -1,
  /* DiagSubGroup81 */ 708, 926, -1,
  /* DiagSubGroup82 */ 81, -1,
  /* DiagSubGroup83 */ 78, -1,
  /* DiagSubGroup92 */ 95, -1,
  /* DiagSubGroup93 */ 99, -1,
  /* DiagSubGroup94 */ 103, -1,
  /* DiagSubGroup95 */ 103, 98, 96, 724, 726, 728, 730, -1,
  /* DiagSubGroup97 */ 95, 725, 727, 729, 731, -1,
  /* DiagSubGroup99 */ 100, 101, 102, -1,
  /* DiagSubGroup103 */ 104, -1,
  /* DiagSubGroup107 */ 726, 728, 730, -1,
  /* DiagSubGroup108 */ 107, 727, 729, 731, -1,
  /* DiagSubGroup109 */ 106, 105, -1,
  /* DiagSubGroup111 */ 248, 239, 112, 728, 730, -1,
  /* DiagSubGroup113 */ 111, 729, 731, -1,
  /* DiagSubGroup114 */ 110, -1,
  /* DiagSubGroup115 */ 109, -1,
  /* DiagSubGroup116 */ 111, -1,
  /* DiagSubGroup117 */ 112, -1,
  /* DiagSubGroup118 */ 114, -1,
  /* DiagSubGroup120 */ 730, -1,
  /* DiagSubGroup121 */ 120, 731, -1,
  /* DiagSubGroup123 */ 122, 119, -1,
  /* DiagSubGroup125 */ 126, -1,
  /* DiagSubGroup128 */ 120, -1,
  /* DiagSubGroup129 */ 121, -1,
  /* DiagSubGroup130 */ 123, -1,
  /* DiagSubGroup131 */ 125, -1,
  /* DiagSubGroup132 */ 127, -1,
  /* DiagSubGroup133 */ 728, -1,
  /* DiagSubGroup134 */ 729, -1,
  /* DiagSubGroup135 */ 726, -1,
  /* DiagSubGroup136 */ 727, -1,
  /* DiagSubGroup137 */ 724, -1,
  /* DiagSubGroup139 */ 725, -1,
  /* DiagSubGroup140 */ 143, 145, 724, 726, 728, 730, -1,
  /* DiagSubGroup144 */ 140, 141, 142, 725, 727, 729, 731, -1,
  /* DiagSubGroup149 */ 147, -1,
  /* DiagSubGroup150 */ 148, -1,
  /* DiagSubGroup152 */ 122, -1,
  /* DiagSubGroup153 */ 152, -1,
  /* DiagSubGroup155 */ 173, -1,
  /* DiagSubGroup158 */ 159, -1,
  /* DiagSubGroup167 */ 598, -1,
  /* DiagSubGroup171 */ 170, -1,
  /* DiagSubGroup175 */ 176, 177, -1,
  /* DiagSubGroup181 */ 74, 625, -1,
  /* DiagSubGroup186 */ 81, 181, 296, 75, 322, 458, 420, 417, 491, 595, 613, 636, 821, 865, -1,
  /* DiagSubGroup187 */ 613, -1,
  /* DiagSubGroup189 */ 190, 231, 21, 188, -1,
  /* DiagSubGroup192 */ 2, -1,
  /* DiagSubGroup200 */ 202, 204, 203, 785, -1,
  /* DiagSubGroup216 */ 215, 213, -1,
  /* DiagSubGroup219 */ 221, 222, 223, 225, 226, 228, 232, 233, 234, 235, 236, 237, 224, 239, 240, 246, 248, 250, 251, 252, 253, 247, -1,
  /* DiagSubGroup226 */ 229, -1,
  /* DiagSubGroup227 */ 228, -1,
  /* DiagSubGroup228 */ 230, -1,
  /* DiagSubGroup244 */ 245, -1,
  /* DiagSubGroup253 */ 96, -1,
  /* DiagSubGroup259 */ 260, -1,
  /* DiagSubGroup264 */ 266, 265, -1,
  /* DiagSubGroup267 */ 268, -1,
  /* DiagSubGroup280 */ 233, -1,
  /* DiagSubGroup282 */ 600, -1,
  /* DiagSubGroup291 */ 315, -1,
  /* DiagSubGroup292 */ 294, 234, -1,
  /* DiagSubGroup293 */ 235, -1,
  /* DiagSubGroup296 */ 297, 298, 293, -1,
  /* DiagSubGroup297 */ 236, -1,
  /* DiagSubGroup298 */ 237, -1,
  /* DiagSubGroup311 */ 226, 555, 407, 451, 802, 558, 820, 994, 980, 615, 616, 288, 864, 353, -1,
  /* DiagSubGroup313 */ 142, 100, -1,
  /* DiagSubGroup314 */ 288, -1,
  /* DiagSubGroup322 */ 324, 325, -1,
  /* DiagSubGroup327 */ 328, 341, 601, 336, 340, 330, 329, 333, 337, -1,
  /* DiagSubGroup333 */ 334, -1,
  /* DiagSubGroup337 */ 338, -1,
  /* DiagSubGroup342 */ 332, 336, 340, -1,
  /* DiagSubGroup343 */ 333, 337, -1,
  /* DiagSubGroup347 */ 346, -1,
  /* DiagSubGroup352 */ 883, -1,
  /* DiagSubGroup354 */ 105, 110, 119, 124, -1,
  /* DiagSubGroup360 */ 361, 362, 364, 365, 366, 367, 368, 369, 370, 372, 1014, 373, 374, 375, 376, 377, 379, 380, 381, 382, 383, 764, 384, 385, 387, 388, 389, 390, 1027, 391, 392, -1,
  /* DiagSubGroup385 */ 386, -1,
  /* DiagSubGroup406 */ 404, 405, -1,
  /* DiagSubGroup407 */ 408, -1,
  /* DiagSubGroup409 */ 418, 419, -1,
  /* DiagSubGroup414 */ 415, -1,
  /* DiagSubGroup417 */ 421, 659, -1,
  /* DiagSubGroup420 */ 819, 660, -1,
  /* DiagSubGroup421 */ 411, -1,
  /* DiagSubGroup436 */ 437, 431, -1,
  /* DiagSubGroup442 */ 444, 597, -1,
  /* DiagSubGroup448 */ 239, -1,
  /* DiagSubGroup459 */ 458, -1,
  /* DiagSubGroup461 */ 462, -1,
  /* DiagSubGroup464 */ 403, -1,
  /* DiagSubGroup493 */ 143, -1,
  /* DiagSubGroup496 */ 102, -1,
  /* DiagSubGroup497 */ 326, 757, -1,
  /* DiagSubGroup509 */ 513, 518, 530, 516, 526, 535, 510, 541, 522, 542, 532, 533, 540, 524, 521, 517, 538, 534, 520, 528, 527, 525, 512, 515, 543, 511, 514, 519, 536, 531, 537, 445, -1,
  /* DiagSubGroup538 */ 539, -1,
  /* DiagSubGroup555 */ 553, -1,
  /* DiagSubGroup578 */ 44, 83, 164, 170, 216, 327, 326, 345, 409, 449, 460, 549, 550, 579, 583, 759, 772, 787, 798, 801, 826, 827, 867, 885, 911, 941, 949, 978, 1019, 641, 629, 632, 685, 744, 160, 309, 1004, -1,
  /* DiagSubGroup579 */ 706, 767, 786, 801, -1,
  /* DiagSubGroup580 */ 530, -1,
  /* DiagSubGroup586 */ 103, -1,
  /* DiagSubGroup592 */ 112, -1,
  /* DiagSubGroup594 */ 820, 186, 492, -1,
  /* DiagSubGroup597 */ 596, -1,
  /* DiagSubGroup615 */ 381, -1,
  /* DiagSubGroup618 */ 619, -1,
  /* DiagSubGroup628 */ 655, -1,
  /* DiagSubGroup635 */ 661, -1,
  /* DiagSubGroup655 */ 656, -1,
  /* DiagSubGroup658 */ 660, 659, 625, 890, -1,
  /* DiagSubGroup667 */ 836, -1,
  /* DiagSubGroup669 */ 837, 671, 673, 675, 674, 670, 672, 676, -1,
  /* DiagSubGroup675 */ 674, -1,
  /* DiagSubGroup686 */ 451, -1,
  /* DiagSubGroup690 */ 691, -1,
  /* DiagSubGroup692 */ 693, -1,
  /* DiagSubGroup694 */ 495, 494, 77, 79, 816, 684, 695, 201, -1,
  /* DiagSubGroup696 */ 935, -1,
  /* DiagSubGroup703 */ 146, 100, 102, 105, 106, 110, 119, 122, 321, 354, 362, 364, 366, 367, 368, 369, 372, 373, 374, 376, 377, 379, 380, 381, 382, 383, 384, 385, 389, 391, 392, 484, 496, 513, 514, 516, 519, 521, 526, 527, 534, 683, 1027, 269, 487, 481, 217, 425, 285, 289, 621, 318, 357, 73, 60, 930, 782, 174, 587, -1,
  /* DiagSubGroup705 */ 246, 498, 88, 781, 317, -1,
  /* DiagSubGroup707 */ 383, -1,
  /* DiagSubGroup712 */ 1016, -1,
  /* DiagSubGroup713 */ 712, 1017, -1,
  /* DiagSubGroup720 */ 721, -1,
  /* DiagSubGroup723 */ 949, 406, 718, 720, -1,
  /* DiagSubGroup725 */ 724, 138, -1,
  /* DiagSubGroup727 */ 726, -1,
  /* DiagSubGroup729 */ 728, -1,
  /* DiagSubGroup731 */ 730, -1,
  /* DiagSubGroup733 */ 732, -1,
  /* DiagSubGroup734 */ 732, -1,
  /* DiagSubGroup735 */ 733, -1,
  /* DiagSubGroup737 */ 736, -1,
  /* DiagSubGroup739 */ 738, -1,
  /* DiagSubGroup740 */ 738, -1,
  /* DiagSubGroup741 */ 739, -1,
  /* DiagSubGroup757 */ 759, 758, -1,
  /* DiagSubGroup769 */ 248, -1,
  /* DiagSubGroup772 */ 773, 774, -1,
  /* DiagSubGroup776 */ 778, -1,
  /* DiagSubGroup777 */ 778, 779, 1003, -1,
  /* DiagSubGroup780 */ 98, -1,
  /* DiagSubGroup783 */ 785, -1,
  /* DiagSubGroup787 */ 788, 784, -1,
  /* DiagSubGroup796 */ 797, -1,
  /* DiagSubGroup798 */ 800, 799, -1,
  /* DiagSubGroup804 */ 965, -1,
  /* DiagSubGroup806 */ 810, 811, -1,
  /* DiagSubGroup807 */ 806, 809, 812, 808, -1,
  /* DiagSubGroup809 */ 810, -1,
  /* DiagSubGroup839 */ 838, -1,
  /* DiagSubGroup842 */ 387, -1,
  /* DiagSubGroup859 */ 716, -1,
  /* DiagSubGroup861 */ 242, -1,
  /* DiagSubGroup874 */ 830, 279, 608, 506, 873, -1,
  /* DiagSubGroup885 */ 886, 892, 891, 884, 894, 890, 889, -1,
  /* DiagSubGroup886 */ 888, -1,
  /* DiagSubGroup887 */ 912, 898, -1,
  /* DiagSubGroup902 */ 904, 903, 907, 908, -1,
  /* DiagSubGroup908 */ 909, -1,
  /* DiagSubGroup912 */ 893, 897, 895, 896, -1,
  /* DiagSubGroup934 */ 717, -1,
  /* DiagSubGroup935 */ 936, -1,
  /* DiagSubGroup941 */ 834, 846, 942, -1,
  /* DiagSubGroup952 */ 145, -1,
  /* DiagSubGroup956 */ 961, 959, 960, -1,
  /* DiagSubGroup957 */ 956, 958, 962, -1,
  /* DiagSubGroup963 */ 964, -1,
  /* DiagSubGroup978 */ 979, 986, 988, 995, 989, 990, 999, 1000, 981, 996, -1,
  /* DiagSubGroup986 */ 953, -1,
  /* DiagSubGroup991 */ 990, -1,
  /* DiagSubGroup993 */ 954, -1,
  /* DiagSubGroup998 */ 953, -1,
  /* DiagSubGroup999 */ 983, 997, 934, -1,
  /* DiagSubGroup1000 */ 984, -1,
  /* DiagSubGroup1009 */ 1008, -1,
  /* DiagSubGroup1012 */ 1014, -1,
  /* DiagSubGroup1013 */ 1015, -1,
  /* DiagSubGroup1014 */ 1013, -1,
  /* DiagSubGroup1017 */ 1016, -1,
  /* DiagSubGroup1023 */ 253, -1,
  /* DiagSubGroup1024 */ 1023, -1,
};

static const char DiagGroupNames[] = {
    "\000\020#pragma-messages\t#warnings\020CFString-literal\003CL4\032Indep"
    "endentClass-attribute\022NSObject-attribute\003abi\016absolute-value\024"
    "abstract-final-class\023abstract-vbase-init\007address\030address-of-pa"
    "cked-member\024address-of-temporary\020aggregate-return\naix-compat\"al"
    "ias-template-in-declaration-name\016align-mismatch\003all\006alloca\031"
    "alloca-with-align-alignof\027always-inline-coroutine\020ambiguous-delet"
    "e\022ambiguous-ellipsis\017ambiguous-macro\031ambiguous-member-template"
    "\033ambiguous-reversed-operator\034analyzer-incompatible-plugin\034andr"
    "oid-unversioned-fallback\031anon-enum-enum-conversion\025anonymous-pack"
    "-parens\010apinotes\003arc%arc-bridge-casts-disallowed-in-nonarc\036arc"
    "-maybe-repeated-use-of-weak\025arc-non-pod-memaccess\031arc-performSele"
    "ctor-leaks\030arc-repeated-use-of-weak\021arc-retain-cycles\032arc-unsa"
    "fe-retained-assign\026argument-outside-range\034argument-undefined-beha"
    "viour\014array-bounds\037array-bounds-pointer-arithmetic\017array-param"
    "eter\003asm\022asm-operand-widths\013assign-enum\006assume\013at-protoc"
    "ol\034atimport-in-framework-header\015atomic-access\020atomic-alignment"
    "\027atomic-implicit-seq-cst\026atomic-memory-ordering\021atomic-propert"
    "ies*atomic-property-with-user-defined-accessor\035attribute-packed-for-"
    "bitfield\021attribute-warning\nattributes\024auto-decl-extensions\033au"
    "to-disable-vptr-sanitizer\013auto-import\022auto-storage-class\013auto-"
    "var-id\014availability\030avr-rtlib-linking-quirks\016backend-plugin\030"
    "backslash-newline-escape\021bad-function-cast\016binary-literal\026bind"
    "-to-temporary-copy\024binding-in-condition\021bit-int-extension\034bitf"
    "ield-constant-conversion\030bitfield-enum-conversion\016bitfield-width\037"
    "bitwise-conditional-parentheses\032bitwise-instead-of-logical\026bitwis"
    "e-op-parentheses\033block-capture-autoreleasing\017bool-conversion\020b"
    "ool-conversions\016bool-operation\022braced-scalar-init\021branch-prote"
    "ction\013bridge-cast builtin-assume-aligned-alignment\027builtin-macro-"
    "redefined\027builtin-memcpy-chk-size\027builtin-requires-header\nc++-co"
    "mpat\014c++0x-compat\020c++0x-extensions\017c++0x-narrowing\014c++11-co"
    "mpat(c++11-compat-deprecated-writable-strings\025c++11-compat-pedantic*"
    "c++11-compat-reserved-user-defined-literal\020c++11-extensions\020c++11"
    "-extra-semi\026c++11-inline-namespace\017c++11-long-long\017c++11-narro"
    "wing\037c++11-narrowing-const-reference\032c++14-attribute-extensions\024"
    "c++14-binary-literal\014c++14-compat\025c++14-compat-pedantic\020c++14-"
    "extensions\032c++17-attribute-extensions\014c++17-compat\025c++17-compa"
    "t-mangling\025c++17-compat-pedantic\020c++17-extensions\020c++1y-extens"
    "ions\014c++1z-compat\025c++1z-compat-mangling\020c++1z-extensions\032c+"
    "+20-attribute-extensions\014c++20-compat\025c++20-compat-pedantic\020c+"
    "+20-designator\020c++20-extensions\032c++23-attribute-extensions\020c++"
    "23-extensions\027c++23-lambda-attributes\020c++26-extensions\014c++2a-c"
    "ompat\025c++2a-compat-pedantic\020c++2a-extensions\020c++2b-extensions\020"
    "c++2c-extensions\036c++98-c++11-c++14-c++17-compat'c++98-c++11-c++14-c+"
    "+17-compat-pedantic\030c++98-c++11-c++14-compat!c++98-c++11-c++14-compa"
    "t-pedantic\022c++98-c++11-compat!c++98-c++11-compat-binary-literal\033c"
    "++98-c++11-compat-pedantic\014c++98-compat#c++98-compat-bind-to-tempora"
    "ry-copy\027c++98-compat-extra-semi%c++98-compat-local-type-template-arg"
    "s\025c++98-compat-pedantic'c++98-compat-unnamed-type-template-args\016c"
    "11-extensions\nc23-compat\016c23-extensions\nc2x-compat\016c2x-extensio"
    "ns\nc99-compat\016c99-designator\016c99-extensions#call-to-pure-virtual"
    "-from-ctor-dtor\025called-once-parameter\ncast-align\027cast-calling-co"
    "nvention\022cast-function-type\031cast-function-type-strict\020cast-of-"
    "sel-type\tcast-qual\023cast-qual-unrelated\nchar-align\017char-subscrip"
    "ts\014clang-cl-pch\020class-conversion\015class-varargs\017cmse-union-l"
    "eak\005comma\007comment\010comments\036compare-distinct-pointer-types\022"
    "completion-handler\026complex-component-init\024compound-token-split\035"
    "compound-token-split-by-macro\035compound-token-split-by-space\031condi"
    "tional-type-mismatch\031conditional-uninitialized\015config-macros\023c"
    "onstant-conversion\022constant-evaluated\030constant-logical-operand\023"
    "constexpr-not-const\010consumed\nconversion\017conversion-null$coro-non"
    "-aligned-allocation-function\tcoroutine%coroutine-missing-unhandled-exc"
    "eption\026covered-switch-default\003cpp\030cstring-format-directive\026"
    "ctad-maybe-unsupported\021ctor-dtor-privacy\003ctu\013cuda-compat\030cu"
    "stom-atomic-properties\027cxx-attribute-extension\010dangling\015dangli"
    "ng-else\016dangling-field\014dangling-gsl\031dangling-initializer-list\023"
    "darwin-sdk-settings\tdate-time\023dealloc-in-category\035debug-compress"
    "ion-unavailable\033declaration-after-statement\032defaulted-function-de"
    "leted!delayed-template-parsing-in-cxx20\026delegating-ctor-cycles delet"
    "e-abstract-non-virtual-dtor\021delete-incomplete$delete-non-abstract-no"
    "n-virtual-dtor\027delete-non-virtual-dtor#delimited-escape-sequence-ext"
    "ension\032deprecate-lax-vec-conv-all\ndeprecated\035deprecated-altivec-"
    "src-compat$deprecated-anon-enum-enum-conversion\030deprecated-array-com"
    "pare\025deprecated-attributes\023deprecated-builtins\032deprecated-comm"
    "a-subscript\017deprecated-copy\024deprecated-copy-dtor\031deprecated-co"
    "py-with-dtor'deprecated-copy-with-user-provided-copy'deprecated-copy-wi"
    "th-user-provided-dtor\024deprecated-coroutine\027deprecated-declaration"
    "s!deprecated-dynamic-exception-spec\027deprecated-enum-compare#deprecat"
    "ed-enum-compare-conditional\037deprecated-enum-enum-conversion deprecat"
    "ed-enum-float-conversion\032deprecated-implementations\031deprecated-in"
    "crement-bool\033deprecated-literal-operator\031deprecated-module-dot-ma"
    "p\030deprecated-non-prototype\031deprecated-objc-isa-usage%deprecated-o"
    "bjc-pointer-introspection5deprecated-objc-pointer-introspection-perform"
    "Selector\021deprecated-pragma)deprecated-redundant-constexpr-static-def"
    "\023deprecated-register\037deprecated-static-analyzer-flag\027deprecate"
    "d-this-capture\017deprecated-type\023deprecated-volatile\033deprecated-"
    "writable-strings\022direct-ivar-access\030disabled-macro-expansion\025d"
    "isabled-optimization\014discard-qual\034distributed-object-modifiers\013"
    "div-by-zero\020division-by-zero\036dll-attribute-on-redeclaration%dllex"
    "port-explicit-instantiation-decl\032dllimport-static-field-def\015docum"
    "entation\035documentation-deprecated-sync\022documentation-html\026docu"
    "mentation-pedantic\035documentation-unknown-command\036dollar-in-identi"
    "fier-extension\020double-promotion\tdtor-name\014dtor-typedef\030duplic"
    "ate-decl-specifier\016duplicate-enum\024duplicate-method-arg\026duplica"
    "te-method-match\022duplicate-protocol\017dxil-validation\027dynamic-cla"
    "ss-memaccess\026dynamic-exception-spec\034eager-load-cxx-named-modules\006"
    "effc++\024elaborated-enum-base\025elaborated-enum-class\022embedded-dir"
    "ective\nempty-body\023empty-decomposition\017empty-init-stmt\026empty-t"
    "ranslation-unit\013encode-type\014endif-labels\014enum-compare\030enum-"
    "compare-conditional\023enum-compare-switch\031enum-constexpr-conversion"
    "\017enum-conversion\024enum-enum-conversion\025enum-float-conversion\016"
    "enum-too-large\nexceptions\023excess-initializers\021excessive-regsave\025"
    "exit-time-destructors\024expansion-to-defined\031experimental-header-un"
    "its\030explicit-initialize-call\027explicit-ownership-type\016export-un"
    "named\017extern-c-compat\022extern-initializer\005extra\023extra-qualif"
    "ication\nextra-semi\017extra-semi-stmt\014extra-tokens\032final-dtor-no"
    "n-final-class\013final-macro\024fixed-enum-extension\024fixed-point-ove"
    "rflow\tflag-enum\031flexible-array-extensions\020float-conversion\013fl"
    "oat-equal\031float-overflow-conversion\025float-zero-conversion\021for-"
    "loop-analysis\006format\021format-extra-args\030format-insufficient-arg"
    "s\030format-invalid-specifier\016format-non-iso\021format-nonliteral\017"
    "format-overflow\033format-overflow-non-kprintf\017format-pedantic\017fo"
    "rmat-security\021format-truncation\035format-truncation-non-kprintf\025"
    "format-type-confusion\nformat-y2k\022format-zero-length\010format=2\016"
    "fortify-source\023four-char-constants\015frame-address\021frame-larger-"
    "than\022frame-larger-than=%framework-include-private-from-public\023fre"
    "e-nonheap-object\013friend-enum\036function-def-in-objc-container\025fu"
    "nction-multiversion\014fuse-ld-path\033future-attribute-extensions\015f"
    "uture-compat\ngcc-compat\026generic-type-extension\023global-constructo"
    "rs\013global-isel\003gnu\026gnu-alignof-expression\024gnu-anonymous-str"
    "uct\033gnu-array-member-paren-init\015gnu-auto-type\022gnu-binary-liter"
    "al\016gnu-case-range\023gnu-complex-integer gnu-compound-literal-initia"
    "lizer\037gnu-conditional-omitted-operand\016gnu-designator\025gnu-empty"
    "-initializer\020gnu-empty-struct\036gnu-flexible-array-initializer\037g"
    "nu-flexible-array-union-member\024gnu-folding-constant\026gnu-imaginary"
    "-constant\020gnu-include-next\035gnu-inline-cpp-without-extern\022gnu-l"
    "abel-as-value\017gnu-line-marker\033gnu-null-pointer-arithmetic\027gnu-"
    "offsetof-extensions\021gnu-pointer-arith\023gnu-redeclared-enum\030gnu-"
    "statement-expression-gnu-statement-expression-from-macro-expansion\025g"
    "nu-static-float-init$gnu-string-literal-operator-template\016gnu-union-"
    "cast\"gnu-variable-sized-type-not-at-end\027gnu-zero-line-directive!gnu"
    "-zero-variadic-macro-arguments\024gpu-maybe-wrong-side\014header-guard\016"
    "header-hygiene\031hip-omp-target-directives\010hip-only\017hlsl-extensi"
    "ons\025idiomatic-parentheses\022ignored-attributes)ignored-availability"
    "-without-sdk-settings\013ignored-gch\035ignored-optimization-argument\030"
    "ignored-pragma-intrinsic\027ignored-pragma-optimize\017ignored-pragmas\022"
    "ignored-qualifiers\034ignored-reference-qualifiers\010implicit\032impli"
    "cit-atomic-properties#implicit-const-int-float-conversion*implicit-conv"
    "ersion-floating-point-to-bool implicit-exception-spec-mismatch\024impli"
    "cit-fallthrough!implicit-fallthrough-per-function\037implicit-fixed-poi"
    "nt-conversion\031implicit-float-conversion\035implicit-function-declara"
    "tion\014implicit-int\027implicit-int-conversion\035implicit-int-float-c"
    "onversion\024implicit-retain-self\033implicitly-unsigned-literal\006imp"
    "ort&import-preprocessor-directive-pedantic\021inaccessible-base include"
    "-angled-in-module-purview\032include-next-absolute-path\033include-next"
    "-outside-header\033incompatible-exception-spec#incompatible-function-po"
    "inter-types*incompatible-function-pointer-types-strict\"incompatible-li"
    "brary-redeclaration\036incompatible-ms-pragma-section\026incompatible-m"
    "s-struct\032incompatible-pointer-types.incompatible-pointer-types-disca"
    "rds-qualifiers\032incompatible-property-type\024incompatible-sysroot'in"
    "complete-framework-module-declaration\031incomplete-implementation\021i"
    "ncomplete-module\035incomplete-setjmp-declaration\023incomplete-umbrell"
    "a\026inconsistent-dllimport(inconsistent-missing-destructor-override\035"
    "inconsistent-missing-override\016increment-bool\022infinite-recursion\t"
    "init-self\025initializer-overrides\023injected-class-name\006inline\nin"
    "line-asm#inline-namespace-reopened-noninline\021inline-new-delete\"inst"
    "antiation-after-specialization\016int-conversion\017int-conversions\023"
    "int-in-bool-context\023int-to-pointer-cast\030int-to-void-pointer-cast\020"
    "integer-overflow\035invalid-command-line-argument\021invalid-constexpr\033"
    "invalid-feature-combination\020invalid-iboutlet&invalid-initializer-fro"
    "m-system-header\035invalid-ios-deployment-target\030invalid-no-builtin-"
    "names\020invalid-noreturn\020invalid-offsetof invalid-or-nonexistent-di"
    "rectory\036invalid-partial-specialization\013invalid-pch\020invalid-pp-"
    "token\027invalid-source-encoding\035invalid-static-assert-message\023in"
    "valid-token-paste\032invalid-unevaluated-string\014invalid-utf8\020jump"
    "-seh-finally\016keyword-compat\015keyword-macro\033knl-knm-isa-support-"
    "removed\026knr-promoted-parameter\030language-extension-token\023large-"
    "by-value-copy\006liblto\017linker-warnings\022literal-conversion\015lit"
    "eral-range\030local-type-template-args\027logical-not-parentheses\026lo"
    "gical-op-parentheses\tlong-long\015loop-analysis\017macro-redefined\004"
    "main\020main-return-type\027malformed-warning-check\036many-braces-arou"
    "nd-scalar-init*mathematical-notation-identifier-extension\nmax-tokens\021"
    "max-unsigned-zero\026memset-transposed-args\022memsize-comparison\021me"
    "thod-signatures\tmicrosoft\022microsoft-abstract\022microsoft-anon-tag\016"
    "microsoft-cast\021microsoft-charize\027microsoft-comment-paste\024micro"
    "soft-const-init\023microsoft-cpp-macro\"microsoft-default-arg-redefinit"
    "ion\031microsoft-drectve-section\025microsoft-end-of-file microsoft-enu"
    "m-forward-reference\024microsoft-enum-value\030microsoft-exception-spec"
    "\020microsoft-exists#microsoft-explicit-constructor-call\035microsoft-e"
    "xtra-qualification\024microsoft-fixed-enum\030microsoft-flexible-array\016"
    "microsoft-goto\033microsoft-inaccessible-base\021microsoft-include\036m"
    "icrosoft-init-from-predefined\033microsoft-mutable-reference\031microso"
    "ft-pure-definition\032microsoft-redeclare-static\020microsoft-sealed\027"
    "microsoft-static-assert(microsoft-string-literal-from-predefined\022mic"
    "rosoft-template\031microsoft-template-shadow microsoft-union-member-ref"
    "erence\034microsoft-unqualified-friend\024microsoft-using-decl\032micro"
    "soft-void-pseudo-dtor\tmisexpect\026misleading-indentation\025mismatche"
    "d-new-delete\032mismatched-parameter-types\027mismatched-return-types\017"
    "mismatched-tags\016missing-braces\021missing-constinit\024missing-decla"
    "rations%missing-designated-field-initializers\026missing-exception-spec"
    "\032missing-field-initializers\030missing-format-attribute\024missing-i"
    "nclude-dirs\032missing-method-return-type\020missing-multilib\020missin"
    "g-noescape\020missing-noreturn\030missing-prototype-for-cc\022missing-p"
    "rototypes\025missing-selector-name\017missing-sysroot\035missing-variab"
    "le-declarations\025misspelled-assumption\014module-build\017module-conf"
    "lict\033module-file-config-mismatch\025module-file-extension\015module-"
    "import\031module-import-in-extern-c\032module-include-translation\013mo"
    "dule-lock\"modules-ambiguous-internal-linkage\037modules-import-nested-"
    "redundant\004most\004move\014msvc-include\016msvc-not-found\tmulti-gpu\t"
    "multichar\023multiple-move-vbase\025nan-infinity-disabled\tnarrowing\021"
    "nested-anon-types\016nested-externs\020new-returns-null\013newline-eof\007"
    "noderef\015noexcept-type\031non-c-typedef-for-linkage\007non-gcc\033non"
    "-literal-null-conversion'non-modular-include-in-framework-module\035non"
    "-modular-include-in-module\017non-pod-varargs\032non-power-of-two-align"
    "ment\020non-virtual-dtor\007nonnull\025nonportable-cfstrings\030nonport"
    "able-include-path!nonportable-private-apinotes-path(nonportable-private"
    "-system-apinotes-path\037nonportable-system-include-path!nonportable-ve"
    "ctor-initialization\024nontrivial-memaccess\023nsconsumed-mismatch\022n"
    "sreturns-mismatch\017null-arithmetic\016null-character\017null-conversi"
    "on\020null-dereference\027null-pointer-arithmetic\030null-pointer-subtr"
    "action\013nullability\030nullability-completeness\"nullability-complete"
    "ness-on-arrays\024nullability-declspec\025nullability-extension#nullabi"
    "lity-inferred-on-nested-type\036nullable-to-nonnull-conversion+objc-aut"
    "osynthesis-property-ivar-name-match\035objc-bool-constant-conversion\013"
    "objc-boxing\027objc-circular-container\016objc-cocoa-api\034objc-design"
    "ated-initializers\036objc-dictionary-duplicate-keys\"objc-duplicate-cat"
    "egory-definition\023objc-flexible-array\037objc-forward-class-redefinit"
    "ion\024objc-interface-ivars\024objc-literal-compare\027objc-literal-con"
    "version\027objc-macro-redefinition\021objc-messaging-id\022objc-method-"
    "access\037objc-missing-property-synthesis\030objc-missing-super-calls\032"
    "objc-multiple-method-names\"objc-noncopy-retain-block-property\032objc-"
    "nonunified-exceptions#objc-property-assign-on-object-type\034objc-prope"
    "rty-implementation\037objc-property-implicit-mismatch*objc-property-mat"
    "ches-cocoa-ownership-rule\032objc-property-no-attribute\027objc-propert"
    "y-synthesis#objc-protocol-method-implementation objc-protocol-property-"
    "synthesis\030objc-protocol-qualifiers\"objc-readonly-with-setter-proper"
    "ty\026objc-redundant-api-use\032objc-redundant-literal-use\017objc-root"
    "-class\025objc-signed-char-bool/objc-signed-char-bool-implicit-float-co"
    "nversion-objc-signed-char-bool-implicit-int-conversion\023objc-string-c"
    "ompare\031objc-string-concatenation\034objc-unsafe-perform-selector\003"
    "odr\016old-style-cast\024old-style-definition\007openacc\027opencl-unsu"
    "pported-rgba\006openmp\024openmp-51-extensions\016openmp-clauses\021ope"
    "nmp-extensions\020openmp-loop-form\016openmp-mapping\015openmp-target\027"
    "openmp-target-exception\016option-ignored!ordered-compare-function-poin"
    "ters\027out-of-line-declaration\025out-of-scope-function\014over-aligne"
    "d\010overflow\022overlength-strings\037overloaded-shift-op-parentheses\022"
    "overloaded-virtual\015override-init\017override-module\032overriding-me"
    "thod-mismatch\021overriding-option\006packed\016packed-non-pod\006padde"
    "d\017padded-bitfield\013parentheses\024parentheses-equality\024partial-"
    "availability\004pass\015pass-analysis\013pass-failed\013pass-missed\015"
    "pch-date-time\014pch-vfs-diff\010pedantic\026pedantic-core-features\017"
    "pedantic-macros\020pessimizing-move\015pointer-arith\027pointer-bool-co"
    "nversion\017pointer-compare\027pointer-integer-compare\014pointer-sign\024"
    "pointer-to-enum-cast\023pointer-to-int-cast\025pointer-type-mismatch\031"
    "poison-system-directories\033potentially-direct-selector potentially-ev"
    "aluated-expression\026pragma-clang-attribute\032pragma-once-outside-hea"
    "der\013pragma-pack\036pragma-pack-suspicious-include#pragma-system-head"
    "er-outside-header\007pragmas\020pre-c++14-compat\031pre-c++14-compat-pe"
    "dantic\020pre-c++17-compat\031pre-c++17-compat-pedantic\020pre-c++20-co"
    "mpat\031pre-c++20-compat-pedantic\020pre-c++23-compat\031pre-c++23-comp"
    "at-pedantic\020pre-c++26-compat\031pre-c++26-compat-pedantic\020pre-c++"
    "2c-compat\031pre-c++2c-compat-pedantic\016pre-c11-compat\027pre-c11-com"
    "pat-pedantic\016pre-c23-compat\027pre-c23-compat-pedantic\016pre-c2x-co"
    "mpat\027pre-c2x-compat-pedantic\024pre-openmp-51-compat&predefined-iden"
    "tifier-outside-function\016private-extern\016private-header\016private-"
    "module\025profile-instr-missing\031profile-instr-out-of-date\030profile"
    "-instr-unprofiled\032property-access-dot-syntax\033property-attribute-m"
    "ismatch\010protocol%protocol-property-synthesis-ambiguity\005psabi\032q"
    "ualified-void-return-type\"quoted-include-in-framework-header\023range-"
    "loop-analysis\031range-loop-bind-reference\024range-loop-construct\017r"
    "ead-only-types\032readonly-iboutlet-property\015receiver-expr\026receiv"
    "er-forward-class\027redeclared-class-member\026redundant-consteval-if\017"
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
    "cement\034template-in-declaration-name$tentative-definition-incomplete-"
    "type\015thread-safety\026thread-safety-analysis\030thread-safety-attrib"
    "utes\022thread-safety-beta\026thread-safety-negative\025thread-safety-p"
    "recise\027thread-safety-reference\036thread-safety-reference-return\025"
    "thread-safety-verbose\ttrigraphs\013type-limits\013type-safety\024typed"
    "ef-redefinition\020typename-missing\031unable-to-open-stats-file\020una"
    "ligned-access!unaligned-qualifier-implicit-cast\030unavailable-declarat"
    "ions\023undeclared-selector\005undef\014undef-prefix\027undefined-arm-s"
    "treaming\020undefined-arm-za\021undefined-arm-zt0\031undefined-bool-con"
    "version\027undefined-func-template\020undefined-inline\022undefined-int"
    "ernal\027undefined-internal-type\032undefined-reinterpret-cast\026undef"
    "ined-var-template\035underaligned-exception-object\026unevaluated-expre"
    "ssion\026unguarded-availability\032unguarded-availability-new\007unicod"
    "e\021unicode-homoglyph\022unicode-whitespace\022unicode-zero-width\015u"
    "ninitialized\035uninitialized-const-reference\020unknown-argument\022un"
    "known-assumption\022unknown-attributes\024unknown-cuda-version\022unkno"
    "wn-directives\027unknown-escape-sequence\017unknown-pragmas\022unknown-"
    "sanitizers\026unknown-warning-option\032unnamed-type-template-args\035u"
    "nneeded-internal-declaration\030unneeded-member-function\031unqualified"
    "-std-cast-call\020unreachable-code\033unreachable-code-aggressive\026un"
    "reachable-code-break\034unreachable-code-fallthrough\036unreachable-cod"
    "e-generic-assoc\037unreachable-code-loop-increment\027unreachable-code-"
    "return\023unsafe-buffer-usage unsafe-buffer-usage-in-container\013unseq"
    "uenced\017unsupported-abi\017unsupported-abs\036unsupported-availabilit"
    "y-guard\016unsupported-cb#unsupported-dll-base-class-template\036unsupp"
    "orted-floating-point-opt\022unsupported-friend\021unsupported-gpopt\017"
    "unsupported-nan\026unsupported-target-opt\026unsupported-visibility\037"
    "unusable-partial-specialization\006unused\017unused-argument\030unused-"
    "but-set-parameter\027unused-but-set-variable\034unused-command-line-arg"
    "ument\021unused-comparison\025unused-const-variable\032unused-exception"
    "-parameter\017unused-function\032unused-getter-return-value\014unused-l"
    "abel\025unused-lambda-capture\024unused-local-typedef\025unused-local-t"
    "ypedefs\015unused-macros\026unused-member-function\020unused-parameter\024"
    "unused-private-field\024unused-property-ivar\015unused-result\017unused"
    "-template\014unused-value\017unused-variable\026unused-volatile-lvalue\026"
    "used-but-marked-unused\025user-defined-literals\025user-defined-warning"
    "s\007varargs\017variadic-macros\015vec-elem-size\021vector-conversion\022"
    "vector-conversions\014vexing-parse\nvisibility\003vla\021vla-cxx-extens"
    "ion\015vla-extension\033vla-extension-static-assert\031void-pointer-to-"
    "enum-cast\030void-pointer-to-int-cast\024void-ptr-dereference\025volati"
    "le-register-var\023wasm-exception-spec\025weak-template-vtables\014weak"
    "-vtables\020writable-strings\015write-strings\017xor-used-as-pow\035zer"
    "o-as-null-pointer-constant\021zero-length-array"};

#endif // GET_DIAG_ARRAYS


#ifdef DIAG_ENTRY
DIAG_ENTRY(anonymous_60 /*  */, 0, 0, /* DiagSubGroup0 */ 1, R"()")
DIAG_ENTRY(PoundPragmaMessage /* #pragma-messages */, 1, /* DiagArray1 */ 1, 0, R"()")
DIAG_ENTRY(PoundWarning /* #warnings */, 18, /* DiagArray2 */ 3, 0, R"()")
DIAG_ENTRY(anonymous_289 /* CFString-literal */, 28, /* DiagArray3 */ 5, 0, R"()")
DIAG_ENTRY(anonymous_59 /* CL4 */, 45, 0, /* DiagSubGroup4 */ 3, R"()")
DIAG_ENTRY(IndependentClassAttribute /* IndependentClass-attribute */, 49, /* DiagArray5 */ 7, 0, R"()")
DIAG_ENTRY(NSobjectAttribute /* NSObject-attribute */, 76, /* DiagArray6 */ 10, 0, R"()")
DIAG_ENTRY(anonymous_0 /* abi */, 95, 0, 0, R"()")
DIAG_ENTRY(AbsoluteValue /* absolute-value */, 99, /* DiagArray8 */ 12, 0, R"()")
DIAG_ENTRY(AbstractFinalClass /* abstract-final-class */, 114, /* DiagArray9 */ 17, 0, R"()")
DIAG_ENTRY(anonymous_283 /* abstract-vbase-init */, 135, /* DiagArray10 */ 19, 0, R"()")
DIAG_ENTRY(anonymous_58 /* address */, 155, 0, /* DiagSubGroup11 */ 6, R"()")
DIAG_ENTRY(anonymous_259 /* address-of-packed-member */, 163, /* DiagArray12 */ 21, 0, R"()")
DIAG_ENTRY(AddressOfTemporary /* address-of-temporary */, 188, /* DiagArray13 */ 23, 0, R"()")
DIAG_ENTRY(anonymous_2 /* aggregate-return */, 209, 0, 0, R"()")
DIAG_ENTRY(AIXCompat /* aix-compat */, 226, /* DiagArray15 */ 25, 0, R"()")
DIAG_ENTRY(anonymous_271 /* alias-template-in-declaration-name */, 237, /* DiagArray16 */ 28, 0, R"()")
DIAG_ENTRY(anonymous_260 /* align-mismatch */, 272, /* DiagArray17 */ 30, 0, R"()")
DIAG_ENTRY(All /* all */, 287, 0, /* DiagSubGroup18 */ 10, R"()")
DIAG_ENTRY(anonymous_204 /* alloca */, 291, /* DiagArray19 */ 32, 0, R"()")
DIAG_ENTRY(anonymous_205 /* alloca-with-align-alignof */, 298, /* DiagArray20 */ 34, 0, R"()")
DIAG_ENTRY(AlwaysInlineCoroutine /* always-inline-coroutine */, 324, /* DiagArray21 */ 36, 0, R"()")
DIAG_ENTRY(anonymous_266 /* ambiguous-delete */, 348, /* DiagArray22 */ 38, 0, R"()")
DIAG_ENTRY(anonymous_154 /* ambiguous-ellipsis */, 365, /* DiagArray23 */ 40, 0, R"()")
DIAG_ENTRY(AmbiguousMacro /* ambiguous-macro */, 384, /* DiagArray24 */ 42, 0, R"()")
DIAG_ENTRY(AmbigMemberTemplate /* ambiguous-member-template */, 400, /* DiagArray25 */ 44, 0, R"()")
DIAG_ENTRY(anonymous_225 /* ambiguous-reversed-operator */, 426, /* DiagArray26 */ 46, 0, R"()")
DIAG_ENTRY(anonymous_109 /* analyzer-incompatible-plugin */, 454, /* DiagArray27 */ 48, 0, R"()")
DIAG_ENTRY(anonymous_106 /* android-unversioned-fallback */, 483, /* DiagArray28 */ 50, 0, R"()")
DIAG_ENTRY(AnonEnumEnumConversion /* anon-enum-enum-conversion */, 512, /* DiagArray29 */ 52, /* DiagSubGroup29 */ 18, R"()")
DIAG_ENTRY(anonymous_155 /* anonymous-pack-parens */, 538, /* DiagArray30 */ 54, 0, R"()")
DIAG_ENTRY(anonymous_91 /* apinotes */, 560, /* DiagArray31 */ 56, 0, R"()")
DIAG_ENTRY(AutomaticReferenceCounting /* arc */, 569, 0, /* DiagSubGroup32 */ 20, R"()")
DIAG_ENTRY(anonymous_153 /* arc-bridge-casts-disallowed-in-nonarc */, 573, /* DiagArray33 */ 58, 0, R"()")
DIAG_ENTRY(ARCRepeatedUseOfWeakMaybe /* arc-maybe-repeated-use-of-weak */, 611, /* DiagArray34 */ 60, 0, R"()")
DIAG_ENTRY(ARCNonPodMemAccess /* arc-non-pod-memaccess */, 642, /* DiagArray35 */ 62, 0, R"()")
DIAG_ENTRY(anonymous_184 /* arc-performSelector-leaks */, 664, /* DiagArray36 */ 64, 0, R"()")
DIAG_ENTRY(ARCRepeatedUseOfWeak /* arc-repeated-use-of-weak */, 690, /* DiagArray37 */ 66, /* DiagSubGroup37 */ 24, R"()")
DIAG_ENTRY(ARCRetainCycles /* arc-retain-cycles */, 715, /* DiagArray38 */ 68, 0, R"()")
DIAG_ENTRY(ARCUnsafeRetainedAssign /* arc-unsafe-retained-assign */, 733, /* DiagArray39 */ 70, 0, R"()")
DIAG_ENTRY(anonymous_291 /* argument-outside-range */, 760, /* DiagArray40 */ 74, 0, R"()")
DIAG_ENTRY(anonymous_292 /* argument-undefined-behaviour */, 783, /* DiagArray41 */ 76, 0, R"()")
DIAG_ENTRY(ArrayBounds /* array-bounds */, 812, /* DiagArray42 */ 78, 0, R"()")
DIAG_ENTRY(ArrayBoundsPointerArithmetic /* array-bounds-pointer-arithmetic */, 825, /* DiagArray43 */ 84, 0, R"()")
DIAG_ENTRY(ArrayParameter /* array-parameter */, 857, /* DiagArray44 */ 87, 0, R"()")
DIAG_ENTRY(ASM /* asm */, 873, 0, /* DiagSubGroup45 */ 26, R"()")
DIAG_ENTRY(ASMOperandWidths /* asm-operand-widths */, 877, /* DiagArray46 */ 89, 0, R"()")
DIAG_ENTRY(anonymous_290 /* assign-enum */, 896, /* DiagArray47 */ 91, 0, R"()")
DIAG_ENTRY(anonymous_171 /* assume */, 908, /* DiagArray48 */ 93, 0, R"()")
DIAG_ENTRY(anonymous_57 /* at-protocol */, 915, 0, 0, R"()")
DIAG_ENTRY(FrameworkHdrAtImport /* atimport-in-framework-header */, 927, /* DiagArray50 */ 95, 0, R"()")
DIAG_ENTRY(anonymous_248 /* atomic-access */, 956, /* DiagArray51 */ 97, 0, R"()")
DIAG_ENTRY(AtomicAlignment /* atomic-alignment */, 970, /* DiagArray52 */ 99, 0, R"()")
DIAG_ENTRY(anonymous_276 /* atomic-implicit-seq-cst */, 987, /* DiagArray53 */ 102, 0, R"()")
DIAG_ENTRY(anonymous_275 /* atomic-memory-ordering */, 1011, /* DiagArray54 */ 104, 0, R"()")
DIAG_ENTRY(AtomicProperties /* atomic-properties */, 1034, 0, /* DiagSubGroup55 */ 28, R"()")
DIAG_ENTRY(anonymous_179 /* atomic-property-with-user-defined-accessor */, 1052, /* DiagArray56 */ 106, 0, R"()")
DIAG_ENTRY(anonymous_221 /* attribute-packed-for-bitfield */, 1095, /* DiagArray57 */ 108, 0, R"()")
DIAG_ENTRY(BackendWarningAttributes /* attribute-warning */, 1125, /* DiagArray58 */ 110, 0, R"()")
DIAG_ENTRY(Attributes /* attributes */, 1143, 0, /* DiagSubGroup59 */ 31, R"()")
DIAG_ENTRY(anonymous_162 /* auto-decl-extensions */, 1154, /* DiagArray60 */ 113, 0, R"()")
DIAG_ENTRY(AutoDisableVptrSanitizer /* auto-disable-vptr-sanitizer */, 1175, /* DiagArray61 */ 115, 0, R"()")
DIAG_ENTRY(anonymous_3 /* auto-import */, 1203, 0, 0, R"()")
DIAG_ENTRY(anonymous_151 /* auto-storage-class */, 1215, /* DiagArray63 */ 117, 0, R"()")
DIAG_ENTRY(anonymous_198 /* auto-var-id */, 1234, /* DiagArray64 */ 119, 0, R"()")
DIAG_ENTRY(Availability /* availability */, 1246, /* DiagArray65 */ 121, 0, R"()")
DIAG_ENTRY(AVRRtlibLinkingQuirks /* avr-rtlib-linking-quirks */, 1259, /* DiagArray66 */ 132, 0, R"()")
DIAG_ENTRY(BackendPlugin /* backend-plugin */, 1284, /* DiagArray67 */ 138, 0, R"()")
DIAG_ENTRY(anonymous_113 /* backslash-newline-escape */, 1299, /* DiagArray68 */ 141, 0, R"()")
DIAG_ENTRY(BadFunctionCast /* bad-function-cast */, 1324, /* DiagArray69 */ 143, 0, R"()")
DIAG_ENTRY(BinaryLiteral /* binary-literal */, 1342, 0, /* DiagSubGroup70 */ 34, R"()")
DIAG_ENTRY(BindToTemporaryCopy /* bind-to-temporary-copy */, 1357, /* DiagArray71 */ 145, /* DiagSubGroup71 */ 37, R"()")
DIAG_ENTRY(anonymous_166 /* binding-in-condition */, 1380, /* DiagArray72 */ 148, 0, R"()")
DIAG_ENTRY(anonymous_158 /* bit-int-extension */, 1401, /* DiagArray73 */ 150, 0, R"()")
DIAG_ENTRY(BitFieldConstantConversion /* bitfield-constant-conversion */, 1419, /* DiagArray74 */ 152, /* DiagSubGroup74 */ 39, R"()")
DIAG_ENTRY(BitFieldEnumConversion /* bitfield-enum-conversion */, 1448, /* DiagArray75 */ 154, 0, R"()")
DIAG_ENTRY(BitFieldWidth /* bitfield-width */, 1473, /* DiagArray76 */ 158, 0, R"()")
DIAG_ENTRY(BitwiseConditionalParentheses /* bitwise-conditional-parentheses */, 1488, /* DiagArray77 */ 160, 0, R"()")
DIAG_ENTRY(BitwiseInsteadOfLogical /* bitwise-instead-of-logical */, 1520, /* DiagArray78 */ 162, 0, R"()")
DIAG_ENTRY(BitwiseOpParentheses /* bitwise-op-parentheses */, 1547, /* DiagArray79 */ 164, 0, R"()")
DIAG_ENTRY(BlockCaptureAutoReleasing /* block-capture-autoreleasing */, 1570, /* DiagArray80 */ 166, 0, R"()")
DIAG_ENTRY(BoolConversion /* bool-conversion */, 1598, /* DiagArray81 */ 168, /* DiagSubGroup81 */ 41, R"()")
DIAG_ENTRY(anonymous_65 /* bool-conversions */, 1614, 0, /* DiagSubGroup82 */ 44, R"()")
DIAG_ENTRY(BoolOperation /* bool-operation */, 1631, /* DiagArray83 */ 170, /* DiagSubGroup83 */ 46, R"()")
DIAG_ENTRY(anonymous_243 /* braced-scalar-init */, 1646, /* DiagArray84 */ 172, 0, R"()")
DIAG_ENTRY(BranchProtection /* branch-protection */, 1665, /* DiagArray85 */ 174, 0, R"()")
DIAG_ENTRY(ObjCBridge /* bridge-cast */, 1683, /* DiagArray86 */ 179, 0, R"()")
DIAG_ENTRY(anonymous_207 /* builtin-assume-aligned-alignment */, 1695, /* DiagArray87 */ 182, 0, R"()")
DIAG_ENTRY(BuiltinMacroRedefined /* builtin-macro-redefined */, 1728, /* DiagArray88 */ 184, 0, R"()")
DIAG_ENTRY(anonymous_172 /* builtin-memcpy-chk-size */, 1752, /* DiagArray89 */ 187, 0, R"()")
DIAG_ENTRY(BuiltinRequiresHeader /* builtin-requires-header */, 1776, /* DiagArray90 */ 189, 0, R"()")
DIAG_ENTRY(CXXCompat /* c++-compat */, 1800, /* DiagArray91 */ 191, 0, R"()")
DIAG_ENTRY(anonymous_25 /* c++0x-compat */, 1811, 0, /* DiagSubGroup92 */ 48, R"()")
DIAG_ENTRY(anonymous_69 /* c++0x-extensions */, 1824, 0, /* DiagSubGroup93 */ 50, R"()")
DIAG_ENTRY(anonymous_23 /* c++0x-narrowing */, 1841, 0, /* DiagSubGroup94 */ 52, R"()")
DIAG_ENTRY(CXX11Compat /* c++11-compat */, 1857, /* DiagArray95 */ 193, /* DiagSubGroup95 */ 54, R"()")
DIAG_ENTRY(CXX11CompatDeprecatedWritableStr /* c++11-compat-deprecated-writable-strings */, 1870, /* DiagArray96 */ 204, 0, R"()")
DIAG_ENTRY(CXX11CompatPedantic /* c++11-compat-pedantic */, 1911, 0, /* DiagSubGroup97 */ 62, R"()")
DIAG_ENTRY(CXX11CompatReservedUserDefinedLiteral /* c++11-compat-reserved-user-defined-literal */, 1933, /* DiagArray98 */ 206, 0, R"()")
DIAG_ENTRY(CXX11 /* c++11-extensions */, 1976, /* DiagArray99 */ 208, /* DiagSubGroup99 */ 68, R"()")
DIAG_ENTRY(CXX11ExtraSemi /* c++11-extra-semi */, 1993, /* DiagArray100 */ 234, 0, R"()")
DIAG_ENTRY(CXX11InlineNamespace /* c++11-inline-namespace */, 2010, /* DiagArray101 */ 236, 0, R"()")
DIAG_ENTRY(CXX11LongLong /* c++11-long-long */, 2033, /* DiagArray102 */ 238, 0, R"()")
DIAG_ENTRY(CXX11Narrowing /* c++11-narrowing */, 2049, /* DiagArray103 */ 240, /* DiagSubGroup103 */ 72, R"()")
DIAG_ENTRY(CXX11NarrowingConstReference /* c++11-narrowing-const-reference */, 2065, /* DiagArray104 */ 248, 0, R"()")
DIAG_ENTRY(CXX14Attrs /* c++14-attribute-extensions */, 2097, /* DiagArray105 */ 252, 0, R"()")
DIAG_ENTRY(CXX14BinaryLiteral /* c++14-binary-literal */, 2124, /* DiagArray106 */ 254, 0, R"()")
DIAG_ENTRY(CXX14Compat /* c++14-compat */, 2145, 0, /* DiagSubGroup107 */ 74, R"()")
DIAG_ENTRY(CXX14CompatPedantic /* c++14-compat-pedantic */, 2158, 0, /* DiagSubGroup108 */ 78, R"()")
DIAG_ENTRY(CXX14 /* c++14-extensions */, 2180, /* DiagArray109 */ 256, /* DiagSubGroup109 */ 83, R"()")
DIAG_ENTRY(CXX17Attrs /* c++17-attribute-extensions */, 2197, /* DiagArray110 */ 264, 0, R"()")
DIAG_ENTRY(CXX17Compat /* c++17-compat */, 2224, 0, /* DiagSubGroup111 */ 86, R"()")
DIAG_ENTRY(CXX17CompatMangling /* c++17-compat-mangling */, 2237, /* DiagArray112 */ 266, 0, R"()")
DIAG_ENTRY(CXX17CompatPedantic /* c++17-compat-pedantic */, 2259, 0, /* DiagSubGroup113 */ 92, R"()")
DIAG_ENTRY(CXX17 /* c++17-extensions */, 2281, /* DiagArray114 */ 268, /* DiagSubGroup114 */ 96, R"()")
DIAG_ENTRY(anonymous_70 /* c++1y-extensions */, 2298, 0, /* DiagSubGroup115 */ 98, R"()")
DIAG_ENTRY(anonymous_26 /* c++1z-compat */, 2315, 0, /* DiagSubGroup116 */ 100, R"()")
DIAG_ENTRY(anonymous_12 /* c++1z-compat-mangling */, 2328, 0, /* DiagSubGroup117 */ 102, R"()")
DIAG_ENTRY(anonymous_71 /* c++1z-extensions */, 2350, 0, /* DiagSubGroup118 */ 104, R"()")
DIAG_ENTRY(CXX20Attrs /* c++20-attribute-extensions */, 2367, /* DiagArray119 */ 286, 0, R"()")
DIAG_ENTRY(CXX20Compat /* c++20-compat */, 2394, /* DiagArray120 */ 288, /* DiagSubGroup120 */ 106, R"()")
DIAG_ENTRY(CXX20CompatPedantic /* c++20-compat-pedantic */, 2407, 0, /* DiagSubGroup121 */ 108, R"()")
DIAG_ENTRY(CXX20Designator /* c++20-designator */, 2429, /* DiagArray122 */ 298, 0, R"()")
DIAG_ENTRY(CXX20 /* c++20-extensions */, 2446, /* DiagArray123 */ 300, /* DiagSubGroup123 */ 111, R"()")
DIAG_ENTRY(CXX23Attrs /* c++23-attribute-extensions */, 2463, /* DiagArray124 */ 322, 0, R"()")
DIAG_ENTRY(CXX23 /* c++23-extensions */, 2490, /* DiagArray125 */ 324, /* DiagSubGroup125 */ 114, R"()")
DIAG_ENTRY(CXX23AttrsOnLambda /* c++23-lambda-attributes */, 2507, /* DiagArray126 */ 335, 0, R"()")
DIAG_ENTRY(CXX26 /* c++26-extensions */, 2531, /* DiagArray127 */ 337, 0, R"()")
DIAG_ENTRY(anonymous_27 /* c++2a-compat */, 2548, 0, /* DiagSubGroup128 */ 116, R"()")
DIAG_ENTRY(anonymous_28 /* c++2a-compat-pedantic */, 2561, 0, /* DiagSubGroup129 */ 118, R"()")
DIAG_ENTRY(anonymous_72 /* c++2a-extensions */, 2583, 0, /* DiagSubGroup130 */ 120, R"()")
DIAG_ENTRY(anonymous_73 /* c++2b-extensions */, 2600, 0, /* DiagSubGroup131 */ 122, R"()")
DIAG_ENTRY(anonymous_74 /* c++2c-extensions */, 2617, 0, /* DiagSubGroup132 */ 124, R"()")
DIAG_ENTRY(anonymous_19 /* c++98-c++11-c++14-c++17-compat */, 2634, 0, /* DiagSubGroup133 */ 126, R"()")
DIAG_ENTRY(anonymous_20 /* c++98-c++11-c++14-c++17-compat-pedantic */, 2665, 0, /* DiagSubGroup134 */ 128, R"()")
DIAG_ENTRY(anonymous_17 /* c++98-c++11-c++14-compat */, 2705, 0, /* DiagSubGroup135 */ 130, R"()")
DIAG_ENTRY(anonymous_18 /* c++98-c++11-c++14-compat-pedantic */, 2730, 0, /* DiagSubGroup136 */ 132, R"()")
DIAG_ENTRY(anonymous_15 /* c++98-c++11-compat */, 2764, 0, /* DiagSubGroup137 */ 134, R"()")
DIAG_ENTRY(CXXPre14CompatBinaryLiteral /* c++98-c++11-compat-binary-literal */, 2783, /* DiagArray138 */ 340, 0, R"()")
DIAG_ENTRY(anonymous_16 /* c++98-c++11-compat-pedantic */, 2817, 0, /* DiagSubGroup139 */ 136, R"()")
DIAG_ENTRY(CXX98Compat /* c++98-compat */, 2845, /* DiagArray140 */ 342, /* DiagSubGroup140 */ 138, R"()")
DIAG_ENTRY(CXX98CompatBindToTemporaryCopy /* c++98-compat-bind-to-temporary-copy */, 2858, /* DiagArray141 */ 401, 0, R"()")
DIAG_ENTRY(CXX98CompatExtraSemi /* c++98-compat-extra-semi */, 2894, /* DiagArray142 */ 403, 0, R"()")
DIAG_ENTRY(CXX98CompatLocalTypeTemplateArgs /* c++98-compat-local-type-template-args */, 2918, /* DiagArray143 */ 405, 0, R"()")
DIAG_ENTRY(CXX98CompatPedantic /* c++98-compat-pedantic */, 2956, /* DiagArray144 */ 407, /* DiagSubGroup144 */ 145, R"()")
DIAG_ENTRY(CXX98CompatUnnamedTypeTemplateArgs /* c++98-compat-unnamed-type-template-args */, 2978, /* DiagArray145 */ 417, 0, R"()")
DIAG_ENTRY(C11 /* c11-extensions */, 3018, /* DiagArray146 */ 419, 0, R"()")
DIAG_ENTRY(C23Compat /* c23-compat */, 3033, /* DiagArray147 */ 424, 0, R"()")
DIAG_ENTRY(C23 /* c23-extensions */, 3044, /* DiagArray148 */ 426, 0, R"()")
DIAG_ENTRY(anonymous_4 /* c2x-compat */, 3059, 0, /* DiagSubGroup149 */ 153, R"()")
DIAG_ENTRY(anonymous_75 /* c2x-extensions */, 3070, 0, /* DiagSubGroup150 */ 155, R"()")
DIAG_ENTRY(C99Compat /* c99-compat */, 3085, /* DiagArray151 */ 437, 0, R"()")
DIAG_ENTRY(C99Designator /* c99-designator */, 3096, /* DiagArray152 */ 442, /* DiagSubGroup152 */ 157, R"()")
DIAG_ENTRY(C99 /* c99-extensions */, 3111, /* DiagArray153 */ 448, /* DiagSubGroup153 */ 159, R"()")
DIAG_ENTRY(PureVirtualCallFromCtorDtor /* call-to-pure-virtual-from-ctor-dtor */, 3126, /* DiagArray154 */ 459, 0, R"()")
DIAG_ENTRY(CalledOnceParameter /* called-once-parameter */, 3162, /* DiagArray155 */ 461, /* DiagSubGroup155 */ 161, R"()")
DIAG_ENTRY(CastAlign /* cast-align */, 3184, /* DiagArray156 */ 465, 0, R"()")
DIAG_ENTRY(anonymous_278 /* cast-calling-convention */, 3195, /* DiagArray157 */ 467, 0, R"()")
DIAG_ENTRY(CastFunctionType /* cast-function-type */, 3219, /* DiagArray158 */ 469, /* DiagSubGroup158 */ 163, R"()")
DIAG_ENTRY(CastFunctionTypeStrict /* cast-function-type-strict */, 3238, /* DiagArray159 */ 471, 0, R"()")
DIAG_ENTRY(SelTypeCast /* cast-of-sel-type */, 3264, /* DiagArray160 */ 473, 0, R"()")
DIAG_ENTRY(CastQual /* cast-qual */, 3281, /* DiagArray161 */ 475, 0, R"()")
DIAG_ENTRY(anonymous_264 /* cast-qual-unrelated */, 3291, /* DiagArray162 */ 478, 0, R"()")
DIAG_ENTRY(anonymous_5 /* char-align */, 3311, 0, 0, R"()")
DIAG_ENTRY(CharSubscript /* char-subscripts */, 3322, /* DiagArray164 */ 480, 0, R"()")
DIAG_ENTRY(ClangClPch /* clang-cl-pch */, 3338, /* DiagArray165 */ 483, 0, R"()")
DIAG_ENTRY(ClassConversion /* class-conversion */, 3351, /* DiagArray166 */ 488, 0, R"()")
DIAG_ENTRY(ClassVarargs /* class-varargs */, 3368, /* DiagArray167 */ 492, /* DiagSubGroup167 */ 165, R"()")
DIAG_ENTRY(anonymous_208 /* cmse-union-leak */, 3382, /* DiagArray168 */ 494, 0, R"()")
DIAG_ENTRY(anonymous_160 /* comma */, 3398, /* DiagArray169 */ 496, 0, R"()")
DIAG_ENTRY(Comment /* comment */, 3404, /* DiagArray170 */ 498, 0, R"()")
DIAG_ENTRY(anonymous_63 /* comments */, 3412, 0, /* DiagSubGroup171 */ 167, R"()")
DIAG_ENTRY(CompareDistinctPointerType /* compare-distinct-pointer-types */, 3421, /* DiagArray172 */ 503, 0, R"()")
DIAG_ENTRY(CompletionHandler /* completion-handler */, 3452, /* DiagArray173 */ 505, 0, R"()")
DIAG_ENTRY(anonymous_245 /* complex-component-init */, 3471, /* DiagArray174 */ 509, 0, R"()")
DIAG_ENTRY(CompoundTokenSplit /* compound-token-split */, 3494, 0, /* DiagSubGroup175 */ 169, R"()")
DIAG_ENTRY(CompoundTokenSplitByMacro /* compound-token-split-by-macro */, 3515, /* DiagArray176 */ 511, 0, R"()")
DIAG_ENTRY(CompoundTokenSplitBySpace /* compound-token-split-by-space */, 3545, /* DiagArray177 */ 513, 0, R"()")
DIAG_ENTRY(anonymous_280 /* conditional-type-mismatch */, 3575, /* DiagArray178 */ 515, 0, R"()")
DIAG_ENTRY(UninitializedMaybe /* conditional-uninitialized */, 3601, /* DiagArray179 */ 517, 0, R"()")
DIAG_ENTRY(ConfigMacros /* config-macros */, 3627, /* DiagArray180 */ 519, 0, R"()")
DIAG_ENTRY(ConstantConversion /* constant-conversion */, 3641, /* DiagArray181 */ 521, /* DiagSubGroup181 */ 172, R"()")
DIAG_ENTRY(anonymous_82 /* constant-evaluated */, 3661, /* DiagArray182 */ 523, 0, R"()")
DIAG_ENTRY(anonymous_255 /* constant-logical-operand */, 3680, /* DiagArray183 */ 525, 0, R"()")
DIAG_ENTRY(anonymous_196 /* constexpr-not-const */, 3705, /* DiagArray184 */ 527, 0, R"()")
DIAG_ENTRY(Consumed /* consumed */, 3725, /* DiagArray185 */ 529, 0, R"()")
DIAG_ENTRY(Conversion /* conversion */, 3734, /* DiagArray186 */ 538, /* DiagSubGroup186 */ 175, R"()")
DIAG_ENTRY(anonymous_64 /* conversion-null */, 3745, 0, /* DiagSubGroup187 */ 190, R"()")
DIAG_ENTRY(CoroNonAlignedAllocationFunction /* coro-non-aligned-allocation-function */, 3761, /* DiagArray188 */ 545, 0, R"()")
DIAG_ENTRY(Coroutine /* coroutine */, 3798, /* DiagArray189 */ 547, /* DiagSubGroup189 */ 192, R"()")
DIAG_ENTRY(CoroutineMissingUnhandledException /* coroutine-missing-unhandled-exception */, 3808, /* DiagArray190 */ 549, 0, R"()")
DIAG_ENTRY(CoveredSwitchDefault /* covered-switch-default */, 3846, /* DiagArray191 */ 551, 0, R"()")
DIAG_ENTRY(anonymous_62 /* cpp */, 3869, 0, /* DiagSubGroup192 */ 197, R"()")
DIAG_ENTRY(ObjCCStringFormat /* cstring-format-directive */, 3873, /* DiagArray193 */ 553, 0, R"()")
DIAG_ENTRY(CTADMaybeUnsupported /* ctad-maybe-unsupported */, 3898, /* DiagArray194 */ 555, 0, R"()")
DIAG_ENTRY(anonymous_6 /* ctor-dtor-privacy */, 3921, 0, 0, R"()")
DIAG_ENTRY(CrossTU /* ctu */, 3939, /* DiagArray196 */ 557, 0, R"()")
DIAG_ENTRY(CudaCompat /* cuda-compat */, 3943, /* DiagArray197 */ 559, 0, R"()")
DIAG_ENTRY(CustomAtomic /* custom-atomic-properties */, 3955, /* DiagArray198 */ 565, 0, R"()")
DIAG_ENTRY(anonymous_156 /* cxx-attribute-extension */, 3980, /* DiagArray199 */ 567, 0, R"()")
DIAG_ENTRY(Dangling /* dangling */, 4004, /* DiagArray200 */ 569, /* DiagSubGroup200 */ 199, R"()")
DIAG_ENTRY(DanglingElse /* dangling-else */, 4013, /* DiagArray201 */ 572, 0, R"()")
DIAG_ENTRY(DanglingField /* dangling-field */, 4027, /* DiagArray202 */ 574, 0, R"()")
DIAG_ENTRY(DanglingGsl /* dangling-gsl */, 4042, /* DiagArray203 */ 579, 0, R"()")
DIAG_ENTRY(DanglingInitializerList /* dangling-initializer-list */, 4055, /* DiagArray204 */ 582, 0, R"()")
DIAG_ENTRY(anonymous_102 /* darwin-sdk-settings */, 4081, /* DiagArray205 */ 584, 0, R"()")
DIAG_ENTRY(anonymous_139 /* date-time */, 4101, /* DiagArray206 */ 586, 0, R"()")
DIAG_ENTRY(DeallocInCategory /* dealloc-in-category */, 4111, /* DiagArray207 */ 588, 0, R"()")
DIAG_ENTRY(anonymous_98 /* debug-compression-unavailable */, 4131, /* DiagArray208 */ 590, 0, R"()")
DIAG_ENTRY(DeclarationAfterStatement /* declaration-after-statement */, 4161, /* DiagArray209 */ 592, 0, R"()")
DIAG_ENTRY(DefaultedFunctionDeleted /* defaulted-function-deleted */, 4189, /* DiagArray210 */ 595, 0, R"()")
DIAG_ENTRY(anonymous_99 /* delayed-template-parsing-in-cxx20 */, 4216, /* DiagArray211 */ 598, 0, R"()")
DIAG_ENTRY(DelegatingCtorCycles /* delegating-ctor-cycles */, 4250, /* DiagArray212 */ 600, 0, R"()")
DIAG_ENTRY(DeleteAbstractNonVirtualDtor /* delete-abstract-non-virtual-dtor */, 4273, /* DiagArray213 */ 602, 0, R"()")
DIAG_ENTRY(DeleteIncomplete /* delete-incomplete */, 4306, /* DiagArray214 */ 604, 0, R"()")
DIAG_ENTRY(DeleteNonAbstractNonVirtualDtor /* delete-non-abstract-non-virtual-dtor */, 4324, /* DiagArray215 */ 607, 0, R"()")
DIAG_ENTRY(DeleteNonVirtualDtor /* delete-non-virtual-dtor */, 4361, 0, /* DiagSubGroup216 */ 204, R"()")
DIAG_ENTRY(anonymous_121 /* delimited-escape-sequence-extension */, 4385, /* DiagArray217 */ 609, 0, R"()")
DIAG_ENTRY(anonymous_268 /* deprecate-lax-vec-conv-all */, 4421, /* DiagArray218 */ 611, 0, R"()")
DIAG_ENTRY(Deprecated /* deprecated */, 4448, /* DiagArray219 */ 613, /* DiagSubGroup219 */ 207, R"()")
DIAG_ENTRY(anonymous_267 /* deprecated-altivec-src-compat */, 4459, /* DiagArray220 */ 623, 0, R"()")
DIAG_ENTRY(DeprecatedAnonEnumEnumConversion /* deprecated-anon-enum-enum-conversion */, 4489, /* DiagArray221 */ 625, 0, R"()")
DIAG_ENTRY(DeprecatedArrayCompare /* deprecated-array-compare */, 4526, /* DiagArray222 */ 627, 0, R"()")
DIAG_ENTRY(DeprecatedAttributes /* deprecated-attributes */, 4551, /* DiagArray223 */ 629, 0, R"()")
DIAG_ENTRY(DeprecatedBuiltins /* deprecated-builtins */, 4573, /* DiagArray224 */ 633, 0, R"()")
DIAG_ENTRY(DeprecatedCommaSubscript /* deprecated-comma-subscript */, 4593, /* DiagArray225 */ 635, 0, R"()")
DIAG_ENTRY(DeprecatedCopy /* deprecated-copy */, 4620, /* DiagArray226 */ 637, /* DiagSubGroup226 */ 230, R"()")
DIAG_ENTRY(anonymous_7 /* deprecated-copy-dtor */, 4636, 0, /* DiagSubGroup227 */ 232, R"()")
DIAG_ENTRY(DeprecatedCopyWithDtor /* deprecated-copy-with-dtor */, 4657, /* DiagArray228 */ 639, /* DiagSubGroup228 */ 234, R"()")
DIAG_ENTRY(DeprecatedCopyWithUserProvidedCopy /* deprecated-copy-with-user-provided-copy */, 4683, /* DiagArray229 */ 641, 0, R"()")
DIAG_ENTRY(DeprecatedCopyWithUserProvidedDtor /* deprecated-copy-with-user-provided-dtor */, 4723, /* DiagArray230 */ 643, 0, R"()")
DIAG_ENTRY(DeprecatedCoroutine /* deprecated-coroutine */, 4763, /* DiagArray231 */ 645, 0, R"()")
DIAG_ENTRY(DeprecatedDeclarations /* deprecated-declarations */, 4784, /* DiagArray232 */ 647, 0, R"()")
DIAG_ENTRY(DeprecatedDynamicExceptionSpec /* deprecated-dynamic-exception-spec */, 4808, /* DiagArray233 */ 654, 0, R"()")
DIAG_ENTRY(DeprecatedEnumCompare /* deprecated-enum-compare */, 4842, /* DiagArray234 */ 656, 0, R"()")
DIAG_ENTRY(DeprecatedEnumCompareConditional /* deprecated-enum-compare-conditional */, 4866, /* DiagArray235 */ 658, 0, R"()")
DIAG_ENTRY(DeprecatedEnumEnumConversion /* deprecated-enum-enum-conversion */, 4902, /* DiagArray236 */ 660, 0, R"()")
DIAG_ENTRY(DeprecatedEnumFloatConversion /* deprecated-enum-float-conversion */, 4934, /* DiagArray237 */ 662, 0, R"()")
DIAG_ENTRY(DeprecatedImplementations /* deprecated-implementations */, 4967, /* DiagArray238 */ 664, 0, R"()")
DIAG_ENTRY(DeprecatedIncrementBool /* deprecated-increment-bool */, 4994, /* DiagArray239 */ 667, 0, R"()")
DIAG_ENTRY(DeprecatedLiteralOperator /* deprecated-literal-operator */, 5020, /* DiagArray240 */ 669, 0, R"()")
DIAG_ENTRY(DeprecatedModuleDotMap /* deprecated-module-dot-map */, 5048, /* DiagArray241 */ 671, 0, R"()")
DIAG_ENTRY(DeprecatedNonPrototype /* deprecated-non-prototype */, 5074, /* DiagArray242 */ 673, 0, R"()")
DIAG_ENTRY(DeprecatedObjCIsaUsage /* deprecated-objc-isa-usage */, 5099, /* DiagArray243 */ 676, 0, R"()")
DIAG_ENTRY(ObjCPointerIntrospect /* deprecated-objc-pointer-introspection */, 5125, /* DiagArray244 */ 679, /* DiagSubGroup244 */ 236, R"()")
DIAG_ENTRY(ObjCPointerIntrospectPerformSelector /* deprecated-objc-pointer-introspection-performSelector */, 5163, /* DiagArray245 */ 681, 0, R"()")
DIAG_ENTRY(DeprecatedPragma /* deprecated-pragma */, 5217, /* DiagArray246 */ 683, 0, R"()")
DIAG_ENTRY(DeprecatedRedundantConstexprStaticDef /* deprecated-redundant-constexpr-static-def */, 5235, /* DiagArray247 */ 685, 0, R"()")
DIAG_ENTRY(DeprecatedRegister /* deprecated-register */, 5277, /* DiagArray248 */ 687, 0, R"()")
DIAG_ENTRY(DeprecatedStaticAnalyzerFlag /* deprecated-static-analyzer-flag */, 5297, /* DiagArray249 */ 689, 0, R"()")
DIAG_ENTRY(DeprecatedThisCapture /* deprecated-this-capture */, 5329, /* DiagArray250 */ 692, 0, R"()")
DIAG_ENTRY(DeprecatedType /* deprecated-type */, 5353, /* DiagArray251 */ 694, 0, R"()")
DIAG_ENTRY(DeprecatedVolatile /* deprecated-volatile */, 5369, /* DiagArray252 */ 696, 0, R"()")
DIAG_ENTRY(DeprecatedWritableStr /* deprecated-writable-strings */, 5389, 0, /* DiagSubGroup253 */ 238, R"()")
DIAG_ENTRY(anonymous_296 /* direct-ivar-access */, 5417, /* DiagArray254 */ 702, 0, R"()")
DIAG_ENTRY(anonymous_130 /* disabled-macro-expansion */, 5436, /* DiagArray255 */ 704, 0, R"()")
DIAG_ENTRY(anonymous_9 /* disabled-optimization */, 5461, 0, 0, R"()")
DIAG_ENTRY(anonymous_10 /* discard-qual */, 5483, 0, 0, R"()")
DIAG_ENTRY(DistributedObjectModifiers /* distributed-object-modifiers */, 5496, /* DiagArray258 */ 706, 0, R"()")
DIAG_ENTRY(anonymous_11 /* div-by-zero */, 5525, 0, /* DiagSubGroup259 */ 240, R"()")
DIAG_ENTRY(DivZero /* division-by-zero */, 5537, /* DiagArray260 */ 709, 0, R"()")
DIAG_ENTRY(anonymous_209 /* dll-attribute-on-redeclaration */, 5554, /* DiagArray261 */ 711, 0, R"()")
DIAG_ENTRY(DllexportExplicitInstantiationDecl /* dllexport-explicit-instantiation-decl */, 5585, /* DiagArray262 */ 713, 0, R"()")
DIAG_ENTRY(anonymous_210 /* dllimport-static-field-def */, 5623, /* DiagArray263 */ 715, 0, R"()")
DIAG_ENTRY(Documentation /* documentation */, 5650, /* DiagArray264 */ 717, /* DiagSubGroup264 */ 242, R"()")
DIAG_ENTRY(DocumentationDeprecatedSync /* documentation-deprecated-sync */, 5664, /* DiagArray265 */ 738, 0, R"()")
DIAG_ENTRY(DocumentationHTML /* documentation-html */, 5694, /* DiagArray266 */ 740, 0, R"()")
DIAG_ENTRY(DocumentationPedantic /* documentation-pedantic */, 5713, /* DiagArray267 */ 745, /* DiagSubGroup267 */ 245, R"()")
DIAG_ENTRY(DocumentationUnknownCommand /* documentation-unknown-command */, 5736, /* DiagArray268 */ 747, 0, R"()")
DIAG_ENTRY(anonymous_114 /* dollar-in-identifier-extension */, 5766, /* DiagArray269 */ 750, 0, R"()")
DIAG_ENTRY(DoublePromotion /* double-promotion */, 5797, /* DiagArray270 */ 752, 0, R"()")
DIAG_ENTRY(DtorName /* dtor-name */, 5814, /* DiagArray271 */ 754, 0, R"()")
DIAG_ENTRY(anonymous_195 /* dtor-typedef */, 5824, /* DiagArray272 */ 758, 0, R"()")
DIAG_ENTRY(DuplicateDeclSpecifier /* duplicate-decl-specifier */, 5837, /* DiagArray273 */ 760, 0, R"()")
DIAG_ENTRY(anonymous_159 /* duplicate-enum */, 5862, /* DiagArray274 */ 765, 0, R"()")
DIAG_ENTRY(DuplicateArgDecl /* duplicate-method-arg */, 5877, /* DiagArray275 */ 767, 0, R"()")
DIAG_ENTRY(MethodDuplicate /* duplicate-method-match */, 5898, /* DiagArray276 */ 769, 0, R"()")
DIAG_ENTRY(anonymous_174 /* duplicate-protocol */, 5921, /* DiagArray277 */ 771, 0, R"()")
DIAG_ENTRY(DXILValidation /* dxil-validation */, 5940, /* DiagArray278 */ 773, 0, R"()")
DIAG_ENTRY(DynamicClassMemaccess /* dynamic-class-memaccess */, 5956, /* DiagArray279 */ 775, 0, R"()")
DIAG_ENTRY(DynamicExceptionSpec /* dynamic-exception-spec */, 5980, /* DiagArray280 */ 777, /* DiagSubGroup280 */ 247, R"()")
DIAG_ENTRY(anonymous_111 /* eager-load-cxx-named-modules */, 6003, /* DiagArray281 */ 779, 0, R"()")
DIAG_ENTRY(anonymous_39 /* effc++ */, 6032, 0, /* DiagSubGroup282 */ 249, R"()")
DIAG_ENTRY(anonymous_146 /* elaborated-enum-base */, 6039, /* DiagArray283 */ 781, 0, R"()")
DIAG_ENTRY(anonymous_147 /* elaborated-enum-class */, 6060, /* DiagArray284 */ 783, 0, R"()")
DIAG_ENTRY(anonymous_136 /* embedded-directive */, 6082, /* DiagArray285 */ 785, 0, R"()")
DIAG_ENTRY(EmptyBody /* empty-body */, 6101, /* DiagArray286 */ 787, 0, R"()")
DIAG_ENTRY(anonymous_152 /* empty-decomposition */, 6112, /* DiagArray287 */ 793, 0, R"()")
DIAG_ENTRY(EmptyInitStatement /* empty-init-stmt */, 6132, /* DiagArray288 */ 795, 0, R"()")
DIAG_ENTRY(anonymous_143 /* empty-translation-unit */, 6148, /* DiagArray289 */ 797, 0, R"()")
DIAG_ENTRY(anonymous_213 /* encode-type */, 6171, /* DiagArray290 */ 799, 0, R"()")
DIAG_ENTRY(anonymous_61 /* endif-labels */, 6183, 0, /* DiagSubGroup291 */ 251, R"()")
DIAG_ENTRY(EnumCompare /* enum-compare */, 6196, /* DiagArray292 */ 801, /* DiagSubGroup292 */ 253, R"()")
DIAG_ENTRY(EnumCompareConditional /* enum-compare-conditional */, 6209, /* DiagArray293 */ 803, /* DiagSubGroup293 */ 256, R"()")
DIAG_ENTRY(EnumCompareSwitch /* enum-compare-switch */, 6234, /* DiagArray294 */ 805, 0, R"()")
DIAG_ENTRY(anonymous_81 /* enum-constexpr-conversion */, 6254, /* DiagArray295 */ 807, 0, R"()")
DIAG_ENTRY(EnumConversion /* enum-conversion */, 6280, /* DiagArray296 */ 809, /* DiagSubGroup296 */ 258, R"()")
DIAG_ENTRY(EnumEnumConversion /* enum-enum-conversion */, 6296, /* DiagArray297 */ 811, /* DiagSubGroup297 */ 262, R"()")
DIAG_ENTRY(EnumFloatConversion /* enum-float-conversion */, 6317, /* DiagArray298 */ 813, /* DiagSubGroup298 */ 264, R"()")
DIAG_ENTRY(EnumTooLarge /* enum-too-large */, 6339, /* DiagArray299 */ 815, 0, R"()")
DIAG_ENTRY(Exceptions /* exceptions */, 6354, /* DiagArray300 */ 818, 0, R"()")
DIAG_ENTRY(ExcessInitializers /* excess-initializers */, 6365, /* DiagArray301 */ 822, 0, R"()")
DIAG_ENTRY(anonymous_163 /* excessive-regsave */, 6385, /* DiagArray302 */ 827, 0, R"()")
DIAG_ENTRY(ExitTimeDestructors /* exit-time-destructors */, 6403, /* DiagArray303 */ 829, 0, R"()")
DIAG_ENTRY(ExpansionToDefined /* expansion-to-defined */, 6425, /* DiagArray304 */ 831, 0, R"()")
DIAG_ENTRY(anonymous_300 /* experimental-header-units */, 6446, /* DiagArray305 */ 834, 0, R"()")
DIAG_ENTRY(ExplicitInitializeCall /* explicit-initialize-call */, 6472, /* DiagArray306 */ 836, 0, R"()")
DIAG_ENTRY(anonymous_247 /* explicit-ownership-type */, 6497, /* DiagArray307 */ 839, 0, R"()")
DIAG_ENTRY(ExportUnnamed /* export-unnamed */, 6521, 0, 0, R"()")
DIAG_ENTRY(ExternCCompat /* extern-c-compat */, 6536, /* DiagArray309 */ 841, 0, R"()")
DIAG_ENTRY(anonymous_242 /* extern-initializer */, 6552, /* DiagArray310 */ 843, 0, R"()")
DIAG_ENTRY(Extra /* extra */, 6571, /* DiagArray311 */ 845, /* DiagSubGroup311 */ 266, R"()")
DIAG_ENTRY(anonymous_256 /* extra-qualification */, 6577, /* DiagArray312 */ 847, 0, R"()")
DIAG_ENTRY(ExtraSemi /* extra-semi */, 6597, /* DiagArray313 */ 849, /* DiagSubGroup313 */ 281, R"()")
DIAG_ENTRY(ExtraSemiStmt /* extra-semi-stmt */, 6608, /* DiagArray314 */ 852, /* DiagSubGroup314 */ 284, R"()")
DIAG_ENTRY(ExtraTokens /* extra-tokens */, 6624, /* DiagArray315 */ 854, 0, R"()")
DIAG_ENTRY(FinalDtorNonFinalClass /* final-dtor-non-final-class */, 6637, /* DiagArray316 */ 857, 0, R"()")
DIAG_ENTRY(FinalMacro /* final-macro */, 6664, /* DiagArray317 */ 859, 0, R"()")
DIAG_ENTRY(anonymous_145 /* fixed-enum-extension */, 6676, /* DiagArray318 */ 861, 0, R"()")
DIAG_ENTRY(anonymous_80 /* fixed-point-overflow */, 6697, /* DiagArray319 */ 863, 0, R"()")
DIAG_ENTRY(FlagEnum /* flag-enum */, 6718, /* DiagArray320 */ 865, 0, R"()")
DIAG_ENTRY(FlexibleArrayExtensions /* flexible-array-extensions */, 6728, /* DiagArray321 */ 867, 0, R"()")
DIAG_ENTRY(FloatConversion /* float-conversion */, 6754, /* DiagArray322 */ 870, /* DiagSubGroup322 */ 286, R"()")
DIAG_ENTRY(anonymous_249 /* float-equal */, 6771, /* DiagArray323 */ 872, 0, R"()")
DIAG_ENTRY(FloatOverflowConversion /* float-overflow-conversion */, 6783, /* DiagArray324 */ 874, 0, R"()")
DIAG_ENTRY(FloatZeroConversion /* float-zero-conversion */, 6809, /* DiagArray325 */ 877, 0, R"()")
DIAG_ENTRY(ForLoopAnalysis /* for-loop-analysis */, 6831, /* DiagArray326 */ 879, 0, R"()")
DIAG_ENTRY(Format /* format */, 6849, /* DiagArray327 */ 882, /* DiagSubGroup327 */ 289, R"()")
DIAG_ENTRY(FormatExtraArgs /* format-extra-args */, 6856, /* DiagArray328 */ 909, 0, R"()")
DIAG_ENTRY(FormatInsufficientArgs /* format-insufficient-args */, 6874, /* DiagArray329 */ 911, 0, R"()")
DIAG_ENTRY(FormatInvalidSpecifier /* format-invalid-specifier */, 6899, /* DiagArray330 */ 913, 0, R"()")
DIAG_ENTRY(FormatNonStandard /* format-non-iso */, 6924, /* DiagArray331 */ 915, 0, R"()")
DIAG_ENTRY(FormatNonLiteral /* format-nonliteral */, 6939, /* DiagArray332 */ 919, 0, R"()")
DIAG_ENTRY(FormatOverflow /* format-overflow */, 6957, /* DiagArray333 */ 921, /* DiagSubGroup333 */ 299, R"()")
DIAG_ENTRY(FormatOverflowNonKprintf /* format-overflow-non-kprintf */, 6973, /* DiagArray334 */ 923, 0, R"()")
DIAG_ENTRY(FormatPedantic /* format-pedantic */, 7001, /* DiagArray335 */ 925, 0, R"()")
DIAG_ENTRY(FormatSecurity /* format-security */, 7017, /* DiagArray336 */ 928, 0, R"()")
DIAG_ENTRY(FormatTruncation /* format-truncation */, 7033, /* DiagArray337 */ 930, /* DiagSubGroup337 */ 301, R"()")
DIAG_ENTRY(FormatTruncationNonKprintf /* format-truncation-non-kprintf */, 7051, /* DiagArray338 */ 932, 0, R"()")
DIAG_ENTRY(FormatTypeConfusion /* format-type-confusion */, 7081, /* DiagArray339 */ 934, 0, R"()")
DIAG_ENTRY(FormatY2K /* format-y2k */, 7103, 0, 0, R"()")
DIAG_ENTRY(FormatZeroLength /* format-zero-length */, 7114, /* DiagArray341 */ 936, 0, R"()")
DIAG_ENTRY(Format2 /* format=2 */, 7133, 0, /* DiagSubGroup342 */ 303, R"()")
DIAG_ENTRY(FortifySource /* fortify-source */, 7142, /* DiagArray343 */ 938, /* DiagSubGroup343 */ 307, R"()")
DIAG_ENTRY(FourByteMultiChar /* four-char-constants */, 7157, /* DiagArray344 */ 943, 0, R"()")
DIAG_ENTRY(FrameAddress /* frame-address */, 7177, /* DiagArray345 */ 945, 0, R"()")
DIAG_ENTRY(BackendFrameLargerThan /* frame-larger-than */, 7191, /* DiagArray346 */ 947, 0, R"(More fine grained information about the stack layout is available by adding the
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
DIAG_ENTRY(anonymous_77 /* frame-larger-than= */, 7209, 0, /* DiagSubGroup347 */ 310, R"()")
DIAG_ENTRY(FrameworkIncludePrivateFromPublic /* framework-include-private-from-public */, 7228, /* DiagArray348 */ 950, 0, R"()")
DIAG_ENTRY(FreeNonHeapObject /* free-nonheap-object */, 7266, /* DiagArray349 */ 952, 0, R"()")
DIAG_ENTRY(anonymous_190 /* friend-enum */, 7286, /* DiagArray350 */ 954, 0, R"()")
DIAG_ENTRY(FunctionDefInObjCContainer /* function-def-in-objc-container */, 7298, /* DiagArray351 */ 956, 0, R"()")
DIAG_ENTRY(FunctionMultiVersioning /* function-multiversion */, 7329, /* DiagArray352 */ 958, /* DiagSubGroup352 */ 312, R"()")
DIAG_ENTRY(FUseLdPath /* fuse-ld-path */, 7351, /* DiagArray353 */ 963, 0, R"()")
DIAG_ENTRY(FutureAttrs /* future-attribute-extensions */, 7364, 0, /* DiagSubGroup354 */ 314, R"()")
DIAG_ENTRY(FutureCompat /* future-compat */, 7392, 0, 0, R"()")
DIAG_ENTRY(GccCompat /* gcc-compat */, 7406, /* DiagArray356 */ 965, 0, R"()")
DIAG_ENTRY(anonymous_149 /* generic-type-extension */, 7417, /* DiagArray357 */ 977, 0, R"()")
DIAG_ENTRY(GlobalConstructors /* global-constructors */, 7440, /* DiagArray358 */ 979, 0, R"(Emit a warning for each variable declaration that generates code run at startup.)")
DIAG_ENTRY(GlobalISel /* global-isel */, 7460, /* DiagArray359 */ 982, 0, R"()")
DIAG_ENTRY(GNU /* gnu */, 7472, 0, /* DiagSubGroup360 */ 319, R"()")
DIAG_ENTRY(GNUAlignofExpression /* gnu-alignof-expression */, 7476, /* DiagArray361 */ 985, 0, R"()")
DIAG_ENTRY(GNUAnonymousStruct /* gnu-anonymous-struct */, 7499, /* DiagArray362 */ 987, 0, R"()")
DIAG_ENTRY(anonymous_258 /* gnu-array-member-paren-init */, 7520, /* DiagArray363 */ 989, 0, R"()")
DIAG_ENTRY(GNUAutoType /* gnu-auto-type */, 7548, /* DiagArray364 */ 991, 0, R"()")
DIAG_ENTRY(GNUBinaryLiteral /* gnu-binary-literal */, 7562, 0, 0, R"()")
DIAG_ENTRY(GNUCaseRange /* gnu-case-range */, 7581, /* DiagArray366 */ 993, 0, R"()")
DIAG_ENTRY(GNUComplexInteger /* gnu-complex-integer */, 7596, /* DiagArray367 */ 995, 0, R"()")
DIAG_ENTRY(GNUCompoundLiteralInitializer /* gnu-compound-literal-initializer */, 7616, /* DiagArray368 */ 997, 0, R"()")
DIAG_ENTRY(GNUConditionalOmittedOperand /* gnu-conditional-omitted-operand */, 7649, /* DiagArray369 */ 999, 0, R"()")
DIAG_ENTRY(GNUDesignator /* gnu-designator */, 7681, /* DiagArray370 */ 1001, 0, R"()")
DIAG_ENTRY(anonymous_1 /* gnu-empty-initializer */, 7696, 0, 0, R"()")
DIAG_ENTRY(GNUEmptyStruct /* gnu-empty-struct */, 7718, /* DiagArray372 */ 1005, 0, R"()")
DIAG_ENTRY(GNUFlexibleArrayInitializer /* gnu-flexible-array-initializer */, 7735, /* DiagArray373 */ 1009, 0, R"()")
DIAG_ENTRY(GNUFlexibleArrayUnionMember /* gnu-flexible-array-union-member */, 7766, /* DiagArray374 */ 1011, 0, R"()")
DIAG_ENTRY(GNUFoldingConstant /* gnu-folding-constant */, 7798, /* DiagArray375 */ 1013, 0, R"()")
DIAG_ENTRY(GNUImaginaryConstant /* gnu-imaginary-constant */, 7819, /* DiagArray376 */ 1017, 0, R"()")
DIAG_ENTRY(GNUIncludeNext /* gnu-include-next */, 7842, /* DiagArray377 */ 1019, 0, R"()")
DIAG_ENTRY(anonymous_214 /* gnu-inline-cpp-without-extern */, 7859, /* DiagArray378 */ 1021, 0, R"()")
DIAG_ENTRY(GNULabelsAsValue /* gnu-label-as-value */, 7889, /* DiagArray379 */ 1023, 0, R"()")
DIAG_ENTRY(GNULineMarker /* gnu-line-marker */, 7908, /* DiagArray380 */ 1026, 0, R"()")
DIAG_ENTRY(GNUNullPointerArithmetic /* gnu-null-pointer-arithmetic */, 7924, /* DiagArray381 */ 1028, 0, R"()")
DIAG_ENTRY(GNUOffsetofExtensions /* gnu-offsetof-extensions */, 7952, /* DiagArray382 */ 1030, 0, R"()")
DIAG_ENTRY(GNUPointerArith /* gnu-pointer-arith */, 7976, /* DiagArray383 */ 1032, 0, R"()")
DIAG_ENTRY(GNURedeclaredEnum /* gnu-redeclared-enum */, 7994, /* DiagArray384 */ 1036, 0, R"()")
DIAG_ENTRY(GNUStatementExpression /* gnu-statement-expression */, 8014, /* DiagArray385 */ 1038, /* DiagSubGroup385 */ 351, R"()")
DIAG_ENTRY(GNUStatementExpressionFromMacroExpansion /* gnu-statement-expression-from-macro-expansion */, 8039, /* DiagArray386 */ 1040, 0, R"()")
DIAG_ENTRY(GNUStaticFloatInit /* gnu-static-float-init */, 8085, /* DiagArray387 */ 1042, 0, R"()")
DIAG_ENTRY(GNUStringLiteralOperatorTemplate /* gnu-string-literal-operator-template */, 8107, /* DiagArray388 */ 1044, 0, R"()")
DIAG_ENTRY(GNUUnionCast /* gnu-union-cast */, 8144, /* DiagArray389 */ 1046, 0, R"()")
DIAG_ENTRY(GNUVariableSizedTypeNotAtEnd /* gnu-variable-sized-type-not-at-end */, 8159, /* DiagArray390 */ 1048, 0, R"()")
DIAG_ENTRY(GNUZeroLineDirective /* gnu-zero-line-directive */, 8194, /* DiagArray391 */ 1050, 0, R"()")
DIAG_ENTRY(GNUZeroVariadicMacroArguments /* gnu-zero-variadic-macro-arguments */, 8218, /* DiagArray392 */ 1052, 0, R"()")
DIAG_ENTRY(anonymous_277 /* gpu-maybe-wrong-side */, 8252, /* DiagArray393 */ 1055, 0, R"()")
DIAG_ENTRY(anonymous_142 /* header-guard */, 8273, /* DiagArray394 */ 1057, 0, R"()")
DIAG_ENTRY(HeaderHygiene /* header-hygiene */, 8286, /* DiagArray395 */ 1059, 0, R"()")
DIAG_ENTRY(HIPOpenMPOffloading /* hip-omp-target-directives */, 8301, /* DiagArray396 */ 1061, 0, R"()")
DIAG_ENTRY(HIPOnly /* hip-only */, 8327, /* DiagArray397 */ 1063, 0, R"()")
DIAG_ENTRY(HLSLExtension /* hlsl-extensions */, 8336, /* DiagArray398 */ 1065, 0, R"()")
DIAG_ENTRY(anonymous_272 /* idiomatic-parentheses */, 8352, /* DiagArray399 */ 1067, 0, R"()")
DIAG_ENTRY(IgnoredAttributes /* ignored-attributes */, 8374, /* DiagArray400 */ 1069, 0, R"()")
DIAG_ENTRY(anonymous_217 /* ignored-availability-without-sdk-settings */, 8393, /* DiagArray401 */ 1157, 0, R"()")
DIAG_ENTRY(IgnoredGCH /* ignored-gch */, 8435, /* DiagArray402 */ 1159, 0, R"()")
DIAG_ENTRY(IgnoredOptimizationArgument /* ignored-optimization-argument */, 8447, /* DiagArray403 */ 1162, 0, R"()")
DIAG_ENTRY(IgnoredPragmaIntrinsic /* ignored-pragma-intrinsic */, 8477, /* DiagArray404 */ 1165, 0, R"()")
DIAG_ENTRY(IgnoredPragmaOptimize /* ignored-pragma-optimize */, 8502, 0, 0, R"()")
DIAG_ENTRY(IgnoredPragmas /* ignored-pragmas */, 8526, /* DiagArray406 */ 1167, /* DiagSubGroup406 */ 353, R"()")
DIAG_ENTRY(IgnoredQualifiers /* ignored-qualifiers */, 8542, /* DiagArray407 */ 1217, /* DiagSubGroup407 */ 356, R"()")
DIAG_ENTRY(IgnoredReferenceQualifiers /* ignored-reference-qualifiers */, 8561, /* DiagArray408 */ 1222, 0, R"()")
DIAG_ENTRY(Implicit /* implicit */, 8590, 0, /* DiagSubGroup409 */ 358, R"()")
DIAG_ENTRY(ImplicitAtomic /* implicit-atomic-properties */, 8599, /* DiagArray410 */ 1224, 0, R"()")
DIAG_ENTRY(ImplicitConstIntFloatConversion /* implicit-const-int-float-conversion */, 8626, /* DiagArray411 */ 1227, 0, R"()")
DIAG_ENTRY(ImplicitConversionFloatingPointToBool /* implicit-conversion-floating-point-to-bool */, 8662, /* DiagArray412 */ 1229, 0, R"()")
DIAG_ENTRY(anonymous_288 /* implicit-exception-spec-mismatch */, 8705, /* DiagArray413 */ 1231, 0, R"()")
DIAG_ENTRY(ImplicitFallthrough /* implicit-fallthrough */, 8738, /* DiagArray414 */ 1233, /* DiagSubGroup414 */ 361, R"()")
DIAG_ENTRY(ImplicitFallthroughPerFunction /* implicit-fallthrough-per-function */, 8759, /* DiagArray415 */ 1235, 0, R"()")
DIAG_ENTRY(ImplicitFixedPointConversion /* implicit-fixed-point-conversion */, 8793, /* DiagArray416 */ 1237, 0, R"()")
DIAG_ENTRY(ImplicitFloatConversion /* implicit-float-conversion */, 8825, /* DiagArray417 */ 1239, /* DiagSubGroup417 */ 363, R"()")
DIAG_ENTRY(ImplicitFunctionDeclare /* implicit-function-declaration */, 8851, /* DiagArray418 */ 1242, 0, R"()")
DIAG_ENTRY(ImplicitInt /* implicit-int */, 8881, /* DiagArray419 */ 1248, 0, R"()")
DIAG_ENTRY(ImplicitIntConversion /* implicit-int-conversion */, 8894, /* DiagArray420 */ 1252, /* DiagSubGroup420 */ 366, R"()")
DIAG_ENTRY(ImplicitIntFloatConversion /* implicit-int-float-conversion */, 8918, /* DiagArray421 */ 1255, /* DiagSubGroup421 */ 369, R"()")
DIAG_ENTRY(anonymous_185 /* implicit-retain-self */, 8948, /* DiagArray422 */ 1257, 0, R"()")
DIAG_ENTRY(ImplicitlyUnsignedLiteral /* implicitly-unsigned-literal */, 8969, /* DiagArray423 */ 1259, 0, R"()")
DIAG_ENTRY(anonymous_30 /* import */, 8997, 0, 0, R"()")
DIAG_ENTRY(anonymous_135 /* import-preprocessor-directive-pedantic */, 9004, /* DiagArray425 */ 1261, 0, R"()")
DIAG_ENTRY(anonymous_285 /* inaccessible-base */, 9043, /* DiagArray426 */ 1263, 0, R"()")
DIAG_ENTRY(anonymous_141 /* include-angled-in-module-purview */, 9061, /* DiagArray427 */ 1265, 0, R"()")
DIAG_ENTRY(anonymous_125 /* include-next-absolute-path */, 9094, /* DiagArray428 */ 1267, 0, R"()")
DIAG_ENTRY(anonymous_124 /* include-next-outside-header */, 9121, /* DiagArray429 */ 1269, 0, R"()")
DIAG_ENTRY(IncompatibleExceptionSpec /* incompatible-exception-spec */, 9149, /* DiagArray430 */ 1271, 0, R"()")
DIAG_ENTRY(IncompatibleFunctionPointerTypes /* incompatible-function-pointer-types */, 9177, /* DiagArray431 */ 1274, 0, R"()")
DIAG_ENTRY(anonymous_274 /* incompatible-function-pointer-types-strict */, 9213, /* DiagArray432 */ 1276, 0, R"()")
DIAG_ENTRY(anonymous_168 /* incompatible-library-redeclaration */, 9256, /* DiagArray433 */ 1278, 0, R"()")
DIAG_ENTRY(IncompatibleMSPragmaSection /* incompatible-ms-pragma-section */, 9291, /* DiagArray434 */ 1280, 0, R"()")
DIAG_ENTRY(IncompatibleMSStruct /* incompatible-ms-struct */, 9322, /* DiagArray435 */ 1282, 0, R"()")
DIAG_ENTRY(IncompatiblePointerTypes /* incompatible-pointer-types */, 9345, /* DiagArray436 */ 1285, /* DiagSubGroup436 */ 371, R"()")
DIAG_ENTRY(IncompatiblePointerTypesDiscardsQualifiers /* incompatible-pointer-types-discards-qualifiers */, 9372, /* DiagArray437 */ 1287, 0, R"()")
DIAG_ENTRY(anonymous_175 /* incompatible-property-type */, 9419, /* DiagArray438 */ 1291, 0, R"()")
DIAG_ENTRY(anonymous_97 /* incompatible-sysroot */, 9446, /* DiagArray439 */ 1293, 0, R"()")
DIAG_ENTRY(IncompleteFrameworkModuleDeclaration /* incomplete-framework-module-declaration */, 9467, /* DiagArray440 */ 1295, 0, R"()")
DIAG_ENTRY(anonymous_177 /* incomplete-implementation */, 9507, /* DiagArray441 */ 1297, 0, R"()")
DIAG_ENTRY(IncompleteModule /* incomplete-module */, 9533, 0, /* DiagSubGroup442 */ 374, R"()")
DIAG_ENTRY(anonymous_167 /* incomplete-setjmp-declaration */, 9551, /* DiagArray443 */ 1299, 0, R"()")
DIAG_ENTRY(IncompleteUmbrella /* incomplete-umbrella */, 9581, /* DiagArray444 */ 1301, 0, R"()")
DIAG_ENTRY(MicrosoftInconsistentDllImport /* inconsistent-dllimport */, 9601, /* DiagArray445 */ 1305, 0, R"()")
DIAG_ENTRY(CXX11WarnInconsistentOverrideDestructor /* inconsistent-missing-destructor-override */, 9624, /* DiagArray446 */ 1308, 0, R"()")
DIAG_ENTRY(CXX11WarnInconsistentOverrideMethod /* inconsistent-missing-override */, 9665, /* DiagArray447 */ 1310, 0, R"()")
DIAG_ENTRY(IncrementBool /* increment-bool */, 9695, /* DiagArray448 */ 1312, /* DiagSubGroup448 */ 377, R"()")
DIAG_ENTRY(InfiniteRecursion /* infinite-recursion */, 9710, /* DiagArray449 */ 1314, 0, R"()")
DIAG_ENTRY(anonymous_31 /* init-self */, 9729, 0, 0, R"()")
DIAG_ENTRY(InitializerOverrides /* initializer-overrides */, 9739, /* DiagArray451 */ 1316, 0, R"()")
DIAG_ENTRY(anonymous_194 /* injected-class-name */, 9761, /* DiagArray452 */ 1320, 0, R"()")
DIAG_ENTRY(anonymous_32 /* inline */, 9781, 0, 0, R"()")
DIAG_ENTRY(BackendInlineAsm /* inline-asm */, 9788, /* DiagArray454 */ 1322, 0, R"()")
DIAG_ENTRY(InlineNamespaceReopenedNoninline /* inline-namespace-reopened-noninline */, 9799, /* DiagArray455 */ 1324, 0, R"()")
DIAG_ENTRY(anonymous_286 /* inline-new-delete */, 9835, /* DiagArray456 */ 1326, 0, R"()")
DIAG_ENTRY(anonymous_231 /* instantiation-after-specialization */, 9853, /* DiagArray457 */ 1328, 0, R"()")
DIAG_ENTRY(IntConversion /* int-conversion */, 9888, /* DiagArray458 */ 1330, 0, R"()")
DIAG_ENTRY(anonymous_66 /* int-conversions */, 9903, 0, /* DiagSubGroup459 */ 379, R"()")
DIAG_ENTRY(IntInBoolContext /* int-in-bool-context */, 9919, /* DiagArray460 */ 1333, 0, R"()")
DIAG_ENTRY(IntToPointerCast /* int-to-pointer-cast */, 9939, /* DiagArray461 */ 1336, /* DiagSubGroup461 */ 381, R"()")
DIAG_ENTRY(IntToVoidPointerCast /* int-to-void-pointer-cast */, 9959, /* DiagArray462 */ 1338, 0, R"()")
DIAG_ENTRY(anonymous_79 /* integer-overflow */, 9984, /* DiagArray463 */ 1340, 0, R"()")
DIAG_ENTRY(InvalidCommandLineArgument /* invalid-command-line-argument */, 10001, /* DiagArray464 */ 1342, /* DiagSubGroup464 */ 383, R"()")
DIAG_ENTRY(anonymous_197 /* invalid-constexpr */, 10031, /* DiagArray465 */ 1354, 0, R"()")
DIAG_ENTRY(anonymous_88 /* invalid-feature-combination */, 10049, /* DiagArray466 */ 1356, 0, R"()")
DIAG_ENTRY(ObjCInvalidIBOutletProperty /* invalid-iboutlet */, 10077, /* DiagArray467 */ 1358, 0, R"()")
DIAG_ENTRY(anonymous_211 /* invalid-initializer-from-system-header */, 10094, /* DiagArray468 */ 1361, 0, R"()")
DIAG_ENTRY(InvalidIOSDeploymentTarget /* invalid-ios-deployment-target */, 10133, /* DiagArray469 */ 1363, 0, R"()")
DIAG_ENTRY(anonymous_223 /* invalid-no-builtin-names */, 10163, /* DiagArray470 */ 1365, 0, R"()")
DIAG_ENTRY(InvalidNoreturn /* invalid-noreturn */, 10188, /* DiagArray471 */ 1367, 0, R"()")
DIAG_ENTRY(InvalidOffsetof /* invalid-offsetof */, 10205, /* DiagArray472 */ 1370, 0, R"()")
DIAG_ENTRY(InvalidOrNonExistentDirectory /* invalid-or-nonexistent-directory */, 10222, /* DiagArray473 */ 1373, 0, R"()")
DIAG_ENTRY(anonymous_229 /* invalid-partial-specialization */, 10255, /* DiagArray474 */ 1375, 0, R"()")
DIAG_ENTRY(anonymous_33 /* invalid-pch */, 10286, 0, 0, R"()")
DIAG_ENTRY(InvalidPPToken /* invalid-pp-token */, 10298, /* DiagArray476 */ 1377, 0, R"()")
DIAG_ENTRY(InvalidSourceEncoding /* invalid-source-encoding */, 10315, /* DiagArray477 */ 1380, 0, R"()")
DIAG_ENTRY(anonymous_188 /* invalid-static-assert-message */, 10339, /* DiagArray478 */ 1383, 0, R"()")
DIAG_ENTRY(anonymous_138 /* invalid-token-paste */, 10369, /* DiagArray479 */ 1385, 0, R"()")
DIAG_ENTRY(anonymous_123 /* invalid-unevaluated-string */, 10389, /* DiagArray480 */ 1387, 0, R"()")
DIAG_ENTRY(anonymous_116 /* invalid-utf8 */, 10416, /* DiagArray481 */ 1389, 0, R"()")
DIAG_ENTRY(anonymous_269 /* jump-seh-finally */, 10429, /* DiagArray482 */ 1391, 0, R"()")
DIAG_ENTRY(KeywordCompat /* keyword-compat */, 10446, /* DiagArray483 */ 1393, 0, R"()")
DIAG_ENTRY(KeywordAsMacro /* keyword-macro */, 10461, /* DiagArray484 */ 1395, 0, R"()")
DIAG_ENTRY(anonymous_89 /* knl-knm-isa-support-removed */, 10475, /* DiagArray485 */ 1397, 0, R"()")
DIAG_ENTRY(KNRPromotedParameter /* knr-promoted-parameter */, 10503, /* DiagArray486 */ 1399, 0, R"()")
DIAG_ENTRY(anonymous_115 /* language-extension-token */, 10526, /* DiagArray487 */ 1401, 0, R"()")
DIAG_ENTRY(LargeByValueCopy /* large-by-value-copy */, 10551, /* DiagArray488 */ 1403, 0, R"()")
DIAG_ENTRY(LibLTO /* liblto */, 10571, 0, 0, R"()")
DIAG_ENTRY(LinkerWarnings /* linker-warnings */, 10578, /* DiagArray490 */ 1406, 0, R"()")
DIAG_ENTRY(LiteralConversion /* literal-conversion */, 10594, /* DiagArray491 */ 1408, 0, R"()")
DIAG_ENTRY(LiteralRange /* literal-range */, 10613, /* DiagArray492 */ 1411, 0, R"()")
DIAG_ENTRY(LocalTypeTemplateArgs /* local-type-template-args */, 10627, /* DiagArray493 */ 1415, /* DiagSubGroup493 */ 385, R"()")
DIAG_ENTRY(LogicalNotParentheses /* logical-not-parentheses */, 10652, /* DiagArray494 */ 1417, 0, R"()")
DIAG_ENTRY(LogicalOpParentheses /* logical-op-parentheses */, 10676, /* DiagArray495 */ 1419, 0, R"()")
DIAG_ENTRY(LongLong /* long-long */, 10699, /* DiagArray496 */ 1421, /* DiagSubGroup496 */ 387, R"()")
DIAG_ENTRY(LoopAnalysis /* loop-analysis */, 10709, 0, /* DiagSubGroup497 */ 389, R"()")
DIAG_ENTRY(MacroRedefined /* macro-redefined */, 10723, /* DiagArray498 */ 1423, 0, R"()")
DIAG_ENTRY(Main /* main */, 10739, /* DiagArray499 */ 1425, 0, R"()")
DIAG_ENTRY(MainReturnType /* main-return-type */, 10744, /* DiagArray500 */ 1433, 0, R"()")
DIAG_ENTRY(MalformedWarningCheck /* malformed-warning-check */, 10761, /* DiagArray501 */ 1435, 0, R"()")
DIAG_ENTRY(anonymous_244 /* many-braces-around-scalar-init */, 10785, /* DiagArray502 */ 1437, 0, R"()")
DIAG_ENTRY(anonymous_120 /* mathematical-notation-identifier-extension */, 10816, /* DiagArray503 */ 1439, 0, R"()")
DIAG_ENTRY(MaxTokens /* max-tokens */, 10859, /* DiagArray504 */ 1441, 0, R"(The warning is issued if the number of pre-processor tokens exceeds
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
DIAG_ENTRY(MaxUnsignedZero /* max-unsigned-zero */, 10870, /* DiagArray505 */ 1444, 0, R"()")
DIAG_ENTRY(MemsetTransposedArgs /* memset-transposed-args */, 10888, /* DiagArray506 */ 1446, 0, R"()")
DIAG_ENTRY(anonymous_170 /* memsize-comparison */, 10911, /* DiagArray507 */ 1448, 0, R"()")
DIAG_ENTRY(MethodSignatures /* method-signatures */, 10930, /* DiagArray508 */ 1450, 0, R"()")
DIAG_ENTRY(Microsoft /* microsoft */, 10948, 0, /* DiagSubGroup509 */ 392, R"()")
DIAG_ENTRY(MicrosoftAbstract /* microsoft-abstract */, 10958, /* DiagArray510 */ 1453, 0, R"()")
DIAG_ENTRY(MicrosoftAnonTag /* microsoft-anon-tag */, 10977, /* DiagArray511 */ 1455, 0, R"()")
DIAG_ENTRY(MicrosoftCast /* microsoft-cast */, 10996, /* DiagArray512 */ 1458, 0, R"()")
DIAG_ENTRY(MicrosoftCharize /* microsoft-charize */, 11011, /* DiagArray513 */ 1461, 0, R"()")
DIAG_ENTRY(MicrosoftCommentPaste /* microsoft-comment-paste */, 11029, /* DiagArray514 */ 1463, 0, R"()")
DIAG_ENTRY(MicrosoftConstInit /* microsoft-const-init */, 11053, /* DiagArray515 */ 1465, 0, R"()")
DIAG_ENTRY(MicrosoftCppMacro /* microsoft-cpp-macro */, 11074, /* DiagArray516 */ 1467, 0, R"()")
DIAG_ENTRY(MicrosoftDefaultArgRedefinition /* microsoft-default-arg-redefinition */, 11094, /* DiagArray517 */ 1469, 0, R"()")
DIAG_ENTRY(MicrosoftDrectveSection /* microsoft-drectve-section */, 11129, /* DiagArray518 */ 1471, 0, R"()")
DIAG_ENTRY(MicrosoftEndOfFile /* microsoft-end-of-file */, 11155, /* DiagArray519 */ 1473, 0, R"()")
DIAG_ENTRY(MicrosoftEnumForwardReference /* microsoft-enum-forward-reference */, 11177, /* DiagArray520 */ 1475, 0, R"()")
DIAG_ENTRY(MicrosoftEnumValue /* microsoft-enum-value */, 11210, /* DiagArray521 */ 1477, 0, R"()")
DIAG_ENTRY(MicrosoftExceptionSpec /* microsoft-exception-spec */, 11231, /* DiagArray522 */ 1479, 0, R"()")
DIAG_ENTRY(anonymous_148 /* microsoft-exists */, 11256, /* DiagArray523 */ 1485, 0, R"()")
DIAG_ENTRY(MicrosoftExplicitConstructorCall /* microsoft-explicit-constructor-call */, 11273, /* DiagArray524 */ 1487, 0, R"()")
DIAG_ENTRY(MicrosoftExtraQualification /* microsoft-extra-qualification */, 11309, /* DiagArray525 */ 1489, 0, R"()")
DIAG_ENTRY(MicrosoftFixedEnum /* microsoft-fixed-enum */, 11339, /* DiagArray526 */ 1491, 0, R"()")
DIAG_ENTRY(MicrosoftFlexibleArray /* microsoft-flexible-array */, 11360, /* DiagArray527 */ 1493, 0, R"()")
DIAG_ENTRY(MicrosoftGoto /* microsoft-goto */, 11385, /* DiagArray528 */ 1496, 0, R"()")
DIAG_ENTRY(MicrosoftInaccessibleBase /* microsoft-inaccessible-base */, 11400, /* DiagArray529 */ 1498, 0, R"()")
DIAG_ENTRY(MicrosoftInclude /* microsoft-include */, 11428, /* DiagArray530 */ 1500, 0, R"()")
DIAG_ENTRY(MicrosoftInitFromPredefined /* microsoft-init-from-predefined */, 11446, /* DiagArray531 */ 1502, 0, R"()")
DIAG_ENTRY(MicrosoftMutableReference /* microsoft-mutable-reference */, 11477, /* DiagArray532 */ 1504, 0, R"()")
DIAG_ENTRY(MicrosoftPureDefinition /* microsoft-pure-definition */, 11505, /* DiagArray533 */ 1506, 0, R"()")
DIAG_ENTRY(MicrosoftRedeclareStatic /* microsoft-redeclare-static */, 11531, /* DiagArray534 */ 1508, 0, R"()")
DIAG_ENTRY(MicrosoftSealed /* microsoft-sealed */, 11558, /* DiagArray535 */ 1510, 0, R"()")
DIAG_ENTRY(MicrosoftStaticAssert /* microsoft-static-assert */, 11575, /* DiagArray536 */ 1512, 0, R"()")
DIAG_ENTRY(MicrosoftStringLiteralFromPredefined /* microsoft-string-literal-from-predefined */, 11599, /* DiagArray537 */ 1514, 0, R"()")
DIAG_ENTRY(MicrosoftTemplate /* microsoft-template */, 11640, /* DiagArray538 */ 1516, /* DiagSubGroup538 */ 425, R"()")
DIAG_ENTRY(MicrosoftTemplateShadow /* microsoft-template-shadow */, 11659, /* DiagArray539 */ 1527, 0, R"()")
DIAG_ENTRY(MicrosoftUnionMemberReference /* microsoft-union-member-reference */, 11685, /* DiagArray540 */ 1529, 0, R"()")
DIAG_ENTRY(MicrosoftUnqualifiedFriend /* microsoft-unqualified-friend */, 11718, /* DiagArray541 */ 1531, 0, R"()")
DIAG_ENTRY(MicrosoftUsingDecl /* microsoft-using-decl */, 11747, /* DiagArray542 */ 1533, 0, R"()")
DIAG_ENTRY(MicrosoftVoidPseudoDtor /* microsoft-void-pseudo-dtor */, 11768, /* DiagArray543 */ 1535, 0, R"()")
DIAG_ENTRY(MisExpect /* misexpect */, 11795, /* DiagArray544 */ 1537, 0, R"()")
DIAG_ENTRY(MisleadingIndentation /* misleading-indentation */, 11805, /* DiagArray545 */ 1539, 0, R"()")
DIAG_ENTRY(anonymous_265 /* mismatched-new-delete */, 11828, /* DiagArray546 */ 1541, 0, R"()")
DIAG_ENTRY(MismatchedParameterTypes /* mismatched-parameter-types */, 11850, /* DiagArray547 */ 1543, 0, R"()")
DIAG_ENTRY(MismatchedReturnTypes /* mismatched-return-types */, 11877, /* DiagArray548 */ 1545, 0, R"()")
DIAG_ENTRY(MismatchedTags /* mismatched-tags */, 11901, /* DiagArray549 */ 1547, 0, R"()")
DIAG_ENTRY(MissingBraces /* missing-braces */, 11917, /* DiagArray550 */ 1550, 0, R"()")
DIAG_ENTRY(anonymous_282 /* missing-constinit */, 11932, /* DiagArray551 */ 1552, 0, R"()")
DIAG_ENTRY(MissingDeclarations /* missing-declarations */, 11950, /* DiagArray552 */ 1554, 0, R"()")
DIAG_ENTRY(MissingDesignatedFieldInitializers /* missing-designated-field-initializers */, 11971, /* DiagArray553 */ 1559, 0, R"(Warn about designated initializers with some fields missing (only in C++).)")
DIAG_ENTRY(anonymous_193 /* missing-exception-spec */, 12009, /* DiagArray554 */ 1561, 0, R"()")
DIAG_ENTRY(MissingFieldInitializers /* missing-field-initializers */, 12032, /* DiagArray555 */ 1563, /* DiagSubGroup555 */ 427, R"()")
DIAG_ENTRY(anonymous_34 /* missing-format-attribute */, 12059, 0, 0, R"()")
DIAG_ENTRY(anonymous_35 /* missing-include-dirs */, 12084, 0, 0, R"()")
DIAG_ENTRY(MissingMethodReturnType /* missing-method-return-type */, 12105, /* DiagArray558 */ 1565, 0, R"()")
DIAG_ENTRY(anonymous_105 /* missing-multilib */, 12132, /* DiagArray559 */ 1567, 0, R"()")
DIAG_ENTRY(MissingNoEscape /* missing-noescape */, 12149, /* DiagArray560 */ 1569, 0, R"()")
DIAG_ENTRY(MissingNoreturn /* missing-noreturn */, 12166, /* DiagArray561 */ 1571, 0, R"()")
DIAG_ENTRY(anonymous_215 /* missing-prototype-for-cc */, 12183, /* DiagArray562 */ 1574, 0, R"()")
DIAG_ENTRY(anonymous_233 /* missing-prototypes */, 12208, /* DiagArray563 */ 1576, 0, R"()")
DIAG_ENTRY(anonymous_150 /* missing-selector-name */, 12227, /* DiagArray564 */ 1578, 0, R"()")
DIAG_ENTRY(anonymous_96 /* missing-sysroot */, 12249, /* DiagArray565 */ 1580, 0, R"()")
DIAG_ENTRY(anonymous_234 /* missing-variable-declarations */, 12265, /* DiagArray566 */ 1582, 0, R"()")
DIAG_ENTRY(MisspelledAssumption /* misspelled-assumption */, 12295, /* DiagArray567 */ 1584, 0, R"()")
DIAG_ENTRY(ModuleBuild /* module-build */, 12317, /* DiagArray568 */ 1586, 0, R"()")
DIAG_ENTRY(ModuleConflict /* module-conflict */, 12330, /* DiagArray569 */ 1591, 0, R"()")
DIAG_ENTRY(anonymous_110 /* module-file-config-mismatch */, 12346, /* DiagArray570 */ 1594, 0, R"()")
DIAG_ENTRY(ModuleFileExtension /* module-file-extension */, 12374, /* DiagArray571 */ 1596, 0, R"()")
DIAG_ENTRY(ModuleImport /* module-import */, 12396, /* DiagArray572 */ 1598, 0, R"()")
DIAG_ENTRY(anonymous_298 /* module-import-in-extern-c */, 12410, /* DiagArray573 */ 1600, 0, R"()")
DIAG_ENTRY(ModuleIncludeDirectiveTranslation /* module-include-translation */, 12436, /* DiagArray574 */ 1602, 0, R"()")
DIAG_ENTRY(ModuleLock /* module-lock */, 12463, /* DiagArray575 */ 1604, 0, R"()")
DIAG_ENTRY(anonymous_301 /* modules-ambiguous-internal-linkage */, 12475, /* DiagArray576 */ 1606, 0, R"()")
DIAG_ENTRY(anonymous_299 /* modules-import-nested-redundant */, 12510, /* DiagArray577 */ 1608, 0, R"()")
DIAG_ENTRY(Most /* most */, 12542, 0, /* DiagSubGroup578 */ 429, R"()")
DIAG_ENTRY(Move /* move */, 12547, 0, /* DiagSubGroup579 */ 467, R"()")
DIAG_ENTRY(anonymous_76 /* msvc-include */, 12552, 0, /* DiagSubGroup580 */ 472, R"()")
DIAG_ENTRY(anonymous_101 /* msvc-not-found */, 12565, /* DiagArray581 */ 1610, 0, R"()")
DIAG_ENTRY(MultiGPU /* multi-gpu */, 12580, /* DiagArray582 */ 1612, 0, R"()")
DIAG_ENTRY(MultiChar /* multichar */, 12590, /* DiagArray583 */ 1614, 0, R"()")
DIAG_ENTRY(anonymous_287 /* multiple-move-vbase */, 12600, /* DiagArray584 */ 1616, 0, R"()")
DIAG_ENTRY(anonymous_84 /* nan-infinity-disabled */, 12620, /* DiagArray585 */ 1618, 0, R"(This warning is enabled when source code using the macros ``INFINITY`` or ``NAN``
is compiled with floating-point options preventing these two values. This can
lead to undefined behavior. Check the order of command line arguments that modify
this behavior, such as ``-ffast-math``, ``-fhonor-infinities``, and
``-fhonor-nans`` (etc), as well as ``#pragma`` directives if this diagnostic is
generated unexpectedly.)")
DIAG_ENTRY(anonymous_24 /* narrowing */, 12642, 0, /* DiagSubGroup586 */ 474, R"()")
DIAG_ENTRY(anonymous_284 /* nested-anon-types */, 12652, /* DiagArray587 */ 1620, 0, R"()")
DIAG_ENTRY(anonymous_36 /* nested-externs */, 12670, 0, 0, R"()")
DIAG_ENTRY(OperatorNewReturnsNull /* new-returns-null */, 12685, /* DiagArray589 */ 1622, 0, R"()")
DIAG_ENTRY(NewlineEOF /* newline-eof */, 12702, /* DiagArray590 */ 1624, 0, R"()")
DIAG_ENTRY(NoDeref /* noderef */, 12714, /* DiagArray591 */ 1627, 0, R"()")
DIAG_ENTRY(NoexceptType /* noexcept-type */, 12722, 0, /* DiagSubGroup592 */ 476, R"()")
DIAG_ENTRY(anonymous_173 /* non-c-typedef-for-linkage */, 12736, /* DiagArray593 */ 1631, 0, R"()")
DIAG_ENTRY(NonGCC /* non-gcc */, 12762, 0, /* DiagSubGroup594 */ 478, R"()")
DIAG_ENTRY(NonLiteralNullConversion /* non-literal-null-conversion */, 12770, /* DiagArray595 */ 1633, 0, R"()")
DIAG_ENTRY(NonModularIncludeInFrameworkModule /* non-modular-include-in-framework-module */, 12798, /* DiagArray596 */ 1635, 0, R"()")
DIAG_ENTRY(NonModularIncludeInModule /* non-modular-include-in-module */, 12838, /* DiagArray597 */ 1637, /* DiagSubGroup597 */ 482, R"()")
DIAG_ENTRY(NonPODVarargs /* non-pod-varargs */, 12868, /* DiagArray598 */ 1639, 0, R"()")
DIAG_ENTRY(anonymous_206 /* non-power-of-two-alignment */, 12884, /* DiagArray599 */ 1644, 0, R"()")
DIAG_ENTRY(NonVirtualDtor /* non-virtual-dtor */, 12911, /* DiagArray600 */ 1646, 0, R"()")
DIAG_ENTRY(NonNull /* nonnull */, 12928, /* DiagArray601 */ 1648, 0, R"()")
DIAG_ENTRY(anonymous_38 /* nonportable-cfstrings */, 12936, 0, 0, R"()")
DIAG_ENTRY(anonymous_126 /* nonportable-include-path */, 12958, /* DiagArray603 */ 1651, 0, R"()")
DIAG_ENTRY(anonymous_92 /* nonportable-private-apinotes-path */, 12983, /* DiagArray604 */ 1653, 0, R"()")
DIAG_ENTRY(anonymous_93 /* nonportable-private-system-apinotes-path */, 13017, /* DiagArray605 */ 1655, 0, R"()")
DIAG_ENTRY(anonymous_127 /* nonportable-system-include-path */, 13058, /* DiagArray606 */ 1657, 0, R"()")
DIAG_ENTRY(anonymous_293 /* nonportable-vector-initialization */, 13090, /* DiagArray607 */ 1659, 0, R"()")
DIAG_ENTRY(NonTrivialMemaccess /* nontrivial-memaccess */, 13124, /* DiagArray608 */ 1661, 0, R"()")
DIAG_ENTRY(NSConsumedMismatch /* nsconsumed-mismatch */, 13145, /* DiagArray609 */ 1663, 0, R"()")
DIAG_ENTRY(NSReturnsMismatch /* nsreturns-mismatch */, 13165, /* DiagArray610 */ 1665, 0, R"()")
DIAG_ENTRY(NullArithmetic /* null-arithmetic */, 13184, /* DiagArray611 */ 1667, 0, R"()")
DIAG_ENTRY(NullCharacter /* null-character */, 13200, /* DiagArray612 */ 1670, 0, R"()")
DIAG_ENTRY(NullConversion /* null-conversion */, 13215, /* DiagArray613 */ 1673, 0, R"()")
DIAG_ENTRY(NullDereference /* null-dereference */, 13231, /* DiagArray614 */ 1675, 0, R"()")
DIAG_ENTRY(NullPointerArithmetic /* null-pointer-arithmetic */, 13248, /* DiagArray615 */ 1678, /* DiagSubGroup615 */ 484, R"()")
DIAG_ENTRY(NullPointerSubtraction /* null-pointer-subtraction */, 13272, /* DiagArray616 */ 1680, 0, R"()")
DIAG_ENTRY(Nullability /* nullability */, 13297, /* DiagArray617 */ 1682, 0, R"()")
DIAG_ENTRY(NullabilityCompleteness /* nullability-completeness */, 13309, /* DiagArray618 */ 1688, /* DiagSubGroup618 */ 486, R"()")
DIAG_ENTRY(NullabilityCompletenessOnArrays /* nullability-completeness-on-arrays */, 13334, /* DiagArray619 */ 1690, 0, R"()")
DIAG_ENTRY(NullabilityDeclSpec /* nullability-declspec */, 13369, /* DiagArray620 */ 1692, 0, R"()")
DIAG_ENTRY(anonymous_144 /* nullability-extension */, 13390, /* DiagArray621 */ 1694, 0, R"()")
DIAG_ENTRY(NullabilityInferredOnNestedType /* nullability-inferred-on-nested-type */, 13412, /* DiagArray622 */ 1696, 0, R"()")
DIAG_ENTRY(NullableToNonNullConversion /* nullable-to-nonnull-conversion */, 13448, /* DiagArray623 */ 1698, 0, R"()")
DIAG_ENTRY(anonymous_182 /* objc-autosynthesis-property-ivar-name-match */, 13479, /* DiagArray624 */ 1700, 0, R"()")
DIAG_ENTRY(ObjCBoolConstantConversion /* objc-bool-constant-conversion */, 13523, /* DiagArray625 */ 1702, 0, R"()")
DIAG_ENTRY(ObjCBoxing /* objc-boxing */, 13553, /* DiagArray626 */ 1704, 0, R"()")
DIAG_ENTRY(anonymous_262 /* objc-circular-container */, 13565, /* DiagArray627 */ 1706, 0, R"()")
DIAG_ENTRY(ObjCCocoaAPI /* objc-cocoa-api */, 13589, 0, /* DiagSubGroup628 */ 488, R"()")
DIAG_ENTRY(ObjCDesignatedInit /* objc-designated-initializers */, 13604, /* DiagArray629 */ 1708, 0, R"()")
DIAG_ENTRY(anonymous_203 /* objc-dictionary-duplicate-keys */, 13633, /* DiagArray630 */ 1715, 0, R"()")
DIAG_ENTRY(anonymous_87 /* objc-duplicate-category-definition */, 13664, /* DiagArray631 */ 1717, 0, R"()")
DIAG_ENTRY(ObjCFlexibleArray /* objc-flexible-array */, 13699, /* DiagArray632 */ 1719, 0, R"()")
DIAG_ENTRY(anonymous_240 /* objc-forward-class-redefinition */, 13719, /* DiagArray633 */ 1722, 0, R"()")
DIAG_ENTRY(anonymous_241 /* objc-interface-ivars */, 13751, /* DiagArray634 */ 1724, 0, R"()")
DIAG_ENTRY(ObjCLiteralComparison /* objc-literal-compare */, 13772, /* DiagArray635 */ 1726, /* DiagSubGroup635 */ 490, R"()")
DIAG_ENTRY(ObjCLiteralConversion /* objc-literal-conversion */, 13793, /* DiagArray636 */ 1728, 0, R"()")
DIAG_ENTRY(anonymous_134 /* objc-macro-redefinition */, 13817, /* DiagArray637 */ 1731, 0, R"()")
DIAG_ENTRY(anonymous_187 /* objc-messaging-id */, 13841, /* DiagArray638 */ 1733, 0, R"()")
DIAG_ENTRY(MethodAccess /* objc-method-access */, 13859, /* DiagArray639 */ 1735, 0, R"()")
DIAG_ENTRY(anonymous_183 /* objc-missing-property-synthesis */, 13878, /* DiagArray640 */ 1742, 0, R"()")
DIAG_ENTRY(ObjCMissingSuperCalls /* objc-missing-super-calls */, 13910, /* DiagArray641 */ 1744, 0, R"()")
DIAG_ENTRY(ObjCMultipleMethodNames /* objc-multiple-method-names */, 13935, /* DiagArray642 */ 1746, 0, R"()")
DIAG_ENTRY(ObjCRetainBlockProperty /* objc-noncopy-retain-block-property */, 13962, /* DiagArray643 */ 1748, 0, R"()")
DIAG_ENTRY(ObjCNonUnifiedException /* objc-nonunified-exceptions */, 13997, /* DiagArray644 */ 1750, 0, R"()")
DIAG_ENTRY(ObjCPropertyAssignOnObjectType /* objc-property-assign-on-object-type */, 14024, /* DiagArray645 */ 1752, 0, R"()")
DIAG_ENTRY(ObjCPropertyImpl /* objc-property-implementation */, 14060, /* DiagArray646 */ 1754, 0, R"()")
DIAG_ENTRY(anonymous_178 /* objc-property-implicit-mismatch */, 14089, /* DiagArray647 */ 1759, 0, R"()")
DIAG_ENTRY(anonymous_180 /* objc-property-matches-cocoa-ownership-rule */, 14121, /* DiagArray648 */ 1761, 0, R"()")
DIAG_ENTRY(ObjCPropertyNoAttribute /* objc-property-no-attribute */, 14164, /* DiagArray649 */ 1763, 0, R"()")
DIAG_ENTRY(ObjCNoPropertyAutoSynthesis /* objc-property-synthesis */, 14191, /* DiagArray650 */ 1766, 0, R"()")
DIAG_ENTRY(ObjCProtocolMethodImpl /* objc-protocol-method-implementation */, 14215, /* DiagArray651 */ 1770, 0, R"()")
DIAG_ENTRY(anonymous_181 /* objc-protocol-property-synthesis */, 14251, /* DiagArray652 */ 1772, 0, R"()")
DIAG_ENTRY(ObjCProtocolQualifiers /* objc-protocol-qualifiers */, 14284, /* DiagArray653 */ 1774, 0, R"()")
DIAG_ENTRY(ObjCReadonlyPropertyHasSetter /* objc-readonly-with-setter-property */, 14309, /* DiagArray654 */ 1776, 0, R"()")
DIAG_ENTRY(ObjCRedundantAPIUse /* objc-redundant-api-use */, 14344, 0, /* DiagSubGroup655 */ 492, R"()")
DIAG_ENTRY(ObjCRedundantLiteralUse /* objc-redundant-literal-use */, 14367, /* DiagArray656 */ 1778, 0, R"()")
DIAG_ENTRY(ObjCRootClass /* objc-root-class */, 14394, /* DiagArray657 */ 1780, 0, R"()")
DIAG_ENTRY(ObjCSignedCharBool /* objc-signed-char-bool */, 14410, 0, /* DiagSubGroup658 */ 494, R"()")
DIAG_ENTRY(ObjCSignedCharBoolImplicitFloatConversion /* objc-signed-char-bool-implicit-float-conversion */, 14432, /* DiagArray659 */ 1782, 0, R"()")
DIAG_ENTRY(ObjCSignedCharBoolImplicitIntConversion /* objc-signed-char-bool-implicit-int-conversion */, 14480, /* DiagArray660 */ 1784, 0, R"()")
DIAG_ENTRY(ObjCStringComparison /* objc-string-compare */, 14526, /* DiagArray661 */ 1786, 0, R"()")
DIAG_ENTRY(ObjCStringConcatenation /* objc-string-concatenation */, 14546, /* DiagArray662 */ 1788, 0, R"()")
DIAG_ENTRY(anonymous_263 /* objc-unsafe-perform-selector */, 14572, /* DiagArray663 */ 1790, 0, R"()")
DIAG_ENTRY(ODR /* odr */, 14601, /* DiagArray664 */ 1792, 0, R"()")
DIAG_ENTRY(OldStyleCast /* old-style-cast */, 14605, /* DiagArray665 */ 1811, 0, R"()")
DIAG_ENTRY(anonymous_40 /* old-style-definition */, 14620, 0, 0, R"()")
DIAG_ENTRY(OpenACC /* openacc */, 14641, 0, /* DiagSubGroup667 */ 499, R"()")
DIAG_ENTRY(OpenCLUnsupportedRGBA /* opencl-unsupported-rgba */, 14649, /* DiagArray668 */ 1813, 0, R"()")
DIAG_ENTRY(OpenMP /* openmp */, 14673, 0, /* DiagSubGroup669 */ 501, R"()")
DIAG_ENTRY(OpenMP51Ext /* openmp-51-extensions */, 14680, /* DiagArray670 */ 1815, 0, R"()")
DIAG_ENTRY(OpenMPClauses /* openmp-clauses */, 14701, /* DiagArray671 */ 1817, 0, R"()")
DIAG_ENTRY(OpenMPExtensions /* openmp-extensions */, 14716, /* DiagArray672 */ 1837, 0, R"()")
DIAG_ENTRY(OpenMPLoopForm /* openmp-loop-form */, 14734, /* DiagArray673 */ 1839, 0, R"()")
DIAG_ENTRY(OpenMPMapping /* openmp-mapping */, 14751, /* DiagArray674 */ 1842, 0, R"()")
DIAG_ENTRY(OpenMPTarget /* openmp-target */, 14766, /* DiagArray675 */ 1844, /* DiagSubGroup675 */ 510, R"()")
DIAG_ENTRY(OpenMPTargetException /* openmp-target-exception */, 14780, /* DiagArray676 */ 1848, 0, R"()")
DIAG_ENTRY(OptionIgnored /* option-ignored */, 14804, /* DiagArray677 */ 1851, 0, R"()")
DIAG_ENTRY(OrderedCompareFunctionPointers /* ordered-compare-function-pointers */, 14819, /* DiagArray678 */ 1870, 0, R"()")
DIAG_ENTRY(OutOfLineDeclaration /* out-of-line-declaration */, 14853, /* DiagArray679 */ 1873, 0, R"()")
DIAG_ENTRY(anonymous_165 /* out-of-scope-function */, 14877, /* DiagArray680 */ 1875, 0, R"()")
DIAG_ENTRY(OveralignedType /* over-aligned */, 14899, /* DiagArray681 */ 1877, 0, R"()")
DIAG_ENTRY(anonymous_41 /* overflow */, 14912, 0, 0, R"()")
DIAG_ENTRY(OverlengthStrings /* overlength-strings */, 14921, /* DiagArray683 */ 1879, 0, R"()")
DIAG_ENTRY(OverloadedShiftOpParentheses /* overloaded-shift-op-parentheses */, 14940, /* DiagArray684 */ 1881, 0, R"()")
DIAG_ENTRY(OverloadedVirtual /* overloaded-virtual */, 14972, /* DiagArray685 */ 1883, 0, R"()")
DIAG_ENTRY(anonymous_37 /* override-init */, 14991, 0, /* DiagSubGroup686 */ 512, R"()")
DIAG_ENTRY(anonymous_107 /* override-module */, 15005, /* DiagArray687 */ 1885, 0, R"()")
DIAG_ENTRY(OverridingMethodMismatch /* overriding-method-mismatch */, 15021, /* DiagArray688 */ 1887, 0, R"()")
DIAG_ENTRY(anonymous_95 /* overriding-option */, 15048, /* DiagArray689 */ 1895, 0, R"()")
DIAG_ENTRY(Packed /* packed */, 15066, /* DiagArray690 */ 1897, /* DiagSubGroup690 */ 514, R"()")
DIAG_ENTRY(PackedNonPod /* packed-non-pod */, 15073, /* DiagArray691 */ 1899, 0, R"()")
DIAG_ENTRY(Padded /* padded */, 15088, /* DiagArray692 */ 1901, /* DiagSubGroup692 */ 516, R"()")
DIAG_ENTRY(PaddedBitField /* padded-bitfield */, 15095, /* DiagArray693 */ 1905, 0, R"()")
DIAG_ENTRY(Parentheses /* parentheses */, 15111, /* DiagArray694 */ 1908, /* DiagSubGroup694 */ 518, R"()")
DIAG_ENTRY(ParenthesesOnEquality /* parentheses-equality */, 15123, /* DiagArray695 */ 1912, 0, R"()")
DIAG_ENTRY(anonymous_8 /* partial-availability */, 15144, 0, /* DiagSubGroup696 */ 527, R"()")
DIAG_ENTRY(BackendOptimizationRemark /* pass */, 15165, /* DiagArray697 */ 1914, 0, R"()")
DIAG_ENTRY(BackendOptimizationRemarkAnalysis /* pass-analysis */, 15170, /* DiagArray698 */ 1916, 0, R"()")
DIAG_ENTRY(BackendOptimizationFailure /* pass-failed */, 15184, /* DiagArray699 */ 1920, 0, R"()")
DIAG_ENTRY(BackendOptimizationRemarkMissed /* pass-missed */, 15196, /* DiagArray700 */ 1922, 0, R"()")
DIAG_ENTRY(anonymous_305 /* pch-date-time */, 15208, /* DiagArray701 */ 1924, 0, R"()")
DIAG_ENTRY(anonymous_304 /* pch-vfs-diff */, 15222, /* DiagArray702 */ 1926, 0, R"()")
DIAG_ENTRY(Pedantic /* pedantic */, 15235, /* DiagArray703 */ 1928, /* DiagSubGroup703 */ 529, R"()")
DIAG_ENTRY(OpenCLCoreFeaturesDiagGroup /* pedantic-core-features */, 15244, /* DiagArray704 */ 2008, 0, R"()")
DIAG_ENTRY(PedanticMacros /* pedantic-macros */, 15267, 0, /* DiagSubGroup705 */ 589, R"()")
DIAG_ENTRY(PessimizingMove /* pessimizing-move */, 15283, /* DiagArray706 */ 2011, 0, R"()")
DIAG_ENTRY(PointerArith /* pointer-arith */, 15300, /* DiagArray707 */ 2014, /* DiagSubGroup707 */ 595, R"()")
DIAG_ENTRY(PointerBoolConversion /* pointer-bool-conversion */, 15314, /* DiagArray708 */ 2018, 0, R"()")
DIAG_ENTRY(anonymous_218 /* pointer-compare */, 15338, /* DiagArray709 */ 2021, 0, R"()")
DIAG_ENTRY(anonymous_261 /* pointer-integer-compare */, 15354, /* DiagArray710 */ 2023, 0, R"()")
DIAG_ENTRY(anonymous_273 /* pointer-sign */, 15378, /* DiagArray711 */ 2025, 0, R"()")
DIAG_ENTRY(PointerToEnumCast /* pointer-to-enum-cast */, 15391, /* DiagArray712 */ 2027, /* DiagSubGroup712 */ 597, R"()")
DIAG_ENTRY(PointerToIntCast /* pointer-to-int-cast */, 15412, /* DiagArray713 */ 2029, /* DiagSubGroup713 */ 599, R"()")
DIAG_ENTRY(anonymous_279 /* pointer-type-mismatch */, 15432, /* DiagArray714 */ 2031, 0, R"()")
DIAG_ENTRY(anonymous_94 /* poison-system-directories */, 15454, /* DiagArray715 */ 2033, 0, R"()")
DIAG_ENTRY(ObjCPotentiallyDirectSelector /* potentially-direct-selector */, 15480, /* DiagArray716 */ 2035, 0, R"()")
DIAG_ENTRY(PotentiallyEvaluatedExpression /* potentially-evaluated-expression */, 15508, /* DiagArray717 */ 2037, 0, R"()")
DIAG_ENTRY(PragmaClangAttribute /* pragma-clang-attribute */, 15541, /* DiagArray718 */ 2039, 0, R"()")
DIAG_ENTRY(anonymous_128 /* pragma-once-outside-header */, 15564, /* DiagArray719 */ 2041, 0, R"()")
DIAG_ENTRY(PragmaPack /* pragma-pack */, 15591, /* DiagArray720 */ 2043, /* DiagSubGroup720 */ 602, R"()")
DIAG_ENTRY(PragmaPackSuspiciousInclude /* pragma-pack-suspicious-include */, 15603, /* DiagArray721 */ 2046, 0, R"()")
DIAG_ENTRY(anonymous_129 /* pragma-system-header-outside-header */, 15634, /* DiagArray722 */ 2048, 0, R"()")
DIAG_ENTRY(Pragmas /* pragmas */, 15670, /* DiagArray723 */ 2050, /* DiagSubGroup723 */ 604, R"()")
DIAG_ENTRY(CXXPre14Compat /* pre-c++14-compat */, 15678, /* DiagArray724 */ 2053, 0, R"()")
DIAG_ENTRY(CXXPre14CompatPedantic /* pre-c++14-compat-pedantic */, 15695, 0, /* DiagSubGroup725 */ 609, R"()")
DIAG_ENTRY(CXXPre17Compat /* pre-c++17-compat */, 15721, /* DiagArray726 */ 2065, 0, R"()")
DIAG_ENTRY(CXXPre17CompatPedantic /* pre-c++17-compat-pedantic */, 15738, /* DiagArray727 */ 2083, /* DiagSubGroup727 */ 612, R"()")
DIAG_ENTRY(CXXPre20Compat /* pre-c++20-compat */, 15764, /* DiagArray728 */ 2086, 0, R"()")
DIAG_ENTRY(CXXPre20CompatPedantic /* pre-c++20-compat-pedantic */, 15781, /* DiagArray729 */ 2115, /* DiagSubGroup729 */ 614, R"()")
DIAG_ENTRY(CXXPre23Compat /* pre-c++23-compat */, 15807, /* DiagArray730 */ 2118, 0, R"()")
DIAG_ENTRY(CXXPre23CompatPedantic /* pre-c++23-compat-pedantic */, 15824, 0, /* DiagSubGroup731 */ 616, R"()")
DIAG_ENTRY(CXXPre26Compat /* pre-c++26-compat */, 15850, /* DiagArray732 */ 2133, 0, R"()")
DIAG_ENTRY(CXXPre26CompatPedantic /* pre-c++26-compat-pedantic */, 15867, 0, /* DiagSubGroup733 */ 618, R"()")
DIAG_ENTRY(anonymous_21 /* pre-c++2c-compat */, 15893, 0, /* DiagSubGroup734 */ 620, R"()")
DIAG_ENTRY(anonymous_22 /* pre-c++2c-compat-pedantic */, 15910, 0, /* DiagSubGroup735 */ 622, R"()")
DIAG_ENTRY(CPre11Compat /* pre-c11-compat */, 15936, /* DiagArray736 */ 2136, 0, R"()")
DIAG_ENTRY(CPre11CompatPedantic /* pre-c11-compat-pedantic */, 15951, 0, /* DiagSubGroup737 */ 624, R"()")
DIAG_ENTRY(CPre23Compat /* pre-c23-compat */, 15975, /* DiagArray738 */ 2138, 0, R"()")
DIAG_ENTRY(CPre23CompatPedantic /* pre-c23-compat-pedantic */, 15990, 0, /* DiagSubGroup739 */ 626, R"()")
DIAG_ENTRY(anonymous_13 /* pre-c2x-compat */, 16014, 0, /* DiagSubGroup740 */ 628, R"()")
DIAG_ENTRY(anonymous_14 /* pre-c2x-compat-pedantic */, 16029, 0, /* DiagSubGroup741 */ 630, R"()")
DIAG_ENTRY(OpenMPPre51Compat /* pre-openmp-51-compat */, 16053, /* DiagArray742 */ 2153, 0, R"()")
DIAG_ENTRY(anonymous_161 /* predefined-identifier-outside-function */, 16074, /* DiagArray743 */ 2155, 0, R"()")
DIAG_ENTRY(PrivateExtern /* private-extern */, 16113, /* DiagArray744 */ 2157, 0, R"()")
DIAG_ENTRY(anonymous_140 /* private-header */, 16128, /* DiagArray745 */ 2159, 0, R"()")
DIAG_ENTRY(PrivateModule /* private-module */, 16143, /* DiagArray746 */ 2161, 0, R"()")
DIAG_ENTRY(ProfileInstrMissing /* profile-instr-missing */, 16158, /* DiagArray747 */ 2166, 0, R"()")
DIAG_ENTRY(ProfileInstrOutOfDate /* profile-instr-out-of-date */, 16180, /* DiagArray748 */ 2168, 0, R"()")
DIAG_ENTRY(ProfileInstrUnprofiled /* profile-instr-unprofiled */, 16206, /* DiagArray749 */ 2170, 0, R"()")
DIAG_ENTRY(PropertyAccessDotSyntax /* property-access-dot-syntax */, 16231, /* DiagArray750 */ 2172, 0, R"()")
DIAG_ENTRY(PropertyAttr /* property-attribute-mismatch */, 16258, /* DiagArray751 */ 2174, 0, R"()")
DIAG_ENTRY(Protocol /* protocol */, 16286, /* DiagArray752 */ 2179, 0, R"()")
DIAG_ENTRY(anonymous_176 /* protocol-property-synthesis-ambiguity */, 16295, /* DiagArray753 */ 2181, 0, R"()")
DIAG_ENTRY(anonymous_112 /* psabi */, 16333, /* DiagArray754 */ 2183, 0, R"()")
DIAG_ENTRY(anonymous_246 /* qualified-void-return-type */, 16339, /* DiagArray755 */ 2185, 0, R"()")
DIAG_ENTRY(FrameworkHdrQuotedInclude /* quoted-include-in-framework-header */, 16366, /* DiagArray756 */ 2187, 0, R"()")
DIAG_ENTRY(RangeLoopAnalysis /* range-loop-analysis */, 16401, 0, /* DiagSubGroup757 */ 632, R"()")
DIAG_ENTRY(RangeLoopBindReference /* range-loop-bind-reference */, 16421, /* DiagArray758 */ 2189, 0, R"()")
DIAG_ENTRY(RangeLoopConstruct /* range-loop-construct */, 16447, /* DiagArray759 */ 2191, 0, R"()")
DIAG_ENTRY(ReadOnlyPlacementChecks /* read-only-types */, 16468, /* DiagArray760 */ 2194, 0, R"()")
DIAG_ENTRY(anonymous_186 /* readonly-iboutlet-property */, 16484, /* DiagArray761 */ 2196, 0, R"()")
DIAG_ENTRY(ObjCReceiver /* receiver-expr */, 16511, /* DiagArray762 */ 2198, 0, R"()")
DIAG_ENTRY(ForwardClassReceiver /* receiver-forward-class */, 16525, /* DiagArray763 */ 2200, 0, R"()")
DIAG_ENTRY(RedeclaredClassMember /* redeclared-class-member */, 16548, /* DiagArray764 */ 2203, 0, R"()")
DIAG_ENTRY(anonymous_189 /* redundant-consteval-if */, 16572, /* DiagArray765 */ 2205, 0, R"()")
DIAG_ENTRY(anonymous_42 /* redundant-decls */, 16595, 0, 0, R"()")
DIAG_ENTRY(RedundantMove /* redundant-move */, 16611, /* DiagArray767 */ 2207, 0, R"()")
DIAG_ENTRY(anonymous_164 /* redundant-parens */, 16626, /* DiagArray768 */ 2209, 0, R"()")
DIAG_ENTRY(Register /* register */, 16643, /* DiagArray769 */ 2211, /* DiagSubGroup769 */ 635, R"()")
DIAG_ENTRY(ReinterpretBaseClass /* reinterpret-base-class */, 16652, /* DiagArray770 */ 2213, 0, R"()")
DIAG_ENTRY(RemarkBackendPlugin /* remark-backend-plugin */, 16675, /* DiagArray771 */ 2215, 0, R"()")
DIAG_ENTRY(Reorder /* reorder */, 16697, 0, /* DiagSubGroup772 */ 637, R"()")
DIAG_ENTRY(ReorderCtor /* reorder-ctor */, 16705, /* DiagArray773 */ 2217, 0, R"()")
DIAG_ENTRY(ReorderInitList /* reorder-init-list */, 16718, /* DiagArray774 */ 2220, 0, R"()")
DIAG_ENTRY(anonymous_224 /* requires-super-attribute */, 16736, /* DiagArray775 */ 2222, 0, R"()")
DIAG_ENTRY(ReservedIdAsMacroAlias /* reserved-id-macro */, 16761, 0, /* DiagSubGroup776 */ 640, R"()")
DIAG_ENTRY(ReservedIdentifier /* reserved-identifier */, 16779, /* DiagArray777 */ 2224, /* DiagSubGroup777 */ 642, R"()")
DIAG_ENTRY(ReservedIdAsMacro /* reserved-macro-identifier */, 16799, /* DiagArray778 */ 2226, 0, R"()")
DIAG_ENTRY(ReservedModuleIdentifier /* reserved-module-identifier */, 16825, /* DiagArray779 */ 2228, 0, R"()")
DIAG_ENTRY(ReservedUserDefinedLiteral /* reserved-user-defined-literal */, 16852, /* DiagArray780 */ 2230, /* DiagSubGroup780 */ 646, R"()")
DIAG_ENTRY(RestrictExpansionMacro /* restrict-expansion */, 16882, /* DiagArray781 */ 2233, 0, R"()")
DIAG_ENTRY(anonymous_239 /* retained-language-linkage */, 16901, /* DiagArray782 */ 2235, 0, R"()")
DIAG_ENTRY(anonymous_29 /* return-local-addr */, 16927, 0, /* DiagSubGroup783 */ 648, R"()")
DIAG_ENTRY(ReturnMismatch /* return-mismatch */, 16945, /* DiagArray784 */ 2237, 0, R"()")
DIAG_ENTRY(ReturnStackAddress /* return-stack-address */, 16961, /* DiagArray785 */ 2241, 0, R"()")
DIAG_ENTRY(ReturnStdMove /* return-std-move */, 16982, 0, 0, R"()")
DIAG_ENTRY(ReturnType /* return-type */, 16998, /* DiagArray787 */ 2245, /* DiagSubGroup787 */ 650, R"()")
DIAG_ENTRY(ReturnTypeCLinkage /* return-type-c-linkage */, 17010, /* DiagArray788 */ 2252, 0, R"()")
DIAG_ENTRY(anonymous_226 /* rewrite-not-bool */, 17032, /* DiagArray789 */ 2255, 0, R"()")
DIAG_ENTRY(RoundTripCC1Args /* round-trip-cc1-args */, 17049, /* DiagArray790 */ 2257, 0, R"()")
DIAG_ENTRY(RTTI /* rtti */, 17069, /* DiagArray791 */ 2259, 0, R"()")
DIAG_ENTRY(SanitizeAddressRemarks /* sanitize-address */, 17074, /* DiagArray792 */ 2262, 0, R"()")
DIAG_ENTRY(anonymous_104 /* sarif-format-unstable */, 17091, /* DiagArray793 */ 2265, 0, R"()")
DIAG_ENTRY(UsedSearchPath /* search-path-usage */, 17113, /* DiagArray794 */ 2267, 0, R"()")
DIAG_ENTRY(Section /* section */, 17131, /* DiagArray795 */ 2269, 0, R"()")
DIAG_ENTRY(Selector /* selector */, 17139, /* DiagArray796 */ 2273, /* DiagSubGroup796 */ 653, R"()")
DIAG_ENTRY(SelectorTypeMismatch /* selector-type-mismatch */, 17148, /* DiagArray797 */ 2275, 0, R"()")
DIAG_ENTRY(SelfAssignment /* self-assign */, 17171, /* DiagArray798 */ 2277, /* DiagSubGroup798 */ 655, R"()")
DIAG_ENTRY(SelfAssignmentField /* self-assign-field */, 17183, /* DiagArray799 */ 2279, 0, R"()")
DIAG_ENTRY(SelfAssignmentOverloaded /* self-assign-overloaded */, 17201, /* DiagArray800 */ 2281, 0, R"()")
DIAG_ENTRY(SelfMove /* self-move */, 17224, /* DiagArray801 */ 2283, 0, R"()")
DIAG_ENTRY(SemiBeforeMethodBody /* semicolon-before-method-body */, 17234, /* DiagArray802 */ 2285, 0, R"()")
DIAG_ENTRY(Sentinel /* sentinel */, 17263, /* DiagArray803 */ 2287, 0, R"()")
DIAG_ENTRY(anonymous_45 /* sequence-point */, 17272, 0, /* DiagSubGroup804 */ 658, R"()")
DIAG_ENTRY(SerializedDiagnostics /* serialized-diagnostics */, 17287, /* DiagArray805 */ 2290, 0, R"()")
DIAG_ENTRY(Shadow /* shadow */, 17310, /* DiagArray806 */ 2294, /* DiagSubGroup806 */ 660, R"()")
DIAG_ENTRY(ShadowAll /* shadow-all */, 17317, 0, /* DiagSubGroup807 */ 663, R"()")
DIAG_ENTRY(ShadowField /* shadow-field */, 17328, /* DiagArray808 */ 2296, 0, R"()")
DIAG_ENTRY(ShadowFieldInConstructor /* shadow-field-in-constructor */, 17341, /* DiagArray809 */ 2298, /* DiagSubGroup809 */ 668, R"()")
DIAG_ENTRY(ShadowFieldInConstructorModified /* shadow-field-in-constructor-modified */, 17369, /* DiagArray810 */ 2300, 0, R"()")
DIAG_ENTRY(ShadowIvar /* shadow-ivar */, 17406, /* DiagArray811 */ 2302, 0, R"()")
DIAG_ENTRY(ShadowUncapturedLocal /* shadow-uncaptured-local */, 17418, /* DiagArray812 */ 2304, 0, R"()")
DIAG_ENTRY(anonymous_251 /* shift-count-negative */, 17442, /* DiagArray813 */ 2306, 0, R"()")
DIAG_ENTRY(anonymous_252 /* shift-count-overflow */, 17463, /* DiagArray814 */ 2308, 0, R"()")
DIAG_ENTRY(anonymous_250 /* shift-negative-value */, 17484, /* DiagArray815 */ 2310, 0, R"()")
DIAG_ENTRY(ShiftOpParentheses /* shift-op-parentheses */, 17505, /* DiagArray816 */ 2312, 0, R"()")
DIAG_ENTRY(anonymous_253 /* shift-overflow */, 17526, /* DiagArray817 */ 2314, 0, R"()")
DIAG_ENTRY(anonymous_254 /* shift-sign-overflow */, 17541, /* DiagArray818 */ 2316, 0, R"()")
DIAG_ENTRY(Shorten64To32 /* shorten-64-to-32 */, 17561, /* DiagArray819 */ 2318, 0, R"()")
DIAG_ENTRY(SignCompare /* sign-compare */, 17578, /* DiagArray820 */ 2320, 0, R"()")
DIAG_ENTRY(SignConversion /* sign-conversion */, 17591, /* DiagArray821 */ 2322, 0, R"()")
DIAG_ENTRY(anonymous_43 /* sign-promo */, 17607, 0, 0, R"()")
DIAG_ENTRY(SignedEnumBitfield /* signed-enum-bitfield */, 17618, /* DiagArray823 */ 2326, 0, R"()")
DIAG_ENTRY(anonymous_295 /* signed-unsigned-wchar */, 17639, /* DiagArray824 */ 2328, 0, R"()")
DIAG_ENTRY(SingleBitBitFieldConstantConversion /* single-bit-bitfield-constant-conversion */, 17661, /* DiagArray825 */ 2330, 0, R"()")
DIAG_ENTRY(SizeofArrayArgument /* sizeof-array-argument */, 17701, /* DiagArray826 */ 2332, 0, R"()")
DIAG_ENTRY(SizeofArrayDecay /* sizeof-array-decay */, 17723, /* DiagArray827 */ 2334, 0, R"()")
DIAG_ENTRY(anonymous_220 /* sizeof-array-div */, 17742, /* DiagArray828 */ 2336, 0, R"()")
DIAG_ENTRY(anonymous_219 /* sizeof-pointer-div */, 17759, /* DiagArray829 */ 2338, 0, R"()")
DIAG_ENTRY(SizeofPointerMemaccess /* sizeof-pointer-memaccess */, 17778, /* DiagArray830 */ 2340, 0, R"()")
DIAG_ENTRY(anonymous_100 /* slash-u-filename */, 17803, /* DiagArray831 */ 2343, 0, R"()")
DIAG_ENTRY(anonymous_86 /* slh-asm-goto */, 17820, /* DiagArray832 */ 2345, 0, R"()")
DIAG_ENTRY(anonymous_90 /* sloc-usage */, 17833, /* DiagArray833 */ 2347, 0, R"()")
DIAG_ENTRY(UninitializedSometimes /* sometimes-uninitialized */, 17844, /* DiagArray834 */ 2349, 0, R"()")
DIAG_ENTRY(BackendSourceMgr /* source-mgr */, 17868, /* DiagArray835 */ 2351, 0, R"()")
DIAG_ENTRY(SourceUsesOpenACC /* source-uses-openacc */, 17879, /* DiagArray836 */ 2353, 0, R"()")
DIAG_ENTRY(SourceUsesOpenMP /* source-uses-openmp */, 17899, /* DiagArray837 */ 2357, 0, R"()")
DIAG_ENTRY(SpirCompat /* spir-compat */, 17918, /* DiagArray838 */ 2366, 0, R"()")
DIAG_ENTRY(anonymous_78 /* spirv-compat */, 17930, 0, /* DiagSubGroup839 */ 670, R"()")
DIAG_ENTRY(anonymous_83 /* stack-exhausted */, 17943, /* DiagArray840 */ 2368, 0, R"()")
DIAG_ENTRY(anonymous_85 /* stack-protector */, 17959, /* DiagArray841 */ 2370, 0, R"()")
DIAG_ENTRY(StaticFloatInit /* static-float-init */, 17975, /* DiagArray842 */ 2372, /* DiagSubGroup842 */ 672, R"()")
DIAG_ENTRY(StaticInInline /* static-in-inline */, 17993, /* DiagArray843 */ 2374, 0, R"()")
DIAG_ENTRY(anonymous_157 /* static-inline-explicit-instantiation */, 18010, /* DiagArray844 */ 2377, 0, R"()")
DIAG_ENTRY(StaticLocalInInline /* static-local-in-inline */, 18047, /* DiagArray845 */ 2379, 0, R"()")
DIAG_ENTRY(UninitializedStaticSelfInit /* static-self-init */, 18070, /* DiagArray846 */ 2381, 0, R"()")
DIAG_ENTRY(anonymous_103 /* stdlibcxx-not-found */, 18087, /* DiagArray847 */ 2383, 0, R"()")
DIAG_ENTRY(anonymous_49 /* strict-aliasing */, 18107, 0, 0, R"()")
DIAG_ENTRY(anonymous_46 /* strict-aliasing=0 */, 18123, 0, 0, R"()")
DIAG_ENTRY(anonymous_47 /* strict-aliasing=1 */, 18141, 0, 0, R"()")
DIAG_ENTRY(anonymous_48 /* strict-aliasing=2 */, 18159, 0, 0, R"()")
DIAG_ENTRY(anonymous_56 /* strict-overflow */, 18177, 0, 0, R"()")
DIAG_ENTRY(anonymous_50 /* strict-overflow=0 */, 18193, 0, 0, R"()")
DIAG_ENTRY(anonymous_51 /* strict-overflow=1 */, 18211, 0, 0, R"()")
DIAG_ENTRY(anonymous_52 /* strict-overflow=2 */, 18229, 0, 0, R"()")
DIAG_ENTRY(anonymous_53 /* strict-overflow=3 */, 18247, 0, 0, R"()")
DIAG_ENTRY(anonymous_54 /* strict-overflow=4 */, 18265, 0, 0, R"()")
DIAG_ENTRY(anonymous_55 /* strict-overflow=5 */, 18283, 0, 0, R"()")
DIAG_ENTRY(ObjCStrictPotentiallyDirectSelector /* strict-potentially-direct-selector */, 18301, /* DiagArray859 */ 2385, /* DiagSubGroup859 */ 674, R"()")
DIAG_ENTRY(anonymous_227 /* strict-primary-template-shadow */, 18336, /* DiagArray860 */ 2387, 0, R"()")
DIAG_ENTRY(StrictPrototypes /* strict-prototypes */, 18367, /* DiagArray861 */ 2389, /* DiagSubGroup861 */ 676, R"()")
DIAG_ENTRY(StrictSelector /* strict-selector-match */, 18385, /* DiagArray862 */ 2391, 0, R"()")
DIAG_ENTRY(StringCompare /* string-compare */, 18407, /* DiagArray863 */ 2393, 0, R"()")
DIAG_ENTRY(StringConcatation /* string-concatenation */, 18422, /* DiagArray864 */ 2395, 0, R"()")
DIAG_ENTRY(StringConversion /* string-conversion */, 18443, /* DiagArray865 */ 2397, 0, R"()")
DIAG_ENTRY(StringPlusChar /* string-plus-char */, 18461, /* DiagArray866 */ 2399, 0, R"()")
DIAG_ENTRY(StringPlusInt /* string-plus-int */, 18478, /* DiagArray867 */ 2401, 0, R"()")
DIAG_ENTRY(anonymous_169 /* strlcpy-strlcat-size */, 18494, /* DiagArray868 */ 2403, 0, R"()")
DIAG_ENTRY(StrncatSize /* strncat-size */, 18515, /* DiagArray869 */ 2405, 0, R"()")
DIAG_ENTRY(CXX11WarnSuggestOverrideDestructor /* suggest-destructor-override */, 18528, /* DiagArray870 */ 2409, 0, R"()")
DIAG_ENTRY(CXX11WarnSuggestOverride /* suggest-override */, 18556, /* DiagArray871 */ 2411, 0, R"()")
DIAG_ENTRY(SuperSubClassMismatch /* super-class-method-mismatch */, 18573, /* DiagArray872 */ 2413, 0, R"()")
DIAG_ENTRY(SuspiciousBzero /* suspicious-bzero */, 18601, /* DiagArray873 */ 2415, 0, R"()")
DIAG_ENTRY(SuspiciousMemaccess /* suspicious-memaccess */, 18618, 0, /* DiagSubGroup874 */ 678, R"()")
DIAG_ENTRY(SwiftNameAttribute /* swift-name-attribute */, 18639, /* DiagArray875 */ 2417, 0, R"()")
DIAG_ENTRY(Switch /* switch */, 18660, /* DiagArray876 */ 2431, 0, R"()")
DIAG_ENTRY(SwitchBool /* switch-bool */, 18667, /* DiagArray877 */ 2435, 0, R"()")
DIAG_ENTRY(SwitchDefault /* switch-default */, 18679, /* DiagArray878 */ 2437, 0, R"()")
DIAG_ENTRY(SwitchEnum /* switch-enum */, 18694, /* DiagArray879 */ 2439, 0, R"()")
DIAG_ENTRY(SyncAlignment /* sync-alignment */, 18706, /* DiagArray880 */ 2441, 0, R"()")
DIAG_ENTRY(anonymous_294 /* sync-fetch-and-nand-semantics-changed */, 18721, /* DiagArray881 */ 2443, 0, R"()")
DIAG_ENTRY(anonymous_44 /* synth */, 18759, 0, 0, R"()")
DIAG_ENTRY(TargetClonesMixedSpecifiers /* target-clones-mixed-specifiers */, 18765, /* DiagArray883 */ 2445, 0, R"()")
DIAG_ENTRY(TautologicalBitwiseCompare /* tautological-bitwise-compare */, 18796, /* DiagArray884 */ 2447, 0, R"()")
DIAG_ENTRY(TautologicalCompare /* tautological-compare */, 18825, /* DiagArray885 */ 2450, /* DiagSubGroup885 */ 684, R"()")
DIAG_ENTRY(TautologicalConstantCompare /* tautological-constant-compare */, 18846, /* DiagArray886 */ 2453, /* DiagSubGroup886 */ 692, R"()")
DIAG_ENTRY(TautologicalInRangeCompare /* tautological-constant-in-range-compare */, 18876, 0, /* DiagSubGroup887 */ 694, R"()")
DIAG_ENTRY(TautologicalOutOfRangeCompare /* tautological-constant-out-of-range-compare */, 18915, /* DiagArray888 */ 2457, 0, R"()")
DIAG_ENTRY(TautologicalNegationCompare /* tautological-negation-compare */, 18958, /* DiagArray889 */ 2459, 0, R"()")
DIAG_ENTRY(TautologicalObjCBoolCompare /* tautological-objc-bool-compare */, 18988, /* DiagArray890 */ 2462, 0, R"()")
DIAG_ENTRY(TautologicalOverlapCompare /* tautological-overlap-compare */, 19019, /* DiagArray891 */ 2464, 0, R"()")
DIAG_ENTRY(TautologicalPointerCompare /* tautological-pointer-compare */, 19048, /* DiagArray892 */ 2466, 0, R"()")
DIAG_ENTRY(TautologicalTypeLimitCompare /* tautological-type-limit-compare */, 19077, /* DiagArray893 */ 2469, 0, R"()")
DIAG_ENTRY(TautologicalUndefinedCompare /* tautological-undefined-compare */, 19109, /* DiagArray894 */ 2471, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedCharZeroCompare /* tautological-unsigned-char-zero-compare */, 19140, /* DiagArray895 */ 2474, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedEnumZeroCompare /* tautological-unsigned-enum-zero-compare */, 19180, /* DiagArray896 */ 2476, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedZeroCompare /* tautological-unsigned-zero-compare */, 19220, /* DiagArray897 */ 2478, 0, R"()")
DIAG_ENTRY(TautologicalValueRangeCompare /* tautological-value-range-compare */, 19255, /* DiagArray898 */ 2480, 0, R"()")
DIAG_ENTRY(anonymous_303 /* tcb-enforcement */, 19288, /* DiagArray899 */ 2482, 0, R"()")
DIAG_ENTRY(anonymous_270 /* template-in-declaration-name */, 19304, /* DiagArray900 */ 2484, 0, R"()")
DIAG_ENTRY(anonymous_257 /* tentative-definition-incomplete-type */, 19333, /* DiagArray901 */ 2486, 0, R"()")
DIAG_ENTRY(ThreadSafety /* thread-safety */, 19370, 0, /* DiagSubGroup902 */ 697, R"()")
DIAG_ENTRY(ThreadSafetyAnalysis /* thread-safety-analysis */, 19384, /* DiagArray903 */ 2488, 0, R"()")
DIAG_ENTRY(ThreadSafetyAttributes /* thread-safety-attributes */, 19407, /* DiagArray904 */ 2507, 0, R"()")
DIAG_ENTRY(ThreadSafetyBeta /* thread-safety-beta */, 19432, /* DiagArray905 */ 2514, 0, R"()")
DIAG_ENTRY(ThreadSafetyNegative /* thread-safety-negative */, 19451, /* DiagArray906 */ 2516, 0, R"()")
DIAG_ENTRY(ThreadSafetyPrecise /* thread-safety-precise */, 19474, /* DiagArray907 */ 2518, 0, R"()")
DIAG_ENTRY(ThreadSafetyReference /* thread-safety-reference */, 19496, /* DiagArray908 */ 2522, /* DiagSubGroup908 */ 702, R"()")
DIAG_ENTRY(ThreadSafetyReferenceReturn /* thread-safety-reference-return */, 19520, /* DiagArray909 */ 2525, 0, R"()")
DIAG_ENTRY(ThreadSafetyVerbose /* thread-safety-verbose */, 19551, /* DiagArray910 */ 2528, 0, R"()")
DIAG_ENTRY(Trigraphs /* trigraphs */, 19573, /* DiagArray911 */ 2530, 0, R"()")
DIAG_ENTRY(TypeLimits /* type-limits */, 19583, 0, /* DiagSubGroup912 */ 704, R"()")
DIAG_ENTRY(TypeSafety /* type-safety */, 19595, /* DiagArray913 */ 2535, 0, R"()")
DIAG_ENTRY(anonymous_238 /* typedef-redefinition */, 19607, /* DiagArray914 */ 2539, 0, R"()")
DIAG_ENTRY(anonymous_232 /* typename-missing */, 19628, /* DiagArray915 */ 2541, 0, R"()")
DIAG_ENTRY(anonymous_108 /* unable-to-open-stats-file */, 19645, /* DiagArray916 */ 2543, 0, R"()")
DIAG_ENTRY(UnalignedAccess /* unaligned-access */, 19671, /* DiagArray917 */ 2545, 0, R"()")
DIAG_ENTRY(anonymous_297 /* unaligned-qualifier-implicit-cast */, 19688, /* DiagArray918 */ 2547, 0, R"()")
DIAG_ENTRY(UnavailableDeclarations /* unavailable-declarations */, 19722, /* DiagArray919 */ 2549, 0, R"()")
DIAG_ENTRY(UndeclaredSelector /* undeclared-selector */, 19747, /* DiagArray920 */ 2551, 0, R"()")
DIAG_ENTRY(anonymous_132 /* undef */, 19767, /* DiagArray921 */ 2554, 0, R"()")
DIAG_ENTRY(anonymous_133 /* undef-prefix */, 19773, /* DiagArray922 */ 2556, 0, R"()")
DIAG_ENTRY(anonymous_199 /* undefined-arm-streaming */, 19786, /* DiagArray923 */ 2558, 0, R"()")
DIAG_ENTRY(anonymous_200 /* undefined-arm-za */, 19810, /* DiagArray924 */ 2560, 0, R"()")
DIAG_ENTRY(anonymous_201 /* undefined-arm-zt0 */, 19827, /* DiagArray925 */ 2562, 0, R"()")
DIAG_ENTRY(UndefinedBoolConversion /* undefined-bool-conversion */, 19845, /* DiagArray926 */ 2564, 0, R"()")
DIAG_ENTRY(UndefinedFuncTemplate /* undefined-func-template */, 19871, /* DiagArray927 */ 2567, 0, R"()")
DIAG_ENTRY(anonymous_237 /* undefined-inline */, 19895, /* DiagArray928 */ 2569, 0, R"()")
DIAG_ENTRY(anonymous_235 /* undefined-internal */, 19912, /* DiagArray929 */ 2571, 0, R"()")
DIAG_ENTRY(anonymous_236 /* undefined-internal-type */, 19931, /* DiagArray930 */ 2573, 0, R"()")
DIAG_ENTRY(UndefinedReinterpretCast /* undefined-reinterpret-cast */, 19955, /* DiagArray931 */ 2575, 0, R"()")
DIAG_ENTRY(UndefinedVarTemplate /* undefined-var-template */, 19982, /* DiagArray932 */ 2578, 0, R"()")
DIAG_ENTRY(UnderalignedExceptionObject /* underaligned-exception-object */, 20005, /* DiagArray933 */ 2580, 0, R"()")
DIAG_ENTRY(UnevaluatedExpression /* unevaluated-expression */, 20035, /* DiagArray934 */ 2582, /* DiagSubGroup934 */ 709, R"()")
DIAG_ENTRY(UnguardedAvailability /* unguarded-availability */, 20058, /* DiagArray935 */ 2584, /* DiagSubGroup935 */ 711, R"()")
DIAG_ENTRY(UnguardedAvailabilityNew /* unguarded-availability-new */, 20081, /* DiagArray936 */ 2586, 0, R"()")
DIAG_ENTRY(Unicode /* unicode */, 20108, /* DiagArray937 */ 2588, 0, R"()")
DIAG_ENTRY(anonymous_118 /* unicode-homoglyph */, 20116, /* DiagArray938 */ 2596, 0, R"()")
DIAG_ENTRY(anonymous_117 /* unicode-whitespace */, 20134, /* DiagArray939 */ 2598, 0, R"()")
DIAG_ENTRY(anonymous_119 /* unicode-zero-width */, 20153, /* DiagArray940 */ 2600, 0, R"()")
DIAG_ENTRY(Uninitialized /* uninitialized */, 20172, /* DiagArray941 */ 2602, /* DiagSubGroup941 */ 713, R"()")
DIAG_ENTRY(UninitializedConstReference /* uninitialized-const-reference */, 20186, /* DiagArray942 */ 2610, 0, R"()")
DIAG_ENTRY(UnknownArgument /* unknown-argument */, 20216, /* DiagArray943 */ 2612, 0, R"()")
DIAG_ENTRY(UnknownAssumption /* unknown-assumption */, 20233, /* DiagArray944 */ 2616, 0, R"()")
DIAG_ENTRY(UnknownAttributes /* unknown-attributes */, 20252, /* DiagArray945 */ 2618, 0, R"()")
DIAG_ENTRY(CudaUnknownVersion /* unknown-cuda-version */, 20271, /* DiagArray946 */ 2620, 0, R"()")
DIAG_ENTRY(anonymous_137 /* unknown-directives */, 20292, /* DiagArray947 */ 2623, 0, R"()")
DIAG_ENTRY(anonymous_122 /* unknown-escape-sequence */, 20311, /* DiagArray948 */ 2625, 0, R"()")
DIAG_ENTRY(UnknownPragmas /* unknown-pragmas */, 20335, /* DiagArray949 */ 2627, 0, R"()")
DIAG_ENTRY(UnknownSanitizers /* unknown-sanitizers */, 20351, /* DiagArray950 */ 2648, 0, R"()")
DIAG_ENTRY(UnknownWarningOption /* unknown-warning-option */, 20370, /* DiagArray951 */ 2650, 0, R"()")
DIAG_ENTRY(UnnamedTypeTemplateArgs /* unnamed-type-template-args */, 20393, /* DiagArray952 */ 2654, /* DiagSubGroup952 */ 717, R"()")
DIAG_ENTRY(UnneededInternalDecl /* unneeded-internal-declaration */, 20420, /* DiagArray953 */ 2656, 0, R"()")
DIAG_ENTRY(UnneededMemberFunction /* unneeded-member-function */, 20450, /* DiagArray954 */ 2659, 0, R"()")
DIAG_ENTRY(anonymous_228 /* unqualified-std-cast-call */, 20475, /* DiagArray955 */ 2661, 0, R"()")
DIAG_ENTRY(UnreachableCode /* unreachable-code */, 20501, /* DiagArray956 */ 2663, /* DiagSubGroup956 */ 719, R"()")
DIAG_ENTRY(UnreachableCodeAggressive /* unreachable-code-aggressive */, 20518, 0, /* DiagSubGroup957 */ 723, R"()")
DIAG_ENTRY(UnreachableCodeBreak /* unreachable-code-break */, 20546, /* DiagArray958 */ 2665, 0, R"()")
DIAG_ENTRY(UnreachableCodeFallthrough /* unreachable-code-fallthrough */, 20569, /* DiagArray959 */ 2667, 0, R"()")
DIAG_ENTRY(UnreachableCodeGenericAssoc /* unreachable-code-generic-assoc */, 20598, /* DiagArray960 */ 2669, 0, R"()")
DIAG_ENTRY(UnreachableCodeLoopIncrement /* unreachable-code-loop-increment */, 20629, /* DiagArray961 */ 2671, 0, R"()")
DIAG_ENTRY(UnreachableCodeReturn /* unreachable-code-return */, 20661, /* DiagArray962 */ 2673, 0, R"()")
DIAG_ENTRY(UnsafeBufferUsage /* unsafe-buffer-usage */, 20685, /* DiagArray963 */ 2675, /* DiagSubGroup963 */ 727, R"()")
DIAG_ENTRY(UnsafeBufferUsageInContainer /* unsafe-buffer-usage-in-container */, 20705, /* DiagArray964 */ 2678, 0, R"()")
DIAG_ENTRY(Unsequenced /* unsequenced */, 20738, /* DiagArray965 */ 2680, 0, R"()")
DIAG_ENTRY(UnsupportedABI /* unsupported-abi */, 20750, /* DiagArray966 */ 2683, 0, R"()")
DIAG_ENTRY(UnsupportedAbs /* unsupported-abs */, 20766, /* DiagArray967 */ 2686, 0, R"()")
DIAG_ENTRY(anonymous_216 /* unsupported-availability-guard */, 20782, /* DiagArray968 */ 2689, 0, R"()")
DIAG_ENTRY(UnsupportedCB /* unsupported-cb */, 20813, /* DiagArray969 */ 2691, 0, R"()")
DIAG_ENTRY(anonymous_212 /* unsupported-dll-base-class-template */, 20828, /* DiagArray970 */ 2693, 0, R"()")
DIAG_ENTRY(UnsupportedFPOpt /* unsupported-floating-point-opt */, 20864, /* DiagArray971 */ 2695, 0, R"()")
DIAG_ENTRY(UnsupportedFriend /* unsupported-friend */, 20895, /* DiagArray972 */ 2698, 0, R"()")
DIAG_ENTRY(UnsupportedGPOpt /* unsupported-gpopt */, 20914, /* DiagArray973 */ 2701, 0, R"()")
DIAG_ENTRY(UnsupportedNan /* unsupported-nan */, 20932, /* DiagArray974 */ 2703, 0, R"()")
DIAG_ENTRY(UnsupportedTargetOpt /* unsupported-target-opt */, 20948, /* DiagArray975 */ 2706, 0, R"()")
DIAG_ENTRY(anonymous_222 /* unsupported-visibility */, 20971, /* DiagArray976 */ 2709, 0, R"()")
DIAG_ENTRY(anonymous_230 /* unusable-partial-specialization */, 20994, /* DiagArray977 */ 2711, 0, R"()")
DIAG_ENTRY(Unused /* unused */, 21026, 0, /* DiagSubGroup978 */ 729, R"()")
DIAG_ENTRY(UnusedArgument /* unused-argument */, 21033, 0, 0, R"()")
DIAG_ENTRY(UnusedButSetParameter /* unused-but-set-parameter */, 21049, /* DiagArray980 */ 2713, 0, R"()")
DIAG_ENTRY(UnusedButSetVariable /* unused-but-set-variable */, 21074, /* DiagArray981 */ 2715, 0, R"()")
DIAG_ENTRY(UnusedCommandLineArgument /* unused-command-line-argument */, 21098, /* DiagArray982 */ 2717, 0, R"()")
DIAG_ENTRY(UnusedComparison /* unused-comparison */, 21127, /* DiagArray983 */ 2731, 0, R"()")
DIAG_ENTRY(UnusedConstVariable /* unused-const-variable */, 21145, /* DiagArray984 */ 2733, 0, R"()")
DIAG_ENTRY(UnusedExceptionParameter /* unused-exception-parameter */, 21167, /* DiagArray985 */ 2735, 0, R"()")
DIAG_ENTRY(UnusedFunction /* unused-function */, 21194, /* DiagArray986 */ 2737, /* DiagSubGroup986 */ 740, R"()")
DIAG_ENTRY(UnusedGetterReturnValue /* unused-getter-return-value */, 21210, /* DiagArray987 */ 2739, 0, R"()")
DIAG_ENTRY(UnusedLabel /* unused-label */, 21237, /* DiagArray988 */ 2741, 0, R"()")
DIAG_ENTRY(UnusedLambdaCapture /* unused-lambda-capture */, 21250, /* DiagArray989 */ 2743, 0, R"()")
DIAG_ENTRY(UnusedLocalTypedef /* unused-local-typedef */, 21272, /* DiagArray990 */ 2745, 0, R"()")
DIAG_ENTRY(anonymous_68 /* unused-local-typedefs */, 21293, 0, /* DiagSubGroup991 */ 742, R"()")
DIAG_ENTRY(anonymous_131 /* unused-macros */, 21315, /* DiagArray992 */ 2747, 0, R"()")
DIAG_ENTRY(UnusedMemberFunction /* unused-member-function */, 21329, /* DiagArray993 */ 2749, /* DiagSubGroup993 */ 744, R"()")
DIAG_ENTRY(UnusedParameter /* unused-parameter */, 21352, /* DiagArray994 */ 2751, 0, R"()")
DIAG_ENTRY(UnusedPrivateField /* unused-private-field */, 21369, /* DiagArray995 */ 2753, 0, R"()")
DIAG_ENTRY(UnusedPropertyIvar /* unused-property-ivar */, 21390, /* DiagArray996 */ 2755, 0, R"()")
DIAG_ENTRY(UnusedResult /* unused-result */, 21411, /* DiagArray997 */ 2757, 0, R"()")
DIAG_ENTRY(UnusedTemplate /* unused-template */, 21425, /* DiagArray998 */ 2760, /* DiagSubGroup998 */ 746, R"()")
DIAG_ENTRY(UnusedValue /* unused-value */, 21441, /* DiagArray999 */ 2762, /* DiagSubGroup999 */ 748, R"()")
DIAG_ENTRY(UnusedVariable /* unused-variable */, 21454, /* DiagArray1000 */ 2770, /* DiagSubGroup1000 */ 752, R"()")
DIAG_ENTRY(anonymous_281 /* unused-volatile-lvalue */, 21470, /* DiagArray1001 */ 2772, 0, R"()")
DIAG_ENTRY(UsedButMarkedUnused /* used-but-marked-unused */, 21493, /* DiagArray1002 */ 2774, 0, R"()")
DIAG_ENTRY(UserDefinedLiterals /* user-defined-literals */, 21516, /* DiagArray1003 */ 2776, 0, R"()")
DIAG_ENTRY(UserDefinedWarnings /* user-defined-warnings */, 21538, /* DiagArray1004 */ 2778, 0, R"()")
DIAG_ENTRY(Varargs /* varargs */, 21560, /* DiagArray1005 */ 2780, 0, R"()")
DIAG_ENTRY(VariadicMacros /* variadic-macros */, 21568, /* DiagArray1006 */ 2784, 0, R"()")
DIAG_ENTRY(anonymous_202 /* vec-elem-size */, 21584, /* DiagArray1007 */ 2788, 0, R"()")
DIAG_ENTRY(VectorConversion /* vector-conversion */, 21598, /* DiagArray1008 */ 2790, 0, R"()")
DIAG_ENTRY(anonymous_67 /* vector-conversions */, 21616, 0, /* DiagSubGroup1009 */ 754, R"()")
DIAG_ENTRY(VexingParse /* vexing-parse */, 21635, /* DiagArray1010 */ 2792, 0, R"()")
DIAG_ENTRY(Visibility /* visibility */, 21648, /* DiagArray1011 */ 2796, 0, R"()")
DIAG_ENTRY(VLA /* vla */, 21659, /* DiagArray1012 */ 2799, /* DiagSubGroup1012 */ 756, R"()")
DIAG_ENTRY(VLACxxExtension /* vla-cxx-extension */, 21663, /* DiagArray1013 */ 2801, /* DiagSubGroup1013 */ 758, R"()")
DIAG_ENTRY(VLAExtension /* vla-extension */, 21681, /* DiagArray1014 */ 2804, /* DiagSubGroup1014 */ 760, R"()")
DIAG_ENTRY(VLAUseStaticAssert /* vla-extension-static-assert */, 21695, /* DiagArray1015 */ 2806, 0, R"()")
DIAG_ENTRY(VoidPointerToEnumCast /* void-pointer-to-enum-cast */, 21723, /* DiagArray1016 */ 2809, 0, R"()")
DIAG_ENTRY(VoidPointerToIntCast /* void-pointer-to-int-cast */, 21749, /* DiagArray1017 */ 2811, /* DiagSubGroup1017 */ 762, R"()")
DIAG_ENTRY(VoidPointerDeref /* void-ptr-dereference */, 21774, /* DiagArray1018 */ 2813, 0, R"()")
DIAG_ENTRY(VolatileRegisterVar /* volatile-register-var */, 21795, 0, 0, R"()")
DIAG_ENTRY(WebAssemblyExceptionSpec /* wasm-exception-spec */, 21817, /* DiagArray1020 */ 2815, 0, R"()")
DIAG_ENTRY(anonymous_192 /* weak-template-vtables */, 21837, /* DiagArray1021 */ 2817, 0, R"()")
DIAG_ENTRY(anonymous_191 /* weak-vtables */, 21859, /* DiagArray1022 */ 2819, 0, R"()")
DIAG_ENTRY(WritableStrings /* writable-strings */, 21872, /* DiagArray1023 */ 2821, /* DiagSubGroup1023 */ 764, R"()")
DIAG_ENTRY(GCCWriteStrings /* write-strings */, 21889, 0, /* DiagSubGroup1024 */ 766, R"(**Note:** enabling this warning in C will change the semantic behavior of the
program by treating all string literals as having type ``const char *``
instead of ``char *``. This can cause unexpected behaviors with type-sensitive
constructs like ``_Generic``.)")
DIAG_ENTRY(XorUsedAsPow /* xor-used-as-pow */, 21903, /* DiagArray1025 */ 2823, 0, R"()")
DIAG_ENTRY(anonymous_302 /* zero-as-null-pointer-constant */, 21919, /* DiagArray1026 */ 2827, 0, R"()")
DIAG_ENTRY(ZeroLengthArray /* zero-length-array */, 21949, /* DiagArray1027 */ 2829, 0, R"()")
#endif // DIAG_ENTRY


#ifdef GET_CATEGORY_TABLE
CATEGORY("", DiagCat_None)
CATEGORY("Lexical or Preprocessor Issue", DiagCat_Lexical_or_Preprocessor_Issue)
CATEGORY("Semantic Issue", DiagCat_Semantic_Issue)
CATEGORY("Parse Issue", DiagCat_Parse_Issue)
CATEGORY("Lambda Issue", DiagCat_Lambda_Issue)
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

