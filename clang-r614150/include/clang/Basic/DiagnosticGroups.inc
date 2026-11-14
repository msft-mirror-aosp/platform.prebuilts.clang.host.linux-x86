
#ifdef GET_DIAG_ARRAYS
static const int16_t DiagArrays[] = {
  /* Empty */ -1,
  /* DiagArray1 */ diag::warn_pragma_message, -1,
  /* DiagArray2 */ diag::pp_hash_warning, -1,
  /* DiagArray3 */ diag::warn_cfstring_truncated, -1,
  /* DiagArray5 */ diag::warn_independentclass_attribute, diag::warn_ptr_independentclass_attribute, -1,
  /* DiagArray6 */ diag::warn_nsobject_attribute, -1,
  /* DiagArray7 */ diag::warn_exposure, -1,
  /* DiagArray8 */ diag::warn_function_always_inline_attribute_mismatch, diag::warn_sme_locally_streaming_has_vl_args_returns, diag::warn_sme_streaming_compatible_vl_mismatch, diag::warn_sme_streaming_pass_return_vl_to_non_streaming, -1,
  /* DiagArray10 */ diag::warn_abs_too_small, diag::warn_pointer_abs, diag::warn_unsigned_abs, diag::warn_wrong_absolute_value_type, -1,
  /* DiagArray11 */ diag::warn_abstract_final_class, -1,
  /* DiagArray12 */ diag::warn_abstract_vbase_init_ignored, -1,
  /* DiagArray14 */ diag::warn_taking_address_of_packed_member, -1,
  /* DiagArray15 */ diag::ext_typecheck_addrof_temporary, -1,
  /* DiagArray17 */ diag::warn_not_xl_compatible, diag::warn_pragma_align_not_xl_compatible, -1,
  /* DiagArray18 */ diag::ext_alias_template_in_declarative_nns, -1,
  /* DiagArray19 */ diag::warn_param_mismatched_alignment, -1,
  /* DiagArray21 */ diag::warn_alloc_size, -1,
  /* DiagArray22 */ diag::warn_alloca, -1,
  /* DiagArray23 */ diag::warn_alloca_align_alignof, -1,
  /* DiagArray24 */ diag::warn_always_inline_coroutine, -1,
  /* DiagArray25 */ diag::warn_ambiguous_suitable_delete_function_found, -1,
  /* DiagArray26 */ diag::warn_misplaced_ellipsis_vararg, -1,
  /* DiagArray27 */ diag::warn_pp_ambiguous_macro, -1,
  /* DiagArray28 */ diag::ext_nested_name_member_ref_lookup_ambiguous, -1,
  /* DiagArray29 */ diag::ext_ovl_ambiguous_oper_binary_reversed, -1,
  /* DiagArray30 */ diag::warn_amdgcn_unguarded_asm_stmt, diag::warn_amdgcn_unguarded_builtin, -1,
  /* DiagArray31 */ diag::warn_amdgpu_s_wait_event_mask_no_effect_target, -1,
  /* DiagArray32 */ diag::warn_incompatible_analyzer_plugin_api, -1,
  /* DiagArray33 */ diag::warn_android_unversioned_fallback, -1,
  /* DiagArray34 */ diag::warn_arith_conv_mixed_anon_enum_types, -1,
  /* DiagArray35 */ diag::ext_abstract_pack_declarator_parens, -1,
  /* DiagArray36 */ diag::warn_apinotes_message, -1,
  /* DiagArray38 */ diag::warn_arc_bridge_cast_nonarc, -1,
  /* DiagArray39 */ diag::warn_arc_possible_repeated_use_of_weak, -1,
  /* DiagArray40 */ diag::warn_arc_object_memaccess, -1,
  /* DiagArray41 */ diag::warn_arc_perform_selector_leaks, -1,
  /* DiagArray42 */ diag::warn_arc_repeated_use_of_weak, -1,
  /* DiagArray43 */ diag::warn_arc_retain_cycle, -1,
  /* DiagArray44 */ diag::warn_arc_literal_assign, diag::warn_arc_retained_assign, diag::warn_arc_retained_property_assign, -1,
  /* DiagArray45 */ diag::warn_argument_invalid_range, -1,
  /* DiagArray46 */ diag::warn_argument_undefined_behaviour, -1,
  /* DiagArray47 */ diag::warn_arm_interrupt_save_fp_without_vfp_unit, -1,
  /* DiagArray48 */ diag::warn_arm_interrupt_vfp_clobber, -1,
  /* DiagArray49 */ diag::warn_array_index_exceeds_bounds, diag::warn_array_index_exceeds_max_addressable_bounds, diag::warn_array_index_precedes_bounds, diag::warn_ptr_arith_exceeds_max_addressable_bounds, diag::warn_static_array_too_small, -1,
  /* DiagArray50 */ diag::warn_ptr_arith_exceeds_bounds, diag::warn_ptr_arith_precedes_bounds, -1,
  /* DiagArray51 */ diag::warn_array_comparison, -1,
  /* DiagArray52 */ diag::warn_array_comparison_cxx26, -1,
  /* DiagArray53 */ diag::warn_inconsistent_array_form, -1,
  /* DiagArray55 */ diag::warn_asm_mismatched_size_modifier, -1,
  /* DiagArray56 */ diag::warn_not_in_enum_assignment, -1,
  /* DiagArray57 */ diag::warn_assume_side_effects, -1,
  /* DiagArray59 */ diag::warn_atimport_in_framework_header, -1,
  /* DiagArray60 */ diag::warn_atomic_member_access, -1,
  /* DiagArray61 */ diag::warn_atomic_op_misaligned, diag::warn_atomic_op_oversized, -1,
  /* DiagArray62 */ diag::warn_atomic_implicit_seq_cst, -1,
  /* DiagArray63 */ diag::warn_atomic_op_has_invalid_memory_order, -1,
  /* DiagArray65 */ diag::warn_atomic_property_rule, -1,
  /* DiagArray66 */ diag::warn_attribute_packed_for_bitfield, -1,
  /* DiagArray67 */ diag::ext_invalid_attribute_argument, -1,
  /* DiagArray68 */ diag::warn_attr_min_eq_max, -1,
  /* DiagArray69 */ diag::warn_fe_backend_warning_attr, diag::warn_toc_unsupported_type, -1,
  /* DiagArray71 */ diag::ext_c23_auto_non_plain_identifier, -1,
  /* DiagArray72 */ diag::warn_drv_disabling_vptr_no_rtti_default, -1,
  /* DiagArray74 */ diag::ext_auto_storage_class, -1,
  /* DiagArray75 */ diag::warn_auto_var_is_id, -1,
  /* DiagArray76 */ diag::warn_availability_and_unavailable, diag::warn_availability_fuchsia_unavailable_minor, diag::warn_availability_on_static_initializer, diag::warn_availability_swift_unavailable_deprecated_only, diag::warn_availability_unknown_environment, diag::warn_availability_unknown_platform, diag::warn_availability_version_ordering, diag::warn_expected_consistent_version_separator, diag::warn_mismatched_availability, diag::warn_mismatched_availability_override, diag::warn_mismatched_availability_override_unavail, -1,
  /* DiagArray77 */ diag::warn_drv_avr_family_linking_stdlibs_not_implemented, diag::warn_drv_avr_libc_not_found, diag::warn_drv_avr_linker_section_addresses_not_implemented, diag::warn_drv_avr_mcu_not_specified, diag::warn_drv_avr_stdlib_not_linked, -1,
  /* DiagArray78 */ diag::warn_fe_backend_plugin, diag::warn_fe_backend_resource_limit, -1,
  /* DiagArray79 */ diag::backslash_newline_space, -1,
  /* DiagArray80 */ diag::warn_bad_function_cast, -1,
  /* DiagArray82 */ diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, -1,
  /* DiagArray83 */ diag::ext_bit_int, diag::ext_cxx_bitint_suffix, -1,
  /* DiagArray84 */ diag::warn_impcast_bitfield_precision_constant, -1,
  /* DiagArray85 */ diag::warn_bitfield_too_small_for_enum, diag::warn_signed_bitfield_enum_conversion, diag::warn_unsigned_bitfield_assigned_signed_enum, -1,
  /* DiagArray86 */ diag::warn_bitfield_width_exceeds_type_width, -1,
  /* DiagArray87 */ diag::warn_precedence_bitwise_conditional, -1,
  /* DiagArray88 */ diag::warn_bitwise_instead_of_logical, -1,
  /* DiagArray89 */ diag::warn_bitwise_op_in_bitwise_op, -1,
  /* DiagArray90 */ diag::warn_block_capture_autoreleasing, -1,
  /* DiagArray91 */ diag::warn_impcast_bool_to_null_pointer, -1,
  /* DiagArray93 */ diag::warn_bitwise_negation_bool, -1,
  /* DiagArray94 */ diag::warn_counted_by_attr_elt_type_unknown_size, -1,
  /* DiagArray95 */ diag::warn_braces_around_init, -1,
  /* DiagArray96 */ diag::warn_incompatible_branch_protection_option, diag::warn_target_unsupported_branch_protection_attribute, diag::warn_unsupported_branch_protection, diag::warn_unsupported_branch_protection_spec, -1,
  /* DiagArray97 */ diag::warn_objc_invalid_bridge, diag::warn_objc_invalid_bridge_to_cf, -1,
  /* DiagArray98 */ diag::warn_assume_aligned_too_great, -1,
  /* DiagArray99 */ diag::ext_pp_redef_builtin_macro, diag::ext_pp_undef_builtin_macro, -1,
  /* DiagArray100 */ diag::warn_builtin_chk_overflow, -1,
  /* DiagArray101 */ diag::warn_implicit_decl_requires_sysheader, -1,
  /* DiagArray102 */ diag::warn_cxx_compat_hack_fake_diagnostic_do_not_emit, diag::warn_zero_size_struct_union_compat, -1,
  /* DiagArray103 */ diag::warn_decl_hidden_in_cpp, -1,
  /* DiagArray104 */ diag::warn_pp_identifier_is_cpp_keyword, -1,
  /* DiagArray105 */ diag::warn_initializer_string_for_char_array_too_long_for_cpp, -1,
  /* DiagArray109 */ diag::ext_old_implicitly_unsigned_long_cxx, diag::warn_auto_storage_class, diag::warn_cxx11_compat_user_defined_literal, diag::warn_cxx11_keyword, diag::warn_cxx11_right_shift_in_template_arg, diag::warn_explicit_instantiation_inline_0x, diag::warn_explicit_instantiation_must_be_global_0x, diag::warn_explicit_instantiation_out_of_scope_0x, diag::warn_explicit_instantiation_unqualified_wrong_namespace_0x, diag::warn_old_implicitly_unsigned_long_cxx, -1,
  /* DiagArray110 */ diag::warn_deprecated_string_literal_conversion, -1,
  /* DiagArray112 */ diag::warn_cxx11_compat_reserved_user_defined_literal, -1,
  /* DiagArray113 */ diag::compat_pre_cxx11_enum_fixed_underlying_type, diag::compat_pre_cxx11_nonclass_type_friend, diag::compat_pre_cxx11_static_data_member_in_union, diag::compat_pre_cxx11_templ_default_in_function_templ, diag::compat_pre_cxx11_template_arg_extra_parens, diag::compat_pre_cxx11_typename_outside_of_template, diag::ext_alias_declaration, diag::ext_array_size_conversion, diag::ext_auto_type_specifier, diag::ext_defaulted_deleted_function, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_conversion_functions, diag::ext_extern_template, diag::ext_for_range, diag::ext_generalized_initializer_lists, diag::ext_lambda, diag::ext_nested_name_spec_is_enum, diag::ext_nonstatic_member_init, diag::ext_override_control_keyword, diag::ext_ref_qualifier, diag::ext_rvalue_reference, diag::ext_scoped_enum, diag::ext_template_arg_object_internal, diag::ext_template_outside_of_template, diag::ext_unelaborated_friend_type, diag::ext_variadic_templates, diag::warn_ext_cxx11_attributes, -1,
  /* DiagArray114 */ diag::ext_extra_semi_cxx11, -1,
  /* DiagArray115 */ diag::ext_inline_namespace, -1,
  /* DiagArray116 */ diag::ext_cxx11_longlong, -1,
  /* DiagArray117 */ diag::ext_cce_narrowing, diag::ext_init_list_constant_narrowing, diag::ext_init_list_type_narrowing, diag::ext_init_list_variable_narrowing, diag::warn_init_list_constant_narrowing, diag::warn_init_list_type_narrowing, diag::warn_init_list_variable_narrowing, -1,
  /* DiagArray118 */ diag::ext_init_list_constant_narrowing_const_reference, diag::ext_init_list_type_narrowing_const_reference, diag::ext_init_list_variable_narrowing_const_reference, -1,
  /* DiagArray119 */ diag::ext_cxx14_attr, -1,
  /* DiagArray120 */ diag::ext_binary_literal_cxx14, -1,
  /* DiagArray123 */ diag::compat_pre_cxx14_constexpr_body_multiple_return, diag::compat_pre_cxx14_constexpr_local_var, diag::compat_pre_cxx14_constexpr_type_definition, diag::compat_pre_cxx14_cxx14_constexpr_body_invalid_stmt, diag::compat_pre_cxx14_variable_template, diag::ext_decltype_auto_type_specifier, diag::ext_init_capture, -1,
  /* DiagArray124 */ diag::ext_cxx17_attr, -1,
  /* DiagArray126 */ diag::warn_cxx17_compat_exception_spec_in_signature, -1,
  /* DiagArray128 */ diag::compat_pre_cxx17_decomp_decl, diag::compat_pre_cxx17_inline_variable, diag::ext_auto_new_list_init, diag::ext_constexpr_if, diag::ext_constexpr_on_lambda_cxx17, diag::ext_cxx_static_assert_no_message, diag::ext_fold_expression, diag::ext_for_range_begin_end_types_differ, diag::ext_hex_literal_invalid, diag::ext_init_statement, diag::ext_multi_using_declaration, diag::ext_nested_namespace_definition, diag::ext_ns_enum_attribute, diag::ext_star_this_lambda_capture_cxx17, diag::ext_template_template_param_typename, diag::ext_using_attribute_ns, diag::ext_using_declaration_pack, -1,
  /* DiagArray133 */ diag::ext_cxx20_attr, -1,
  /* DiagArray134 */ diag::warn_cxx20_compat_aggregate_init_with_ctors, diag::warn_cxx20_compat_explicit_bool, diag::warn_cxx20_compat_requires_explicit_init_non_aggregate, diag::warn_cxx20_compat_spaceship, diag::warn_cxx20_compat_use_of_unaddressable_function, diag::warn_cxx20_compat_utf8_string, diag::warn_cxx20_keyword, -1,
  /* DiagArray136 */ diag::ext_cxx_designated_init, -1,
  /* DiagArray137 */ diag::compat_pre_cxx20_adl_only_template_id, diag::compat_pre_cxx20_constexpr_ctor_missing_init, diag::compat_pre_cxx20_constexpr_function_try_block, diag::compat_pre_cxx20_constexpr_local_var_no_init, diag::compat_pre_cxx20_constexpr_union_ctor_no_init, diag::compat_pre_cxx20_ctad_for_alias_templates, diag::compat_pre_cxx20_cxx20_constexpr_body_invalid_stmt, diag::compat_pre_cxx20_decomp_decl_spec, diag::compat_pre_cxx20_implicit_typename, diag::ext_bitfield_member_init, diag::ext_capture_binding, diag::ext_defaulted_comparison, diag::ext_equals_this_lambda_capture_cxx20, diag::ext_explicit_bool, diag::ext_for_range_init_stmt, diag::ext_init_capture_pack, diag::ext_inline_nested_namespace_definition, diag::ext_lambda_template_parameter_list, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_using_decl_scoped_enumerator, diag::ext_using_enum_declaration, diag::warn_cxx17_compat_aggregate_init_paren_list, -1,
  /* DiagArray138 */ diag::ext_cxx23_attr, -1,
  /* DiagArray140 */ diag::compat_pre_cxx23_constexpr_static_var, diag::compat_pre_cxx23_cxx23_constexpr_body_invalid_stmt, diag::err_static_lambda, diag::ext_alias_in_init_statement, diag::ext_consteval_if, diag::ext_cxx23_pp_directive, diag::ext_cxx23_size_t_suffix, diag::ext_cxx_label_end_of_compound_statement, diag::ext_lambda_missing_parens, diag::ext_operator_overload_static, -1,
  /* DiagArray141 */ diag::ext_decl_attrs_on_lambda, -1,
  /* DiagArray142 */ diag::compat_pre_cxx26_decomp_decl_cond, diag::ext_cxx26_raw_string_literal_character_set, diag::ext_cxx_binding_pack, diag::ext_cxx_static_assert_user_generated_message, diag::ext_decl_attrs_on_binding, diag::ext_delete_with_message, diag::ext_pack_indexing, diag::ext_placeholder_var_definition, diag::ext_variadic_friends, -1,
  /* DiagArray154 */ diag::warn_cxx11_compat_binary_literal, -1,
  /* DiagArray156 */ diag::compat_cxx11_enum_fixed_underlying_type, diag::compat_cxx11_nonclass_type_friend, diag::compat_cxx11_static_data_member_in_union, diag::compat_cxx11_templ_default_in_function_templ, diag::compat_cxx11_template_arg_extra_parens, diag::compat_cxx11_typename_outside_of_template, diag::warn_cxx98_compat_alias_declaration, diag::warn_cxx98_compat_alignas, diag::warn_cxx98_compat_alignof, diag::warn_cxx98_compat_attribute, diag::warn_cxx98_compat_auto_type_specifier, diag::warn_cxx98_compat_constexpr, diag::warn_cxx98_compat_ctor_list_init, diag::warn_cxx98_compat_decltype, diag::warn_cxx98_compat_defaulted_deleted_function, diag::warn_cxx98_compat_delegating_ctor, diag::warn_cxx98_compat_empty_scalar_initializer, diag::warn_cxx98_compat_empty_sizeless_initializer, diag::warn_cxx98_compat_enum_nested_name_spec, diag::warn_cxx98_compat_explicit_conversion_functions, diag::warn_cxx98_compat_for_range, diag::warn_cxx98_compat_friend_is_member, diag::warn_cxx98_compat_generalized_initializer_lists, diag::warn_cxx98_compat_goto_into_protected_scope, diag::warn_cxx98_compat_indirect_goto_in_protected_scope, diag::warn_cxx98_compat_initializer_list_init, diag::warn_cxx98_compat_inline_namespace, diag::warn_cxx98_compat_lambda, diag::warn_cxx98_compat_less_colon_colon, diag::warn_cxx98_compat_literal_operator, diag::warn_cxx98_compat_literal_ucn_control_character, diag::warn_cxx98_compat_literal_ucn_escape_basic_scs, diag::warn_cxx98_compat_noexcept_decl, diag::warn_cxx98_compat_noexcept_expr, diag::warn_cxx98_compat_non_static_member_use, diag::warn_cxx98_compat_nonstatic_member_init, diag::warn_cxx98_compat_nontrivial_union_or_anon_struct_member, diag::warn_cxx98_compat_nullptr, diag::warn_cxx98_compat_override_control_keyword, diag::warn_cxx98_compat_pass_non_pod_arg_to_vararg, diag::warn_cxx98_compat_raw_string_literal, diag::warn_cxx98_compat_ref_qualifier, diag::warn_cxx98_compat_reference_list_init, diag::warn_cxx98_compat_rvalue_reference, diag::warn_cxx98_compat_scoped_enum, diag::warn_cxx98_compat_sfinae_access_control, diag::warn_cxx98_compat_static_assert, diag::warn_cxx98_compat_switch_into_protected_scope, diag::warn_cxx98_compat_template_arg_null, diag::warn_cxx98_compat_template_arg_object_internal, diag::warn_cxx98_compat_template_outside_of_template, diag::warn_cxx98_compat_trailing_return_type, diag::warn_cxx98_compat_two_right_angle_brackets, diag::warn_cxx98_compat_unelaborated_friend_type, diag::warn_cxx98_compat_unicode_literal, diag::warn_cxx98_compat_unicode_type, diag::warn_cxx98_compat_using_decl_constructor, diag::warn_cxx98_compat_variadic_templates, -1,
  /* DiagArray157 */ diag::warn_cxx98_compat_temp_copy, -1,
  /* DiagArray158 */ diag::warn_cxx98_compat_top_level_semi, -1,
  /* DiagArray159 */ diag::warn_cxx98_compat_template_arg_local_type, -1,
  /* DiagArray160 */ diag::warn_cxx98_compat_array_size_conversion, diag::warn_cxx98_compat_cast_fn_obj, diag::warn_cxx98_compat_empty_fnmacro_arg, diag::warn_cxx98_compat_enumerator_list_comma, diag::warn_cxx98_compat_extern_template, diag::warn_cxx98_compat_longlong, diag::warn_cxx98_compat_pp_line_too_big, diag::warn_cxx98_compat_variadic_macro, -1,
  /* DiagArray161 */ diag::warn_cxx98_compat_template_arg_unnamed_type, -1,
  /* DiagArray162 */ diag::warn_attr_in_secondary_block, -1,
  /* DiagArray163 */ diag::ext_anonymous_union, diag::ext_c11_anonymous_struct, diag::ext_c11_feature, diag::ext_typecheck_compare_complete_incomplete_pointers, -1,
  /* DiagArray164 */ diag::warn_c23_compat_utf8_string, diag::warn_c23_keyword, -1,
  /* DiagArray165 */ diag::ext_binary_literal, diag::ext_c23_bitint_suffix, diag::ext_c23_enum_fixed_underlying_type, diag::ext_c23_enum_value_not_int, diag::ext_c23_non_local_variable_decl_in_for, diag::ext_c23_non_variable_decl_in_for, diag::ext_c23_pp_directive, diag::ext_c_empty_initializer, diag::ext_c_label_end_of_compound_statement, diag::ext_c_label_followed_by_declaration, diag::ext_c_nullptr, diag::ext_c_static_assert_no_message, diag::ext_parameter_name_omitted_c23, diag::ext_pp_embed_directive, diag::ext_restrict_on_array_of_pointers_c23, diag::ext_type_defined_in_offsetof, diag::warn_ext_c23_attributes, -1,
  /* DiagArray168 */ diag::ext_assoc_type_incomplete, diag::ext_c2y_alignof_incomplete_array, diag::ext_c2y_case_range, diag::ext_c2y_feature, diag::ext_c2y_generic_with_type_arg, diag::ext_c2y_imaginary_constant, diag::ext_c2y_increment_complex, diag::ext_counter, diag::ext_octal_literal, -1,
  /* DiagArray169 */ diag::warn_c99_compat_unicode_id, diag::warn_c99_compat_unicode_literal, diag::warn_c99_keyword, diag::warn_old_implicitly_unsigned_long, -1,
  /* DiagArray170 */ diag::ext_designated_init, diag::ext_designated_init_array, diag::ext_designated_init_brace_elision, diag::ext_designated_init_mixed, diag::ext_designated_init_nested, -1,
  /* DiagArray171 */ diag::ext_aggregate_init_not_constant, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_c99_whitespace_required_after_macro_name, diag::ext_empty_fnmacro_arg, diag::ext_enumerator_list_comma_c, diag::ext_hex_constant_invalid, -1,
  /* DiagArray172 */ diag::warn_call_to_pure_virtual_member_function_from_ctor_dtor, -1,
  /* DiagArray173 */ diag::warn_called_once_gets_called_twice, diag::warn_called_once_never_called, diag::warn_called_once_never_called_when, -1,
  /* DiagArray174 */ diag::warn_cast_align, -1,
  /* DiagArray175 */ diag::warn_cast_calling_conv, -1,
  /* DiagArray177 */ diag::warn_cast_function_type, -1,
  /* DiagArray178 */ diag::warn_cast_function_type_strict, -1,
  /* DiagArray179 */ diag::warn_cast_pointer_from_sel, -1,
  /* DiagArray180 */ diag::warn_cast_qual, diag::warn_cast_qual2, -1,
  /* DiagArray181 */ diag::ext_bad_cxx_cast_qualifiers_away_incoherent, -1,
  /* DiagArray182 */ diag::warn_cast_discards_cfi_unchecked_callee, -1,
  /* DiagArray184 */ diag::warn_omp_section_is_char, diag::warn_subscript_is_char, -1,
  /* DiagArray185 */ diag::warn_arith_conv_mixed_unicode_types, diag::warn_comparison_unicode_mixed_types, diag::warn_comparison_unicode_mixed_types_constant, diag::warn_impcast_unicode_char_type, diag::warn_impcast_unicode_char_type_constant, diag::warn_impcast_unicode_precision, -1,
  /* DiagArray186 */ diag::warn_drv_yc_multiple_inputs_clang_cl, diag::warn_drv_ycyu_different_arg_clang_cl, diag::warn_pp_hdrstop_filename_ignored, diag::warn_pp_macro_def_mismatch_with_pch, -1,
  /* DiagArray187 */ diag::warn_conv_to_base_not_used, diag::warn_conv_to_self_not_used, diag::warn_conv_to_void_not_used, -1,
  /* DiagArray188 */ diag::warn_pass_class_arg_to_vararg, -1,
  /* DiagArray189 */ diag::warn_cmse_nonsecure_union, -1,
  /* DiagArray190 */ diag::warn_comma_operator, -1,
  /* DiagArray191 */ diag::escaped_newline_block_comment_end, diag::ext_line_comment, diag::ext_multi_line_line_comment, diag::warn_nested_block_comment, -1,
  /* DiagArray193 */ diag::ext_typecheck_comparison_of_distinct_pointers, -1,
  /* DiagArray194 */ diag::warn_completion_handler_called_twice, diag::warn_completion_handler_never_called, diag::warn_completion_handler_never_called_when, -1,
  /* DiagArray195 */ diag::ext_complex_component_init, -1,
  /* DiagArray197 */ diag::warn_compound_token_split_by_macro, -1,
  /* DiagArray198 */ diag::warn_compound_token_split_by_whitespace, -1,
  /* DiagArray199 */ diag::ext_typecheck_cond_pointer_integer_mismatch, -1,
  /* DiagArray200 */ diag::warn_maybe_uninit_var, -1,
  /* DiagArray201 */ diag::warn_module_config_macro_undef, -1,
  /* DiagArray202 */ diag::warn_impcast_integer_precision_constant, -1,
  /* DiagArray203 */ diag::warn_is_constant_evaluated_always_true_constexpr, -1,
  /* DiagArray204 */ diag::warn_logical_instead_of_bitwise, -1,
  /* DiagArray205 */ diag::warn_cxx14_compat_constexpr_not_const, -1,
  /* DiagArray206 */ diag::warn_attr_on_unconsumable_class, diag::warn_loop_state_mismatch, diag::warn_param_return_typestate_mismatch, diag::warn_param_typestate_mismatch, diag::warn_return_typestate_for_unconsumable_type, diag::warn_return_typestate_mismatch, diag::warn_use_in_invalid_state, diag::warn_use_of_temp_in_invalid_state, -1,
  /* DiagArray207 */ diag::warn_impcast_complex_scalar, diag::warn_impcast_vector_scalar, diag::warn_opencl_generic_address_space_arg, diag::warn_template_arg_negative, diag::warn_template_arg_too_large, -1,
  /* DiagArray209 */ diag::warn_non_aligned_allocation_function, -1,
  /* DiagArray210 */ diag::warn_coroutine_type_aware_allocator_ignored, -1,
  /* DiagArray211 */ diag::warn_coroutine_handle_address_invalid_return_type, -1,
  /* DiagArray212 */ diag::warn_coroutine_promise_unhandled_exception_required_with_exceptions, -1,
  /* DiagArray213 */ diag::warn_unreachable_default, -1,
  /* DiagArray215 */ diag::warn_objc_cdirective_format_string, -1,
  /* DiagArray216 */ diag::warn_ctad_maybe_unsupported, -1,
  /* DiagArray218 */ diag::warn_ctu_import_failure, diag::warn_ctu_incompat_lang, diag::warn_ctu_incompat_triple, diag::warn_invlist_missing_file, diag::warn_multiple_entries_invlist, -1,
  /* DiagArray219 */ diag::remark_ctu_import_threshold_reached, -1,
  /* DiagArray220 */ diag::warn_attribute_argument_n_negative, diag::warn_cuda_attr_lambda_position, diag::warn_kern_is_inline, diag::warn_kern_is_method, diag::warn_pragma_unroll_cuda_value_in_parens, -1,
  /* DiagArray221 */ diag::warn_default_atomic_custom_getter_setter, -1,
  /* DiagArray222 */ diag::ext_cxx11_attr_placement, -1,
  /* DiagArray223 */ diag::warn_dangling_variable, -1,
  /* DiagArray224 */ diag::warn_dangling_pointer_assignment, -1,
  /* DiagArray225 */ diag::warn_dangling_lifetime_pointer_assignment, -1,
  /* DiagArray226 */ diag::warn_dangling_reference_captured, diag::warn_dangling_reference_captured_by_unknown, -1,
  /* DiagArray227 */ diag::warn_dangling_else, -1,
  /* DiagArray228 */ diag::warn_bind_ref_member_to_parameter, diag::warn_dangling_member, diag::warn_init_ptr_member_to_parameter_addr, diag::warn_new_dangling_reference, -1,
  /* DiagArray229 */ diag::warn_dangling_lifetime_pointer, diag::warn_dangling_lifetime_pointer_member, -1,
  /* DiagArray230 */ diag::warn_new_dangling_initializer_list, -1,
  /* DiagArray231 */ diag::warn_drv_darwin_sdk_invalid_settings, -1,
  /* DiagArray232 */ diag::warn_pp_date_time, -1,
  /* DiagArray233 */ diag::warn_dealloc_in_category, -1,
  /* DiagArray234 */ diag::warn_debug_compression_unavailable, -1,
  /* DiagArray235 */ diag::ext_mixed_decls_code, diag::warn_mixed_decls_code, -1,
  /* DiagArray236 */ diag::warn_decls_in_multiple_modules, -1,
  /* DiagArray238 */ diag::warn_default_init_const_field, -1,
  /* DiagArray239 */ diag::warn_default_init_const_field_unsafe, -1,
  /* DiagArray241 */ diag::warn_default_init_const, -1,
  /* DiagArray242 */ diag::warn_default_init_const_unsafe, -1,
  /* DiagArray243 */ diag::warn_defaulted_comparison_deleted, diag::warn_defaulted_method_deleted, -1,
  /* DiagArray244 */ diag::warn_drv_delayed_template_parsing_after_cxx20, -1,
  /* DiagArray245 */ diag::warn_delegating_ctor_cycle, -1,
  /* DiagArray246 */ diag::warn_delete_abstract_non_virtual_dtor, -1,
  /* DiagArray247 */ diag::ext_delete_void_ptr_operand, diag::warn_delete_incomplete, -1,
  /* DiagArray248 */ diag::warn_delete_non_virtual_dtor, -1,
  /* DiagArray250 */ diag::ext_delimited_escape_sequence, -1,
  /* DiagArray251 */ diag::warn_deprecated_lax_vec_conv_all, -1,
  /* DiagArray252 */ diag::warn_O4_is_O3, diag::warn_access_decl_deprecated, diag::warn_drv_deprecated_arg, diag::warn_drv_deprecated_custom, diag::warn_drv_treating_input_as_cxx, diag::warn_omp_default_deprecated, diag::warn_omp_depend_in_ordered_deprecated, diag::warn_omp_deprecated_declare_target_delimited_form, diag::warn_omp_minus_in_reduction_deprecated, diag::warn_option_invalid_ocl_version, diag::warn_vector_long_decl_spec_combination, -1,
  /* DiagArray253 */ diag::warn_deprecated_altivec_src_compat, -1,
  /* DiagArray254 */ diag::warn_arith_conv_mixed_anon_enum_types_cxx20, -1,
  /* DiagArray255 */ diag::warn_depr_array_comparison, -1,
  /* DiagArray256 */ diag::warn_deduction_guide_target_attr_deprecated, diag::warn_deprecated_noreturn_spelling, diag::warn_type_attribute_deprecated_on_decl, diag::warn_vector_mode_deprecated, -1,
  /* DiagArray257 */ diag::warn_deprecated_builtin, diag::warn_deprecated_builtin_no_suggestion, -1,
  /* DiagArray258 */ diag::warn_deprecated_comma_subscript, -1,
  /* DiagArray259 */ diag::warn_deprecated_copy, -1,
  /* DiagArray261 */ diag::warn_deprecated_copy_with_dtor, -1,
  /* DiagArray262 */ diag::warn_deprecated_copy_with_user_provided_copy, -1,
  /* DiagArray263 */ diag::warn_deprecated_copy_with_user_provided_dtor, -1,
  /* DiagArray264 */ diag::warn_deprecated_for_co_await, -1,
  /* DiagArray265 */ diag::warn_atl_uuid_deprecated, diag::warn_cstyle_param, diag::warn_deprecated, diag::warn_deprecated_fwdclass_message, diag::warn_deprecated_message, diag::warn_property_method_deprecated, -1,
  /* DiagArray266 */ diag::warn_deprecated_switch_case, -1,
  /* DiagArray267 */ diag::warn_exception_spec_deprecated, -1,
  /* DiagArray268 */ diag::warn_comparison_mixed_enum_types_cxx20, -1,
  /* DiagArray269 */ diag::warn_conditional_mixed_enum_types_cxx20, -1,
  /* DiagArray270 */ diag::warn_arith_conv_mixed_enum_types_cxx20, -1,
  /* DiagArray271 */ diag::warn_arith_conv_enum_float_cxx20, -1,
  /* DiagArray272 */ diag::warn_deprecated_def, diag::warn_unavailable_def, -1,
  /* DiagArray273 */ diag::warn_increment_bool, -1,
  /* DiagArray274 */ diag::warn_deprecated_literal_operator_id, -1,
  /* DiagArray275 */ diag::warn_deprecated_missing_comma_before_ellipsis, -1,
  /* DiagArray276 */ diag::warn_deprecated_module_dot_map, -1,
  /* DiagArray277 */ diag::warn_non_prototype_changes_behavior, diag::warn_strict_uses_without_prototype, -1,
  /* DiagArray278 */ diag::warn_objc_isa_assign, diag::warn_objc_isa_use, -1,
  /* DiagArray279 */ diag::warn_objc_pointer_masking, -1,
  /* DiagArray280 */ diag::warn_objc_pointer_masking_performSelector, -1,
  /* DiagArray281 */ diag::warn_unprefixed_octal_deprecated, -1,
  /* DiagArray282 */ diag::warn_drv_deprecated_arg_ofast, diag::warn_drv_deprecated_arg_ofast_for_flang, -1,
  /* DiagArray283 */ diag::warn_pragma_deprecated_macro_use, -1,
  /* DiagArray284 */ diag::warn_deprecated_redundant_constexpr_static_def, -1,
  /* DiagArray285 */ diag::warn_deprecated_register, -1,
  /* DiagArray286 */ diag::warn_deprecated_this_capture, -1,
  /* DiagArray287 */ diag::warn_ext_int_deprecated, -1,
  /* DiagArray288 */ diag::warn_deprecated_increment_decrement_volatile, diag::warn_deprecated_simple_assign_volatile, diag::warn_deprecated_volatile_param, diag::warn_deprecated_volatile_return, diag::warn_deprecated_volatile_structured_binding, -1,
  /* DiagArray290 */ diag::warn_direct_ivar_access, -1,
  /* DiagArray291 */ diag::pp_disabled_macro_expansion, -1,
  /* DiagArray294 */ diag::warn_conflicting_param_modifiers, diag::warn_conflicting_ret_type_modifiers, -1,
  /* DiagArray296 */ diag::warn_remainder_division_by_zero, -1,
  /* DiagArray297 */ diag::warn_attribute_dll_redeclaration, -1,
  /* DiagArray298 */ diag::warn_attr_dllexport_explicit_inst_def, -1,
  /* DiagArray299 */ diag::warn_attribute_dllexport_explicit_instantiation_decl, -1,
  /* DiagArray300 */ diag::warn_attribute_dllimport_static_field_definition, -1,
  /* DiagArray301 */ diag::warn_doc_api_container_decl_mismatch, diag::warn_doc_block_command_duplicate, diag::warn_doc_block_command_empty_paragraph, diag::warn_doc_container_decl_mismatch, diag::warn_doc_function_method_decl_mismatch, diag::warn_doc_html_start_tag_expected_ident_or_greater, diag::warn_doc_html_start_tag_expected_quoted_string, diag::warn_doc_inline_command_not_enough_arguments, diag::warn_doc_param_duplicate, diag::warn_doc_param_invalid_direction, diag::warn_doc_param_not_attached_to_a_function_decl, diag::warn_doc_param_not_found, diag::warn_doc_returns_attached_to_a_void_function, diag::warn_doc_returns_not_attached_to_a_function_decl, diag::warn_doc_tparam_duplicate, diag::warn_doc_tparam_not_attached_to_a_template_decl, diag::warn_doc_tparam_not_found, diag::warn_not_a_doxygen_trailing_member_comment, diag::warn_splice_in_doxygen_comment, diag::warn_verbatim_block_end_without_start, -1,
  /* DiagArray302 */ diag::warn_doc_deprecated_not_sync, -1,
  /* DiagArray303 */ diag::warn_doc_html_end_forbidden, diag::warn_doc_html_end_unbalanced, diag::warn_doc_html_missing_end_tag, diag::warn_doc_html_start_end_mismatch, -1,
  /* DiagArray304 */ diag::warn_doc_param_spaces_in_direction, -1,
  /* DiagArray305 */ diag::warn_correct_comment_command_name, diag::warn_unknown_comment_command_name, -1,
  /* DiagArray306 */ diag::ext_dollar_in_identifier, -1,
  /* DiagArray307 */ diag::warn_impcast_double_promotion, -1,
  /* DiagArray308 */ diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_qualified_dtor_named_in_lexical_scope, -1,
  /* DiagArray309 */ diag::ext_destructor_typedef_name, -1,
  /* DiagArray310 */ diag::ext_duplicate_declspec, diag::ext_warn_duplicate_declspec, diag::warn_attribute_address_multiple_identical_qualifiers, diag::warn_duplicate_declspec, -1,
  /* DiagArray311 */ diag::warn_duplicate_enum_values, -1,
  /* DiagArray312 */ diag::warn_method_param_declaration, -1,
  /* DiagArray313 */ diag::warn_duplicate_method_decl, -1,
  /* DiagArray314 */ diag::warn_duplicate_protocol_def, -1,
  /* DiagArray315 */ diag::warn_drv_dxc_missing_dxv, -1,
  /* DiagArray316 */ diag::warn_dyn_class_memaccess, -1,
  /* DiagArray317 */ diag::ext_dynamic_exception_spec, -1,
  /* DiagArray318 */ diag::warn_eagerly_load_for_standard_cplusplus_modules, -1,
  /* DiagArray320 */ diag::ext_enum_base_in_type_specifier, -1,
  /* DiagArray321 */ diag::ext_elaborated_enum_class, -1,
  /* DiagArray322 */ diag::ext_embedded_directive, -1,
  /* DiagArray323 */ diag::warn_empty_defer_body, diag::warn_empty_for_body, diag::warn_empty_if_body, diag::warn_empty_range_based_for_body, diag::warn_empty_switch_body, diag::warn_empty_while_body, -1,
  /* DiagArray324 */ diag::ext_decomp_decl_empty, -1,
  /* DiagArray325 */ diag::warn_empty_init_statement, -1,
  /* DiagArray326 */ diag::ext_empty_translation_unit, -1,
  /* DiagArray327 */ diag::warn_incomplete_encoded_type, -1,
  /* DiagArray329 */ diag::warn_comparison_mixed_enum_types, -1,
  /* DiagArray330 */ diag::warn_conditional_mixed_enum_types, -1,
  /* DiagArray331 */ diag::warn_comparison_of_mixed_enum_types_switch, -1,
  /* DiagArray332 */ diag::warn_comparison_in_enum_initializer, -1,
  /* DiagArray334 */ diag::warn_arith_conv_mixed_enum_types, diag::warn_conv_mixed_enum_types_cxx26, -1,
  /* DiagArray335 */ diag::warn_arith_conv_enum_float, -1,
  /* DiagArray336 */ diag::ext_enum_too_large, diag::ext_enumerator_increment_too_large, -1,
  /* DiagArray337 */ diag::warn_cdtor_function_try_handler_mem_expr, diag::warn_exception_caught_by_earlier_handler, diag::warn_throw_in_noexcept_func, -1,
  /* DiagArray338 */ diag::ext_excess_initializers, diag::ext_excess_initializers_for_sizeless_type, diag::ext_excess_initializers_in_char_array_initializer, diag::ext_initializer_string_for_char_array_too_long, -1,
  /* DiagArray339 */ diag::warn_anyx86_excessive_regsave, -1,
  /* DiagArray340 */ diag::warn_exit_time_destructor, -1,
  /* DiagArray341 */ diag::warn_defined_in_function_type_macro, diag::warn_defined_in_object_type_macro, -1,
  /* DiagArray342 */ diag::warn_experimental_header_unit, -1,
  /* DiagArray343 */ diag::warn_openmp_incomplete, -1,
  /* DiagArray344 */ diag::warn_direct_initialize_call, diag::warn_direct_super_initialize_call, -1,
  /* DiagArray345 */ diag::warn_arc_strong_pointer_objc_pointer, -1,
  /* DiagArray346 */ diag::ext_explicit_specialization_storage_class, -1,
  /* DiagArray348 */ diag::warn_ext_type_aware_allocators, -1,
  /* DiagArray349 */ diag::warn_zero_size_struct_union_in_extern_c, -1,
  /* DiagArray350 */ diag::warn_extern_init, -1,
  /* DiagArray352 */ diag::warn_namespace_member_extra_qualification, -1,
  /* DiagArray353 */ diag::ext_extra_semi, diag::warn_extra_semi_after_mem_fn_def, -1,
  /* DiagArray354 */ diag::warn_null_statement, -1,
  /* DiagArray355 */ diag::ext_pp_extra_tokens_at_eol, diag::warn_omp_extra_tokens_at_eol, diag::warn_pp_extra_tokens_at_module_directive_eol, -1,
  /* DiagArray356 */ diag::warn_missing_symbol_graph_dir, -1,
  /* DiagArray357 */ diag::ext_template_spec_extra_headers, -1,
  /* DiagArray358 */ diag::warn_final_dtor_non_final_class, -1,
  /* DiagArray359 */ diag::warn_pragma_final_macro, -1,
  /* DiagArray360 */ diag::warn_fixedpoint_constant_overflow, -1,
  /* DiagArray361 */ diag::warn_flag_enum_constant_out_of_range, -1,
  /* DiagArray362 */ diag::ext_flexible_array_in_array, diag::ext_flexible_array_in_struct, -1,
  /* DiagArray363 */ diag::warn_impcast_float_integer, -1,
  /* DiagArray364 */ diag::warn_floatingpoint_eq, -1,
  /* DiagArray365 */ diag::warn_impcast_float_to_integer, diag::warn_impcast_float_to_integer_out_of_range, -1,
  /* DiagArray366 */ diag::warn_impcast_float_to_integer_zero, -1,
  /* DiagArray367 */ diag::warn_redundant_loop_iteration, diag::warn_variables_not_in_loop_body, -1,
  /* DiagArray368 */ diag::warn_format_P_no_precision, diag::warn_format_P_with_objc_pointer, diag::warn_format_argument_needs_cast, diag::warn_format_bool_as_character, diag::warn_format_cmp_modifierfor_mismatch, diag::warn_format_cmp_role_mismatch, diag::warn_format_cmp_sensitivity_mismatch, diag::warn_format_cmp_specifier_mismatch, diag::warn_format_conversion_argument_type_mismatch, diag::warn_format_invalid_annotation, diag::warn_format_invalid_positional_specifier, diag::warn_format_mix_positional_nonpositional_args, diag::warn_format_nonsensical_length, diag::warn_format_string_is_wide_literal, diag::warn_format_string_type_incompatible, diag::warn_format_zero_positional_specifier, diag::warn_missing_format_string, diag::warn_printf_ObjCflags_without_ObjCConversion, diag::warn_printf_asterisk_missing_arg, diag::warn_printf_asterisk_wrong_type, diag::warn_printf_empty_objc_flag, diag::warn_printf_format_string_contains_null_char, diag::warn_printf_format_string_not_null_terminated, diag::warn_printf_ignored_flag, diag::warn_printf_incomplete_specifier, diag::warn_printf_invalid_objc_flag, diag::warn_printf_narg_not_supported, diag::warn_printf_nonsensical_flag, diag::warn_printf_nonsensical_optional_amount, diag::warn_printf_positional_arg_exceeds_data_args, diag::warn_scanf_nonzero_width, diag::warn_scanf_scanlist_incomplete, -1,
  /* DiagArray369 */ diag::warn_printf_data_arg_not_used, -1,
  /* DiagArray370 */ diag::warn_format_cmp_specifier_arity, diag::warn_printf_insufficient_data_args, -1,
  /* DiagArray371 */ diag::warn_format_invalid_conversion, -1,
  /* DiagArray372 */ diag::warn_format_non_standard, diag::warn_format_non_standard_conversion_spec, diag::warn_format_non_standard_positional_arg, -1,
  /* DiagArray373 */ diag::warn_format_nonliteral, -1,
  /* DiagArray374 */ diag::warn_format_overflow, -1,
  /* DiagArray375 */ diag::warn_format_overflow_non_kprintf, -1,
  /* DiagArray376 */ diag::warn_format_argument_needs_cast_pedantic, diag::warn_format_cmp_specifier_mismatch_pedantic, diag::warn_format_conversion_argument_type_mismatch_pedantic, -1,
  /* DiagArray377 */ diag::warn_format_nonliteral_noargs, -1,
  /* DiagArray378 */ diag::warn_format_cmp_specifier_sign_mismatch, diag::warn_format_conversion_argument_type_mismatch_signedness, -1,
  /* DiagArray379 */ diag::warn_format_truncation, -1,
  /* DiagArray380 */ diag::warn_format_truncation_non_kprintf, -1,
  /* DiagArray381 */ diag::warn_format_conversion_argument_type_mismatch_confusion, -1,
  /* DiagArray383 */ diag::warn_empty_format_string, -1,
  /* DiagArray385 */ diag::warn_fortify_scanf_overflow, diag::warn_fortify_source_overflow, diag::warn_fortify_source_size_mismatch, diag::warn_fortify_strlen_overflow, -1,
  /* DiagArray386 */ diag::warn_four_char_character_literal, -1,
  /* DiagArray387 */ diag::warn_frame_address, -1,
  /* DiagArray388 */ diag::warn_fe_backend_frame_larger_than, diag::warn_fe_frame_larger_than, -1,
  /* DiagArray390 */ diag::warn_framework_include_private_from_public, -1,
  /* DiagArray391 */ diag::warn_free_nonheap_object, -1,
  /* DiagArray392 */ diag::ext_enum_friend, -1,
  /* DiagArray393 */ diag::warn_function_def_in_objc_container, -1,
  /* DiagArray394 */ diag::warn_mismatched_func_effect_override, diag::warn_mismatched_func_effect_redeclaration, -1,
  /* DiagArray395 */ diag::warn_conflicting_func_effect_override, diag::warn_conflicting_func_effects, diag::warn_func_effect_calls_expr_without_effect, diag::warn_func_effect_calls_func_without_effect, diag::warn_func_effect_violation, diag::warn_invalid_add_func_effects, -1,
  /* DiagArray396 */ diag::warn_dispatch_body_ignored, diag::warn_invalid_default_version_priority, diag::warn_multiversion_duplicate_entries, diag::warn_target_clone_duplicate_options, diag::warn_target_clone_no_impact_options, diag::warn_unreachable_version, diag::warn_version_priority_out_of_range, -1,
  /* DiagArray397 */ diag::warn_drv_fuse_ld_path, -1,
  /* DiagArray400 */ diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_warn_gnu_final, diag::warn_attribute_on_function_definition, diag::warn_break_binds_to_switch, diag::warn_cleanup_ext, diag::warn_gcc_attribute_location, diag::warn_gcc_ignores_type_attr, diag::warn_gcc_requires_variadic_function, diag::warn_gcc_variable_decl_in_for_loop, diag::warn_loop_ctrl_binds_to_inner, -1,
  /* DiagArray401 */ diag::warn_drv_gcc_install_dir_libstdcxx, -1,
  /* DiagArray402 */ diag::warn_global_constructor, diag::warn_global_destructor, -1,
  /* DiagArray403 */ diag::warn_drv_global_isel_incomplete, diag::warn_drv_global_isel_incomplete_opt, -1,
  /* DiagArray405 */ diag::ext_alignof_expr, -1,
  /* DiagArray406 */ diag::ext_gnu_anonymous_struct, -1,
  /* DiagArray407 */ diag::ext_array_init_parens, -1,
  /* DiagArray408 */ diag::ext_auto_type, -1,
  /* DiagArray410 */ diag::ext_gnu_case_range, -1,
  /* DiagArray411 */ diag::ext_integer_complex, -1,
  /* DiagArray412 */ diag::ext_array_init_copy, -1,
  /* DiagArray413 */ diag::ext_gnu_conditional_expr, -1,
  /* DiagArray414 */ diag::ext_gnu_array_range, diag::ext_gnu_missing_equal_designator, diag::ext_gnu_old_style_field_designator, -1,
  /* DiagArray416 */ diag::ext_empty_struct_union, diag::ext_flexible_array_empty_aggregate_gnu, diag::ext_no_named_members_in_struct_union, -1,
  /* DiagArray417 */ diag::ext_flexible_array_init, -1,
  /* DiagArray418 */ diag::ext_flexible_array_union_gnu, -1,
  /* DiagArray419 */ diag::ext_expr_not_ice, diag::ext_in_class_initializer_non_constant, diag::ext_vla_folded_to_constant, -1,
  /* DiagArray420 */ diag::ext_gnu_imaginary_constant, -1,
  /* DiagArray421 */ diag::ext_pp_include_next_directive, -1,
  /* DiagArray422 */ diag::warn_gnu_inline_cplusplus_without_extern, -1,
  /* DiagArray423 */ diag::ext_gnu_address_of_label, diag::ext_gnu_indirect_goto, -1,
  /* DiagArray424 */ diag::ext_pp_gnu_line_directive, -1,
  /* DiagArray425 */ diag::warn_gnu_null_ptr_arith, -1,
  /* DiagArray427 */ diag::ext_gnu_counted_by_void_ptr, diag::ext_gnu_ptr_func_arith, diag::ext_gnu_subscript_void_type, diag::ext_gnu_void_ptr, -1,
  /* DiagArray428 */ diag::ext_forward_ref_enum_def, -1,
  /* DiagArray429 */ diag::ext_gnu_statement_expr, -1,
  /* DiagArray430 */ diag::ext_gnu_statement_expr_macro, -1,
  /* DiagArray431 */ diag::ext_in_class_initializer_float_type, -1,
  /* DiagArray432 */ diag::ext_string_literal_operator_template, -1,
  /* DiagArray433 */ diag::ext_typecheck_cast_to_union, -1,
  /* DiagArray434 */ diag::ext_variable_sized_type_in_struct, -1,
  /* DiagArray435 */ diag::ext_pp_line_zero, -1,
  /* DiagArray436 */ diag::ext_paste_comma, -1,
  /* DiagArray437 */ diag::warn_maybe_capture_bad_target_this_ptr, -1,
  /* DiagArray438 */ diag::warn_hlsl_groupshared_init, -1,
  /* DiagArray439 */ diag::warn_header_guard, -1,
  /* DiagArray440 */ diag::warn_using_directive_in_header, -1,
  /* DiagArray441 */ diag::warn_excess_precision_not_supported, -1,
  /* DiagArray442 */ diag::warn_hip_deprecated_builtin, -1,
  /* DiagArray443 */ diag::warn_hip_omp_target_directives, -1,
  /* DiagArray444 */ diag::warn_ignored_hip_only_option, -1,
  /* DiagArray445 */ diag::ext_hlsl_auto_type_specifier, -1,
  /* DiagArray446 */ diag::warn_hlsl_availability, diag::warn_hlsl_availability_unavailable, diag::warn_hlsl_groupshared_202x, diag::warn_hlsl_groupshared_inout, -1,
  /* DiagArray447 */ diag::warn_hlsl_langstd_minimal, -1,
  /* DiagArray448 */ diag::warn_hlsl_assigning_local_resource_is_not_unique, -1,
  /* DiagArray449 */ diag::ext_hlsl_access_specifiers, diag::ext_hlsl_lambda, -1,
  /* DiagArray450 */ diag::warn_hlsl_implicit_binding, -1,
  /* DiagArray451 */ diag::warn_condition_is_idiomatic_assignment, -1,
  /* DiagArray452 */ diag::ext_cannot_use_trivial_abi, diag::warn_alias_to_weak_alias, diag::warn_alias_with_section, diag::warn_aligned_attr_underaligned, diag::warn_attr_abi_tag_namespace, diag::warn_attr_dllexport_explicit_inst_def_mismatch, diag::warn_attribute_after_definition_ignored, diag::warn_attribute_cmse_entry_static, diag::warn_attribute_exclude_from_explicit_instantiation_local_class, diag::warn_attribute_form_ignored, diag::warn_attribute_has_no_effect_on_compile_time_if, diag::warn_attribute_has_no_effect_on_infinite_loop, diag::warn_attribute_hybrid_patchable_non_extern, diag::warn_attribute_iboutlet, diag::warn_attribute_ignored, diag::warn_attribute_ignored_for_field_of_type, diag::warn_attribute_ignored_no_calls_in_stmt, diag::warn_attribute_ignored_non_function_pointer, diag::warn_attribute_ignored_on_inline, diag::warn_attribute_ignored_on_non_definition, diag::warn_attribute_invalid_on_definition, diag::warn_attribute_needs_aggregate, diag::warn_attribute_no_decl, diag::warn_attribute_non_character_array, diag::warn_attribute_nonnull_no_pointers, diag::warn_attribute_nonnull_parm_no_args, diag::warn_attribute_not_on_decl, diag::warn_attribute_on_void_param, diag::warn_attribute_pointer_or_reference_only, diag::warn_attribute_pointers_only, diag::warn_attribute_precede_definition, diag::warn_attribute_return_pointers_only, diag::warn_attribute_return_pointers_refs_only, diag::warn_attribute_return_span_only, diag::warn_attribute_sentinel_named_arguments, diag::warn_attribute_sentinel_not_variadic, diag::warn_attribute_type_not_supported, diag::warn_attribute_type_not_supported_global, diag::warn_attribute_unknown_visibility, diag::warn_attribute_void_function_method, diag::warn_attribute_weak_on_field, diag::warn_attribute_weak_on_local, diag::warn_attribute_wrong_decl_type, diag::warn_attribute_wrong_decl_type_str, diag::warn_attributes_likelihood_ifstmt_conflict, diag::warn_block_literal_attributes_on_omitted_return_type, diag::warn_cconv_unsupported, diag::warn_const_attr_with_pure_attr, diag::warn_cuda_maxclusterrank_sm_90, diag::warn_cxx11_gnu_attribute_on_type, diag::warn_declspec_allocator_nonpointer, diag::warn_declspec_attribute_ignored, diag::warn_deprecated_anonymous_namespace, diag::warn_deprecated_ignored_on_using, diag::warn_dllattr_ignored_exclusion_takes_precedence, diag::warn_dllexport_inherited_ctor_unsupported, diag::warn_dllexport_on_decl_ignored, diag::warn_dllimport_dropped_from_inline_function, diag::warn_duplicate_attribute, diag::warn_duplicate_attribute_exact, diag::warn_function_attribute_ignored_in_stmt, diag::warn_function_stmt_attribute_precedence, diag::warn_gc_attribute_weak_on_local, diag::warn_gnu_inline_attribute_requires_inline, diag::warn_ignored_ms_inheritance, diag::warn_ignored_objc_externally_retained, diag::warn_import_on_definition, diag::warn_internal_linkage_local_storage, diag::warn_interrupt_signal_attribute_invalid, diag::warn_microsoft_qualifiers_ignored, diag::warn_mig_server_routine_does_not_return_kern_return_t, diag::warn_mismatched_import, diag::warn_mmap_unknown_attribute, diag::warn_nocf_check_attribute_ignored, diag::warn_noderef_on_non_pointer_or_array, diag::warn_nothrow_attribute_ignored, diag::warn_ns_attribute_wrong_parameter_type, diag::warn_ns_attribute_wrong_return_type, diag::warn_objc_direct_ignored, diag::warn_objc_direct_property_ignored, diag::warn_opencl_attr_deprecated_ignored, diag::warn_pure_function_returns_void, diag::warn_require_const_init_added_too_late, diag::warn_riscv_repeated_interrupt_attribute, diag::warn_stack_protection_ignore_attribute, diag::warn_stmt_attribute_ignored_in_function, diag::warn_sycl_kernel_invalid_template_param_type, diag::warn_sycl_kernel_num_of_function_params, diag::warn_sycl_kernel_num_of_template_params, diag::warn_sycl_kernel_return_type, diag::warn_transparent_union_attribute_field_size_align, diag::warn_transparent_union_attribute_floating, diag::warn_transparent_union_attribute_not_definition, diag::warn_transparent_union_attribute_zero_fields, diag::warn_type_attribute_wrong_type, diag::warn_unhandled_ms_attribute_ignored, diag::warn_unsupported_target_attribute, diag::warn_unused_result_typedef_unsupported_spelling, diag::warn_wrong_clang_attr_namespace, -1,
  /* DiagArray453 */ diag::warn_missing_sdksettings_for_availability_checking, -1,
  /* DiagArray454 */ diag::warn_qual_base_type, -1,
  /* DiagArray455 */ diag::warn_drv_pch_ignoring_gch_dir, diag::warn_drv_pch_ignoring_gch_file, -1,
  /* DiagArray456 */ diag::warn_drv_unsupported_opt_for_target, diag::warn_ignored_gcc_optimization, -1,
  /* DiagArray457 */ diag::warn_pragma_intrinsic_builtin, -1,
  /* DiagArray459 */ diag::warn_clause_expected_string, diag::warn_failed_to_resolve_pragma, diag::warn_pargma_push_pop_macro_empty_string, diag::warn_pragma_align_expected_equal, diag::warn_pragma_align_invalid_option, diag::warn_pragma_comment_ignored, diag::warn_pragma_debug_dependent_argument, diag::warn_pragma_debug_missing_argument, diag::warn_pragma_debug_missing_command, diag::warn_pragma_debug_unable_to_find_module, diag::warn_pragma_debug_unexpected_argument, diag::warn_pragma_debug_unexpected_command, diag::warn_pragma_debug_unknown_module, diag::warn_pragma_expected_action_or_r_paren, diag::warn_pragma_expected_colon, diag::warn_pragma_expected_colon_r_paren, diag::warn_pragma_expected_comma, diag::warn_pragma_expected_identifier, diag::warn_pragma_expected_init_seg, diag::warn_pragma_expected_integer, diag::warn_pragma_expected_lparen, diag::warn_pragma_expected_non_wide_string, diag::warn_pragma_expected_predicate, diag::warn_pragma_expected_punc, diag::warn_pragma_expected_rparen, diag::warn_pragma_expected_section_label_or_name, diag::warn_pragma_expected_section_name, diag::warn_pragma_expected_section_push_pop_or_name, diag::warn_pragma_expected_string, diag::warn_pragma_extra_tokens_at_eol, diag::warn_pragma_force_cuda_host_device_bad_arg, diag::warn_pragma_fp_ignored, diag::warn_pragma_init_seg_unsupported_target, diag::warn_pragma_invalid_action, diag::warn_pragma_invalid_argument, diag::warn_pragma_invalid_specific_action, diag::warn_pragma_missing_argument, diag::warn_pragma_ms_fenv_access, diag::warn_pragma_ms_struct, diag::warn_pragma_not_applied, diag::warn_pragma_not_applied_to_defined_symbol, diag::warn_pragma_options_align_reset_failed, diag::warn_pragma_options_expected_align, diag::warn_pragma_pack_invalid_alignment, diag::warn_pragma_pack_malformed, diag::warn_pragma_pop_failed, diag::warn_pragma_pop_macro_no_push, diag::warn_pragma_unknown_extension, diag::warn_pragma_unsupported_action, diag::warn_pragma_unsupported_extension, diag::warn_pragma_unused_expected_var, diag::warn_pragma_unused_expected_var_arg, diag::warn_pragma_unused_undeclared_var, diag::warn_stdc_unknown_rounding_mode, -1,
  /* DiagArray460 */ diag::ext_typecheck_function_qualifiers_unspecified, diag::warn_arc_lifetime_result_type, diag::warn_block_literal_qualifiers_on_omitted_return_type, diag::warn_qual_return_type, diag::warn_typecheck_function_qualifiers_ignored, -1,
  /* DiagArray461 */ diag::warn_typecheck_reference_qualifiers, -1,
  /* DiagArray463 */ diag::warn_auto_implicit_atomic_property, diag::warn_implicit_atomic_property, -1,
  /* DiagArray464 */ diag::warn_impcast_integer_float_precision_constant, -1,
  /* DiagArray465 */ diag::warn_impcast_floating_point_to_bool, -1,
  /* DiagArray466 */ diag::warn_impcast_different_enum_types, -1,
  /* DiagArray467 */ diag::ext_implicit_exception_spec_mismatch, -1,
  /* DiagArray468 */ diag::warn_unannotated_fallthrough, -1,
  /* DiagArray469 */ diag::warn_unannotated_fallthrough_per_function, -1,
  /* DiagArray470 */ diag::warn_impcast_fixed_point_range, -1,
  /* DiagArray471 */ diag::warn_impcast_float_precision, diag::warn_impcast_float_result_precision, -1,
  /* DiagArray472 */ diag::ext_implicit_function_decl_c99, diag::ext_implicit_lib_function_decl, diag::ext_implicit_lib_function_decl_c99, diag::warn_builtin_unknown, diag::warn_implicit_function_decl, -1,
  /* DiagArray473 */ diag::ext_missing_type_specifier, diag::ext_param_not_declared, diag::warn_missing_type_specifier, -1,
  /* DiagArray474 */ diag::warn_impcast_high_order_zero_bits, diag::warn_impcast_integer_precision, -1,
  /* DiagArray475 */ diag::warn_impcast_integer_precision_on_negation, -1,
  /* DiagArray476 */ diag::warn_impcast_int_to_enum, -1,
  /* DiagArray477 */ diag::warn_impcast_integer_float_precision, -1,
  /* DiagArray478 */ diag::warn_impcast_overflow_behavior, -1,
  /* DiagArray479 */ diag::warn_impcast_overflow_behavior_assignment, -1,
  /* DiagArray480 */ diag::warn_impcast_overflow_behavior_assignment_pedantic, -1,
  /* DiagArray481 */ diag::warn_obt_discarded_at_function_boundary, -1,
  /* DiagArray482 */ diag::warn_obt_discarded_at_function_boundary_pedantic, -1,
  /* DiagArray483 */ diag::warn_impcast_overflow_behavior_pedantic, -1,
  /* DiagArray484 */ diag::warn_implicitly_retains_self, -1,
  /* DiagArray485 */ diag::warn_compatible_implicit_pointer_conv, -1,
  /* DiagArray486 */ diag::ext_integer_literal_too_large_for_signed, -1,
  /* DiagArray488 */ diag::warn_import_implementation_partition_unit_in_interface_unit, -1,
  /* DiagArray489 */ diag::ext_pp_import_directive, -1,
  /* DiagArray490 */ diag::warn_inaccessible_base_class, -1,
  /* DiagArray491 */ diag::warn_pp_include_angled_in_module_purview, -1,
  /* DiagArray492 */ diag::pp_include_next_absolute_path, -1,
  /* DiagArray493 */ diag::pp_include_next_in_primary, -1,
  /* DiagArray494 */ diag::warn_deep_exception_specs_differ, diag::warn_incompatible_exception_specs, -1,
  /* DiagArray495 */ diag::ext_typecheck_convert_incompatible_function_pointer, -1,
  /* DiagArray496 */ diag::warn_typecheck_convert_incompatible_function_pointer_strict, -1,
  /* DiagArray497 */ diag::warn_redecl_library_builtin, -1,
  /* DiagArray498 */ diag::warn_section_msvc_compat, -1,
  /* DiagArray499 */ diag::warn_cxx_ms_struct, diag::warn_npot_ms_struct, -1,
  /* DiagArray500 */ diag::ext_typecheck_convert_incompatible_pointer, -1,
  /* DiagArray501 */ diag::ext_typecheck_convert_discards_overflow_behavior, -1,
  /* DiagArray502 */ diag::ext_nested_pointer_qualifier_mismatch, diag::ext_typecheck_convert_discards_qualifiers, diag::warn_bad_cxx_cast_nested_pointer_addr_space, -1,
  /* DiagArray503 */ diag::warn_property_types_are_incompatible, -1,
  /* DiagArray504 */ diag::warn_incompatible_sysroot, -1,
  /* DiagArray505 */ diag::warn_mmap_incomplete_framework_module_declaration, -1,
  /* DiagArray506 */ diag::warn_undef_method_impl, -1,
  /* DiagArray508 */ diag::warn_implicit_decl_no_jmp_buf, -1,
  /* DiagArray509 */ diag::warn_missing_submodule, diag::warn_mmap_umbrella_dir_not_found, diag::warn_uncovered_module_header, -1,
  /* DiagArray510 */ diag::warn_redeclaration_without_attribute_prev_attribute_ignored, diag::warn_redeclaration_without_import_attribute, -1,
  /* DiagArray511 */ diag::warn_inconsistent_destructor_marked_not_override_overriding, -1,
  /* DiagArray512 */ diag::warn_inconsistent_function_marked_not_override_overriding, -1,
  /* DiagArray513 */ diag::ext_increment_bool, -1,
  /* DiagArray514 */ diag::warn_infinite_recursive_function, -1,
  /* DiagArray515 */ diag::warn_init_priority_reserved, -1,
  /* DiagArray517 */ diag::ext_initializer_overrides, diag::ext_initializer_union_overrides, diag::warn_initializer_overrides, -1,
  /* DiagArray518 */ diag::ext_out_of_line_qualified_id_type_names_constructor, -1,
  /* DiagArray520 */ diag::warn_fe_inline_asm, -1,
  /* DiagArray521 */ diag::warn_inline_namespace_reopened_noninline, -1,
  /* DiagArray522 */ diag::ext_operator_new_delete_declared_inline, -1,
  /* DiagArray523 */ diag::warn_dylib_symbol_flags_mismatch, diag::warn_glob_did_not_match, diag::warn_header_availability_mismatch, diag::warn_header_hidden_symbol, diag::warn_header_symbol_flags_mismatch, diag::warn_header_symbol_missing, diag::warn_library_hidden_symbol, diag::warn_library_missing_symbol, diag::warn_no_such_excluded_header_file, diag::warn_platform_mismatch, diag::warn_rpaths_mismatch, diag::warn_rpaths_missing, diag::warn_target, -1,
  /* DiagArray524 */ diag::warn_explicit_instantiation_after_specialization, -1,
  /* DiagArray525 */ diag::ext_typecheck_convert_int_pointer, diag::ext_typecheck_convert_pointer_int, -1,
  /* DiagArray527 */ diag::warn_enum_constant_in_bool_context, diag::warn_left_shift_in_bool_context, -1,
  /* DiagArray528 */ diag::warn_int_to_pointer_cast, -1,
  /* DiagArray529 */ diag::warn_int_to_void_pointer_cast, -1,
  /* DiagArray530 */ diag::warn_integer_constant_overflow, -1,
  /* DiagArray531 */ diag::warn_drv_missing_plugin_arg, diag::warn_drv_missing_plugin_name, diag::warn_drv_msp430_hwmult_mismatch, diag::warn_drv_msp430_hwmult_no_device, diag::warn_drv_msp430_hwmult_unsupported, diag::warn_drv_object_size_disabled_O0, diag::warn_drv_optimization_value, diag::warn_fe_backend_invalid_feature_flag, diag::warn_fe_backend_readonly_feature_flag, diag::warn_target_unrecognized_env, diag::warn_target_unsupported_extension, -1,
  /* DiagArray532 */ diag::ext_constexpr_function_never_constant_expr, -1,
  /* DiagArray533 */ diag::warn_invalid_feature_combination, -1,
  /* DiagArray534 */ diag::warn_invalid_asm_cast_lvalue, -1,
  /* DiagArray535 */ diag::warn_iboutlet_object_type, diag::warn_iboutletcollection_property_assign, -1,
  /* DiagArray536 */ diag::warn_invalid_initializer_from_system_header, -1,
  /* DiagArray537 */ diag::warn_invalid_ios_deployment_target, -1,
  /* DiagArray538 */ diag::warn_attribute_no_builtin_invalid_builtin_name, -1,
  /* DiagArray539 */ diag::warn_noreturn_coroutine, diag::warn_noreturn_function_has_return_expr, diag::warn_noreturn_has_return_expr, -1,
  /* DiagArray540 */ diag::ext_offsetof_non_pod_type, diag::ext_offsetof_non_standardlayout_type, -1,
  /* DiagArray541 */ diag::warn_drv_unable_to_find_directory_expected, -1,
  /* DiagArray542 */ diag::ext_partial_spec_not_more_specialized_than_primary, -1,
  /* DiagArray544 */ diag::ext_empty_character, diag::ext_unterminated_char_or_string, -1,
  /* DiagArray545 */ diag::warn_bad_character_encoding, diag::warn_bad_string_encoding, -1,
  /* DiagArray546 */ diag::warn_invalid_specialization, -1,
  /* DiagArray547 */ diag::warn_user_defined_msg_constexpr, -1,
  /* DiagArray548 */ diag::ext_pp_bad_paste_ms, -1,
  /* DiagArray549 */ diag::warn_unevaluated_string_prefix, -1,
  /* DiagArray550 */ diag::warn_invalid_utf8_in_comment, -1,
  /* DiagArray551 */ diag::warn_availability_invalid_os_version, -1,
  /* DiagArray552 */ diag::warn_cpp_compat_goto_into_protected_scope, diag::warn_cpp_compat_indirect_goto_in_protected_scope, diag::warn_cpp_compat_switch_into_protected_scope, -1,
  /* DiagArray553 */ diag::warn_jump_out_of_seh_finally, -1,
  /* DiagArray554 */ diag::ext_keyword_as_ident, -1,
  /* DiagArray555 */ diag::warn_pp_macro_hides_keyword, -1,
  /* DiagArray556 */ diag::ext_param_promoted_not_compatible_with_prototype, -1,
  /* DiagArray557 */ diag::ext_token_used, -1,
  /* DiagArray558 */ diag::warn_parameter_size, diag::warn_return_value_size, -1,
  /* DiagArray559 */ diag::warn_hlsl_deprecated_register_type_b, diag::warn_hlsl_deprecated_register_type_i, diag::warn_hlsl_register_type_c_packoffset, diag::warn_hlsl_user_defined_type_missing_member, -1,
  /* DiagArray563 */ diag::warn_lifetime_safety_cross_tu_param_suggestion, diag::warn_lifetime_safety_cross_tu_this_suggestion, -1,
  /* DiagArray564 */ diag::warn_lifetime_safety_dangling_field, -1,
  /* DiagArray565 */ diag::warn_lifetime_safety_dangling_field_moved, -1,
  /* DiagArray566 */ diag::warn_lifetime_safety_dangling_global, -1,
  /* DiagArray567 */ diag::warn_lifetime_safety_dangling_global_moved, -1,
  /* DiagArray568 */ diag::warn_lifetime_safety_intra_tu_param_suggestion, diag::warn_lifetime_safety_intra_tu_this_suggestion, -1,
  /* DiagArray569 */ diag::warn_lifetime_safety_invalidation, -1,
  /* DiagArray570 */ diag::warn_lifetime_safety_noescape_escapes, -1,
  /* DiagArray572 */ diag::warn_lifetime_safety_return_stack_addr, -1,
  /* DiagArray573 */ diag::warn_lifetime_safety_return_stack_addr_moved, -1,
  /* DiagArray576 */ diag::warn_lifetime_safety_use_after_scope, -1,
  /* DiagArray577 */ diag::warn_lifetime_safety_use_after_scope_moved, -1,
  /* DiagArray579 */ diag::warn_fe_linking_module, -1,
  /* DiagArray580 */ diag::warn_impcast_literal_float_to_integer, diag::warn_impcast_literal_float_to_integer_out_of_range, -1,
  /* DiagArray581 */ diag::warn_float_compare_literal, diag::warn_float_overflow, diag::warn_float_underflow, -1,
  /* DiagArray582 */ diag::ext_template_arg_local_type, -1,
  /* DiagArray583 */ diag::warn_logical_not_on_lhs_of_check, -1,
  /* DiagArray584 */ diag::warn_logical_and_in_logical_or, -1,
  /* DiagArray585 */ diag::ext_c99_longlong, -1,
  /* DiagArray587 */ diag::ext_pp_macro_redef, -1,
  /* DiagArray588 */ diag::ext_main_invalid_linkage_specification, diag::ext_main_used, diag::ext_noreturn_main, diag::ext_variadic_main, diag::warn_main_one_arg, diag::warn_main_redefined, diag::warn_main_returns_bool_literal, diag::warn_static_main, -1,
  /* DiagArray589 */ diag::warn_main_in_named_module, -1,
  /* DiagArray590 */ diag::ext_main_no_return, diag::ext_main_returns_nonint, -1,
  /* DiagArray591 */ diag::warn_has_warning_invalid_option, -1,
  /* DiagArray592 */ diag::ext_many_braces_around_init, -1,
  /* DiagArray593 */ diag::warn_drv_math_errno_enabled_after_veclib, -1,
  /* DiagArray594 */ diag::ext_mathematical_notation, -1,
  /* DiagArray595 */ diag::warn_hlsl_impcast_matrix_truncation, diag::warn_impcast_matrix_scalar, -1,
  /* DiagArray597 */ diag::warn_max_tokens, diag::warn_max_tokens_total, -1,
  /* DiagArray598 */ diag::warn_max_unsigned_zero, -1,
  /* DiagArray599 */ diag::warn_suspicious_sizeof_memset, -1,
  /* DiagArray600 */ diag::warn_memsize_comparison, -1,
  /* DiagArray601 */ diag::warn_non_contravariant_param_types, diag::warn_non_covariant_ret_types, -1,
  /* DiagArray603 */ diag::ext_ms_abstract_keyword, -1,
  /* DiagArray604 */ diag::ext_anonymous_record_with_type, diag::ext_ms_anonymous_record, -1,
  /* DiagArray605 */ diag::ext_ms_cast_fn_obj, diag::ext_ms_impcast_fn_obj, -1,
  /* DiagArray606 */ diag::ext_charize_microsoft, -1,
  /* DiagArray607 */ diag::ext_comment_paste_microsoft, -1,
  /* DiagArray608 */ diag::ext_default_init_const, -1,
  /* DiagArray609 */ diag::ext_pp_operator_used_as_macro_name, -1,
  /* DiagArray610 */ diag::ext_param_default_argument_redefinition, -1,
  /* DiagArray611 */ diag::warn_attribute_section_drectve, -1,
  /* DiagArray612 */ diag::ext_ms_c_empty_enum_type, -1,
  /* DiagArray613 */ diag::ext_ctrl_z_eof_microsoft, -1,
  /* DiagArray614 */ diag::ext_ms_forward_ref_enum, -1,
  /* DiagArray615 */ diag::ext_enumerator_too_large, -1,
  /* DiagArray616 */ diag::ext_ellipsis_exception_spec, diag::ext_incomplete_in_exception_spec, diag::ext_mismatched_exception_spec, diag::ext_mismatched_exception_spec_explicit_instantiation, diag::ext_override_exception_spec, -1,
  /* DiagArray617 */ diag::warn_microsoft_dependent_exists, -1,
  /* DiagArray618 */ diag::ext_ms_explicit_constructor_call, -1,
  /* DiagArray619 */ diag::warn_member_extra_qualification, -1,
  /* DiagArray620 */ diag::ext_ms_c_enum_fixed_underlying_type, -1,
  /* DiagArray621 */ diag::ext_flexible_array_empty_aggregate_ms, diag::ext_flexible_array_union_ms, -1,
  /* DiagArray622 */ diag::ext_goto_into_protected_scope, -1,
  /* DiagArray623 */ diag::ext_ms_ambiguous_direct_base, -1,
  /* DiagArray624 */ diag::ext_pp_include_search_ms, -1,
  /* DiagArray625 */ diag::ext_init_from_predefined, -1,
  /* DiagArray626 */ diag::warn_ms_inline_non_function, -1,
  /* DiagArray627 */ diag::ext_mutable_reference, -1,
  /* DiagArray628 */ diag::ext_pure_function_definition, -1,
  /* DiagArray629 */ diag::ext_static_non_static, -1,
  /* DiagArray630 */ diag::ext_ms_sealed_keyword, -1,
  /* DiagArray631 */ diag::ext_string_literal_from_predefined, -1,
  /* DiagArray632 */ diag::ext_explicit_instantiation_duplicate, diag::ext_found_in_dependent_base, diag::ext_found_later_in_class, diag::ext_ms_delayed_template_argument, diag::ext_ms_deref_template_argument, diag::ext_ms_template_spec_redecl_out_of_scope, diag::ext_ms_template_type_arg_missing_typename, diag::ext_static_out_of_line, diag::ext_undeclared_unqual_id_with_dependent_base, diag::ext_unqualified_base_class, -1,
  /* DiagArray633 */ diag::ext_template_param_shadow, -1,
  /* DiagArray634 */ diag::ext_union_member_of_reference_type, -1,
  /* DiagArray635 */ diag::ext_friend_tag_redecl_outside_namespace, -1,
  /* DiagArray636 */ diag::ext_ms_using_declaration_inaccessible, -1,
  /* DiagArray637 */ diag::ext_pseudo_dtor_on_void, -1,
  /* DiagArray638 */ diag::warn_profile_data_misexpect, -1,
  /* DiagArray639 */ diag::warn_misleading_indentation, -1,
  /* DiagArray640 */ diag::warn_mismatched_delete_new, -1,
  /* DiagArray641 */ diag::warn_conflicting_param_types, -1,
  /* DiagArray642 */ diag::warn_conflicting_ret_types, -1,
  /* DiagArray643 */ diag::warn_struct_class_previous_tag_mismatch, diag::warn_struct_class_tag_mismatch, -1,
  /* DiagArray644 */ diag::warn_missing_braces, -1,
  /* DiagArray645 */ diag::ext_constinit_missing, -1,
  /* DiagArray646 */ diag::ext_no_declarators, diag::ext_standalone_specifier, diag::ext_typedef_without_a_name, diag::warn_standalone_specifier, -1,
  /* DiagArray647 */ diag::warn_missing_designated_field_initializers, -1,
  /* DiagArray648 */ diag::ext_missing_exception_specification, -1,
  /* DiagArray649 */ diag::warn_missing_field_initializers, -1,
  /* DiagArray650 */ diag::warn_missing_format_attribute, -1,
  /* DiagArray651 */ diag::warn_missing_include_dirs, -1,
  /* DiagArray652 */ diag::warn_missing_method_return_type, -1,
  /* DiagArray653 */ diag::warn_drv_missing_multilib, -1,
  /* DiagArray654 */ diag::warn_overriding_method_missing_noescape, -1,
  /* DiagArray655 */ diag::warn_suggest_noreturn_block, diag::warn_suggest_noreturn_function, -1,
  /* DiagArray656 */ diag::warn_cconv_knr, -1,
  /* DiagArray657 */ diag::warn_missing_prototype, -1,
  /* DiagArray658 */ diag::warn_missing_selector_name, -1,
  /* DiagArray659 */ diag::warn_missing_sysroot, -1,
  /* DiagArray660 */ diag::missing_template_arg_list_after_template_kw, -1,
  /* DiagArray661 */ diag::warn_missing_variable_declarations, -1,
  /* DiagArray662 */ diag::warn_omp_assume_attribute_string_unknown_suggested, -1,
  /* DiagArray663 */ diag::warn_hlsl_packoffset_mix, -1,
  /* DiagArray664 */ diag::warn_mmap_deprecated_symlink_to_modular_header, -1,
  /* DiagArray665 */ diag::remark_module_build, diag::remark_module_build_done, diag::remark_module_lock_failure, diag::remark_module_lock_timeout, -1,
  /* DiagArray666 */ diag::warn_module_conflict, diag::warn_module_system_bit_conflict, -1,
  /* DiagArray667 */ diag::warn_ast_file_config_mismatch, -1,
  /* DiagArray668 */ diag::warn_duplicate_module_file_extension, -1,
  /* DiagArray669 */ diag::warn_module_file_mapping_mismatch, -1,
  /* DiagArray670 */ diag::remark_module_import, -1,
  /* DiagArray671 */ diag::ext_module_import_in_extern_c, -1,
  /* DiagArray672 */ diag::remark_pp_include_directive_modular_translation, -1,
  /* DiagArray673 */ diag::remark_module_lock, -1,
  /* DiagArray674 */ diag::remark_mmap_load, diag::remark_mmap_load_module, diag::remark_mmap_parse, -1,
  /* DiagArray675 */ diag::warn_mmap_path_outside_directory, -1,
  /* DiagArray676 */ diag::remark_module_check_relocation, diag::remark_module_relocated, diag::remark_module_validation, -1,
  /* DiagArray677 */ diag::ext_equivalent_internal_linkage_decl_in_modules, -1,
  /* DiagArray678 */ diag::remark_modules_manifest_not_found, diag::remark_performing_driver_managed_module_build, diag::remark_printing_module_graph, diag::remark_using_modules_manifest, -1,
  /* DiagArray679 */ diag::ext_module_import_not_at_top_level_noop, -1,
  /* DiagArray682 */ diag::warn_ms_bitfield_mismatched_storage_packing, -1,
  /* DiagArray684 */ diag::warn_drv_msvc_not_found, -1,
  /* DiagArray685 */ diag::warn_drv_multi_gpu_arch, -1,
  /* DiagArray686 */ diag::warn_multichar_character_literal, -1,
  /* DiagArray687 */ diag::warn_drv_multilib_not_available_for_target, -1,
  /* DiagArray688 */ diag::warn_vbase_moved_multiple_times, -1,
  /* DiagArray689 */ diag::warn_fp_nan_inf_when_disabled, -1,
  /* DiagArray691 */ diag::ext_anonymous_record_with_anonymous_type, -1,
  /* DiagArray693 */ diag::warn_operator_new_returns_null, -1,
  /* DiagArray694 */ diag::warn_no_newline_eof, -1,
  /* DiagArray695 */ diag::warn_dereference_of_noderef_type, diag::warn_dereference_of_noderef_type_no_decl, diag::warn_noderef_to_dereferenceable_pointer, -1,
  /* DiagArray697 */ diag::ext_non_c_like_anon_struct_in_typedef, -1,
  /* DiagArray699 */ diag::warn_non_literal_null_pointer, -1,
  /* DiagArray700 */ diag::warn_non_modular_include_in_framework_module, -1,
  /* DiagArray701 */ diag::warn_non_modular_include_in_module, -1,
  /* DiagArray702 */ diag::warn_cannot_pass_non_pod_arg_to_vararg, diag::warn_non_pod_vararg_with_format_string, diag::warn_second_parameter_to_va_arg_not_pod, diag::warn_second_parameter_to_va_arg_ownership_qualified, -1,
  /* DiagArray703 */ diag::warn_alignment_not_power_of_two, -1,
  /* DiagArray704 */ diag::warn_non_virtual_dtor, -1,
  /* DiagArray705 */ diag::warn_null_arg, diag::warn_null_ret, -1,
  /* DiagArray707 */ diag::pp_nonportable_path, -1,
  /* DiagArray708 */ diag::pp_nonportable_path_separator, -1,
  /* DiagArray709 */ diag::warn_apinotes_private_case, -1,
  /* DiagArray710 */ diag::warn_apinotes_private_case_system, -1,
  /* DiagArray711 */ diag::warn_sycl_external_missing_on_first_decl, diag::warn_sycl_kernel_name_not_a_class_type, -1,
  /* DiagArray712 */ diag::pp_nonportable_system_path, -1,
  /* DiagArray713 */ diag::warn_neon_vector_initializer_non_portable, -1,
  /* DiagArray714 */ diag::warn_cstruct_memaccess, -1,
  /* DiagArray715 */ diag::warn_cxxstruct_memaccess, -1,
  /* DiagArray716 */ diag::warn_not_eliding_copy_on_return, -1,
  /* DiagArray717 */ diag::warn_nsconsumed_attribute_mismatch, -1,
  /* DiagArray718 */ diag::warn_nsreturns_retained_attribute_mismatch, -1,
  /* DiagArray719 */ diag::warn_null_in_arithmetic_operation, diag::warn_null_in_comparison_operation, -1,
  /* DiagArray720 */ diag::null_in_char_or_string, diag::null_in_file, -1,
  /* DiagArray721 */ diag::warn_impcast_null_pointer_to_integer, -1,
  /* DiagArray722 */ diag::warn_binding_null_to_reference, diag::warn_indirection_through_null, -1,
  /* DiagArray723 */ diag::warn_pointer_arith_null_ptr, -1,
  /* DiagArray724 */ diag::warn_pointer_sub_null_ptr, -1,
  /* DiagArray725 */ diag::warn_conflicting_nullability_attr_overriding_param_types, diag::warn_conflicting_nullability_attr_overriding_ret_types, diag::warn_mismatched_nullability_attr, diag::warn_null_resettable_setter, diag::warn_nullability_duplicate, -1,
  /* DiagArray726 */ diag::warn_nullability_missing, -1,
  /* DiagArray727 */ diag::warn_nullability_missing_array, -1,
  /* DiagArray728 */ diag::warn_nullability_declspec, -1,
  /* DiagArray729 */ diag::ext_nullability, -1,
  /* DiagArray730 */ diag::warn_nullability_inferred_on_nested_type, -1,
  /* DiagArray731 */ diag::warn_nullability_lost, -1,
  /* DiagArray732 */ diag::warn_offload_incompatible_redeclare, -1,
  /* DiagArray733 */ diag::warn_autosynthesis_property_ivar_match, -1,
  /* DiagArray734 */ diag::warn_impcast_constant_value_to_objc_bool, -1,
  /* DiagArray735 */ diag::warn_objc_boxing_invalid_utf8_string, -1,
  /* DiagArray736 */ diag::warn_objc_circular_container, -1,
  /* DiagArray738 */ diag::warn_objc_designated_init_missing_super_call, diag::warn_objc_designated_init_non_designated_init_call, diag::warn_objc_designated_init_non_super_designated_init_call, diag::warn_objc_implementation_missing_designated_init_override, diag::warn_objc_secondary_init_missing_init_call, diag::warn_objc_secondary_init_super_init_call, -1,
  /* DiagArray739 */ diag::warn_nsdictionary_duplicate_key, -1,
  /* DiagArray740 */ diag::warn_dup_category_def, -1,
  /* DiagArray741 */ diag::warn_superclass_variable_sized_type_not_at_end, diag::warn_variable_sized_ivar_visibility, -1,
  /* DiagArray742 */ diag::warn_forward_class_redefinition, -1,
  /* DiagArray743 */ diag::warn_ivars_in_interface, -1,
  /* DiagArray744 */ diag::warn_objc_literal_comparison, -1,
  /* DiagArray745 */ diag::warn_impcast_objective_c_literal_to_bool, diag::warn_objc_collection_literal_element, -1,
  /* DiagArray746 */ diag::warn_pp_objc_macro_redef_ignored, -1,
  /* DiagArray747 */ diag::warn_messaging_unqualified_id, -1,
  /* DiagArray748 */ diag::warn_class_method_not_found, diag::warn_class_method_not_found_with_typo, diag::warn_inst_method_not_found, diag::warn_instance_method_not_found_with_typo, diag::warn_instance_method_on_class_found, diag::warn_root_inst_method_not_found, -1,
  /* DiagArray749 */ diag::warn_missing_explicit_synthesis, -1,
  /* DiagArray750 */ diag::warn_objc_missing_super_call, -1,
  /* DiagArray751 */ diag::warn_multiple_method_decl, -1,
  /* DiagArray752 */ diag::warn_objc_property_retain_of_block, -1,
  /* DiagArray753 */ diag::warn_objc_pointer_cxx_catch_fragile, -1,
  /* DiagArray754 */ diag::warn_objc_property_assign_on_object, -1,
  /* DiagArray755 */ diag::warn_impl_required_for_class_property, diag::warn_impl_required_in_category_for_class_property, diag::warn_setter_getter_impl_required, diag::warn_setter_getter_impl_required_in_category, -1,
  /* DiagArray756 */ diag::warn_property_implicitly_mismatched, -1,
  /* DiagArray757 */ diag::warn_cocoa_naming_owned_rule, -1,
  /* DiagArray758 */ diag::warn_objc_property_default_assign_on_object, diag::warn_objc_property_no_assignment_attribute, -1,
  /* DiagArray759 */ diag::warn_autosynthesis_property_in_superclass, diag::warn_no_autosynthesis_property, diag::warn_no_autosynthesis_shared_ivar_property, -1,
  /* DiagArray760 */ diag::warn_category_method_impl_match, -1,
  /* DiagArray761 */ diag::warn_auto_synthesizing_protocol_property, -1,
  /* DiagArray762 */ diag::warn_objc_redundant_qualified_class_type, -1,
  /* DiagArray763 */ diag::warn_objc_readonly_property_has_setter, -1,
  /* DiagArray765 */ diag::warn_objc_redundant_literal_use, -1,
  /* DiagArray766 */ diag::warn_objc_root_class_missing, -1,
  /* DiagArray768 */ diag::warn_impcast_float_to_objc_signed_char_bool, -1,
  /* DiagArray769 */ diag::warn_impcast_int_to_objc_signed_char_bool, -1,
  /* DiagArray770 */ diag::warn_objc_string_literal_comparison, -1,
  /* DiagArray771 */ diag::warn_concatenated_nsarray_literal, -1,
  /* DiagArray772 */ diag::warn_objc_unsafe_perform_selector, -1,
  /* DiagArray773 */ diag::ext_cpp_octal_literal, -1,
  /* DiagArray774 */ diag::warn_odr_different_num_template_parameters, diag::warn_odr_different_template_parameter_kind, diag::warn_odr_field_type_inconsistent, diag::warn_odr_function_type_inconsistent, diag::warn_odr_ivar_type_inconsistent, diag::warn_odr_non_type_parameter_type_inconsistent, diag::warn_odr_objc_method_num_params_inconsistent, diag::warn_odr_objc_method_param_type_inconsistent, diag::warn_odr_objc_method_result_type_inconsistent, diag::warn_odr_objc_method_variadic_inconsistent, diag::warn_odr_objc_property_impl_kind_inconsistent, diag::warn_odr_objc_property_type_inconsistent, diag::warn_odr_objc_superclass_inconsistent, diag::warn_odr_objc_synthesize_ivar_inconsistent, diag::warn_odr_parameter_pack_non_pack, diag::warn_odr_tag_type_inconsistent, diag::warn_odr_tag_type_with_attributes, diag::warn_odr_variable_multiple_def, diag::warn_odr_variable_type_inconsistent, -1,
  /* DiagArray775 */ diag::warn_old_style_cast, -1,
  /* DiagArray778 */ diag::warn_acc_cache_var_not_outside_loop, -1,
  /* DiagArray779 */ diag::warn_acc_confusing_routine_name, -1,
  /* DiagArray780 */ diag::warn_acc_deprecated_alias_name, -1,
  /* DiagArray781 */ diag::ext_acc_array_section_use_device_declare, -1,
  /* DiagArray782 */ diag::warn_acc_if_self_conflict, -1,
  /* DiagArray783 */ diag::warn_acc_var_referenced_lacks_op, -1,
  /* DiagArray784 */ diag::warn_acc_var_referenced_non_const_array, -1,
  /* DiagArray785 */ diag::ext_opencl_ext_vector_type_rgba_selector, -1,
  /* DiagArray787 */ diag::ext_omp_attributes, -1,
  /* DiagArray788 */ diag::warn_omp_alignment_not_power_of_two, diag::warn_omp_allocate_thread_on_task_target_directive, diag::warn_omp_ctx_incompatible_property_for_selector, diag::warn_omp_ctx_incompatible_score_for_property, diag::warn_omp_ctx_incompatible_selector_for_set, diag::warn_omp_ctx_selector_without_properties, diag::warn_omp_declare_variant_ctx_mutiple_use, diag::warn_omp_declare_variant_ctx_not_a_property, diag::warn_omp_declare_variant_ctx_not_a_selector, diag::warn_omp_declare_variant_ctx_not_a_set, diag::warn_omp_declare_variant_expected, diag::warn_omp_declare_variant_string_literal_or_identifier, diag::warn_omp_gpu_unsupported_clause, diag::warn_omp_gpu_unsupported_modifier_for_clause, diag::warn_omp_linear_step_zero, diag::warn_omp_more_one_device_type_clause, diag::warn_omp_more_one_interop_type, diag::warn_omp_more_one_omp_all_memory, diag::warn_omp_redundant_fusion, diag::warn_omp_unknown_assumption_clause_missing_id, diag::warn_omp_unknown_assumption_clause_without_args, diag::warn_omp_used_different_allocator, -1,
  /* DiagArray789 */ diag::warn_omp_invalid_attribute_for_ompx_attributes, -1,
  /* DiagArray790 */ diag::warn_omp_future_directive_spelling, -1,
  /* DiagArray791 */ diag::ext_omp_loop_not_canonical_init, diag::warn_omp_loop_64_bit_var, -1,
  /* DiagArray792 */ diag::warn_omp_non_trivial_type_mapped, -1,
  /* DiagArray793 */ diag::warn_drv_omp_offload_target_duplicate, diag::warn_omp_declare_target_after_first_use, diag::warn_omp_declare_target_local_not_implemented, diag::warn_omp_not_in_target_context, -1,
  /* DiagArray794 */ diag::warn_throw_not_valid_on_target, diag::warn_try_not_valid_on_target, -1,
  /* DiagArray795 */ diag::warn_drv_argument_not_allowed_with, diag::warn_drv_fine_grained_bitfield_accesses_ignored, diag::warn_drv_fjmc_for_elf_only, diag::warn_drv_invalid_argument_for_flang, diag::warn_drv_jmc_requires_debuginfo, diag::warn_drv_loongarch_conflicting_implied_val, diag::warn_drv_moutline_atomics_unsupported_opt, diag::warn_drv_moutline_unsupported_opt, diag::warn_drv_needs_hvx, diag::warn_drv_ps_force_pic, diag::warn_drv_unsupported_diag_option_for_flang, diag::warn_drv_unsupported_longcalls, diag::warn_drv_unsupported_openmp_library, diag::warn_drv_unsupported_option_for_flang, diag::warn_drv_unsupported_option_for_offload_arch_req_feature, diag::warn_drv_unsupported_option_for_processor, diag::warn_drv_unsupported_option_for_runtime, diag::warn_drv_unsupported_option_for_target, diag::warn_drv_unsupported_option_part_for_target, diag::warn_drv_unsupported_pic_with_mabicalls, diag::warn_target_override_arm64ec, -1,
  /* DiagArray796 */ diag::ext_typecheck_ordered_comparison_of_function_pointers, diag::warn_typecheck_ordered_comparison_of_function_pointers, -1,
  /* DiagArray797 */ diag::ext_out_of_line_declaration, -1,
  /* DiagArray798 */ diag::ext_use_out_of_scope_declaration, -1,
  /* DiagArray799 */ diag::warn_overaligned_type, -1,
  /* DiagArray801 */ diag::warn_overflow_behavior_attribute_disabled, diag::warn_overflow_behavior_keyword_disabled, diag::warn_redundant_overflow_behaviors_mixed, -1,
  /* DiagArray803 */ diag::ext_string_too_long, -1,
  /* DiagArray804 */ diag::warn_overloaded_shift_in_comparison, -1,
  /* DiagArray805 */ diag::warn_overloaded_virtual, -1,
  /* DiagArray807 */ diag::warn_fe_override_module, -1,
  /* DiagArray808 */ diag::warn_drv_overriding_complex_range, -1,
  /* DiagArray809 */ diag::warn_drv_overriding_deployment_version, -1,
  /* DiagArray810 */ diag::warn_conflicting_overriding_param_modifiers, diag::warn_conflicting_overriding_param_types, diag::warn_conflicting_overriding_ret_type_modifiers, diag::warn_conflicting_overriding_ret_types, diag::warn_conflicting_overriding_variadic, diag::warn_non_contravariant_overriding_param_types, diag::warn_non_covariant_overriding_ret_types, -1,
  /* DiagArray811 */ diag::warn_drv_overriding_option, -1,
  /* DiagArray812 */ diag::warn_unnecessary_packed, -1,
  /* DiagArray813 */ diag::warn_unpacked_field, -1,
  /* DiagArray814 */ diag::warn_padded_struct_anon_field, diag::warn_padded_struct_field, diag::warn_padded_struct_size, -1,
  /* DiagArray815 */ diag::warn_padded_struct_anon_bitfield, diag::warn_padded_struct_bitfield, -1,
  /* DiagArray816 */ diag::warn_comparison_in_fold_expression, diag::warn_condition_is_assignment, diag::warn_consecutive_comparison, diag::warn_precedence_bitwise_rel, diag::warn_precedence_conditional, -1,
  /* DiagArray817 */ diag::warn_equality_with_extra_parens, -1,
  /* DiagArray819 */ diag::remark_fe_backend_optimization_remark, -1,
  /* DiagArray820 */ diag::remark_fe_backend_optimization_remark_analysis, diag::remark_fe_backend_optimization_remark_analysis_aliasing, diag::remark_fe_backend_optimization_remark_analysis_fpcommute, -1,
  /* DiagArray821 */ diag::warn_fe_backend_optimization_failure, -1,
  /* DiagArray822 */ diag::remark_fe_backend_optimization_remark_missed, -1,
  /* DiagArray823 */ diag::warn_module_uses_date_time, -1,
  /* DiagArray824 */ diag::warn_pch_vfsoverlay_mismatch, -1,
  /* DiagArray825 */ diag::compat_pre_cxx11_enum_fixed_underlying_type, diag::ext_aggregate_init_not_constant, diag::ext_anonymous_record_with_type, diag::ext_anonymous_struct_union_qualified, diag::ext_array_size_conversion, diag::ext_assoc_type_incomplete, diag::ext_auto_new_list_init, diag::ext_binary_literal, diag::ext_c2y_alignof_incomplete_array, diag::ext_c2y_case_range, diag::ext_c2y_feature, diag::ext_c2y_generic_with_type_arg, diag::ext_c2y_imaginary_constant, diag::ext_c2y_increment_complex, diag::ext_c23_enum_fixed_underlying_type, diag::ext_c23_enum_value_not_int, diag::ext_c23_non_local_variable_decl_in_for, diag::ext_c23_non_variable_decl_in_for, diag::ext_c99_array_usage, diag::ext_c99_compound_literal, diag::ext_c99_feature, diag::ext_c99_flexible_array_member, diag::ext_c99_variable_decl_in_for_loop, diag::ext_c_empty_initializer, diag::ext_c_missing_varargs_arg, diag::ext_c_nullptr, diag::ext_cast_fn_obj, diag::ext_clang_diagnose_if, diag::ext_clang_enable_if, diag::ext_counter, diag::ext_cxx26_raw_string_literal_character_set, diag::ext_cxx_missing_varargs_arg, diag::ext_delete_with_message, diag::ext_designated_init, diag::ext_dtor_name_ambiguous, diag::ext_dtor_named_in_wrong_scope, diag::ext_duplicate_declspec, diag::ext_ellipsis_exception_spec, diag::ext_empty_fnmacro_arg, diag::ext_enumerator_list_comma_c, diag::ext_enumerator_list_comma_cxx, diag::ext_explicit_instantiation_without_qualified_id, diag::ext_expr_not_ice, diag::ext_extern_template, diag::ext_extra_semi, diag::ext_forward_ref_enum, diag::ext_freestanding_complex, diag::ext_gnu_array_range, diag::ext_hex_constant_invalid, diag::ext_hex_literal_invalid, diag::ext_ident_list_in_param, diag::ext_in_class_initializer_non_constant, diag::ext_integer_complement_complex, diag::ext_internal_in_extern_inline_quiet, diag::ext_line_comment, diag::ext_main_no_return, diag::ext_main_used, diag::ext_mixed_decls_code, diag::ext_multi_line_line_comment, diag::ext_named_variadic_macro, diag::ext_nonstandard_escape, diag::ext_ns_enum_attribute, diag::ext_octal_literal, diag::ext_opencl_double_without_pragma, diag::ext_paste_comma, diag::ext_pointer_to_const_ref_member_on_rvalue, diag::ext_pp_bad_vaargs_use, diag::ext_pp_comma_expr, diag::ext_pp_ident_directive, diag::ext_pp_line_too_big, diag::ext_pp_opencl_variadic_macros, diag::ext_pp_warning_directive, diag::ext_restrict_on_array_of_pointers_c23, diag::ext_return_has_void_expr, diag::ext_rvalue_to_reference_access_ctor, diag::ext_rvalue_to_reference_temp_copy_no_viable, diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::ext_subscript_non_lvalue, diag::ext_thread_before, diag::ext_type_defined_in_offsetof, diag::ext_typecheck_addrof_void, diag::ext_typecheck_cast_nonscalar, diag::ext_typecheck_comparison_of_fptr_to_void, diag::ext_typecheck_cond_one_void, diag::ext_typecheck_convert_pointer_void_func, diag::ext_typecheck_ordered_comparison_of_pointer_and_zero, diag::ext_variadic_macro, diag::ext_vla, diag::ext_vla_cxx_in_gnu_mode, diag::ext_vla_cxx_in_gnu_mode_static_assert, diag::warn_defined_in_function_type_macro, diag::warn_ext_c23_attributes, diag::warn_ext_cxx11_attributes, diag::warn_format_cmp_specifier_mismatch_pedantic, diag::warn_format_conversion_argument_type_mismatch_pedantic, diag::warn_kern_is_method, diag::warn_strict_prototypes, -1,
  /* DiagArray826 */ diag::warn_opencl_unsupported_core_feature, diag::warn_pragma_extension_is_core, -1,
  /* DiagArray828 */ diag::warn_perf_constraint_implies_noexcept, -1,
  /* DiagArray829 */ diag::warn_pessimizing_move_on_initialization, diag::warn_pessimizing_move_on_return, -1,
  /* DiagArray830 */ diag::warn_pgo_condition_limit, diag::warn_pgo_test_vector_limit, -1,
  /* DiagArray831 */ diag::ext_sizeof_alignof_function_type, diag::ext_sizeof_alignof_void_type, diag::warn_sub_ptr_zero_size_types, -1,
  /* DiagArray832 */ diag::warn_cast_nonnull_to_bool, diag::warn_impcast_pointer_to_bool, -1,
  /* DiagArray833 */ diag::warn_pointer_compare, -1,
  /* DiagArray834 */ diag::ext_typecheck_comparison_of_pointer_integer, -1,
  /* DiagArray835 */ diag::ext_typecheck_convert_incompatible_pointer_sign, -1,
  /* DiagArray836 */ diag::warn_pointer_to_enum_cast, -1,
  /* DiagArray837 */ diag::warn_pointer_to_int_cast, -1,
  /* DiagArray838 */ diag::ext_typecheck_cond_incompatible_pointers, -1,
  /* DiagArray839 */ diag::warn_poison_system_directories, -1,
  /* DiagArray840 */ diag::warn_potentially_direct_selector_expression, -1,
  /* DiagArray841 */ diag::warn_side_effects_typeid, -1,
  /* DiagArray842 */ diag::warn_pragma_attribute_unused, -1,
  /* DiagArray843 */ diag::pp_pragma_once_in_main_file, -1,
  /* DiagArray844 */ diag::warn_pragma_pack_modified_after_include, diag::warn_pragma_pack_no_pop_eof, -1,
  /* DiagArray845 */ diag::warn_pragma_pack_non_default_at_include, -1,
  /* DiagArray846 */ diag::pp_pragma_sysheader_in_main_file, -1,
  /* DiagArray847 */ diag::warn_no_support_for_eval_method_source_on_m32, diag::warn_redefine_extname_not_applied, -1,
  /* DiagArray848 */ diag::compat_cxx14_constexpr_body_multiple_return, diag::compat_cxx14_constexpr_local_var, diag::compat_cxx14_constexpr_type_definition, diag::compat_cxx14_cxx14_constexpr_body_invalid_stmt, diag::compat_cxx14_variable_template, diag::warn_cxx11_compat_constexpr_body_no_return, diag::warn_cxx11_compat_decltype_auto_type_specifier, diag::warn_cxx11_compat_deduced_return_type, diag::warn_cxx11_compat_digit_separator, diag::warn_cxx11_compat_generic_lambda, diag::warn_cxx11_compat_init_capture, -1,
  /* DiagArray850 */ diag::compat_cxx17_decomp_decl, diag::compat_cxx17_inline_variable, diag::warn_cxx14_compat_class_template_argument_deduction, diag::warn_cxx14_compat_constexpr_if, diag::warn_cxx14_compat_constexpr_on_lambda, diag::warn_cxx14_compat_fold_expression, diag::warn_cxx14_compat_init_statement, diag::warn_cxx14_compat_nested_namespace_definition, diag::warn_cxx14_compat_star_this_lambda_capture, diag::warn_cxx14_compat_static_assert_no_message, diag::warn_cxx14_compat_template_nontype_parm_auto_type, diag::warn_cxx14_compat_template_template_param_typename, diag::warn_cxx14_compat_u8_character_literal, diag::warn_cxx14_compat_using_attribute_ns, diag::warn_cxx17_compat_multi_using_declaration, diag::warn_cxx17_compat_using_declaration_pack, diag::warn_for_range_begin_end_types_differ, -1,
  /* DiagArray851 */ diag::warn_cxx14_compat_ns_enum_attribute, diag::warn_cxx17_hex_literal, -1,
  /* DiagArray852 */ diag::compat_cxx20_adl_only_template_id, diag::compat_cxx20_constexpr_ctor_missing_init, diag::compat_cxx20_constexpr_function_try_block, diag::compat_cxx20_constexpr_local_var_no_init, diag::compat_cxx20_constexpr_union_ctor_no_init, diag::compat_cxx20_ctad_for_alias_templates, diag::compat_cxx20_cxx20_constexpr_body_invalid_stmt, diag::compat_cxx20_decomp_decl_spec, diag::compat_cxx20_implicit_typename, diag::warn_cxx17_compat_bitfield_member_init, diag::warn_cxx17_compat_capture_binding, diag::warn_cxx17_compat_constexpr_virtual, diag::warn_cxx17_compat_defaulted_comparison, diag::warn_cxx17_compat_defaulted_method_type_mismatch, diag::warn_cxx17_compat_equals_this_lambda_capture, diag::warn_cxx17_compat_explicit_bool, diag::warn_cxx17_compat_for_range_init_stmt, diag::warn_cxx17_compat_init_capture_pack, diag::warn_cxx17_compat_inline_nested_namespace_definition, diag::warn_cxx17_compat_lambda_def_ctor_assign, diag::warn_cxx17_compat_lambda_template_parameter_list, diag::warn_cxx17_compat_missing_varargs_arg, diag::warn_cxx17_compat_spaceship, diag::warn_cxx17_compat_template_nontype_parm_type, diag::warn_cxx17_compat_unicode_type, diag::warn_cxx17_compat_using_decl_class_member_enumerator, diag::warn_cxx17_compat_using_decl_non_member_enumerator, diag::warn_cxx17_compat_using_decl_scoped_enumerator, diag::warn_cxx17_compat_using_enum_declaration, diag::warn_cxx20_compat_consteval, diag::warn_cxx20_compat_constinit, -1,
  /* DiagArray853 */ diag::warn_cxx17_compat_designated_init, diag::warn_cxx17_compat_pointer_to_const_ref_member_on_rvalue, -1,
  /* DiagArray854 */ diag::compat_cxx23_constexpr_static_var, diag::compat_cxx23_cxx23_constexpr_body_invalid_stmt, diag::ext_subscript_overload, diag::warn_cxx20_alias_in_init_statement, diag::warn_cxx20_compat_auto_expr, diag::warn_cxx20_compat_consteval_if, diag::warn_cxx20_compat_constexpr_var, diag::warn_cxx20_compat_decl_attrs_on_lambda, diag::warn_cxx20_compat_label_end_of_compound_statement, diag::warn_cxx20_compat_operator_overload_static, diag::warn_cxx20_compat_size_t_suffix, diag::warn_cxx20_compat_static_lambda, diag::warn_cxx23_compat_pp_directive, diag::warn_cxx23_compat_warning_directive, diag::warn_cxx23_delimited_escape_sequence, -1,
  /* DiagArray856 */ diag::compat_cxx26_decomp_decl_cond, diag::warn_cxx20_compat_static_assert_user_generated_message, diag::warn_cxx23_compat_binding_pack, diag::warn_cxx23_compat_decl_attrs_on_binding, diag::warn_cxx23_delete_with_message, diag::warn_cxx23_pack_indexing, diag::warn_cxx23_placeholder_var_definition, diag::warn_cxx23_variadic_friends, diag::warn_cxx26_compat_raw_string_literal_character_set, diag::warn_pre_cxx26_ambiguous_pack_indexing_type, -1,
  /* DiagArray860 */ diag::warn_c11_compat_keyword, -1,
  /* DiagArray862 */ diag::warn_c17_compat_ellipsis_only_parameter, diag::warn_c17_compat_enum_fixed_underlying_type, diag::warn_c17_compat_enum_value_not_int, diag::warn_c17_compat_static_assert_no_message, diag::warn_c17_compat_u8_character_literal, diag::warn_c17_compat_va_start_one_arg, diag::warn_c17_non_local_variable_decl_in_for, diag::warn_c17_non_variable_decl_in_for, diag::warn_c23_compat_binary_literal, diag::warn_c23_compat_bitint_suffix, diag::warn_c23_compat_digit_separator, diag::warn_c23_compat_empty_initializer, diag::warn_c23_compat_keyword, diag::warn_c23_compat_label_end_of_compound_statement, diag::warn_c23_compat_label_followed_by_declaration, diag::warn_c23_compat_literal_ucn_control_character, diag::warn_c23_compat_literal_ucn_escape_basic_scs, diag::warn_c23_compat_pp_directive, diag::warn_c23_compat_restrict_on_array_of_pointers, diag::warn_c23_compat_warning_directive, diag::warn_compat_pp_embed_directive, diag::warn_pre_c23_compat_attributes, -1,
  /* DiagArray866 */ diag::warn_c2y_compat_alignof_incomplete_array, diag::warn_c2y_compat_assoc_type_incomplete, diag::warn_c2y_compat_generic_with_type_arg, diag::warn_c2y_compat_increment_complex, diag::warn_c2y_compat_internal_in_extern_inline, diag::warn_c2y_compat_keyword, diag::warn_c2y_compat_octal_literal, diag::warn_c2y_delimited_escape_sequence, diag::warn_c23_compat_case_range, diag::warn_c23_compat_imaginary_constant, diag::warn_counter, -1,
  /* DiagArray868 */ diag::warn_omp51_compat_attributes, -1,
  /* DiagArray869 */ diag::ext_predef_outside_function, -1,
  /* DiagArray870 */ diag::warn_preferred_type_bitfield_too_small_for_enum, diag::warn_preferred_type_signed_bitfield_enum_conversion, diag::warn_preferred_type_unsigned_bitfield_assigned_signed_enum, -1,
  /* DiagArray872 */ diag::warn_private_extern, -1,
  /* DiagArray873 */ diag::warn_use_of_private_header_outside_module, -1,
  /* DiagArray874 */ diag::warn_mmap_mismatched_private_module_name, diag::warn_mmap_mismatched_private_submodule, diag::warn_mmap_redundant_export_as, diag::warn_no_priv_submodule_use_toplevel, -1,
  /* DiagArray875 */ diag::warn_profile_data_missing, -1,
  /* DiagArray876 */ diag::warn_profile_data_out_of_date, -1,
  /* DiagArray877 */ diag::warn_profile_data_unprofiled, -1,
  /* DiagArray878 */ diag::warn_property_access_suggest, -1,
  /* DiagArray879 */ diag::warn_property_attr_mismatch, diag::warn_property_attribute, diag::warn_property_redecl_getter_mismatch, diag::warn_readonly_property, -1,
  /* DiagArray880 */ diag::warn_unimplemented_protocol_method, -1,
  /* DiagArray881 */ diag::warn_protocol_property_mismatch, -1,
  /* DiagArray882 */ diag::warn_avx_calling_convention, -1,
  /* DiagArray883 */ diag::warn_ptrauth_auth_null_pointer, diag::warn_ptrauth_sign_null_pointer, -1,
  /* DiagArray884 */ diag::err_func_returning_qualified_void, -1,
  /* DiagArray885 */ diag::warn_quoted_include_in_framework_header, -1,
  /* DiagArray887 */ diag::warn_for_range_ref_binds_ret_temp, -1,
  /* DiagArray888 */ diag::warn_for_range_const_ref_binds_temp_built_from_ref, diag::warn_for_range_copy, -1,
  /* DiagArray889 */ diag::warn_var_decl_not_read_only, -1,
  /* DiagArray890 */ diag::warn_auto_readonly_iboutlet_property, -1,
  /* DiagArray891 */ diag::warn_bad_receiver_type, -1,
  /* DiagArray892 */ diag::warn_receiver_forward_class, diag::warn_receiver_forward_instance, -1,
  /* DiagArray893 */ diag::ext_member_redeclared, -1,
  /* DiagArray894 */ diag::err_drv_reduced_module_output_overrided, -1,
  /* DiagArray895 */ diag::warn_sycl_entry_point_redundant_declaration, -1,
  /* DiagArray896 */ diag::warn_consteval_if_always_true, -1,
  /* DiagArray898 */ diag::warn_redundant_move_on_return, -1,
  /* DiagArray899 */ diag::warn_redundant_parens_around_declarator, -1,
  /* DiagArray900 */ diag::warn_reference_tu_local_entity_in_other_tu, -1,
  /* DiagArray901 */ diag::ext_register_storage_class, -1,
  /* DiagArray902 */ diag::warn_reinterpret_different_from_static, -1,
  /* DiagArray903 */ diag::remark_fe_backend_plugin, -1,
  /* DiagArray905 */ diag::warn_initializer_out_of_order, diag::warn_some_initializers_out_of_order, -1,
  /* DiagArray906 */ diag::ext_designated_init_reordered, -1,
  /* DiagArray907 */ diag::warn_objc_requires_super_protocol, -1,
  /* DiagArray908 */ diag::warn_pp_macro_is_reserved_attribute_id, -1,
  /* DiagArray910 */ diag::warn_reserved_extern_symbol, -1,
  /* DiagArray911 */ diag::warn_pp_macro_is_reserved_id, -1,
  /* DiagArray912 */ diag::warn_reserved_module_name, -1,
  /* DiagArray913 */ diag::ext_ms_reserved_user_defined_literal, diag::ext_reserved_user_defined_literal, -1,
  /* DiagArray914 */ diag::warn_pragma_restrict_expansion_macro_use, -1,
  /* DiagArray915 */ diag::ext_retained_language_linkage, -1,
  /* DiagArray917 */ diag::ext_return_has_expr, diag::ext_return_missing_expr, diag::warn_return_missing_expr, -1,
  /* DiagArray918 */ diag::warn_musttail_local_temp_addr_ref, diag::warn_ret_addr_label, diag::warn_ret_local_temp_addr_ref, diag::warn_ret_stack_addr_ref, -1,
  /* DiagArray920 */ diag::warn_falloff_nonvoid, -1,
  /* DiagArray921 */ diag::warn_return_value_udt, diag::warn_return_value_udt_incomplete, -1,
  /* DiagArray922 */ diag::ext_ovl_rewrite_equalequal_not_bool, -1,
  /* DiagArray923 */ diag::warn_drv_riscv_be_experimental, -1,
  /* DiagArray924 */ diag::remark_cc1_round_trip_generated, -1,
  /* DiagArray925 */ diag::warn_no_dynamic_cast_with_rtti_disabled, diag::warn_no_typeid_with_rtti_disabled, -1,
  /* DiagArray926 */ diag::remark_sanitize_address_insert_extra_padding_accepted, diag::remark_sanitize_address_insert_extra_padding_rejected, -1,
  /* DiagArray927 */ diag::warn_drv_sarif_format_unstable, -1,
  /* DiagArray928 */ diag::warn_ssaf_extract_summary_unknown_extractor_name, diag::warn_ssaf_extract_tu_summary_file_unknown_format, diag::warn_ssaf_extract_tu_summary_file_unknown_output_format, diag::warn_ssaf_must_enable_summary_extractors, diag::warn_ssaf_write_tu_summary_failed, -1,
  /* DiagArray929 */ diag::remark_pp_search_path_usage, -1,
  /* DiagArray930 */ diag::warn_attribute_section_on_redeclaration, diag::warn_duplicate_codeseg_attribute, diag::warn_mismatched_section, -1,
  /* DiagArray931 */ diag::warn_unimplemented_selector, -1,
  /* DiagArray932 */ diag::warn_multiple_selectors, -1,
  /* DiagArray933 */ diag::warn_self_assignment_builtin, -1,
  /* DiagArray934 */ diag::warn_identity_field_assign, -1,
  /* DiagArray935 */ diag::warn_self_assignment_overloaded, -1,
  /* DiagArray936 */ diag::warn_self_move, -1,
  /* DiagArray937 */ diag::warn_semicolon_before_method_body, -1,
  /* DiagArray938 */ diag::warn_missing_sentinel, diag::warn_not_enough_argument, -1,
  /* DiagArray940 */ diag::warn_fe_serialized_diag_failure, diag::warn_fe_serialized_diag_failure_during_finalization, diag::warn_fe_serialized_diag_merge_failure, -1,
  /* DiagArray941 */ diag::warn_decl_shadow, -1,
  /* DiagArray943 */ diag::warn_shadow_field, -1,
  /* DiagArray944 */ diag::warn_ctor_parm_shadows_field, -1,
  /* DiagArray945 */ diag::warn_modifying_shadowing_decl, -1,
  /* DiagArray946 */ diag::warn_header_shadowing, -1,
  /* DiagArray947 */ diag::warn_ivar_use_hidden, -1,
  /* DiagArray948 */ diag::warn_decl_shadow_uncaptured_local, -1,
  /* DiagArray949 */ diag::warn_shift_bool, -1,
  /* DiagArray950 */ diag::warn_shift_negative, -1,
  /* DiagArray951 */ diag::warn_shift_gt_typewidth, -1,
  /* DiagArray952 */ diag::warn_shift_lhs_negative, -1,
  /* DiagArray953 */ diag::warn_addition_in_bitshift, -1,
  /* DiagArray954 */ diag::warn_shift_result_gt_typewidth, -1,
  /* DiagArray955 */ diag::warn_shift_result_sets_sign_bit, -1,
  /* DiagArray956 */ diag::warn_impcast_integer_64_32, -1,
  /* DiagArray957 */ diag::warn_mixed_sign_comparison, -1,
  /* DiagArray958 */ diag::warn_impcast_integer_sign, diag::warn_impcast_integer_sign_conditional, diag::warn_impcast_nonnegative_result, -1,
  /* DiagArray960 */ diag::warn_no_underlying_type_specified_for_enum_bitfield, -1,
  /* DiagArray961 */ diag::ext_wchar_t_sign_spec, -1,
  /* DiagArray962 */ diag::warn_simdlen_1_no_effect, diag::warn_simdlen_must_fit_lanes, diag::warn_simdlen_requires_power_of_2, -1,
  /* DiagArray963 */ diag::warn_impcast_single_bit_bitield_precision_constant, -1,
  /* DiagArray964 */ diag::warn_sizeof_array_param, -1,
  /* DiagArray965 */ diag::warn_sizeof_array_decay, -1,
  /* DiagArray966 */ diag::warn_division_sizeof_array, -1,
  /* DiagArray967 */ diag::warn_division_sizeof_ptr, -1,
  /* DiagArray968 */ diag::warn_sizeof_pointer_expr_memaccess, diag::warn_sizeof_pointer_type_memaccess, -1,
  /* DiagArray969 */ diag::warn_slash_u_filename, -1,
  /* DiagArray970 */ diag::warn_slh_does_not_support_asm_goto, -1,
  /* DiagArray971 */ diag::remark_sloc_usage, -1,
  /* DiagArray972 */ diag::warn_sometimes_uninit_var, -1,
  /* DiagArray973 */ diag::warn_fe_source_mgr, -1,
  /* DiagArray974 */ diag::warn_acc_routine_unimplemented, diag::warn_drv_openacc_without_cir, diag::warn_pragma_acc_ignored, -1,
  /* DiagArray975 */ diag::warn_omp_declare_variant_after_emitted, diag::warn_omp_declare_variant_after_used, diag::warn_omp_declare_variant_marked_as_declare_variant, diag::warn_omp_declare_variant_score_not_constant, diag::warn_omp_nesting_simd, diag::warn_omp_unterminated_declare_target, diag::warn_pragma_omp_ignored, diag::warn_unknown_declare_variant_isa_trait, -1,
  /* DiagArray976 */ diag::warn_sampler_initializer_invalid_bits, -1,
  /* DiagArray978 */ diag::warn_stack_exhausted, -1,
  /* DiagArray979 */ diag::warn_stack_clash_protection_inline_asm, -1,
  /* DiagArray980 */ diag::ext_in_class_initializer_float_type_cxx11, -1,
  /* DiagArray981 */ diag::ext_internal_in_extern_inline, diag::ext_internal_in_extern_inline_quiet, -1,
  /* DiagArray982 */ diag::warn_static_inline_explicit_inst_ignored, -1,
  /* DiagArray983 */ diag::warn_static_local_in_extern_inline, -1,
  /* DiagArray984 */ diag::warn_static_self_reference_in_init, -1,
  /* DiagArray985 */ diag::warn_drv_libstdcxx_not_found, -1,
  /* DiagArray997 */ diag::warn_strict_potentially_direct_selector_expression, -1,
  /* DiagArray998 */ diag::ext_compat_template_param_shadow, -1,
  /* DiagArray999 */ diag::warn_strict_prototypes, -1,
  /* DiagArray1000 */ diag::warn_strict_multiple_method_decl, -1,
  /* DiagArray1001 */ diag::warn_stringcompare, -1,
  /* DiagArray1002 */ diag::warn_concatenated_literal_array_init, -1,
  /* DiagArray1003 */ diag::warn_impcast_string_literal_to_bool, -1,
  /* DiagArray1004 */ diag::warn_string_plus_char, -1,
  /* DiagArray1005 */ diag::warn_string_plus_int, -1,
  /* DiagArray1006 */ diag::warn_strlcpycat_wrong_size, -1,
  /* DiagArray1007 */ diag::warn_strncat_large_size, diag::warn_strncat_src_size, diag::warn_strncat_wrong_size, -1,
  /* DiagArray1008 */ diag::warn_suggest_destructor_marked_not_override_overriding, -1,
  /* DiagArray1009 */ diag::warn_suggest_function_marked_not_override_overriding, -1,
  /* DiagArray1010 */ diag::ext_typecheck_base_super, -1,
  /* DiagArray1011 */ diag::warn_suspicious_bzero_size, -1,
  /* DiagArray1013 */ diag::warn_attr_swift_name_decl_kind, diag::warn_attr_swift_name_decl_missing_params, diag::warn_attr_swift_name_function, diag::warn_attr_swift_name_getter_parameters, diag::warn_attr_swift_name_invalid_identifier, diag::warn_attr_swift_name_missing_parameters, diag::warn_attr_swift_name_multiple_selfs, diag::warn_attr_swift_name_num_params, diag::warn_attr_swift_name_setter_parameters, diag::warn_attr_swift_name_subscript_getter_newValue, diag::warn_attr_swift_name_subscript_invalid_parameter, diag::warn_attr_swift_name_subscript_setter_multiple_newValues, diag::warn_attr_swift_name_subscript_setter_no_newValue, -1,
  /* DiagArray1014 */ diag::warn_case_value_overflow, diag::warn_missing_case, diag::warn_not_in_enum, -1,
  /* DiagArray1015 */ diag::warn_bool_switch_condition, -1,
  /* DiagArray1016 */ diag::warn_switch_default, -1,
  /* DiagArray1017 */ diag::warn_def_missing_case, -1,
  /* DiagArray1018 */ diag::warn_sync_op_misaligned, -1,
  /* DiagArray1019 */ diag::warn_sync_fetch_and_nand_semantics_change, -1,
  /* DiagArray1021 */ diag::warn_target_clone_mixed_values, -1,
  /* DiagArray1022 */ diag::warn_comparison_bitwise_always, diag::warn_comparison_bitwise_or, -1,
  /* DiagArray1023 */ diag::warn_alignment_builtin_useless, diag::warn_comparison_always, -1,
  /* DiagArray1024 */ diag::warn_integer_constants_in_conditional_always_true, diag::warn_left_shift_always, diag::warn_tautological_bool_compare, -1,
  /* DiagArray1026 */ diag::warn_out_of_range_compare, -1,
  /* DiagArray1027 */ diag::warn_tautological_negation_and_compare, diag::warn_tautological_negation_or_compare, -1,
  /* DiagArray1028 */ diag::warn_tautological_compare_objc_bool, -1,
  /* DiagArray1029 */ diag::warn_tautological_overlap_comparison, -1,
  /* DiagArray1030 */ diag::warn_nonnull_expr_compare, diag::warn_null_pointer_compare, -1,
  /* DiagArray1031 */ diag::warn_tautological_constant_compare, -1,
  /* DiagArray1032 */ diag::warn_address_of_reference_null_compare, diag::warn_this_null_compare, -1,
  /* DiagArray1033 */ diag::warn_unsigned_char_always_true_comparison, -1,
  /* DiagArray1034 */ diag::warn_unsigned_enum_always_true_comparison, -1,
  /* DiagArray1035 */ diag::warn_unsigned_always_true_comparison, -1,
  /* DiagArray1036 */ diag::warn_tautological_compare_value_range, -1,
  /* DiagArray1037 */ diag::warn_tcb_enforcement_violation, -1,
  /* DiagArray1038 */ diag::ext_template_after_declarative_nns, -1,
  /* DiagArray1039 */ diag::warn_tentative_incomplete_array, -1,
  /* DiagArray1040 */ diag::warn_cxx_compat_tentative_definition, -1,
  /* DiagArray1041 */ diag::ext_typecheck_decl_incomplete_type, -1,
  /* DiagArray1043 */ diag::warn_acquired_before, diag::warn_acquired_before_after_cycle, diag::warn_cannot_resolve_lock, diag::warn_double_lock, diag::warn_expect_fewer_underlying_mutexes, diag::warn_expect_more_underlying_mutexes, diag::warn_expecting_lock_held_on_loop, diag::warn_expecting_locked, diag::warn_fun_excludes_mutex, diag::warn_fun_requires_lock, diag::warn_fun_requires_negative_cap, diag::warn_lock_exclusive_and_shared, diag::warn_lock_some_predecessors, diag::warn_no_unlock, diag::warn_requires_any_of_locks, diag::warn_unlock_but_no_lock, diag::warn_unlock_kind_mismatch, diag::warn_unmatched_underlying_mutexes, diag::warn_var_deref_requires_any_lock, diag::warn_var_deref_requires_lock, diag::warn_variable_requires_any_lock, diag::warn_variable_requires_lock, -1,
  /* DiagArray1044 */ diag::warn_thread_attribute_argument_not_lockable, diag::warn_thread_attribute_decl_not_lockable, diag::warn_thread_attribute_decl_not_pointer, diag::warn_thread_attribute_ignored, diag::warn_thread_attribute_not_on_capability_member, diag::warn_thread_attribute_not_on_non_static_member, diag::warn_thread_attribute_not_on_scoped_lockable_param, diag::warn_thread_attribute_requires_preceded, -1,
  /* DiagArray1045 */ diag::warn_thread_safety_beta, -1,
  /* DiagArray1046 */ diag::warn_acquire_requires_negative_cap, -1,
  /* DiagArray1047 */ diag::warn_guarded_pass_pointer, diag::warn_guarded_return_pointer, diag::warn_pt_guarded_pass_pointer, diag::warn_pt_guarded_return_pointer, -1,
  /* DiagArray1048 */ diag::warn_fun_requires_lock_precise, diag::warn_var_deref_requires_lock_precise, diag::warn_variable_requires_lock_precise, -1,
  /* DiagArray1049 */ diag::warn_guarded_pass_by_reference, diag::warn_pt_guarded_pass_by_reference, -1,
  /* DiagArray1050 */ diag::warn_guarded_return_by_reference, diag::warn_pt_guarded_return_by_reference, -1,
  /* DiagArray1051 */ diag::warn_thread_safety_verbose, -1,
  /* DiagArray1052 */ diag::trigraph_converted, diag::trigraph_ends_block_comment, diag::trigraph_ignored, diag::trigraph_ignored_block_comment, -1,
  /* DiagArray1053 */ diag::warn_trivial_auto_var_limit, -1,
  /* DiagArray1055 */ diag::warn_type_safety_null_pointer_required, diag::warn_type_safety_type_mismatch, diag::warn_type_tag_for_datatype_wrong_kind, -1,
  /* DiagArray1056 */ diag::ext_redefinition_of_typedef, -1,
  /* DiagArray1057 */ diag::ext_typename_missing, -1,
  /* DiagArray1058 */ diag::warn_fe_unable_to_open_stats_file, -1,
  /* DiagArray1059 */ diag::warn_unaligned_access, -1,
  /* DiagArray1060 */ diag::warn_imp_cast_drops_unaligned, -1,
  /* DiagArray1061 */ diag::warn_unavailable_fwdclass_message, -1,
  /* DiagArray1062 */ diag::warn_undeclared_selector, diag::warn_undeclared_selector_with_typo, -1,
  /* DiagArray1063 */ diag::warn_pp_undef_identifier, -1,
  /* DiagArray1064 */ diag::warn_pp_undef_prefix, -1,
  /* DiagArray1065 */ diag::warn_pp_undef_true_identifier, -1,
  /* DiagArray1066 */ diag::warn_attribute_arm_za_builtin_no_za_state, -1,
  /* DiagArray1067 */ diag::warn_attribute_arm_zt0_builtin_no_zt0_state, -1,
  /* DiagArray1068 */ diag::warn_address_of_reference_bool_conversion, diag::warn_this_bool_conversion, -1,
  /* DiagArray1069 */ diag::warn_func_template_missing, -1,
  /* DiagArray1070 */ diag::warn_undefined_inline, -1,
  /* DiagArray1071 */ diag::warn_undefined_internal, -1,
  /* DiagArray1072 */ diag::ext_undefined_internal_type, -1,
  /* DiagArray1073 */ diag::warn_pointer_indirection_from_incompatible_type, diag::warn_undefined_reinterpret_cast, -1,
  /* DiagArray1074 */ diag::warn_var_template_missing, -1,
  /* DiagArray1075 */ diag::warn_throw_underaligned_obj, -1,
  /* DiagArray1076 */ diag::warn_atomic_stripped_in_enum, -1,
  /* DiagArray1077 */ diag::warn_cv_stripped_in_enum, -1,
  /* DiagArray1078 */ diag::warn_side_effects_unevaluated_context, -1,
  /* DiagArray1079 */ diag::warn_unguarded_availability, diag::warn_unguarded_availability_unavailable, -1,
  /* DiagArray1080 */ diag::warn_unguarded_availability_new, diag::warn_unguarded_availability_unavailable_new, -1,
  /* DiagArray1081 */ diag::warn_delimited_ucn_empty, diag::warn_delimited_ucn_incomplete, diag::warn_ucn_escape_incomplete, diag::warn_ucn_escape_no_digits, diag::warn_ucn_escape_surrogate, diag::warn_ucn_not_valid_in_c89, diag::warn_ucn_not_valid_in_c89_literal, -1,
  /* DiagArray1082 */ diag::warn_utf8_symbol_homoglyph, -1,
  /* DiagArray1083 */ diag::ext_unicode_whitespace, -1,
  /* DiagArray1084 */ diag::warn_utf8_symbol_zero_width, -1,
  /* DiagArray1085 */ diag::warn_base_class_is_uninit, diag::warn_field_is_uninit, diag::warn_no_constructor_for_refconst, diag::warn_reference_field_is_uninit, diag::warn_uninit_byref_blockvar_captured_by_block, diag::warn_uninit_self_reference_in_init, diag::warn_uninit_self_reference_in_reference_init, diag::warn_uninit_var, -1,
  /* DiagArray1086 */ diag::warn_uninit_const_pointer, -1,
  /* DiagArray1087 */ diag::warn_uninit_const_reference, -1,
  /* DiagArray1088 */ diag::warn_field_requires_explicit_init, -1,
  /* DiagArray1089 */ diag::warn_possible_object_duplication_init, diag::warn_possible_object_duplication_mutable, -1,
  /* DiagArray1090 */ diag::warn_acc_unsupported_extension_clause, -1,
  /* DiagArray1091 */ diag::warn_drv_potentially_misspelled_joined_argument, diag::warn_drv_unknown_argument_clang_cl, diag::warn_drv_unknown_argument_clang_cl_with_suggestion, -1,
  /* DiagArray1092 */ diag::warn_omp_assume_attribute_string_unknown, -1,
  /* DiagArray1093 */ diag::warn_unknown_attribute_ignored, diag::warn_unknown_attribute_ignored_suggestion, -1,
  /* DiagArray1094 */ diag::warn_drv_new_cuda_version, diag::warn_drv_partially_supported_cuda_version, -1,
  /* DiagArray1095 */ diag::warn_pp_invalid_directive, -1,
  /* DiagArray1096 */ diag::ext_unknown_escape, -1,
  /* DiagArray1097 */ diag::ext_on_off_switch_syntax, diag::ext_pragma_syntax_eod, diag::ext_stdc_pragma_ignored, diag::warn_pragma_diagnostic_cannot_pop, diag::warn_pragma_diagnostic_invalid, diag::warn_pragma_diagnostic_invalid_option, diag::warn_pragma_diagnostic_invalid_token, diag::warn_pragma_exec_charset_expected, diag::warn_pragma_exec_charset_push_invalid, diag::warn_pragma_exec_charset_spec_invalid, diag::warn_pragma_ignored, diag::warn_pragma_include_alias_expected, diag::warn_pragma_include_alias_expected_filename, diag::warn_pragma_include_alias_mismatch_angle, diag::warn_pragma_include_alias_mismatch_quote, diag::warn_pragma_warning_expected, diag::warn_pragma_warning_expected_number, diag::warn_pragma_warning_push_level, diag::warn_pragma_warning_spec_invalid, diag::warn_stdc_fenv_round_not_supported, -1,
  /* DiagArray1098 */ diag::warn_unknown_sanitizer_ignored, -1,
  /* DiagArray1099 */ diag::warn_pragma_diagnostic_unknown_warning, diag::warn_unknown_diag_option, diag::warn_unknown_warning_specifier, -1,
  /* DiagArray1100 */ diag::ext_template_arg_unnamed_type, -1,
  /* DiagArray1101 */ diag::warn_unnecessary_virtual_specifier, -1,
  /* DiagArray1102 */ diag::warn_unneeded_internal_decl, diag::warn_unneeded_static_internal_decl, -1,
  /* DiagArray1103 */ diag::warn_unneeded_member_function, -1,
  /* DiagArray1104 */ diag::warn_unqualified_call_to_std_cast_function, -1,
  /* DiagArray1105 */ diag::warn_unreachable, -1,
  /* DiagArray1107 */ diag::warn_unreachable_break, -1,
  /* DiagArray1108 */ diag::warn_unreachable_fallthrough_attr, -1,
  /* DiagArray1109 */ diag::warn_unreachable_association, -1,
  /* DiagArray1110 */ diag::warn_unreachable_loop_increment, -1,
  /* DiagArray1111 */ diag::warn_unreachable_return, -1,
  /* DiagArray1112 */ diag::warn_unsafe_buffer_operation, diag::warn_unsafe_buffer_variable, -1,
  /* DiagArray1113 */ diag::warn_unsafe_buffer_usage_in_container, -1,
  /* DiagArray1114 */ diag::warn_unsafe_buffer_format_attr_call, -1,
  /* DiagArray1115 */ diag::warn_unsafe_buffer_libc_call, -1,
  /* DiagArray1116 */ diag::warn_unsafe_buffer_usage_in_static_sized_array, -1,
  /* DiagArray1117 */ diag::warn_unsafe_buffer_usage_unique_ptr_array_access, -1,
  /* DiagArray1118 */ diag::warn_unsequenced_mod_mod, diag::warn_unsequenced_mod_use, -1,
  /* DiagArray1119 */ diag::warn_drv_no_floating_point_registers, diag::warn_drv_unsupported_float_abi_by_lib, -1,
  /* DiagArray1120 */ diag::warn_target_unsupported_abs2008, diag::warn_target_unsupported_abslegacy, -1,
  /* DiagArray1121 */ diag::warn_at_available_unchecked_use, -1,
  /* DiagArray1122 */ diag::warn_target_unsupported_compact_branches, -1,
  /* DiagArray1123 */ diag::warn_attribute_dll_instantiated_base_class, -1,
  /* DiagArray1124 */ diag::warn_fe_backend_unsupported_fp_exceptions, diag::warn_fe_backend_unsupported_fp_rounding, -1,
  /* DiagArray1125 */ diag::warn_template_qualified_friend_ignored, diag::warn_template_qualified_friend_unsupported, -1,
  /* DiagArray1126 */ diag::warn_drv_unsupported_gpopt, -1,
  /* DiagArray1127 */ diag::warn_target_unsupported_nan2008, diag::warn_target_unsupported_nanlegacy, -1,
  /* DiagArray1128 */ diag::warn_drv_dwarf_version_limited_by_target, diag::warn_drv_unsupported_debug_info_opt_for_target, -1,
  /* DiagArray1129 */ diag::warn_attribute_protected_visibility, -1,
  /* DiagArray1130 */ diag::warn_initializer_string_for_char_array_too_long_no_nonstring, -1,
  /* DiagArray1131 */ diag::ext_partial_specs_not_deducible, -1,
  /* DiagArray1134 */ diag::warn_unused_but_set_global, -1,
  /* DiagArray1135 */ diag::warn_unused_but_set_parameter, -1,
  /* DiagArray1136 */ diag::warn_unused_but_set_variable, -1,
  /* DiagArray1137 */ diag::warn_drv_diagnostics_hotness_requires_pgo, diag::warn_drv_diagnostics_misexpect_requires_pgo, diag::warn_drv_empty_joined_argument, diag::warn_drv_fraw_string_literals_in_cxx11, diag::warn_drv_input_file_unused, diag::warn_drv_input_file_unused_by_cpp, diag::warn_drv_invalid_arch_name_with_suggestion, diag::warn_drv_large_data_threshold_invalid_code_model, diag::warn_drv_preprocessed_input_file_unused, diag::warn_drv_unused_argument, diag::warn_drv_unused_x, diag::warn_ignored_clang_option, diag::warn_ignoring_fdiscard_for_bitcode, diag::warn_ignoring_verify_debuginfo_preserve_export, -1,
  /* DiagArray1138 */ diag::warn_unused_comparison, -1,
  /* DiagArray1139 */ diag::warn_unused_const_variable, -1,
  /* DiagArray1140 */ diag::warn_unused_exception_param, -1,
  /* DiagArray1141 */ diag::warn_unused_function, -1,
  /* DiagArray1142 */ diag::warn_unused_property_expr, -1,
  /* DiagArray1143 */ diag::warn_unused_label, -1,
  /* DiagArray1144 */ diag::warn_unused_lambda_capture, -1,
  /* DiagArray1145 */ diag::warn_unused_local_typedef, -1,
  /* DiagArray1147 */ diag::pp_macro_not_used, -1,
  /* DiagArray1148 */ diag::warn_unused_member_function, -1,
  /* DiagArray1149 */ diag::warn_unused_parameter, -1,
  /* DiagArray1150 */ diag::warn_unused_private_field, -1,
  /* DiagArray1151 */ diag::warn_unused_property_backing_ivar, -1,
  /* DiagArray1152 */ diag::warn_unused_result, -1,
  /* DiagArray1153 */ diag::warn_unused_template, -1,
  /* DiagArray1154 */ diag::warn_unused_call, diag::warn_unused_comma_left_operand, diag::warn_unused_constructor, diag::warn_unused_container_subscript_expr, diag::warn_unused_expr, diag::warn_unused_return_type, diag::warn_unused_voidptr, -1,
  /* DiagArray1155 */ diag::warn_unused_variable, -1,
  /* DiagArray1156 */ diag::warn_unused_volatile, -1,
  /* DiagArray1157 */ diag::warn_used_but_marked_unused, -1,
  /* DiagArray1158 */ diag::warn_user_literal_reserved, -1,
  /* DiagArray1159 */ diag::warn_diagnose_if_succeeded, -1,
  /* DiagArray1160 */ diag::warn_second_arg_of_va_start_not_last_non_variadic_param, diag::warn_second_parameter_to_va_arg_array, diag::warn_second_parameter_to_va_arg_never_compatible, diag::warn_va_start_type_is_undefined, -1,
  /* DiagArray1161 */ diag::ext_c_missing_varargs_arg, diag::ext_cxx_missing_varargs_arg, diag::warn_c17_compat_missing_varargs_arg, -1,
  /* DiagArray1162 */ diag::ext_named_variadic_macro, diag::ext_pp_bad_vaopt_use, diag::ext_variadic_macro, -1,
  /* DiagArray1163 */ diag::warn_typecheck_vector_element_sizes_not_equal, -1,
  /* DiagArray1164 */ diag::warn_hlsl_impcast_vector_truncation, diag::warn_incompatible_vectors, -1,
  /* DiagArray1166 */ diag::warn_empty_parens_are_function_decl, diag::warn_parens_disambiguated_as_function_declaration, diag::warn_parens_disambiguated_as_variable_declaration, -1,
  /* DiagArray1167 */ diag::warn_decl_in_param_list, diag::warn_redefinition_in_param_list, -1,
  /* DiagArray1168 */ diag::warn_vla_used, -1,
  /* DiagArray1169 */ diag::ext_vla_cxx, diag::ext_vla_cxx_in_gnu_mode, -1,
  /* DiagArray1170 */ diag::ext_vla, -1,
  /* DiagArray1171 */ diag::ext_vla_cxx_in_gnu_mode_static_assert, diag::ext_vla_cxx_static_assert, -1,
  /* DiagArray1172 */ diag::warn_void_pointer_to_enum_cast, -1,
  /* DiagArray1173 */ diag::warn_void_pointer_to_int_cast, -1,
  /* DiagArray1174 */ diag::ext_typecheck_indirection_through_void_pointer, -1,
  /* DiagArray1176 */ diag::warn_wasm_dynamic_exception_spec_ignored, -1,
  /* DiagArray1177 */ diag::warn_weak_template_vtable, -1,
  /* DiagArray1178 */ diag::warn_weak_vtable, -1,
  /* DiagArray1179 */ diag::ext_deprecated_string_literal_conversion, -1,
  /* DiagArray1181 */ diag::warn_xor_used_as_pow, diag::warn_xor_used_as_pow_base, diag::warn_xor_used_as_pow_base_extra, -1,
  /* DiagArray1182 */ diag::warn_zero_as_null_pointer_constant, -1,
  /* DiagArray1183 */ diag::ext_typecheck_zero_array_size, -1,
};

static const int16_t DiagSubGroups[] = {
  /* Empty */ -1,
  /* DiagSubGroup0 */ 351, -1,
  /* DiagSubGroup4 */ 20, 351, -1,
  /* DiagSubGroup13 */ 832, 1001, 1030, -1,
  /* DiagSubGroup20 */ 680, 816, 1014, 1015, 639, 813, 1169, -1,
  /* DiagSubGroup34 */ 254, -1,
  /* DiagSubGroup37 */ 44, 43, 40, -1,
  /* DiagSubGroup42 */ 39, -1,
  /* DiagSubGroup54 */ 55, -1,
  /* DiagSubGroup64 */ 463, 221, -1,
  /* DiagSubGroup70 */ 1093, 452, -1,
  /* DiagSubGroup81 */ 120, 154, -1,
  /* DiagSubGroup82 */ 157, -1,
  /* DiagSubGroup84 */ 963, -1,
  /* DiagSubGroup91 */ 832, 1068, -1,
  /* DiagSubGroup92 */ 91, -1,
  /* DiagSubGroup93 */ 88, -1,
  /* DiagSubGroup102 */ 485, 237, 476, 103, 105, 104, 1040, 552, 310, -1,
  /* DiagSubGroup106 */ 109, -1,
  /* DiagSubGroup107 */ 113, -1,
  /* DiagSubGroup108 */ 117, -1,
  /* DiagSubGroup109 */ 117, 112, 110, 848, 850, 852, 854, 856, -1,
  /* DiagSubGroup111 */ 109, 849, 851, 853, 855, 857, -1,
  /* DiagSubGroup113 */ 114, 115, 116, -1,
  /* DiagSubGroup117 */ 118, -1,
  /* DiagSubGroup121 */ 850, 852, 854, 856, -1,
  /* DiagSubGroup122 */ 121, 851, 853, 855, 857, -1,
  /* DiagSubGroup123 */ 120, 119, -1,
  /* DiagSubGroup125 */ 285, 273, 126, 852, 854, 856, -1,
  /* DiagSubGroup127 */ 125, 853, 855, 857, -1,
  /* DiagSubGroup128 */ 124, -1,
  /* DiagSubGroup129 */ 123, -1,
  /* DiagSubGroup130 */ 125, -1,
  /* DiagSubGroup131 */ 126, -1,
  /* DiagSubGroup132 */ 128, -1,
  /* DiagSubGroup134 */ 854, 856, -1,
  /* DiagSubGroup135 */ 134, 855, 857, -1,
  /* DiagSubGroup137 */ 136, 133, 1161, -1,
  /* DiagSubGroup139 */ 856, -1,
  /* DiagSubGroup140 */ 141, -1,
  /* DiagSubGroup143 */ 134, -1,
  /* DiagSubGroup144 */ 135, -1,
  /* DiagSubGroup145 */ 137, -1,
  /* DiagSubGroup146 */ 140, -1,
  /* DiagSubGroup147 */ 247, -1,
  /* DiagSubGroup148 */ 142, -1,
  /* DiagSubGroup149 */ 852, -1,
  /* DiagSubGroup150 */ 853, -1,
  /* DiagSubGroup151 */ 850, -1,
  /* DiagSubGroup152 */ 851, -1,
  /* DiagSubGroup153 */ 848, -1,
  /* DiagSubGroup155 */ 849, -1,
  /* DiagSubGroup156 */ 159, 161, 848, 850, 852, 854, 856, -1,
  /* DiagSubGroup160 */ 156, 157, 158, 849, 851, 853, 855, 857, -1,
  /* DiagSubGroup165 */ 1161, -1,
  /* DiagSubGroup166 */ 164, -1,
  /* DiagSubGroup167 */ 165, -1,
  /* DiagSubGroup168 */ 981, -1,
  /* DiagSubGroup170 */ 136, 517, 906, -1,
  /* DiagSubGroup171 */ 170, -1,
  /* DiagSubGroup173 */ 194, -1,
  /* DiagSubGroup176 */ 178, 177, -1,
  /* DiagSubGroup188 */ 702, -1,
  /* DiagSubGroup192 */ 191, -1,
  /* DiagSubGroup196 */ 197, 198, -1,
  /* DiagSubGroup202 */ 84, 734, -1,
  /* DiagSubGroup207 */ 91, 185, 202, 333, 85, 363, 525, 474, 471, 802, 580, 699, 721, 745, 958, 1003, -1,
  /* DiagSubGroup208 */ 721, -1,
  /* DiagSubGroup211 */ 212, 264, 24, 209, 210, -1,
  /* DiagSubGroup214 */ 2, -1,
  /* DiagSubGroup223 */ 224, 225, 226, 228, 230, 229, 918, -1,
  /* DiagSubGroup237 */ 238, 241, 240, -1,
  /* DiagSubGroup240 */ 239, 242, -1,
  /* DiagSubGroup249 */ 248, 246, -1,
  /* DiagSubGroup252 */ 254, 255, 256, 258, 259, 261, 265, 267, 268, 269, 270, 271, 257, 273, 274, 283, 285, 282, 286, 287, 288, 289, 284, 275, 281, -1,
  /* DiagSubGroup259 */ 262, -1,
  /* DiagSubGroup260 */ 261, -1,
  /* DiagSubGroup261 */ 263, -1,
  /* DiagSubGroup265 */ 266, -1,
  /* DiagSubGroup279 */ 280, -1,
  /* DiagSubGroup289 */ 110, -1,
  /* DiagSubGroup295 */ 296, -1,
  /* DiagSubGroup298 */ 299, -1,
  /* DiagSubGroup301 */ 303, 302, -1,
  /* DiagSubGroup304 */ 305, -1,
  /* DiagSubGroup317 */ 267, -1,
  /* DiagSubGroup319 */ 704, -1,
  /* DiagSubGroup328 */ 355, -1,
  /* DiagSubGroup329 */ 331, 268, -1,
  /* DiagSubGroup330 */ 269, -1,
  /* DiagSubGroup333 */ 334, 466, 335, 330, -1,
  /* DiagSubGroup334 */ 270, -1,
  /* DiagSubGroup335 */ 271, -1,
  /* DiagSubGroup351 */ 259, 649, 460, 517, 937, 652, 957, 1149, 1135, 723, 724, 325, 1002, 397, 177, 1130, 1101, -1,
  /* DiagSubGroup353 */ 158, 114, -1,
  /* DiagSubGroup354 */ 325, -1,
  /* DiagSubGroup363 */ 365, 366, -1,
  /* DiagSubGroup368 */ 369, 383, 705, 377, 382, 371, 370, 374, 379, -1,
  /* DiagSubGroup373 */ 650, -1,
  /* DiagSubGroup374 */ 375, -1,
  /* DiagSubGroup379 */ 380, -1,
  /* DiagSubGroup384 */ 373, 377, 382, -1,
  /* DiagSubGroup385 */ 374, 379, -1,
  /* DiagSubGroup389 */ 388, -1,
  /* DiagSubGroup396 */ 1021, -1,
  /* DiagSubGroup398 */ 119, 124, 133, 138, -1,
  /* DiagSubGroup404 */ 405, 406, 408, 409, 410, 411, 412, 413, 414, 416, 1170, 417, 418, 419, 420, 421, 423, 424, 425, 426, 427, 893, 428, 429, 431, 432, 433, 434, 1183, 435, 436, -1,
  /* DiagSubGroup429 */ 430, -1,
  /* DiagSubGroup436 */ 1161, -1,
  /* DiagSubGroup449 */ 445, -1,
  /* DiagSubGroup452 */ 298, -1,
  /* DiagSubGroup454 */ 460, -1,
  /* DiagSubGroup459 */ 457, 458, -1,
  /* DiagSubGroup460 */ 461, -1,
  /* DiagSubGroup462 */ 472, 473, -1,
  /* DiagSubGroup468 */ 469, -1,
  /* DiagSubGroup471 */ 477, 768, -1,
  /* DiagSubGroup474 */ 956, 769, 475, -1,
  /* DiagSubGroup476 */ 466, -1,
  /* DiagSubGroup477 */ 464, -1,
  /* DiagSubGroup478 */ 479, 480, 483, 481, 482, -1,
  /* DiagSubGroup500 */ 502, 501, 495, -1,
  /* DiagSubGroup507 */ 509, 701, -1,
  /* DiagSubGroup513 */ 273, -1,
  /* DiagSubGroup526 */ 525, -1,
  /* DiagSubGroup528 */ 529, -1,
  /* DiagSubGroup531 */ 456, -1,
  /* DiagSubGroup561 */ 571, 574, -1,
  /* DiagSubGroup562 */ 561, 575, 578, -1,
  /* DiagSubGroup571 */ 576, 572, 564, 566, -1,
  /* DiagSubGroup574 */ 577, 573, 565, 566, 569, -1,
  /* DiagSubGroup575 */ 563, 568, -1,
  /* DiagSubGroup578 */ 570, -1,
  /* DiagSubGroup582 */ 159, -1,
  /* DiagSubGroup585 */ 116, -1,
  /* DiagSubGroup586 */ 367, 886, -1,
  /* DiagSubGroup596 */ 595, -1,
  /* DiagSubGroup602 */ 606, 611, 624, 609, 620, 630, 603, 635, 616, 636, 627, 628, 634, 618, 615, 610, 632, 629, 614, 622, 621, 619, 605, 608, 637, 604, 607, 613, 625, 631, 510, 626, 612, -1,
  /* DiagSubGroup632 */ 633, -1,
  /* DiagSubGroup649 */ 647, -1,
  /* DiagSubGroup680 */ 53, 93, 184, 191, 249, 368, 367, 387, 462, 514, 527, 643, 644, 681, 686, 888, 904, 920, 933, 936, 964, 965, 1005, 1023, 1052, 1085, 1097, 1132, 1175, 750, 738, 741, 805, 872, 179, 349, 1159, -1,
  /* DiagSubGroup681 */ 829, 898, 919, 936, -1,
  /* DiagSubGroup683 */ 624, -1,
  /* DiagSubGroup690 */ 117, -1,
  /* DiagSubGroup696 */ 126, -1,
  /* DiagSubGroup698 */ 957, 207, 581, -1,
  /* DiagSubGroup701 */ 700, -1,
  /* DiagSubGroup707 */ 708, -1,
  /* DiagSubGroup714 */ 715, -1,
  /* DiagSubGroup723 */ 425, -1,
  /* DiagSubGroup726 */ 727, -1,
  /* DiagSubGroup737 */ 764, -1,
  /* DiagSubGroup744 */ 770, -1,
  /* DiagSubGroup764 */ 765, -1,
  /* DiagSubGroup767 */ 769, 768, 734, 1028, -1,
  /* DiagSubGroup777 */ 974, -1,
  /* DiagSubGroup786 */ 975, 788, 791, 793, 792, 787, 789, 794, 790, -1,
  /* DiagSubGroup793 */ 792, -1,
  /* DiagSubGroup802 */ 478, -1,
  /* DiagSubGroup806 */ 517, -1,
  /* DiagSubGroup812 */ 813, -1,
  /* DiagSubGroup814 */ 815, -1,
  /* DiagSubGroup816 */ 584, 583, 87, 89, 953, 804, 817, 227, -1,
  /* DiagSubGroup818 */ 1079, -1,
  /* DiagSubGroup825 */ 83, 163, 114, 116, 119, 120, 124, 133, 136, 362, 398, 406, 408, 410, 411, 412, 413, 416, 417, 418, 420, 421, 423, 424, 425, 427, 428, 429, 433, 435, 555, 585, 606, 607, 609, 612, 613, 615, 620, 621, 629, 803, 1183, 306, 557, 550, 250, 773, 489, 322, 326, 729, 67, 71, 1072, 915, 195, 1041, 691, 781, -1,
  /* DiagSubGroup827 */ 283, 587, 99, 914, 359, -1,
  /* DiagSubGroup831 */ 427, -1,
  /* DiagSubGroup836 */ 1172, -1,
  /* DiagSubGroup837 */ 836, 1173, -1,
  /* DiagSubGroup844 */ 845, -1,
  /* DiagSubGroup847 */ 1097, 459, 842, 844, -1,
  /* DiagSubGroup849 */ 848, 154, -1,
  /* DiagSubGroup851 */ 850, -1,
  /* DiagSubGroup853 */ 852, -1,
  /* DiagSubGroup855 */ 854, -1,
  /* DiagSubGroup857 */ 856, -1,
  /* DiagSubGroup858 */ 856, -1,
  /* DiagSubGroup859 */ 857, -1,
  /* DiagSubGroup861 */ 860, -1,
  /* DiagSubGroup862 */ 1161, -1,
  /* DiagSubGroup863 */ 862, -1,
  /* DiagSubGroup864 */ 862, -1,
  /* DiagSubGroup865 */ 863, -1,
  /* DiagSubGroup867 */ 866, -1,
  /* DiagSubGroup886 */ 888, 887, -1,
  /* DiagSubGroup901 */ 285, -1,
  /* DiagSubGroup904 */ 905, 906, -1,
  /* DiagSubGroup909 */ 911, -1,
  /* DiagSubGroup910 */ 911, 912, 1158, 908, -1,
  /* DiagSubGroup913 */ 112, -1,
  /* DiagSubGroup916 */ 918, -1,
  /* DiagSubGroup920 */ 921, 917, -1,
  /* DiagSubGroup931 */ 932, -1,
  /* DiagSubGroup933 */ 935, 934, -1,
  /* DiagSubGroup939 */ 1118, -1,
  /* DiagSubGroup941 */ 945, 947, -1,
  /* DiagSubGroup942 */ 941, 944, 948, 943, -1,
  /* DiagSubGroup944 */ 945, -1,
  /* DiagSubGroup977 */ 976, -1,
  /* DiagSubGroup980 */ 431, -1,
  /* DiagSubGroup997 */ 840, -1,
  /* DiagSubGroup999 */ 277, -1,
  /* DiagSubGroup1012 */ 968, 316, 714, 599, 1011, -1,
  /* DiagSubGroup1023 */ 1024, 1030, 1029, 1022, 1032, 1028, 1027, -1,
  /* DiagSubGroup1024 */ 1026, -1,
  /* DiagSubGroup1025 */ 1054, 1036, -1,
  /* DiagSubGroup1042 */ 1044, 1043, 1048, 1049, -1,
  /* DiagSubGroup1049 */ 1050, -1,
  /* DiagSubGroup1054 */ 1031, 1035, 1033, 1034, -1,
  /* DiagSubGroup1063 */ 1065, -1,
  /* DiagSubGroup1078 */ 841, -1,
  /* DiagSubGroup1079 */ 1080, -1,
  /* DiagSubGroup1085 */ 972, 984, 1087, 1086, -1,
  /* DiagSubGroup1100 */ 161, -1,
  /* DiagSubGroup1105 */ 1110, 1108, 1109, -1,
  /* DiagSubGroup1106 */ 1105, 1107, 1111, -1,
  /* DiagSubGroup1112 */ 1113, 1115, 1117, 1116, 1114, -1,
  /* DiagSubGroup1132 */ 1133, 1141, 1143, 1150, 1144, 1145, 1154, 1155, 1136, 1151, -1,
  /* DiagSubGroup1136 */ 1134, -1,
  /* DiagSubGroup1141 */ 1102, -1,
  /* DiagSubGroup1146 */ 1145, -1,
  /* DiagSubGroup1148 */ 1103, -1,
  /* DiagSubGroup1153 */ 1102, -1,
  /* DiagSubGroup1154 */ 1138, 1152, 1078, -1,
  /* DiagSubGroup1155 */ 1139, -1,
  /* DiagSubGroup1165 */ 1164, -1,
  /* DiagSubGroup1168 */ 1170, -1,
  /* DiagSubGroup1169 */ 1171, -1,
  /* DiagSubGroup1170 */ 1169, -1,
  /* DiagSubGroup1173 */ 1172, -1,
  /* DiagSubGroup1179 */ 289, -1,
  /* DiagSubGroup1180 */ 1179, -1,
};


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Woverlength-strings"
#endif
static constexpr char DiagGroupNamesStorage[] =
  "\0"
  "#pragma-messages\0"
  "#warnings\0"
  "CFString-literal\0"
  "CL4\0"
  "IndependentClass-attribute\0"
  "NSObject-attribute\0"
  "TU-local-entity-exposure\0"
  "aarch64-sme-attributes\0"
  "abi\0"
  "absolute-value\0"
  "abstract-final-class\0"
  "abstract-vbase-init\0"
  "address\0"
  "address-of-packed-member\0"
  "address-of-temporary\0"
  "aggregate-return\0"
  "aix-compat\0"
  "alias-template-in-declaration-name\0"
  "align-mismatch\0"
  "all\0"
  "alloc-size\0"
  "alloca\0"
  "alloca-with-align-alignof\0"
  "always-inline-coroutine\0"
  "ambiguous-delete\0"
  "ambiguous-ellipsis\0"
  "ambiguous-macro\0"
  "ambiguous-member-template\0"
  "ambiguous-reversed-operator\0"
  "amdgpu-unguarded-builtin-usage\0"
  "amdgpu-wait-event-mask\0"
  "analyzer-incompatible-plugin\0"
  "android-unversioned-fallback\0"
  "anon-enum-enum-conversion\0"
  "anonymous-pack-parens\0"
  "apinotes\0"
  "arc\0"
  "arc-bridge-casts-disallowed-in-nonarc\0"
  "arc-maybe-repeated-use-of-weak\0"
  "arc-non-pod-memaccess\0"
  "arc-performSelector-leaks\0"
  "arc-repeated-use-of-weak\0"
  "arc-retain-cycles\0"
  "arc-unsafe-retained-assign\0"
  "argument-outside-range\0"
  "argument-undefined-behaviour\0"
  "arm-interrupt-save-fp-no-vfp-unit\0"
  "arm-interrupt-vfp-clobber\0"
  "array-bounds\0"
  "array-bounds-pointer-arithmetic\0"
  "array-compare\0"
  "array-compare-cxx26\0"
  "array-parameter\0"
  "asm\0"
  "asm-operand-widths\0"
  "assign-enum\0"
  "assume\0"
  "at-protocol\0"
  "atimport-in-framework-header\0"
  "atomic-access\0"
  "atomic-alignment\0"
  "atomic-implicit-seq-cst\0"
  "atomic-memory-ordering\0"
  "atomic-properties\0"
  "atomic-property-with-user-defined-accessor\0"
  "attribute-packed-for-bitfield\0"
  "attribute-preprocessor-tokens\0"
  "attribute-statement\0"
  "attribute-warning\0"
  "attributes\0"
  "auto-decl-extensions\0"
  "auto-disable-vptr-sanitizer\0"
  "auto-import\0"
  "auto-storage-class\0"
  "auto-var-id\0"
  "availability\0"
  "avr-rtlib-linking-quirks\0"
  "backend-plugin\0"
  "backslash-newline-escape\0"
  "bad-function-cast\0"
  "binary-literal\0"
  "bind-to-temporary-copy\0"
  "bit-int-extension\0"
  "bitfield-constant-conversion\0"
  "bitfield-enum-conversion\0"
  "bitfield-width\0"
  "bitwise-conditional-parentheses\0"
  "bitwise-instead-of-logical\0"
  "bitwise-op-parentheses\0"
  "block-capture-autoreleasing\0"
  "bool-conversion\0"
  "bool-conversions\0"
  "bool-operation\0"
  "bounds-safety-counted-by-elt-type-unknown-size\0"
  "braced-scalar-init\0"
  "branch-protection\0"
  "bridge-cast\0"
  "builtin-assume-aligned-alignment\0"
  "builtin-macro-redefined\0"
  "builtin-memcpy-chk-size\0"
  "builtin-requires-header\0"
  "c++-compat\0"
  "c++-hidden-decl\0"
  "c++-keyword\0"
  "c++-unterminated-string-initialization\0"
  "c++0x-compat\0"
  "c++0x-extensions\0"
  "c++0x-narrowing\0"
  "c++11-compat\0"
  "c++11-compat-deprecated-writable-strings\0"
  "c++11-compat-pedantic\0"
  "c++11-compat-reserved-user-defined-literal\0"
  "c++11-extensions\0"
  "c++11-extra-semi\0"
  "c++11-inline-namespace\0"
  "c++11-long-long\0"
  "c++11-narrowing\0"
  "c++11-narrowing-const-reference\0"
  "c++14-attribute-extensions\0"
  "c++14-binary-literal\0"
  "c++14-compat\0"
  "c++14-compat-pedantic\0"
  "c++14-extensions\0"
  "c++17-attribute-extensions\0"
  "c++17-compat\0"
  "c++17-compat-mangling\0"
  "c++17-compat-pedantic\0"
  "c++17-extensions\0"
  "c++1y-extensions\0"
  "c++1z-compat\0"
  "c++1z-compat-mangling\0"
  "c++1z-extensions\0"
  "c++20-attribute-extensions\0"
  "c++20-compat\0"
  "c++20-compat-pedantic\0"
  "c++20-designator\0"
  "c++20-extensions\0"
  "c++23-attribute-extensions\0"
  "c++23-compat\0"
  "c++23-extensions\0"
  "c++23-lambda-attributes\0"
  "c++26-extensions\0"
  "c++2a-compat\0"
  "c++2a-compat-pedantic\0"
  "c++2a-extensions\0"
  "c++2b-extensions\0"
  "c++2c-compat\0"
  "c++2c-extensions\0"
  "c++98-c++11-c++14-c++17-compat\0"
  "c++98-c++11-c++14-c++17-compat-pedantic\0"
  "c++98-c++11-c++14-compat\0"
  "c++98-c++11-c++14-compat-pedantic\0"
  "c++98-c++11-compat\0"
  "c++98-c++11-compat-binary-literal\0"
  "c++98-c++11-compat-pedantic\0"
  "c++98-compat\0"
  "c++98-compat-bind-to-temporary-copy\0"
  "c++98-compat-extra-semi\0"
  "c++98-compat-local-type-template-args\0"
  "c++98-compat-pedantic\0"
  "c++98-compat-unnamed-type-template-args\0"
  "c-attribute-extension\0"
  "c11-extensions\0"
  "c23-compat\0"
  "c23-extensions\0"
  "c2x-compat\0"
  "c2x-extensions\0"
  "c2y-extensions\0"
  "c99-compat\0"
  "c99-designator\0"
  "c99-extensions\0"
  "call-to-pure-virtual-from-ctor-dtor\0"
  "called-once-parameter\0"
  "cast-align\0"
  "cast-calling-convention\0"
  "cast-function-type\0"
  "cast-function-type-mismatch\0"
  "cast-function-type-strict\0"
  "cast-of-sel-type\0"
  "cast-qual\0"
  "cast-qual-unrelated\0"
  "cfi-unchecked-callee\0"
  "char-align\0"
  "char-subscripts\0"
  "character-conversion\0"
  "clang-cl-pch\0"
  "class-conversion\0"
  "class-varargs\0"
  "cmse-union-leak\0"
  "comma\0"
  "comment\0"
  "comments\0"
  "compare-distinct-pointer-types\0"
  "completion-handler\0"
  "complex-component-init\0"
  "compound-token-split\0"
  "compound-token-split-by-macro\0"
  "compound-token-split-by-space\0"
  "conditional-type-mismatch\0"
  "conditional-uninitialized\0"
  "config-macros\0"
  "constant-conversion\0"
  "constant-evaluated\0"
  "constant-logical-operand\0"
  "constexpr-not-const\0"
  "consumed\0"
  "conversion\0"
  "conversion-null\0"
  "coro-non-aligned-allocation-function\0"
  "coro-type-aware-allocation-function\0"
  "coroutine\0"
  "coroutine-missing-unhandled-exception\0"
  "covered-switch-default\0"
  "cpp\0"
  "cstring-format-directive\0"
  "ctad-maybe-unsupported\0"
  "ctor-dtor-privacy\0"
  "ctu\0"
  "ctu-remarks\0"
  "cuda-compat\0"
  "custom-atomic-properties\0"
  "cxx-attribute-extension\0"
  "dangling\0"
  "dangling-assignment\0"
  "dangling-assignment-gsl\0"
  "dangling-capture\0"
  "dangling-else\0"
  "dangling-field\0"
  "dangling-gsl\0"
  "dangling-initializer-list\0"
  "darwin-sdk-settings\0"
  "date-time\0"
  "dealloc-in-category\0"
  "debug-compression-unavailable\0"
  "declaration-after-statement\0"
  "decls-in-multiple-modules\0"
  "default-const-init\0"
  "default-const-init-field\0"
  "default-const-init-field-unsafe\0"
  "default-const-init-unsafe\0"
  "default-const-init-var\0"
  "default-const-init-var-unsafe\0"
  "defaulted-function-deleted\0"
  "delayed-template-parsing-in-cxx20\0"
  "delegating-ctor-cycles\0"
  "delete-abstract-non-virtual-dtor\0"
  "delete-incomplete\0"
  "delete-non-abstract-non-virtual-dtor\0"
  "delete-non-virtual-dtor\0"
  "delimited-escape-sequence-extension\0"
  "deprecate-lax-vec-conv-all\0"
  "deprecated\0"
  "deprecated-altivec-src-compat\0"
  "deprecated-anon-enum-enum-conversion\0"
  "deprecated-array-compare\0"
  "deprecated-attributes\0"
  "deprecated-builtins\0"
  "deprecated-comma-subscript\0"
  "deprecated-copy\0"
  "deprecated-copy-dtor\0"
  "deprecated-copy-with-dtor\0"
  "deprecated-copy-with-user-provided-copy\0"
  "deprecated-copy-with-user-provided-dtor\0"
  "deprecated-coroutine\0"
  "deprecated-declarations\0"
  "deprecated-declarations-switch-case\0"
  "deprecated-dynamic-exception-spec\0"
  "deprecated-enum-compare\0"
  "deprecated-enum-compare-conditional\0"
  "deprecated-enum-enum-conversion\0"
  "deprecated-enum-float-conversion\0"
  "deprecated-implementations\0"
  "deprecated-increment-bool\0"
  "deprecated-literal-operator\0"
  "deprecated-missing-comma-variadic-parameter\0"
  "deprecated-module-dot-map\0"
  "deprecated-non-prototype\0"
  "deprecated-objc-isa-usage\0"
  "deprecated-objc-pointer-introspection\0"
  "deprecated-objc-pointer-introspection-performSelector\0"
  "deprecated-octal-literals\0"
  "deprecated-ofast\0"
  "deprecated-pragma\0"
  "deprecated-redundant-constexpr-static-def\0"
  "deprecated-register\0"
  "deprecated-this-capture\0"
  "deprecated-type\0"
  "deprecated-volatile\0"
  "deprecated-writable-strings\0"
  "direct-ivar-access\0"
  "disabled-macro-expansion\0"
  "disabled-optimization\0"
  "discard-qual\0"
  "distributed-object-modifiers\0"
  "div-by-zero\0"
  "division-by-zero\0"
  "dll-attribute-on-redeclaration\0"
  "dllexport-explicit-instantiation\0"
  "dllexport-explicit-instantiation-decl\0"
  "dllimport-static-field-def\0"
  "documentation\0"
  "documentation-deprecated-sync\0"
  "documentation-html\0"
  "documentation-pedantic\0"
  "documentation-unknown-command\0"
  "dollar-in-identifier-extension\0"
  "double-promotion\0"
  "dtor-name\0"
  "dtor-typedef\0"
  "duplicate-decl-specifier\0"
  "duplicate-enum\0"
  "duplicate-method-arg\0"
  "duplicate-method-match\0"
  "duplicate-protocol\0"
  "dxil-validation\0"
  "dynamic-class-memaccess\0"
  "dynamic-exception-spec\0"
  "eager-load-cxx-named-modules\0"
  "effc++\0"
  "elaborated-enum-base\0"
  "elaborated-enum-class\0"
  "embedded-directive\0"
  "empty-body\0"
  "empty-decomposition\0"
  "empty-init-stmt\0"
  "empty-translation-unit\0"
  "encode-type\0"
  "endif-labels\0"
  "enum-compare\0"
  "enum-compare-conditional\0"
  "enum-compare-switch\0"
  "enum-compare-typo\0"
  "enum-conversion\0"
  "enum-enum-conversion\0"
  "enum-float-conversion\0"
  "enum-too-large\0"
  "exceptions\0"
  "excess-initializers\0"
  "excessive-regsave\0"
  "exit-time-destructors\0"
  "expansion-to-defined\0"
  "experimental-header-units\0"
  "experimental-option\0"
  "explicit-initialize-call\0"
  "explicit-ownership-type\0"
  "explicit-specialization-storage-class\0"
  "export-unnamed\0"
  "ext-cxx-type-aware-allocators\0"
  "extern-c-compat\0"
  "extern-initializer\0"
  "extra\0"
  "extra-qualification\0"
  "extra-semi\0"
  "extra-semi-stmt\0"
  "extra-tokens\0"
  "extractapi-misuse\0"
  "extraneous-template-head\0"
  "final-dtor-non-final-class\0"
  "final-macro\0"
  "fixed-point-overflow\0"
  "flag-enum\0"
  "flexible-array-extensions\0"
  "float-conversion\0"
  "float-equal\0"
  "float-overflow-conversion\0"
  "float-zero-conversion\0"
  "for-loop-analysis\0"
  "format\0"
  "format-extra-args\0"
  "format-insufficient-args\0"
  "format-invalid-specifier\0"
  "format-non-iso\0"
  "format-nonliteral\0"
  "format-overflow\0"
  "format-overflow-non-kprintf\0"
  "format-pedantic\0"
  "format-security\0"
  "format-signedness\0"
  "format-truncation\0"
  "format-truncation-non-kprintf\0"
  "format-type-confusion\0"
  "format-y2k\0"
  "format-zero-length\0"
  "format=2\0"
  "fortify-source\0"
  "four-char-constants\0"
  "frame-address\0"
  "frame-larger-than\0"
  "frame-larger-than=\0"
  "framework-include-private-from-public\0"
  "free-nonheap-object\0"
  "friend-enum\0"
  "function-def-in-objc-container\0"
  "function-effect-redeclarations\0"
  "function-effects\0"
  "function-multiversion\0"
  "fuse-ld-path\0"
  "future-attribute-extensions\0"
  "future-compat\0"
  "gcc-compat\0"
  "gcc-install-dir-libstdcxx\0"
  "global-constructors\0"
  "global-isel\0"
  "gnu\0"
  "gnu-alignof-expression\0"
  "gnu-anonymous-struct\0"
  "gnu-array-member-paren-init\0"
  "gnu-auto-type\0"
  "gnu-binary-literal\0"
  "gnu-case-range\0"
  "gnu-complex-integer\0"
  "gnu-compound-literal-initializer\0"
  "gnu-conditional-omitted-operand\0"
  "gnu-designator\0"
  "gnu-empty-initializer\0"
  "gnu-empty-struct\0"
  "gnu-flexible-array-initializer\0"
  "gnu-flexible-array-union-member\0"
  "gnu-folding-constant\0"
  "gnu-imaginary-constant\0"
  "gnu-include-next\0"
  "gnu-inline-cpp-without-extern\0"
  "gnu-label-as-value\0"
  "gnu-line-marker\0"
  "gnu-null-pointer-arithmetic\0"
  "gnu-offsetof-extensions\0"
  "gnu-pointer-arith\0"
  "gnu-redeclared-enum\0"
  "gnu-statement-expression\0"
  "gnu-statement-expression-from-macro-expansion\0"
  "gnu-static-float-init\0"
  "gnu-string-literal-operator-template\0"
  "gnu-union-cast\0"
  "gnu-variable-sized-type-not-at-end\0"
  "gnu-zero-line-directive\0"
  "gnu-zero-variadic-macro-arguments\0"
  "gpu-maybe-wrong-side\0"
  "groupshared-initializer\0"
  "header-guard\0"
  "header-hygiene\0"
  "higher-precision-for-complex-division\0"
  "hip-deprecated-builtins\0"
  "hip-omp-target-directives\0"
  "hip-only\0"
  "hlsl-202y-extensions\0"
  "hlsl-availability\0"
  "hlsl-dxc-compatability\0"
  "hlsl-explicit-binding\0"
  "hlsl-extensions\0"
  "hlsl-implicit-binding\0"
  "idiomatic-parentheses\0"
  "ignored-attributes\0"
  "ignored-availability-without-sdk-settings\0"
  "ignored-base-class-qualifiers\0"
  "ignored-gch\0"
  "ignored-optimization-argument\0"
  "ignored-pragma-intrinsic\0"
  "ignored-pragma-optimize\0"
  "ignored-pragmas\0"
  "ignored-qualifiers\0"
  "ignored-reference-qualifiers\0"
  "implicit\0"
  "implicit-atomic-properties\0"
  "implicit-const-int-float-conversion\0"
  "implicit-conversion-floating-point-to-bool\0"
  "implicit-enum-enum-cast\0"
  "implicit-exception-spec-mismatch\0"
  "implicit-fallthrough\0"
  "implicit-fallthrough-per-function\0"
  "implicit-fixed-point-conversion\0"
  "implicit-float-conversion\0"
  "implicit-function-declaration\0"
  "implicit-int\0"
  "implicit-int-conversion\0"
  "implicit-int-conversion-on-negation\0"
  "implicit-int-enum-cast\0"
  "implicit-int-float-conversion\0"
  "implicit-overflow-behavior-conversion\0"
  "implicit-overflow-behavior-conversion-assignment\0"
  "implicit-overflow-behavior-conversion-assignment-pedantic\0"
  "implicit-overflow-behavior-conversion-function-boundary\0"
  "implicit-overflow-behavior-conversion-function-boundary-pedantic\0"
  "implicit-overflow-behavior-conversion-pedantic\0"
  "implicit-retain-self\0"
  "implicit-void-ptr-cast\0"
  "implicitly-unsigned-literal\0"
  "import\0"
  "import-implementation-partition-unit-in-interface-unit\0"
  "import-preprocessor-directive-pedantic\0"
  "inaccessible-base\0"
  "include-angled-in-module-purview\0"
  "include-next-absolute-path\0"
  "include-next-outside-header\0"
  "incompatible-exception-spec\0"
  "incompatible-function-pointer-types\0"
  "incompatible-function-pointer-types-strict\0"
  "incompatible-library-redeclaration\0"
  "incompatible-ms-pragma-section\0"
  "incompatible-ms-struct\0"
  "incompatible-pointer-types\0"
  "incompatible-pointer-types-discards-overflow-behavior\0"
  "incompatible-pointer-types-discards-qualifiers\0"
  "incompatible-property-type\0"
  "incompatible-sysroot\0"
  "incomplete-framework-module-declaration\0"
  "incomplete-implementation\0"
  "incomplete-module\0"
  "incomplete-setjmp-declaration\0"
  "incomplete-umbrella\0"
  "inconsistent-dllimport\0"
  "inconsistent-missing-destructor-override\0"
  "inconsistent-missing-override\0"
  "increment-bool\0"
  "infinite-recursion\0"
  "init-priority-reserved\0"
  "init-self\0"
  "initializer-overrides\0"
  "injected-class-name\0"
  "inline\0"
  "inline-asm\0"
  "inline-namespace-reopened-noninline\0"
  "inline-new-delete\0"
  "installapi-violation\0"
  "instantiation-after-specialization\0"
  "int-conversion\0"
  "int-conversions\0"
  "int-in-bool-context\0"
  "int-to-pointer-cast\0"
  "int-to-void-pointer-cast\0"
  "integer-overflow\0"
  "invalid-command-line-argument\0"
  "invalid-constexpr\0"
  "invalid-feature-combination\0"
  "invalid-gnu-asm-cast\0"
  "invalid-iboutlet\0"
  "invalid-initializer-from-system-header\0"
  "invalid-ios-deployment-target\0"
  "invalid-no-builtin-names\0"
  "invalid-noreturn\0"
  "invalid-offsetof\0"
  "invalid-or-nonexistent-directory\0"
  "invalid-partial-specialization\0"
  "invalid-pch\0"
  "invalid-pp-token\0"
  "invalid-source-encoding\0"
  "invalid-specialization\0"
  "invalid-static-assert-message\0"
  "invalid-token-paste\0"
  "invalid-unevaluated-string\0"
  "invalid-utf8\0"
  "invalid-version-availability\0"
  "jump-misses-init\0"
  "jump-seh-finally\0"
  "keyword-compat\0"
  "keyword-macro\0"
  "knr-promoted-parameter\0"
  "language-extension-token\0"
  "large-by-value-copy\0"
  "legacy-constant-register-binding\0"
  "liblto\0"
  "lifetime-safety\0"
  "lifetime-safety-all\0"
  "lifetime-safety-cross-tu-suggestions\0"
  "lifetime-safety-dangling-field\0"
  "lifetime-safety-dangling-field-moved\0"
  "lifetime-safety-dangling-global\0"
  "lifetime-safety-dangling-global-moved\0"
  "lifetime-safety-intra-tu-suggestions\0"
  "lifetime-safety-invalidation\0"
  "lifetime-safety-noescape\0"
  "lifetime-safety-permissive\0"
  "lifetime-safety-return-stack-addr\0"
  "lifetime-safety-return-stack-addr-moved\0"
  "lifetime-safety-strict\0"
  "lifetime-safety-suggestions\0"
  "lifetime-safety-use-after-scope\0"
  "lifetime-safety-use-after-scope-moved\0"
  "lifetime-safety-validations\0"
  "linker-warnings\0"
  "literal-conversion\0"
  "literal-range\0"
  "local-type-template-args\0"
  "logical-not-parentheses\0"
  "logical-op-parentheses\0"
  "long-long\0"
  "loop-analysis\0"
  "macro-redefined\0"
  "main\0"
  "main-attached-to-named-module\0"
  "main-return-type\0"
  "malformed-warning-check\0"
  "many-braces-around-scalar-init\0"
  "math-errno-enabled-with-veclib\0"
  "mathematical-notation-identifier-extension\0"
  "matrix-conversion\0"
  "matrix-conversions\0"
  "max-tokens\0"
  "max-unsigned-zero\0"
  "memset-transposed-args\0"
  "memsize-comparison\0"
  "method-signatures\0"
  "microsoft\0"
  "microsoft-abstract\0"
  "microsoft-anon-tag\0"
  "microsoft-cast\0"
  "microsoft-charize\0"
  "microsoft-comment-paste\0"
  "microsoft-const-init\0"
  "microsoft-cpp-macro\0"
  "microsoft-default-arg-redefinition\0"
  "microsoft-drectve-section\0"
  "microsoft-empty-enum\0"
  "microsoft-end-of-file\0"
  "microsoft-enum-forward-reference\0"
  "microsoft-enum-value\0"
  "microsoft-exception-spec\0"
  "microsoft-exists\0"
  "microsoft-explicit-constructor-call\0"
  "microsoft-extra-qualification\0"
  "microsoft-fixed-enum\0"
  "microsoft-flexible-array\0"
  "microsoft-goto\0"
  "microsoft-inaccessible-base\0"
  "microsoft-include\0"
  "microsoft-init-from-predefined\0"
  "microsoft-inline-on-non-function\0"
  "microsoft-mutable-reference\0"
  "microsoft-pure-definition\0"
  "microsoft-redeclare-static\0"
  "microsoft-sealed\0"
  "microsoft-string-literal-from-predefined\0"
  "microsoft-template\0"
  "microsoft-template-shadow\0"
  "microsoft-union-member-reference\0"
  "microsoft-unqualified-friend\0"
  "microsoft-using-decl\0"
  "microsoft-void-pseudo-dtor\0"
  "misexpect\0"
  "misleading-indentation\0"
  "mismatched-new-delete\0"
  "mismatched-parameter-types\0"
  "mismatched-return-types\0"
  "mismatched-tags\0"
  "missing-braces\0"
  "missing-constinit\0"
  "missing-declarations\0"
  "missing-designated-field-initializers\0"
  "missing-exception-spec\0"
  "missing-field-initializers\0"
  "missing-format-attribute\0"
  "missing-include-dirs\0"
  "missing-method-return-type\0"
  "missing-multilib\0"
  "missing-noescape\0"
  "missing-noreturn\0"
  "missing-prototype-for-cc\0"
  "missing-prototypes\0"
  "missing-selector-name\0"
  "missing-sysroot\0"
  "missing-template-arg-list-after-template-kw\0"
  "missing-variable-declarations\0"
  "misspelled-assumption\0"
  "mix-packoffset\0"
  "mmap-deprecated-symlink-to-modular-header\0"
  "module-build\0"
  "module-conflict\0"
  "module-file-config-mismatch\0"
  "module-file-extension\0"
  "module-file-mapping-mismatch\0"
  "module-import\0"
  "module-import-in-extern-c\0"
  "module-include-translation\0"
  "module-lock\0"
  "module-map\0"
  "module-map-path-outside-directory\0"
  "module-validation\0"
  "modules-ambiguous-internal-linkage\0"
  "modules-driver\0"
  "modules-import-nested-redundant\0"
  "most\0"
  "move\0"
  "ms-bitfield-padding\0"
  "msvc-include\0"
  "msvc-not-found\0"
  "multi-gpu\0"
  "multichar\0"
  "multilib-not-found\0"
  "multiple-move-vbase\0"
  "nan-infinity-disabled\0"
  "narrowing\0"
  "nested-anon-types\0"
  "nested-externs\0"
  "new-returns-null\0"
  "newline-eof\0"
  "noderef\0"
  "noexcept-type\0"
  "non-c-typedef-for-linkage\0"
  "non-gcc\0"
  "non-literal-null-conversion\0"
  "non-modular-include-in-framework-module\0"
  "non-modular-include-in-module\0"
  "non-pod-varargs\0"
  "non-power-of-two-alignment\0"
  "non-virtual-dtor\0"
  "nonnull\0"
  "nonportable-cfstrings\0"
  "nonportable-include-path\0"
  "nonportable-include-path-separator\0"
  "nonportable-private-apinotes-path\0"
  "nonportable-private-system-apinotes-path\0"
  "nonportable-sycl\0"
  "nonportable-system-include-path\0"
  "nonportable-vector-initialization\0"
  "nontrivial-memaccess\0"
  "nontrivial-memcall\0"
  "nrvo\0"
  "nsconsumed-mismatch\0"
  "nsreturns-mismatch\0"
  "null-arithmetic\0"
  "null-character\0"
  "null-conversion\0"
  "null-dereference\0"
  "null-pointer-arithmetic\0"
  "null-pointer-subtraction\0"
  "nullability\0"
  "nullability-completeness\0"
  "nullability-completeness-on-arrays\0"
  "nullability-declspec\0"
  "nullability-extension\0"
  "nullability-inferred-on-nested-type\0"
  "nullable-to-nonnull-conversion\0"
  "nvcc-compat\0"
  "objc-autosynthesis-property-ivar-name-match\0"
  "objc-bool-constant-conversion\0"
  "objc-boxing\0"
  "objc-circular-container\0"
  "objc-cocoa-api\0"
  "objc-designated-initializers\0"
  "objc-dictionary-duplicate-keys\0"
  "objc-duplicate-category-definition\0"
  "objc-flexible-array\0"
  "objc-forward-class-redefinition\0"
  "objc-interface-ivars\0"
  "objc-literal-compare\0"
  "objc-literal-conversion\0"
  "objc-macro-redefinition\0"
  "objc-messaging-id\0"
  "objc-method-access\0"
  "objc-missing-property-synthesis\0"
  "objc-missing-super-calls\0"
  "objc-multiple-method-names\0"
  "objc-noncopy-retain-block-property\0"
  "objc-nonunified-exceptions\0"
  "objc-property-assign-on-object-type\0"
  "objc-property-implementation\0"
  "objc-property-implicit-mismatch\0"
  "objc-property-matches-cocoa-ownership-rule\0"
  "objc-property-no-attribute\0"
  "objc-property-synthesis\0"
  "objc-protocol-method-implementation\0"
  "objc-protocol-property-synthesis\0"
  "objc-protocol-qualifiers\0"
  "objc-readonly-with-setter-property\0"
  "objc-redundant-api-use\0"
  "objc-redundant-literal-use\0"
  "objc-root-class\0"
  "objc-signed-char-bool\0"
  "objc-signed-char-bool-implicit-float-conversion\0"
  "objc-signed-char-bool-implicit-int-conversion\0"
  "objc-string-compare\0"
  "objc-string-concatenation\0"
  "objc-unsafe-perform-selector\0"
  "octal-prefix-extension\0"
  "odr\0"
  "old-style-cast\0"
  "old-style-definition\0"
  "openacc\0"
  "openacc-cache-var-inside-loop\0"
  "openacc-confusing-routine-name\0"
  "openacc-deprecated-clause-alias\0"
  "openacc-extension\0"
  "openacc-self-if-potential-conflict\0"
  "openacc-var-lacks-operation\0"
  "openacc-var-non-const-array\0"
  "opencl-unsupported-rgba\0"
  "openmp\0"
  "openmp-51-extensions\0"
  "openmp-clauses\0"
  "openmp-extensions\0"
  "openmp-future\0"
  "openmp-loop-form\0"
  "openmp-mapping\0"
  "openmp-target\0"
  "openmp-target-exception\0"
  "option-ignored\0"
  "ordered-compare-function-pointers\0"
  "out-of-line-declaration\0"
  "out-of-scope-function\0"
  "over-aligned\0"
  "overflow\0"
  "overflow-behavior-attribute-ignored\0"
  "overflow-behavior-conversion\0"
  "overlength-strings\0"
  "overloaded-shift-op-parentheses\0"
  "overloaded-virtual\0"
  "override-init\0"
  "override-module\0"
  "overriding-complex-range\0"
  "overriding-deployment-version\0"
  "overriding-method-mismatch\0"
  "overriding-option\0"
  "packed\0"
  "packed-non-pod\0"
  "padded\0"
  "padded-bitfield\0"
  "parentheses\0"
  "parentheses-equality\0"
  "partial-availability\0"
  "pass\0"
  "pass-analysis\0"
  "pass-failed\0"
  "pass-missed\0"
  "pch-date-time\0"
  "pch-vfs-diff\0"
  "pedantic\0"
  "pedantic-core-features\0"
  "pedantic-macros\0"
  "perf-constraint-implies-noexcept\0"
  "pessimizing-move\0"
  "pgo-coverage\0"
  "pointer-arith\0"
  "pointer-bool-conversion\0"
  "pointer-compare\0"
  "pointer-integer-compare\0"
  "pointer-sign\0"
  "pointer-to-enum-cast\0"
  "pointer-to-int-cast\0"
  "pointer-type-mismatch\0"
  "poison-system-directories\0"
  "potentially-direct-selector\0"
  "potentially-evaluated-expression\0"
  "pragma-clang-attribute\0"
  "pragma-once-outside-header\0"
  "pragma-pack\0"
  "pragma-pack-suspicious-include\0"
  "pragma-system-header-outside-header\0"
  "pragmas\0"
  "pre-c++14-compat\0"
  "pre-c++14-compat-pedantic\0"
  "pre-c++17-compat\0"
  "pre-c++17-compat-pedantic\0"
  "pre-c++20-compat\0"
  "pre-c++20-compat-pedantic\0"
  "pre-c++23-compat\0"
  "pre-c++23-compat-pedantic\0"
  "pre-c++26-compat\0"
  "pre-c++26-compat-pedantic\0"
  "pre-c++2c-compat\0"
  "pre-c++2c-compat-pedantic\0"
  "pre-c11-compat\0"
  "pre-c11-compat-pedantic\0"
  "pre-c23-compat\0"
  "pre-c23-compat-pedantic\0"
  "pre-c2x-compat\0"
  "pre-c2x-compat-pedantic\0"
  "pre-c2y-compat\0"
  "pre-c2y-compat-pedantic\0"
  "pre-openmp-51-compat\0"
  "predefined-identifier-outside-function\0"
  "preferred-type-bitfield-enum-conversion\0"
  "preferred-type-bitfield-width\0"
  "private-extern\0"
  "private-header\0"
  "private-module\0"
  "profile-instr-missing\0"
  "profile-instr-out-of-date\0"
  "profile-instr-unprofiled\0"
  "property-access-dot-syntax\0"
  "property-attribute-mismatch\0"
  "protocol\0"
  "protocol-property-synthesis-ambiguity\0"
  "psabi\0"
  "ptrauth-null-pointers\0"
  "qualified-void-return-type\0"
  "quoted-include-in-framework-header\0"
  "range-loop-analysis\0"
  "range-loop-bind-reference\0"
  "range-loop-construct\0"
  "read-only-types\0"
  "readonly-iboutlet-property\0"
  "receiver-expr\0"
  "receiver-forward-class\0"
  "redeclared-class-member\0"
  "reduced-bmi-output-overrided\0"
  "redundant-attribute\0"
  "redundant-consteval-if\0"
  "redundant-decls\0"
  "redundant-move\0"
  "redundant-parens\0"
  "reference-tu-local-entity-in-other-tu\0"
  "register\0"
  "reinterpret-base-class\0"
  "remark-backend-plugin\0"
  "reorder\0"
  "reorder-ctor\0"
  "reorder-init-list\0"
  "requires-super-attribute\0"
  "reserved-attribute-identifier\0"
  "reserved-id-macro\0"
  "reserved-identifier\0"
  "reserved-macro-identifier\0"
  "reserved-module-identifier\0"
  "reserved-user-defined-literal\0"
  "restrict-expansion\0"
  "retained-language-linkage\0"
  "return-local-addr\0"
  "return-mismatch\0"
  "return-stack-address\0"
  "return-std-move\0"
  "return-type\0"
  "return-type-c-linkage\0"
  "rewrite-not-bool\0"
  "riscv-be-experimental\0"
  "round-trip-cc1-args\0"
  "rtti\0"
  "sanitize-address\0"
  "sarif-format-unstable\0"
  "scalable-static-analysis-framework\0"
  "search-path-usage\0"
  "section\0"
  "selector\0"
  "selector-type-mismatch\0"
  "self-assign\0"
  "self-assign-field\0"
  "self-assign-overloaded\0"
  "self-move\0"
  "semicolon-before-method-body\0"
  "sentinel\0"
  "sequence-point\0"
  "serialized-diagnostics\0"
  "shadow\0"
  "shadow-all\0"
  "shadow-field\0"
  "shadow-field-in-constructor\0"
  "shadow-field-in-constructor-modified\0"
  "shadow-header\0"
  "shadow-ivar\0"
  "shadow-uncaptured-local\0"
  "shift-bool\0"
  "shift-count-negative\0"
  "shift-count-overflow\0"
  "shift-negative-value\0"
  "shift-op-parentheses\0"
  "shift-overflow\0"
  "shift-sign-overflow\0"
  "shorten-64-to-32\0"
  "sign-compare\0"
  "sign-conversion\0"
  "sign-promo\0"
  "signed-enum-bitfield\0"
  "signed-unsigned-wchar\0"
  "simdlen\0"
  "single-bit-bitfield-constant-conversion\0"
  "sizeof-array-argument\0"
  "sizeof-array-decay\0"
  "sizeof-array-div\0"
  "sizeof-pointer-div\0"
  "sizeof-pointer-memaccess\0"
  "slash-u-filename\0"
  "slh-asm-goto\0"
  "sloc-usage\0"
  "sometimes-uninitialized\0"
  "source-mgr\0"
  "source-uses-openacc\0"
  "source-uses-openmp\0"
  "spir-compat\0"
  "spirv-compat\0"
  "stack-exhausted\0"
  "stack-protector\0"
  "static-float-init\0"
  "static-in-inline\0"
  "static-inline-explicit-instantiation\0"
  "static-local-in-inline\0"
  "static-self-init\0"
  "stdlibcxx-not-found\0"
  "strict-aliasing\0"
  "strict-aliasing=0\0"
  "strict-aliasing=1\0"
  "strict-aliasing=2\0"
  "strict-overflow\0"
  "strict-overflow=0\0"
  "strict-overflow=1\0"
  "strict-overflow=2\0"
  "strict-overflow=3\0"
  "strict-overflow=4\0"
  "strict-overflow=5\0"
  "strict-potentially-direct-selector\0"
  "strict-primary-template-shadow\0"
  "strict-prototypes\0"
  "strict-selector-match\0"
  "string-compare\0"
  "string-concatenation\0"
  "string-conversion\0"
  "string-plus-char\0"
  "string-plus-int\0"
  "strlcpy-strlcat-size\0"
  "strncat-size\0"
  "suggest-destructor-override\0"
  "suggest-override\0"
  "super-class-method-mismatch\0"
  "suspicious-bzero\0"
  "suspicious-memaccess\0"
  "swift-name-attribute\0"
  "switch\0"
  "switch-bool\0"
  "switch-default\0"
  "switch-enum\0"
  "sync-alignment\0"
  "sync-fetch-and-nand-semantics-changed\0"
  "synth\0"
  "target-clones-mixed-specifiers\0"
  "tautological-bitwise-compare\0"
  "tautological-compare\0"
  "tautological-constant-compare\0"
  "tautological-constant-in-range-compare\0"
  "tautological-constant-out-of-range-compare\0"
  "tautological-negation-compare\0"
  "tautological-objc-bool-compare\0"
  "tautological-overlap-compare\0"
  "tautological-pointer-compare\0"
  "tautological-type-limit-compare\0"
  "tautological-undefined-compare\0"
  "tautological-unsigned-char-zero-compare\0"
  "tautological-unsigned-enum-zero-compare\0"
  "tautological-unsigned-zero-compare\0"
  "tautological-value-range-compare\0"
  "tcb-enforcement\0"
  "template-in-declaration-name\0"
  "tentative-definition-array\0"
  "tentative-definition-compat\0"
  "tentative-definition-incomplete-type\0"
  "thread-safety\0"
  "thread-safety-analysis\0"
  "thread-safety-attributes\0"
  "thread-safety-beta\0"
  "thread-safety-negative\0"
  "thread-safety-pointer\0"
  "thread-safety-precise\0"
  "thread-safety-reference\0"
  "thread-safety-reference-return\0"
  "thread-safety-verbose\0"
  "trigraphs\0"
  "trivial-auto-var-init\0"
  "type-limits\0"
  "type-safety\0"
  "typedef-redefinition\0"
  "typename-missing\0"
  "unable-to-open-stats-file\0"
  "unaligned-access\0"
  "unaligned-qualifier-implicit-cast\0"
  "unavailable-declarations\0"
  "undeclared-selector\0"
  "undef\0"
  "undef-prefix\0"
  "undef-true\0"
  "undefined-arm-za\0"
  "undefined-arm-zt0\0"
  "undefined-bool-conversion\0"
  "undefined-func-template\0"
  "undefined-inline\0"
  "undefined-internal\0"
  "undefined-internal-type\0"
  "undefined-reinterpret-cast\0"
  "undefined-var-template\0"
  "underaligned-exception-object\0"
  "underlying-atomic-qualifier-ignored\0"
  "underlying-cv-qualifier-ignored\0"
  "unevaluated-expression\0"
  "unguarded-availability\0"
  "unguarded-availability-new\0"
  "unicode\0"
  "unicode-homoglyph\0"
  "unicode-whitespace\0"
  "unicode-zero-width\0"
  "uninitialized\0"
  "uninitialized-const-pointer\0"
  "uninitialized-const-reference\0"
  "uninitialized-explicit-init\0"
  "unique-object-duplication\0"
  "unknown-acc-extension-clause\0"
  "unknown-argument\0"
  "unknown-assumption\0"
  "unknown-attributes\0"
  "unknown-cuda-version\0"
  "unknown-directives\0"
  "unknown-escape-sequence\0"
  "unknown-pragmas\0"
  "unknown-sanitizers\0"
  "unknown-warning-option\0"
  "unnamed-type-template-args\0"
  "unnecessary-virtual-specifier\0"
  "unneeded-internal-declaration\0"
  "unneeded-member-function\0"
  "unqualified-std-cast-call\0"
  "unreachable-code\0"
  "unreachable-code-aggressive\0"
  "unreachable-code-break\0"
  "unreachable-code-fallthrough\0"
  "unreachable-code-generic-assoc\0"
  "unreachable-code-loop-increment\0"
  "unreachable-code-return\0"
  "unsafe-buffer-usage\0"
  "unsafe-buffer-usage-in-container\0"
  "unsafe-buffer-usage-in-format-attr-call\0"
  "unsafe-buffer-usage-in-libc-call\0"
  "unsafe-buffer-usage-in-static-sized-array\0"
  "unsafe-buffer-usage-in-unique-ptr-array-access\0"
  "unsequenced\0"
  "unsupported-abi\0"
  "unsupported-abs\0"
  "unsupported-availability-guard\0"
  "unsupported-cb\0"
  "unsupported-dll-base-class-template\0"
  "unsupported-floating-point-opt\0"
  "unsupported-friend\0"
  "unsupported-gpopt\0"
  "unsupported-nan\0"
  "unsupported-target-opt\0"
  "unsupported-visibility\0"
  "unterminated-string-initialization\0"
  "unusable-partial-specialization\0"
  "unused\0"
  "unused-argument\0"
  "unused-but-set-global\0"
  "unused-but-set-parameter\0"
  "unused-but-set-variable\0"
  "unused-command-line-argument\0"
  "unused-comparison\0"
  "unused-const-variable\0"
  "unused-exception-parameter\0"
  "unused-function\0"
  "unused-getter-return-value\0"
  "unused-label\0"
  "unused-lambda-capture\0"
  "unused-local-typedef\0"
  "unused-local-typedefs\0"
  "unused-macros\0"
  "unused-member-function\0"
  "unused-parameter\0"
  "unused-private-field\0"
  "unused-property-ivar\0"
  "unused-result\0"
  "unused-template\0"
  "unused-value\0"
  "unused-variable\0"
  "unused-volatile-lvalue\0"
  "used-but-marked-unused\0"
  "user-defined-literals\0"
  "user-defined-warnings\0"
  "varargs\0"
  "variadic-macro-arguments-omitted\0"
  "variadic-macros\0"
  "vec-elem-size\0"
  "vector-conversion\0"
  "vector-conversions\0"
  "vexing-parse\0"
  "visibility\0"
  "vla\0"
  "vla-cxx-extension\0"
  "vla-extension\0"
  "vla-extension-static-assert\0"
  "void-pointer-to-enum-cast\0"
  "void-pointer-to-int-cast\0"
  "void-ptr-dereference\0"
  "volatile-register-var\0"
  "wasm-exception-spec\0"
  "weak-template-vtables\0"
  "weak-vtables\0"
  "writable-strings\0"
  "write-strings\0"
  "xor-used-as-pow\0"
  "zero-as-null-pointer-constant\0"
  "zero-length-array\0"
  ;
#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif

static constexpr llvm::StringTable
DiagGroupNames = DiagGroupNamesStorage;

#endif // GET_DIAG_ARRAYS


#ifdef DIAG_ENTRY
DIAG_ENTRY(anonymous_58 /*  */, 0, 0, /* DiagSubGroup0 */ 1, R"()")
DIAG_ENTRY(PoundPragmaMessage /* #pragma-messages */, 1, /* DiagArray1 */ 1, 0, R"()")
DIAG_ENTRY(PoundWarning /* #warnings */, 18, /* DiagArray2 */ 3, 0, R"()")
DIAG_ENTRY(anonymous_335 /* CFString-literal */, 28, /* DiagArray3 */ 5, 0, R"()")
DIAG_ENTRY(anonymous_57 /* CL4 */, 45, 0, /* DiagSubGroup4 */ 3, R"()")
DIAG_ENTRY(IndependentClassAttribute /* IndependentClass-attribute */, 49, /* DiagArray5 */ 7, 0, R"()")
DIAG_ENTRY(NSobjectAttribute /* NSObject-attribute */, 76, /* DiagArray6 */ 10, 0, R"()")
DIAG_ENTRY(anonymous_346 /* TU-local-entity-exposure */, 95, /* DiagArray7 */ 12, 0, R"()")
DIAG_ENTRY(AArch64SMEAttributes /* aarch64-sme-attributes */, 120, /* DiagArray8 */ 14, 0, R"()")
DIAG_ENTRY(anonymous_0 /* abi */, 143, 0, 0, R"()")
DIAG_ENTRY(AbsoluteValue /* absolute-value */, 147, /* DiagArray10 */ 19, 0, R"()")
DIAG_ENTRY(AbstractFinalClass /* abstract-final-class */, 162, /* DiagArray11 */ 24, 0, R"()")
DIAG_ENTRY(anonymous_326 /* abstract-vbase-init */, 183, /* DiagArray12 */ 26, 0, R"()")
DIAG_ENTRY(anonymous_56 /* address */, 203, 0, /* DiagSubGroup13 */ 6, R"()")
DIAG_ENTRY(anonymous_298 /* address-of-packed-member */, 211, /* DiagArray14 */ 28, 0, R"()")
DIAG_ENTRY(AddressOfTemporary /* address-of-temporary */, 236, /* DiagArray15 */ 30, 0, R"()")
DIAG_ENTRY(anonymous_2 /* aggregate-return */, 257, 0, 0, R"()")
DIAG_ENTRY(AIXCompat /* aix-compat */, 274, /* DiagArray17 */ 32, 0, R"()")
DIAG_ENTRY(anonymous_310 /* alias-template-in-declaration-name */, 285, /* DiagArray18 */ 35, 0, R"()")
DIAG_ENTRY(anonymous_299 /* align-mismatch */, 320, /* DiagArray19 */ 37, 0, R"()")
DIAG_ENTRY(All /* all */, 335, 0, /* DiagSubGroup20 */ 10, R"()")
DIAG_ENTRY(anonymous_237 /* alloc-size */, 339, /* DiagArray21 */ 39, 0, R"()")
DIAG_ENTRY(anonymous_235 /* alloca */, 350, /* DiagArray22 */ 41, 0, R"()")
DIAG_ENTRY(anonymous_236 /* alloca-with-align-alignof */, 357, /* DiagArray23 */ 43, 0, R"()")
DIAG_ENTRY(AlwaysInlineCoroutine /* always-inline-coroutine */, 383, /* DiagArray24 */ 45, 0, R"()")
DIAG_ENTRY(anonymous_305 /* ambiguous-delete */, 407, /* DiagArray25 */ 47, 0, R"()")
DIAG_ENTRY(anonymous_156 /* ambiguous-ellipsis */, 424, /* DiagArray26 */ 49, 0, R"()")
DIAG_ENTRY(AmbiguousMacro /* ambiguous-macro */, 443, /* DiagArray27 */ 51, 0, R"()")
DIAG_ENTRY(AmbigMemberTemplate /* ambiguous-member-template */, 459, /* DiagArray28 */ 53, 0, R"()")
DIAG_ENTRY(anonymous_258 /* ambiguous-reversed-operator */, 485, /* DiagArray29 */ 55, 0, R"()")
DIAG_ENTRY(UnguardedBuiltinUsageAMDGPU /* amdgpu-unguarded-builtin-usage */, 513, /* DiagArray30 */ 57, 0, R"()")
DIAG_ENTRY(anonymous_361 /* amdgpu-wait-event-mask */, 544, /* DiagArray31 */ 60, 0, R"()")
DIAG_ENTRY(anonymous_112 /* analyzer-incompatible-plugin */, 567, /* DiagArray32 */ 62, 0, R"()")
DIAG_ENTRY(anonymous_108 /* android-unversioned-fallback */, 596, /* DiagArray33 */ 64, 0, R"()")
DIAG_ENTRY(AnonEnumEnumConversion /* anon-enum-enum-conversion */, 625, /* DiagArray34 */ 66, /* DiagSubGroup34 */ 18, R"()")
DIAG_ENTRY(anonymous_157 /* anonymous-pack-parens */, 651, /* DiagArray35 */ 68, 0, R"()")
DIAG_ENTRY(anonymous_89 /* apinotes */, 673, /* DiagArray36 */ 70, 0, R"()")
DIAG_ENTRY(AutomaticReferenceCounting /* arc */, 682, 0, /* DiagSubGroup37 */ 20, R"()")
DIAG_ENTRY(anonymous_155 /* arc-bridge-casts-disallowed-in-nonarc */, 686, /* DiagArray38 */ 72, 0, R"()")
DIAG_ENTRY(ARCRepeatedUseOfWeakMaybe /* arc-maybe-repeated-use-of-weak */, 724, /* DiagArray39 */ 74, 0, R"()")
DIAG_ENTRY(ARCNonPodMemAccess /* arc-non-pod-memaccess */, 755, /* DiagArray40 */ 76, 0, R"()")
DIAG_ENTRY(anonymous_215 /* arc-performSelector-leaks */, 777, /* DiagArray41 */ 78, 0, R"()")
DIAG_ENTRY(ARCRepeatedUseOfWeak /* arc-repeated-use-of-weak */, 803, /* DiagArray42 */ 80, /* DiagSubGroup42 */ 24, R"()")
DIAG_ENTRY(ARCRetainCycles /* arc-retain-cycles */, 828, /* DiagArray43 */ 82, 0, R"()")
DIAG_ENTRY(ARCUnsafeRetainedAssign /* arc-unsafe-retained-assign */, 846, /* DiagArray44 */ 84, 0, R"()")
DIAG_ENTRY(anonymous_337 /* argument-outside-range */, 873, /* DiagArray45 */ 88, 0, R"()")
DIAG_ENTRY(anonymous_338 /* argument-undefined-behaviour */, 896, /* DiagArray46 */ 90, 0, R"()")
DIAG_ENTRY(anonymous_193 /* arm-interrupt-save-fp-no-vfp-unit */, 925, /* DiagArray47 */ 92, 0, R"()")
DIAG_ENTRY(anonymous_192 /* arm-interrupt-vfp-clobber */, 959, /* DiagArray48 */ 94, 0, R"()")
DIAG_ENTRY(ArrayBounds /* array-bounds */, 985, /* DiagArray49 */ 96, 0, R"()")
DIAG_ENTRY(ArrayBoundsPointerArithmetic /* array-bounds-pointer-arithmetic */, 998, /* DiagArray50 */ 102, 0, R"()")
DIAG_ENTRY(anonymous_333 /* array-compare */, 1030, /* DiagArray51 */ 105, 0, R"()")
DIAG_ENTRY(anonymous_334 /* array-compare-cxx26 */, 1044, /* DiagArray52 */ 107, 0, R"()")
DIAG_ENTRY(ArrayParameter /* array-parameter */, 1064, /* DiagArray53 */ 109, 0, R"()")
DIAG_ENTRY(ASM /* asm */, 1080, 0, /* DiagSubGroup54 */ 26, R"()")
DIAG_ENTRY(ASMOperandWidths /* asm-operand-widths */, 1084, /* DiagArray55 */ 111, 0, R"()")
DIAG_ENTRY(anonymous_336 /* assign-enum */, 1103, /* DiagArray56 */ 113, 0, R"()")
DIAG_ENTRY(anonymous_201 /* assume */, 1115, /* DiagArray57 */ 115, 0, R"()")
DIAG_ENTRY(anonymous_55 /* at-protocol */, 1122, 0, 0, R"()")
DIAG_ENTRY(FrameworkHdrAtImport /* atimport-in-framework-header */, 1134, /* DiagArray59 */ 117, 0, R"()")
DIAG_ENTRY(anonymous_285 /* atomic-access */, 1163, /* DiagArray60 */ 119, 0, R"()")
DIAG_ENTRY(AtomicAlignment /* atomic-alignment */, 1177, /* DiagArray61 */ 121, 0, R"()")
DIAG_ENTRY(anonymous_315 /* atomic-implicit-seq-cst */, 1194, /* DiagArray62 */ 124, 0, R"()")
DIAG_ENTRY(anonymous_314 /* atomic-memory-ordering */, 1218, /* DiagArray63 */ 126, 0, R"()")
DIAG_ENTRY(AtomicProperties /* atomic-properties */, 1241, 0, /* DiagSubGroup64 */ 28, R"()")
DIAG_ENTRY(anonymous_210 /* atomic-property-with-user-defined-accessor */, 1259, /* DiagArray65 */ 128, 0, R"()")
DIAG_ENTRY(anonymous_254 /* attribute-packed-for-bitfield */, 1302, /* DiagArray66 */ 130, 0, R"()")
DIAG_ENTRY(anonymous_159 /* attribute-preprocessor-tokens */, 1332, /* DiagArray67 */ 132, 0, R"()")
DIAG_ENTRY(HLSLAttributeStatement /* attribute-statement */, 1362, /* DiagArray68 */ 134, 0, R"()")
DIAG_ENTRY(BackendWarningAttributes /* attribute-warning */, 1382, /* DiagArray69 */ 136, 0, R"()")
DIAG_ENTRY(Attributes /* attributes */, 1400, 0, /* DiagSubGroup70 */ 31, R"()")
DIAG_ENTRY(anonymous_190 /* auto-decl-extensions */, 1411, /* DiagArray71 */ 139, 0, R"()")
DIAG_ENTRY(AutoDisableVptrSanitizer /* auto-disable-vptr-sanitizer */, 1432, /* DiagArray72 */ 141, 0, R"()")
DIAG_ENTRY(anonymous_3 /* auto-import */, 1460, 0, 0, R"()")
DIAG_ENTRY(anonymous_153 /* auto-storage-class */, 1472, /* DiagArray74 */ 143, 0, R"()")
DIAG_ENTRY(anonymous_229 /* auto-var-id */, 1491, /* DiagArray75 */ 145, 0, R"()")
DIAG_ENTRY(Availability /* availability */, 1503, /* DiagArray76 */ 147, 0, R"()")
DIAG_ENTRY(AVRRtlibLinkingQuirks /* avr-rtlib-linking-quirks */, 1516, /* DiagArray77 */ 159, 0, R"()")
DIAG_ENTRY(BackendPlugin /* backend-plugin */, 1541, /* DiagArray78 */ 165, 0, R"()")
DIAG_ENTRY(anonymous_115 /* backslash-newline-escape */, 1556, /* DiagArray79 */ 168, 0, R"()")
DIAG_ENTRY(BadFunctionCast /* bad-function-cast */, 1581, /* DiagArray80 */ 170, 0, R"()")
DIAG_ENTRY(BinaryLiteral /* binary-literal */, 1599, 0, /* DiagSubGroup81 */ 34, R"()")
DIAG_ENTRY(BindToTemporaryCopy /* bind-to-temporary-copy */, 1614, /* DiagArray82 */ 172, /* DiagSubGroup82 */ 37, R"()")
DIAG_ENTRY(BitIntExtension /* bit-int-extension */, 1637, /* DiagArray83 */ 175, 0, R"()")
DIAG_ENTRY(BitFieldConstantConversion /* bitfield-constant-conversion */, 1655, /* DiagArray84 */ 178, /* DiagSubGroup84 */ 39, R"()")
DIAG_ENTRY(BitFieldEnumConversion /* bitfield-enum-conversion */, 1684, /* DiagArray85 */ 180, 0, R"()")
DIAG_ENTRY(BitFieldWidth /* bitfield-width */, 1709, /* DiagArray86 */ 184, 0, R"()")
DIAG_ENTRY(BitwiseConditionalParentheses /* bitwise-conditional-parentheses */, 1724, /* DiagArray87 */ 186, 0, R"()")
DIAG_ENTRY(BitwiseInsteadOfLogical /* bitwise-instead-of-logical */, 1756, /* DiagArray88 */ 188, 0, R"()")
DIAG_ENTRY(BitwiseOpParentheses /* bitwise-op-parentheses */, 1783, /* DiagArray89 */ 190, 0, R"()")
DIAG_ENTRY(BlockCaptureAutoReleasing /* block-capture-autoreleasing */, 1806, /* DiagArray90 */ 192, 0, R"()")
DIAG_ENTRY(BoolConversion /* bool-conversion */, 1834, /* DiagArray91 */ 194, /* DiagSubGroup91 */ 41, R"()")
DIAG_ENTRY(anonymous_63 /* bool-conversions */, 1850, 0, /* DiagSubGroup92 */ 44, R"()")
DIAG_ENTRY(BoolOperation /* bool-operation */, 1867, /* DiagArray93 */ 196, /* DiagSubGroup93 */ 46, R"()")
DIAG_ENTRY(BoundsSafetyCountedByEltTyUnknownSize /* bounds-safety-counted-by-elt-type-unknown-size */, 1882, /* DiagArray94 */ 198, 0, R"()")
DIAG_ENTRY(anonymous_279 /* braced-scalar-init */, 1929, /* DiagArray95 */ 200, 0, R"()")
DIAG_ENTRY(BranchProtection /* branch-protection */, 1948, /* DiagArray96 */ 202, 0, R"()")
DIAG_ENTRY(ObjCBridge /* bridge-cast */, 1966, /* DiagArray97 */ 207, 0, R"()")
DIAG_ENTRY(anonymous_239 /* builtin-assume-aligned-alignment */, 1978, /* DiagArray98 */ 210, 0, R"()")
DIAG_ENTRY(BuiltinMacroRedefined /* builtin-macro-redefined */, 2011, /* DiagArray99 */ 212, 0, R"()")
DIAG_ENTRY(anonymous_202 /* builtin-memcpy-chk-size */, 2035, /* DiagArray100 */ 215, 0, R"()")
DIAG_ENTRY(BuiltinRequiresHeader /* builtin-requires-header */, 2059, /* DiagArray101 */ 217, 0, R"()")
DIAG_ENTRY(CXXCompat /* c++-compat */, 2083, /* DiagArray102 */ 219, /* DiagSubGroup102 */ 48, R"()")
DIAG_ENTRY(HiddenCppDecl /* c++-hidden-decl */, 2094, /* DiagArray103 */ 222, 0, R"()")
DIAG_ENTRY(CppKeywordInC /* c++-keyword */, 2110, /* DiagArray104 */ 224, 0, R"()")
DIAG_ENTRY(InitStringTooLongForCpp /* c++-unterminated-string-initialization */, 2122, /* DiagArray105 */ 226, 0, R"()")
DIAG_ENTRY(anonymous_26 /* c++0x-compat */, 2161, 0, /* DiagSubGroup106 */ 58, R"()")
DIAG_ENTRY(anonymous_68 /* c++0x-extensions */, 2174, 0, /* DiagSubGroup107 */ 60, R"()")
DIAG_ENTRY(anonymous_24 /* c++0x-narrowing */, 2191, 0, /* DiagSubGroup108 */ 62, R"()")
DIAG_ENTRY(CXX11Compat /* c++11-compat */, 2207, /* DiagArray109 */ 228, /* DiagSubGroup109 */ 64, R"()")
DIAG_ENTRY(CXX11CompatDeprecatedWritableStr /* c++11-compat-deprecated-writable-strings */, 2220, /* DiagArray110 */ 239, 0, R"()")
DIAG_ENTRY(CXX11CompatPedantic /* c++11-compat-pedantic */, 2261, 0, /* DiagSubGroup111 */ 73, R"()")
DIAG_ENTRY(CXX11CompatReservedUserDefinedLiteral /* c++11-compat-reserved-user-defined-literal */, 2283, /* DiagArray112 */ 241, 0, R"()")
DIAG_ENTRY(CXX11 /* c++11-extensions */, 2326, /* DiagArray113 */ 243, /* DiagSubGroup113 */ 80, R"()")
DIAG_ENTRY(CXX11ExtraSemi /* c++11-extra-semi */, 2343, /* DiagArray114 */ 271, 0, R"()")
DIAG_ENTRY(CXX11InlineNamespace /* c++11-inline-namespace */, 2360, /* DiagArray115 */ 273, 0, R"()")
DIAG_ENTRY(CXX11LongLong /* c++11-long-long */, 2383, /* DiagArray116 */ 275, 0, R"()")
DIAG_ENTRY(CXX11Narrowing /* c++11-narrowing */, 2399, /* DiagArray117 */ 277, /* DiagSubGroup117 */ 84, R"()")
DIAG_ENTRY(CXX11NarrowingConstReference /* c++11-narrowing-const-reference */, 2415, /* DiagArray118 */ 285, 0, R"()")
DIAG_ENTRY(CXX14Attrs /* c++14-attribute-extensions */, 2447, /* DiagArray119 */ 289, 0, R"()")
DIAG_ENTRY(CXX14BinaryLiteral /* c++14-binary-literal */, 2474, /* DiagArray120 */ 291, 0, R"()")
DIAG_ENTRY(CXX14Compat /* c++14-compat */, 2495, 0, /* DiagSubGroup121 */ 86, R"()")
DIAG_ENTRY(CXX14CompatPedantic /* c++14-compat-pedantic */, 2508, 0, /* DiagSubGroup122 */ 91, R"()")
DIAG_ENTRY(CXX14 /* c++14-extensions */, 2530, /* DiagArray123 */ 293, /* DiagSubGroup123 */ 97, R"()")
DIAG_ENTRY(CXX17Attrs /* c++17-attribute-extensions */, 2547, /* DiagArray124 */ 301, 0, R"()")
DIAG_ENTRY(CXX17Compat /* c++17-compat */, 2574, 0, /* DiagSubGroup125 */ 100, R"()")
DIAG_ENTRY(CXX17CompatMangling /* c++17-compat-mangling */, 2587, /* DiagArray126 */ 303, 0, R"()")
DIAG_ENTRY(CXX17CompatPedantic /* c++17-compat-pedantic */, 2609, 0, /* DiagSubGroup127 */ 107, R"()")
DIAG_ENTRY(CXX17 /* c++17-extensions */, 2631, /* DiagArray128 */ 305, /* DiagSubGroup128 */ 112, R"()")
DIAG_ENTRY(anonymous_69 /* c++1y-extensions */, 2648, 0, /* DiagSubGroup129 */ 114, R"()")
DIAG_ENTRY(anonymous_27 /* c++1z-compat */, 2665, 0, /* DiagSubGroup130 */ 116, R"()")
DIAG_ENTRY(anonymous_13 /* c++1z-compat-mangling */, 2678, 0, /* DiagSubGroup131 */ 118, R"()")
DIAG_ENTRY(anonymous_70 /* c++1z-extensions */, 2700, 0, /* DiagSubGroup132 */ 120, R"()")
DIAG_ENTRY(CXX20Attrs /* c++20-attribute-extensions */, 2717, /* DiagArray133 */ 323, 0, R"()")
DIAG_ENTRY(CXX20Compat /* c++20-compat */, 2744, /* DiagArray134 */ 325, /* DiagSubGroup134 */ 122, R"()")
DIAG_ENTRY(CXX20CompatPedantic /* c++20-compat-pedantic */, 2757, 0, /* DiagSubGroup135 */ 125, R"()")
DIAG_ENTRY(CXX20Designator /* c++20-designator */, 2779, /* DiagArray136 */ 333, 0, R"()")
DIAG_ENTRY(CXX20 /* c++20-extensions */, 2796, /* DiagArray137 */ 335, /* DiagSubGroup137 */ 129, R"()")
DIAG_ENTRY(CXX23Attrs /* c++23-attribute-extensions */, 2813, /* DiagArray138 */ 358, 0, R"()")
DIAG_ENTRY(CXX23Compat /* c++23-compat */, 2840, 0, /* DiagSubGroup139 */ 133, R"()")
DIAG_ENTRY(CXX23 /* c++23-extensions */, 2853, /* DiagArray140 */ 360, /* DiagSubGroup140 */ 135, R"()")
DIAG_ENTRY(CXX23AttrsOnLambda /* c++23-lambda-attributes */, 2870, /* DiagArray141 */ 371, 0, R"()")
DIAG_ENTRY(CXX26 /* c++26-extensions */, 2894, /* DiagArray142 */ 373, 0, R"()")
DIAG_ENTRY(anonymous_28 /* c++2a-compat */, 2911, 0, /* DiagSubGroup143 */ 137, R"()")
DIAG_ENTRY(anonymous_29 /* c++2a-compat-pedantic */, 2924, 0, /* DiagSubGroup144 */ 139, R"()")
DIAG_ENTRY(anonymous_71 /* c++2a-extensions */, 2946, 0, /* DiagSubGroup145 */ 141, R"()")
DIAG_ENTRY(anonymous_72 /* c++2b-extensions */, 2963, 0, /* DiagSubGroup146 */ 143, R"()")
DIAG_ENTRY(CXX26Compat /* c++2c-compat */, 2980, 0, /* DiagSubGroup147 */ 145, R"()")
DIAG_ENTRY(anonymous_73 /* c++2c-extensions */, 2993, 0, /* DiagSubGroup148 */ 147, R"()")
DIAG_ENTRY(anonymous_20 /* c++98-c++11-c++14-c++17-compat */, 3010, 0, /* DiagSubGroup149 */ 149, R"()")
DIAG_ENTRY(anonymous_21 /* c++98-c++11-c++14-c++17-compat-pedantic */, 3041, 0, /* DiagSubGroup150 */ 151, R"()")
DIAG_ENTRY(anonymous_18 /* c++98-c++11-c++14-compat */, 3081, 0, /* DiagSubGroup151 */ 153, R"()")
DIAG_ENTRY(anonymous_19 /* c++98-c++11-c++14-compat-pedantic */, 3106, 0, /* DiagSubGroup152 */ 155, R"()")
DIAG_ENTRY(anonymous_16 /* c++98-c++11-compat */, 3140, 0, /* DiagSubGroup153 */ 157, R"()")
DIAG_ENTRY(CXXPre14CompatBinaryLiteral /* c++98-c++11-compat-binary-literal */, 3159, /* DiagArray154 */ 383, 0, R"()")
DIAG_ENTRY(anonymous_17 /* c++98-c++11-compat-pedantic */, 3193, 0, /* DiagSubGroup155 */ 159, R"()")
DIAG_ENTRY(CXX98Compat /* c++98-compat */, 3221, /* DiagArray156 */ 385, /* DiagSubGroup156 */ 161, R"()")
DIAG_ENTRY(CXX98CompatBindToTemporaryCopy /* c++98-compat-bind-to-temporary-copy */, 3234, /* DiagArray157 */ 444, 0, R"()")
DIAG_ENTRY(CXX98CompatExtraSemi /* c++98-compat-extra-semi */, 3270, /* DiagArray158 */ 446, 0, R"()")
DIAG_ENTRY(CXX98CompatLocalTypeTemplateArgs /* c++98-compat-local-type-template-args */, 3294, /* DiagArray159 */ 448, 0, R"()")
DIAG_ENTRY(CXX98CompatPedantic /* c++98-compat-pedantic */, 3332, /* DiagArray160 */ 450, /* DiagSubGroup160 */ 169, R"()")
DIAG_ENTRY(CXX98CompatUnnamedTypeTemplateArgs /* c++98-compat-unnamed-type-template-args */, 3354, /* DiagArray161 */ 459, 0, R"()")
DIAG_ENTRY(anonymous_151 /* c-attribute-extension */, 3394, /* DiagArray162 */ 461, 0, R"()")
DIAG_ENTRY(C11 /* c11-extensions */, 3416, /* DiagArray163 */ 463, 0, R"()")
DIAG_ENTRY(C23Compat /* c23-compat */, 3431, /* DiagArray164 */ 468, 0, R"()")
DIAG_ENTRY(C23 /* c23-extensions */, 3442, /* DiagArray165 */ 471, /* DiagSubGroup165 */ 178, R"()")
DIAG_ENTRY(anonymous_4 /* c2x-compat */, 3457, 0, /* DiagSubGroup166 */ 180, R"()")
DIAG_ENTRY(anonymous_74 /* c2x-extensions */, 3468, 0, /* DiagSubGroup167 */ 182, R"()")
DIAG_ENTRY(C2y /* c2y-extensions */, 3483, /* DiagArray168 */ 489, /* DiagSubGroup168 */ 184, R"()")
DIAG_ENTRY(C99Compat /* c99-compat */, 3498, /* DiagArray169 */ 499, 0, R"()")
DIAG_ENTRY(C99Designator /* c99-designator */, 3509, /* DiagArray170 */ 504, /* DiagSubGroup170 */ 186, R"()")
DIAG_ENTRY(C99 /* c99-extensions */, 3524, /* DiagArray171 */ 510, /* DiagSubGroup171 */ 190, R"()")
DIAG_ENTRY(PureVirtualCallFromCtorDtor /* call-to-pure-virtual-from-ctor-dtor */, 3539, /* DiagArray172 */ 521, 0, R"()")
DIAG_ENTRY(CalledOnceParameter /* called-once-parameter */, 3575, /* DiagArray173 */ 523, /* DiagSubGroup173 */ 192, R"()")
DIAG_ENTRY(CastAlign /* cast-align */, 3597, /* DiagArray174 */ 527, 0, R"()")
DIAG_ENTRY(anonymous_320 /* cast-calling-convention */, 3608, /* DiagArray175 */ 529, 0, R"()")
DIAG_ENTRY(CastFunctionType /* cast-function-type */, 3632, 0, /* DiagSubGroup176 */ 194, R"()")
DIAG_ENTRY(CastFunctionTypeMismatch /* cast-function-type-mismatch */, 3651, /* DiagArray177 */ 531, 0, R"()")
DIAG_ENTRY(CastFunctionTypeStrict /* cast-function-type-strict */, 3679, /* DiagArray178 */ 533, 0, R"()")
DIAG_ENTRY(SelTypeCast /* cast-of-sel-type */, 3705, /* DiagArray179 */ 535, 0, R"()")
DIAG_ENTRY(CastQual /* cast-qual */, 3722, /* DiagArray180 */ 537, 0, R"()")
DIAG_ENTRY(anonymous_303 /* cast-qual-unrelated */, 3732, /* DiagArray181 */ 540, 0, R"()")
DIAG_ENTRY(anonymous_352 /* cfi-unchecked-callee */, 3752, /* DiagArray182 */ 542, 0, R"()")
DIAG_ENTRY(anonymous_5 /* char-align */, 3773, 0, 0, R"()")
DIAG_ENTRY(CharSubscript /* char-subscripts */, 3784, /* DiagArray184 */ 544, 0, R"()")
DIAG_ENTRY(CharacterConversion /* character-conversion */, 3800, /* DiagArray185 */ 547, 0, R"()")
DIAG_ENTRY(ClangClPch /* clang-cl-pch */, 3821, /* DiagArray186 */ 554, 0, R"()")
DIAG_ENTRY(ClassConversion /* class-conversion */, 3834, /* DiagArray187 */ 559, 0, R"()")
DIAG_ENTRY(ClassVarargs /* class-varargs */, 3851, /* DiagArray188 */ 563, /* DiagSubGroup188 */ 197, R"()")
DIAG_ENTRY(anonymous_240 /* cmse-union-leak */, 3865, /* DiagArray189 */ 565, 0, R"()")
DIAG_ENTRY(anonymous_188 /* comma */, 3881, /* DiagArray190 */ 567, 0, R"()")
DIAG_ENTRY(Comment /* comment */, 3887, /* DiagArray191 */ 569, 0, R"()")
DIAG_ENTRY(anonymous_61 /* comments */, 3895, 0, /* DiagSubGroup192 */ 199, R"()")
DIAG_ENTRY(CompareDistinctPointerType /* compare-distinct-pointer-types */, 3904, /* DiagArray193 */ 574, 0, R"()")
DIAG_ENTRY(CompletionHandler /* completion-handler */, 3935, /* DiagArray194 */ 576, 0, R"()")
DIAG_ENTRY(anonymous_281 /* complex-component-init */, 3954, /* DiagArray195 */ 580, 0, R"()")
DIAG_ENTRY(CompoundTokenSplit /* compound-token-split */, 3977, 0, /* DiagSubGroup196 */ 201, R"()")
DIAG_ENTRY(CompoundTokenSplitByMacro /* compound-token-split-by-macro */, 3998, /* DiagArray197 */ 582, 0, R"()")
DIAG_ENTRY(CompoundTokenSplitBySpace /* compound-token-split-by-space */, 4028, /* DiagArray198 */ 584, 0, R"()")
DIAG_ENTRY(anonymous_322 /* conditional-type-mismatch */, 4058, /* DiagArray199 */ 586, 0, R"()")
DIAG_ENTRY(UninitializedMaybe /* conditional-uninitialized */, 4084, /* DiagArray200 */ 588, 0, R"()")
DIAG_ENTRY(ConfigMacros /* config-macros */, 4110, /* DiagArray201 */ 590, 0, R"()")
DIAG_ENTRY(ConstantConversion /* constant-conversion */, 4124, /* DiagArray202 */ 592, /* DiagSubGroup202 */ 204, R"()")
DIAG_ENTRY(anonymous_81 /* constant-evaluated */, 4144, /* DiagArray203 */ 594, 0, R"()")
DIAG_ENTRY(anonymous_293 /* constant-logical-operand */, 4163, /* DiagArray204 */ 596, 0, R"()")
DIAG_ENTRY(anonymous_227 /* constexpr-not-const */, 4188, /* DiagArray205 */ 598, 0, R"()")
DIAG_ENTRY(Consumed /* consumed */, 4208, /* DiagArray206 */ 600, 0, R"()")
DIAG_ENTRY(Conversion /* conversion */, 4217, /* DiagArray207 */ 609, /* DiagSubGroup207 */ 207, R"()")
DIAG_ENTRY(anonymous_62 /* conversion-null */, 4228, 0, /* DiagSubGroup208 */ 224, R"()")
DIAG_ENTRY(CoroNonAlignedAllocationFunction /* coro-non-aligned-allocation-function */, 4244, /* DiagArray209 */ 615, 0, R"()")
DIAG_ENTRY(CoroTypeAwareAllocationFunction /* coro-type-aware-allocation-function */, 4281, /* DiagArray210 */ 617, 0, R"()")
DIAG_ENTRY(Coroutine /* coroutine */, 4317, /* DiagArray211 */ 619, /* DiagSubGroup211 */ 226, R"()")
DIAG_ENTRY(CoroutineMissingUnhandledException /* coroutine-missing-unhandled-exception */, 4327, /* DiagArray212 */ 621, 0, R"()")
DIAG_ENTRY(CoveredSwitchDefault /* covered-switch-default */, 4365, /* DiagArray213 */ 623, 0, R"()")
DIAG_ENTRY(anonymous_60 /* cpp */, 4388, 0, /* DiagSubGroup214 */ 232, R"()")
DIAG_ENTRY(ObjCCStringFormat /* cstring-format-directive */, 4392, /* DiagArray215 */ 625, 0, R"()")
DIAG_ENTRY(CTADMaybeUnsupported /* ctad-maybe-unsupported */, 4417, /* DiagArray216 */ 627, 0, R"()")
DIAG_ENTRY(anonymous_6 /* ctor-dtor-privacy */, 4440, 0, 0, R"()")
DIAG_ENTRY(CrossTU /* ctu */, 4458, /* DiagArray218 */ 629, 0, R"()")
DIAG_ENTRY(CrossTURemarks /* ctu-remarks */, 4462, /* DiagArray219 */ 635, 0, R"()")
DIAG_ENTRY(CudaCompat /* cuda-compat */, 4474, /* DiagArray220 */ 637, 0, R"()")
DIAG_ENTRY(CustomAtomic /* custom-atomic-properties */, 4486, /* DiagArray221 */ 643, 0, R"()")
DIAG_ENTRY(anonymous_158 /* cxx-attribute-extension */, 4511, /* DiagArray222 */ 645, 0, R"()")
DIAG_ENTRY(Dangling /* dangling */, 4535, /* DiagArray223 */ 647, /* DiagSubGroup223 */ 234, R"()")
DIAG_ENTRY(DanglingAssignment /* dangling-assignment */, 4544, /* DiagArray224 */ 649, 0, R"()")
DIAG_ENTRY(DanglingAssignmentGsl /* dangling-assignment-gsl */, 4564, /* DiagArray225 */ 651, 0, R"()")
DIAG_ENTRY(DanglingCapture /* dangling-capture */, 4588, /* DiagArray226 */ 653, 0, R"()")
DIAG_ENTRY(DanglingElse /* dangling-else */, 4605, /* DiagArray227 */ 656, 0, R"()")
DIAG_ENTRY(DanglingField /* dangling-field */, 4619, /* DiagArray228 */ 658, 0, R"()")
DIAG_ENTRY(DanglingGsl /* dangling-gsl */, 4634, /* DiagArray229 */ 663, 0, R"()")
DIAG_ENTRY(DanglingInitializerList /* dangling-initializer-list */, 4647, /* DiagArray230 */ 666, 0, R"()")
DIAG_ENTRY(anonymous_103 /* darwin-sdk-settings */, 4673, /* DiagArray231 */ 668, 0, R"()")
DIAG_ENTRY(anonymous_140 /* date-time */, 4693, /* DiagArray232 */ 670, 0, R"()")
DIAG_ENTRY(DeallocInCategory /* dealloc-in-category */, 4703, /* DiagArray233 */ 672, 0, R"()")
DIAG_ENTRY(anonymous_98 /* debug-compression-unavailable */, 4723, /* DiagArray234 */ 674, 0, R"()")
DIAG_ENTRY(DeclarationAfterStatement /* declaration-after-statement */, 4753, /* DiagArray235 */ 676, 0, R"()")
DIAG_ENTRY(anonymous_365 /* decls-in-multiple-modules */, 4781, /* DiagArray236 */ 679, 0, R"()")
DIAG_ENTRY(DefaultConstInit /* default-const-init */, 4807, 0, /* DiagSubGroup237 */ 242, R"()")
DIAG_ENTRY(DefaultConstInitField /* default-const-init-field */, 4826, /* DiagArray238 */ 681, 0, R"()")
DIAG_ENTRY(DefaultConstInitFieldUnsafe /* default-const-init-field-unsafe */, 4851, /* DiagArray239 */ 683, 0, R"()")
DIAG_ENTRY(DefaultConstInitUnsafe /* default-const-init-unsafe */, 4883, 0, /* DiagSubGroup240 */ 246, R"()")
DIAG_ENTRY(DefaultConstInitVar /* default-const-init-var */, 4909, /* DiagArray241 */ 685, 0, R"()")
DIAG_ENTRY(DefaultConstInitVarUnsafe /* default-const-init-var-unsafe */, 4932, /* DiagArray242 */ 687, 0, R"()")
DIAG_ENTRY(DefaultedFunctionDeleted /* defaulted-function-deleted */, 4962, /* DiagArray243 */ 689, 0, R"()")
DIAG_ENTRY(anonymous_100 /* delayed-template-parsing-in-cxx20 */, 4989, /* DiagArray244 */ 692, 0, R"()")
DIAG_ENTRY(DelegatingCtorCycles /* delegating-ctor-cycles */, 5023, /* DiagArray245 */ 694, 0, R"()")
DIAG_ENTRY(DeleteAbstractNonVirtualDtor /* delete-abstract-non-virtual-dtor */, 5046, /* DiagArray246 */ 696, 0, R"()")
DIAG_ENTRY(DeleteIncomplete /* delete-incomplete */, 5079, /* DiagArray247 */ 698, 0, R"()")
DIAG_ENTRY(DeleteNonAbstractNonVirtualDtor /* delete-non-abstract-non-virtual-dtor */, 5097, /* DiagArray248 */ 701, 0, R"()")
DIAG_ENTRY(DeleteNonVirtualDtor /* delete-non-virtual-dtor */, 5134, 0, /* DiagSubGroup249 */ 249, R"()")
DIAG_ENTRY(anonymous_123 /* delimited-escape-sequence-extension */, 5158, /* DiagArray250 */ 703, 0, R"()")
DIAG_ENTRY(anonymous_307 /* deprecate-lax-vec-conv-all */, 5194, /* DiagArray251 */ 705, 0, R"()")
DIAG_ENTRY(Deprecated /* deprecated */, 5221, /* DiagArray252 */ 707, /* DiagSubGroup252 */ 252, R"()")
DIAG_ENTRY(anonymous_306 /* deprecated-altivec-src-compat */, 5232, /* DiagArray253 */ 719, 0, R"()")
DIAG_ENTRY(DeprecatedAnonEnumEnumConversion /* deprecated-anon-enum-enum-conversion */, 5262, /* DiagArray254 */ 721, 0, R"()")
DIAG_ENTRY(DeprecatedArrayCompare /* deprecated-array-compare */, 5299, /* DiagArray255 */ 723, 0, R"()")
DIAG_ENTRY(DeprecatedAttributes /* deprecated-attributes */, 5324, /* DiagArray256 */ 725, 0, R"()")
DIAG_ENTRY(DeprecatedBuiltins /* deprecated-builtins */, 5346, /* DiagArray257 */ 730, 0, R"()")
DIAG_ENTRY(DeprecatedCommaSubscript /* deprecated-comma-subscript */, 5366, /* DiagArray258 */ 733, 0, R"()")
DIAG_ENTRY(DeprecatedCopy /* deprecated-copy */, 5393, /* DiagArray259 */ 735, /* DiagSubGroup259 */ 278, R"()")
DIAG_ENTRY(anonymous_8 /* deprecated-copy-dtor */, 5409, 0, /* DiagSubGroup260 */ 280, R"()")
DIAG_ENTRY(DeprecatedCopyWithDtor /* deprecated-copy-with-dtor */, 5430, /* DiagArray261 */ 737, /* DiagSubGroup261 */ 282, R"()")
DIAG_ENTRY(DeprecatedCopyWithUserProvidedCopy /* deprecated-copy-with-user-provided-copy */, 5456, /* DiagArray262 */ 739, 0, R"()")
DIAG_ENTRY(DeprecatedCopyWithUserProvidedDtor /* deprecated-copy-with-user-provided-dtor */, 5496, /* DiagArray263 */ 741, 0, R"()")
DIAG_ENTRY(DeprecatedCoroutine /* deprecated-coroutine */, 5536, /* DiagArray264 */ 743, 0, R"()")
DIAG_ENTRY(DeprecatedDeclarations /* deprecated-declarations */, 5557, /* DiagArray265 */ 745, /* DiagSubGroup265 */ 284, R"()")
DIAG_ENTRY(DeprecatedDeclarationsSwitchCase /* deprecated-declarations-switch-case */, 5581, /* DiagArray266 */ 752, 0, R"()")
DIAG_ENTRY(DeprecatedDynamicExceptionSpec /* deprecated-dynamic-exception-spec */, 5617, /* DiagArray267 */ 754, 0, R"()")
DIAG_ENTRY(DeprecatedEnumCompare /* deprecated-enum-compare */, 5651, /* DiagArray268 */ 756, 0, R"()")
DIAG_ENTRY(DeprecatedEnumCompareConditional /* deprecated-enum-compare-conditional */, 5675, /* DiagArray269 */ 758, 0, R"()")
DIAG_ENTRY(DeprecatedEnumEnumConversion /* deprecated-enum-enum-conversion */, 5711, /* DiagArray270 */ 760, 0, R"()")
DIAG_ENTRY(DeprecatedEnumFloatConversion /* deprecated-enum-float-conversion */, 5743, /* DiagArray271 */ 762, 0, R"()")
DIAG_ENTRY(DeprecatedImplementations /* deprecated-implementations */, 5776, /* DiagArray272 */ 764, 0, R"()")
DIAG_ENTRY(DeprecatedIncrementBool /* deprecated-increment-bool */, 5803, /* DiagArray273 */ 767, 0, R"()")
DIAG_ENTRY(DeprecatedLiteralOperator /* deprecated-literal-operator */, 5829, /* DiagArray274 */ 769, 0, R"()")
DIAG_ENTRY(DeprecatedMissingCommaVariadicParam /* deprecated-missing-comma-variadic-parameter */, 5857, /* DiagArray275 */ 771, 0, R"()")
DIAG_ENTRY(DeprecatedModuleDotMap /* deprecated-module-dot-map */, 5901, /* DiagArray276 */ 773, 0, R"()")
DIAG_ENTRY(DeprecatedNonPrototype /* deprecated-non-prototype */, 5927, /* DiagArray277 */ 775, 0, R"()")
DIAG_ENTRY(DeprecatedObjCIsaUsage /* deprecated-objc-isa-usage */, 5952, /* DiagArray278 */ 778, 0, R"()")
DIAG_ENTRY(ObjCPointerIntrospect /* deprecated-objc-pointer-introspection */, 5978, /* DiagArray279 */ 781, /* DiagSubGroup279 */ 286, R"()")
DIAG_ENTRY(ObjCPointerIntrospectPerformSelector /* deprecated-objc-pointer-introspection-performSelector */, 6016, /* DiagArray280 */ 783, 0, R"()")
DIAG_ENTRY(DeprecatedOctalLiterals /* deprecated-octal-literals */, 6070, /* DiagArray281 */ 785, 0, R"()")
DIAG_ENTRY(DeprecatedOFast /* deprecated-ofast */, 6096, /* DiagArray282 */ 787, 0, R"()")
DIAG_ENTRY(DeprecatedPragma /* deprecated-pragma */, 6113, /* DiagArray283 */ 790, 0, R"()")
DIAG_ENTRY(DeprecatedRedundantConstexprStaticDef /* deprecated-redundant-constexpr-static-def */, 6131, /* DiagArray284 */ 792, 0, R"()")
DIAG_ENTRY(DeprecatedRegister /* deprecated-register */, 6173, /* DiagArray285 */ 794, 0, R"()")
DIAG_ENTRY(DeprecatedThisCapture /* deprecated-this-capture */, 6193, /* DiagArray286 */ 796, 0, R"()")
DIAG_ENTRY(DeprecatedType /* deprecated-type */, 6217, /* DiagArray287 */ 798, 0, R"()")
DIAG_ENTRY(DeprecatedVolatile /* deprecated-volatile */, 6233, /* DiagArray288 */ 800, 0, R"()")
DIAG_ENTRY(DeprecatedWritableStr /* deprecated-writable-strings */, 6253, 0, /* DiagSubGroup289 */ 288, R"()")
DIAG_ENTRY(anonymous_342 /* direct-ivar-access */, 6281, /* DiagArray290 */ 806, 0, R"()")
DIAG_ENTRY(anonymous_132 /* disabled-macro-expansion */, 6300, /* DiagArray291 */ 808, 0, R"()")
DIAG_ENTRY(anonymous_10 /* disabled-optimization */, 6325, 0, 0, R"()")
DIAG_ENTRY(anonymous_11 /* discard-qual */, 6347, 0, 0, R"()")
DIAG_ENTRY(DistributedObjectModifiers /* distributed-object-modifiers */, 6360, /* DiagArray294 */ 810, 0, R"()")
DIAG_ENTRY(anonymous_12 /* div-by-zero */, 6389, 0, /* DiagSubGroup295 */ 290, R"()")
DIAG_ENTRY(DivZero /* division-by-zero */, 6401, /* DiagArray296 */ 813, 0, R"()")
DIAG_ENTRY(anonymous_241 /* dll-attribute-on-redeclaration */, 6418, /* DiagArray297 */ 815, 0, R"()")
DIAG_ENTRY(DllexportExplicitInstantiation /* dllexport-explicit-instantiation */, 6449, /* DiagArray298 */ 817, /* DiagSubGroup298 */ 292, R"()")
DIAG_ENTRY(DllexportExplicitInstantiationDecl /* dllexport-explicit-instantiation-decl */, 6482, /* DiagArray299 */ 819, 0, R"()")
DIAG_ENTRY(anonymous_242 /* dllimport-static-field-def */, 6520, /* DiagArray300 */ 821, 0, R"()")
DIAG_ENTRY(Documentation /* documentation */, 6547, /* DiagArray301 */ 823, /* DiagSubGroup301 */ 294, R"()")
DIAG_ENTRY(DocumentationDeprecatedSync /* documentation-deprecated-sync */, 6561, /* DiagArray302 */ 844, 0, R"()")
DIAG_ENTRY(DocumentationHTML /* documentation-html */, 6591, /* DiagArray303 */ 846, 0, R"()")
DIAG_ENTRY(DocumentationPedantic /* documentation-pedantic */, 6610, /* DiagArray304 */ 851, /* DiagSubGroup304 */ 297, R"()")
DIAG_ENTRY(DocumentationUnknownCommand /* documentation-unknown-command */, 6633, /* DiagArray305 */ 853, 0, R"()")
DIAG_ENTRY(anonymous_116 /* dollar-in-identifier-extension */, 6663, /* DiagArray306 */ 856, 0, R"()")
DIAG_ENTRY(DoublePromotion /* double-promotion */, 6694, /* DiagArray307 */ 858, 0, R"()")
DIAG_ENTRY(DtorName /* dtor-name */, 6711, /* DiagArray308 */ 860, 0, R"()")
DIAG_ENTRY(anonymous_226 /* dtor-typedef */, 6721, /* DiagArray309 */ 864, 0, R"()")
DIAG_ENTRY(DuplicateDeclSpecifier /* duplicate-decl-specifier */, 6734, /* DiagArray310 */ 866, 0, R"()")
DIAG_ENTRY(anonymous_187 /* duplicate-enum */, 6759, /* DiagArray311 */ 871, 0, R"()")
DIAG_ENTRY(DuplicateArgDecl /* duplicate-method-arg */, 6774, /* DiagArray312 */ 873, 0, R"()")
DIAG_ENTRY(MethodDuplicate /* duplicate-method-match */, 6795, /* DiagArray313 */ 875, 0, R"()")
DIAG_ENTRY(anonymous_205 /* duplicate-protocol */, 6818, /* DiagArray314 */ 877, 0, R"()")
DIAG_ENTRY(DXILValidation /* dxil-validation */, 6837, /* DiagArray315 */ 879, 0, R"()")
DIAG_ENTRY(DynamicClassMemaccess /* dynamic-class-memaccess */, 6853, /* DiagArray316 */ 881, 0, R"()")
DIAG_ENTRY(DynamicExceptionSpec /* dynamic-exception-spec */, 6877, /* DiagArray317 */ 883, /* DiagSubGroup317 */ 299, R"()")
DIAG_ENTRY(anonymous_113 /* eager-load-cxx-named-modules */, 6900, /* DiagArray318 */ 885, 0, R"()")
DIAG_ENTRY(anonymous_37 /* effc++ */, 6929, 0, /* DiagSubGroup319 */ 301, R"()")
DIAG_ENTRY(anonymous_148 /* elaborated-enum-base */, 6936, /* DiagArray320 */ 887, 0, R"()")
DIAG_ENTRY(anonymous_149 /* elaborated-enum-class */, 6957, /* DiagArray321 */ 889, 0, R"()")
DIAG_ENTRY(anonymous_137 /* embedded-directive */, 6979, /* DiagArray322 */ 891, 0, R"()")
DIAG_ENTRY(EmptyBody /* empty-body */, 6998, /* DiagArray323 */ 893, 0, R"()")
DIAG_ENTRY(anonymous_154 /* empty-decomposition */, 7009, /* DiagArray324 */ 900, 0, R"()")
DIAG_ENTRY(EmptyInitStatement /* empty-init-stmt */, 7029, /* DiagArray325 */ 902, 0, R"()")
DIAG_ENTRY(anonymous_146 /* empty-translation-unit */, 7045, /* DiagArray326 */ 904, 0, R"()")
DIAG_ENTRY(anonymous_245 /* encode-type */, 7068, /* DiagArray327 */ 906, 0, R"()")
DIAG_ENTRY(anonymous_59 /* endif-labels */, 7080, 0, /* DiagSubGroup328 */ 303, R"()")
DIAG_ENTRY(EnumCompare /* enum-compare */, 7093, /* DiagArray329 */ 908, /* DiagSubGroup329 */ 305, R"()")
DIAG_ENTRY(EnumCompareConditional /* enum-compare-conditional */, 7106, /* DiagArray330 */ 910, /* DiagSubGroup330 */ 308, R"()")
DIAG_ENTRY(EnumCompareSwitch /* enum-compare-switch */, 7131, /* DiagArray331 */ 912, 0, R"()")
DIAG_ENTRY(anonymous_362 /* enum-compare-typo */, 7151, /* DiagArray332 */ 914, 0, R"()")
DIAG_ENTRY(EnumConversion /* enum-conversion */, 7169, 0, /* DiagSubGroup333 */ 310, R"()")
DIAG_ENTRY(EnumEnumConversion /* enum-enum-conversion */, 7185, /* DiagArray334 */ 916, /* DiagSubGroup334 */ 315, R"()")
DIAG_ENTRY(EnumFloatConversion /* enum-float-conversion */, 7206, /* DiagArray335 */ 919, /* DiagSubGroup335 */ 317, R"()")
DIAG_ENTRY(EnumTooLarge /* enum-too-large */, 7228, /* DiagArray336 */ 921, 0, R"()")
DIAG_ENTRY(Exceptions /* exceptions */, 7243, /* DiagArray337 */ 924, 0, R"()")
DIAG_ENTRY(ExcessInitializers /* excess-initializers */, 7254, /* DiagArray338 */ 928, 0, R"()")
DIAG_ENTRY(anonymous_191 /* excessive-regsave */, 7274, /* DiagArray339 */ 933, 0, R"()")
DIAG_ENTRY(ExitTimeDestructors /* exit-time-destructors */, 7292, /* DiagArray340 */ 935, 0, R"()")
DIAG_ENTRY(ExpansionToDefined /* expansion-to-defined */, 7314, /* DiagArray341 */ 937, 0, R"()")
DIAG_ENTRY(anonymous_348 /* experimental-header-units */, 7335, /* DiagArray342 */ 940, 0, R"()")
DIAG_ENTRY(ExperimentalOption /* experimental-option */, 7361, /* DiagArray343 */ 942, 0, R"()")
DIAG_ENTRY(ExplicitInitializeCall /* explicit-initialize-call */, 7381, /* DiagArray344 */ 944, 0, R"()")
DIAG_ENTRY(anonymous_283 /* explicit-ownership-type */, 7406, /* DiagArray345 */ 947, 0, R"()")
DIAG_ENTRY(ExplicitSpecializationStorageClass /* explicit-specialization-storage-class */, 7430, /* DiagArray346 */ 949, 0, R"()")
DIAG_ENTRY(ExportUnnamed /* export-unnamed */, 7468, 0, 0, R"()")
DIAG_ENTRY(anonymous_330 /* ext-cxx-type-aware-allocators */, 7483, /* DiagArray348 */ 951, 0, R"()")
DIAG_ENTRY(ExternCCompat /* extern-c-compat */, 7513, /* DiagArray349 */ 953, 0, R"()")
DIAG_ENTRY(anonymous_277 /* extern-initializer */, 7529, /* DiagArray350 */ 955, 0, R"()")
DIAG_ENTRY(Extra /* extra */, 7548, 0, /* DiagSubGroup351 */ 319, R"()")
DIAG_ENTRY(anonymous_294 /* extra-qualification */, 7554, /* DiagArray352 */ 957, 0, R"()")
DIAG_ENTRY(ExtraSemi /* extra-semi */, 7574, /* DiagArray353 */ 959, /* DiagSubGroup353 */ 337, R"()")
DIAG_ENTRY(ExtraSemiStmt /* extra-semi-stmt */, 7585, /* DiagArray354 */ 962, /* DiagSubGroup354 */ 340, R"()")
DIAG_ENTRY(ExtraTokens /* extra-tokens */, 7601, /* DiagArray355 */ 964, 0, R"()")
DIAG_ENTRY(ExtractAPIMisuse /* extractapi-misuse */, 7614, /* DiagArray356 */ 968, 0, R"()")
DIAG_ENTRY(anonymous_263 /* extraneous-template-head */, 7632, /* DiagArray357 */ 970, 0, R"()")
DIAG_ENTRY(FinalDtorNonFinalClass /* final-dtor-non-final-class */, 7657, /* DiagArray358 */ 972, 0, R"()")
DIAG_ENTRY(FinalMacro /* final-macro */, 7684, /* DiagArray359 */ 974, 0, R"()")
DIAG_ENTRY(anonymous_80 /* fixed-point-overflow */, 7696, /* DiagArray360 */ 976, 0, R"()")
DIAG_ENTRY(FlagEnum /* flag-enum */, 7717, /* DiagArray361 */ 978, 0, R"()")
DIAG_ENTRY(FlexibleArrayExtensions /* flexible-array-extensions */, 7727, /* DiagArray362 */ 980, 0, R"()")
DIAG_ENTRY(FloatConversion /* float-conversion */, 7753, /* DiagArray363 */ 983, /* DiagSubGroup363 */ 342, R"()")
DIAG_ENTRY(anonymous_286 /* float-equal */, 7770, /* DiagArray364 */ 985, 0, R"()")
DIAG_ENTRY(FloatOverflowConversion /* float-overflow-conversion */, 7782, /* DiagArray365 */ 987, 0, R"()")
DIAG_ENTRY(FloatZeroConversion /* float-zero-conversion */, 7808, /* DiagArray366 */ 990, 0, R"()")
DIAG_ENTRY(ForLoopAnalysis /* for-loop-analysis */, 7830, /* DiagArray367 */ 992, 0, R"()")
DIAG_ENTRY(Format /* format */, 7848, /* DiagArray368 */ 995, /* DiagSubGroup368 */ 345, R"()")
DIAG_ENTRY(FormatExtraArgs /* format-extra-args */, 7855, /* DiagArray369 */ 1028, 0, R"()")
DIAG_ENTRY(FormatInsufficientArgs /* format-insufficient-args */, 7873, /* DiagArray370 */ 1030, 0, R"()")
DIAG_ENTRY(FormatInvalidSpecifier /* format-invalid-specifier */, 7898, /* DiagArray371 */ 1033, 0, R"()")
DIAG_ENTRY(FormatNonStandard /* format-non-iso */, 7923, /* DiagArray372 */ 1035, 0, R"()")
DIAG_ENTRY(FormatNonLiteral /* format-nonliteral */, 7938, /* DiagArray373 */ 1039, /* DiagSubGroup373 */ 355, R"()")
DIAG_ENTRY(FormatOverflow /* format-overflow */, 7956, /* DiagArray374 */ 1041, /* DiagSubGroup374 */ 357, R"()")
DIAG_ENTRY(FormatOverflowNonKprintf /* format-overflow-non-kprintf */, 7972, /* DiagArray375 */ 1043, 0, R"()")
DIAG_ENTRY(FormatPedantic /* format-pedantic */, 8000, /* DiagArray376 */ 1045, 0, R"()")
DIAG_ENTRY(FormatSecurity /* format-security */, 8016, /* DiagArray377 */ 1049, 0, R"()")
DIAG_ENTRY(FormatSignedness /* format-signedness */, 8032, /* DiagArray378 */ 1051, 0, R"()")
DIAG_ENTRY(FormatTruncation /* format-truncation */, 8050, /* DiagArray379 */ 1054, /* DiagSubGroup379 */ 359, R"()")
DIAG_ENTRY(FormatTruncationNonKprintf /* format-truncation-non-kprintf */, 8068, /* DiagArray380 */ 1056, 0, R"()")
DIAG_ENTRY(FormatTypeConfusion /* format-type-confusion */, 8098, /* DiagArray381 */ 1058, 0, R"()")
DIAG_ENTRY(FormatY2K /* format-y2k */, 8120, 0, 0, R"()")
DIAG_ENTRY(FormatZeroLength /* format-zero-length */, 8131, /* DiagArray383 */ 1060, 0, R"()")
DIAG_ENTRY(Format2 /* format=2 */, 8150, 0, /* DiagSubGroup384 */ 361, R"()")
DIAG_ENTRY(FortifySource /* fortify-source */, 8159, /* DiagArray385 */ 1062, /* DiagSubGroup385 */ 365, R"()")
DIAG_ENTRY(FourByteMultiChar /* four-char-constants */, 8174, /* DiagArray386 */ 1067, 0, R"()")
DIAG_ENTRY(FrameAddress /* frame-address */, 8194, /* DiagArray387 */ 1069, 0, R"()")
DIAG_ENTRY(BackendFrameLargerThan /* frame-larger-than */, 8208, /* DiagArray388 */ 1071, 0, R"(More fine grained information about the stack layout is available by adding the
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
DIAG_ENTRY(anonymous_76 /* frame-larger-than= */, 8226, 0, /* DiagSubGroup389 */ 368, R"()")
DIAG_ENTRY(FrameworkIncludePrivateFromPublic /* framework-include-private-from-public */, 8245, /* DiagArray390 */ 1074, 0, R"()")
DIAG_ENTRY(FreeNonHeapObject /* free-nonheap-object */, 8283, /* DiagArray391 */ 1076, 0, R"()")
DIAG_ENTRY(anonymous_221 /* friend-enum */, 8303, /* DiagArray392 */ 1078, 0, R"()")
DIAG_ENTRY(FunctionDefInObjCContainer /* function-def-in-objc-container */, 8315, /* DiagArray393 */ 1080, 0, R"()")
DIAG_ENTRY(FunctionEffectRedeclarations /* function-effect-redeclarations */, 8346, /* DiagArray394 */ 1082, 0, R"()")
DIAG_ENTRY(FunctionEffects /* function-effects */, 8377, /* DiagArray395 */ 1085, 0, R"()")
DIAG_ENTRY(FunctionMultiVersioning /* function-multiversion */, 8394, /* DiagArray396 */ 1092, /* DiagSubGroup396 */ 370, R"()")
DIAG_ENTRY(FUseLdPath /* fuse-ld-path */, 8416, /* DiagArray397 */ 1100, 0, R"()")
DIAG_ENTRY(FutureAttrs /* future-attribute-extensions */, 8429, 0, /* DiagSubGroup398 */ 372, R"()")
DIAG_ENTRY(FutureCompat /* future-compat */, 8457, 0, 0, R"()")
DIAG_ENTRY(GccCompat /* gcc-compat */, 8471, /* DiagArray400 */ 1102, 0, R"()")
DIAG_ENTRY(anonymous_109 /* gcc-install-dir-libstdcxx */, 8482, /* DiagArray401 */ 1114, 0, R"()")
DIAG_ENTRY(GlobalConstructors /* global-constructors */, 8508, /* DiagArray402 */ 1116, 0, R"(Emit a warning for each variable declaration that generates code run at startup.)")
DIAG_ENTRY(GlobalISel /* global-isel */, 8528, /* DiagArray403 */ 1119, 0, R"()")
DIAG_ENTRY(GNU /* gnu */, 8540, 0, /* DiagSubGroup404 */ 377, R"()")
DIAG_ENTRY(GNUAlignofExpression /* gnu-alignof-expression */, 8544, /* DiagArray405 */ 1122, 0, R"()")
DIAG_ENTRY(GNUAnonymousStruct /* gnu-anonymous-struct */, 8567, /* DiagArray406 */ 1124, 0, R"()")
DIAG_ENTRY(anonymous_297 /* gnu-array-member-paren-init */, 8588, /* DiagArray407 */ 1126, 0, R"()")
DIAG_ENTRY(GNUAutoType /* gnu-auto-type */, 8616, /* DiagArray408 */ 1128, 0, R"()")
DIAG_ENTRY(GNUBinaryLiteral /* gnu-binary-literal */, 8630, 0, 0, R"()")
DIAG_ENTRY(GNUCaseRange /* gnu-case-range */, 8649, /* DiagArray410 */ 1130, 0, R"()")
DIAG_ENTRY(GNUComplexInteger /* gnu-complex-integer */, 8664, /* DiagArray411 */ 1132, 0, R"()")
DIAG_ENTRY(GNUCompoundLiteralInitializer /* gnu-compound-literal-initializer */, 8684, /* DiagArray412 */ 1134, 0, R"()")
DIAG_ENTRY(GNUConditionalOmittedOperand /* gnu-conditional-omitted-operand */, 8717, /* DiagArray413 */ 1136, 0, R"()")
DIAG_ENTRY(GNUDesignator /* gnu-designator */, 8749, /* DiagArray414 */ 1138, 0, R"()")
DIAG_ENTRY(anonymous_1 /* gnu-empty-initializer */, 8764, 0, 0, R"()")
DIAG_ENTRY(GNUEmptyStruct /* gnu-empty-struct */, 8786, /* DiagArray416 */ 1142, 0, R"()")
DIAG_ENTRY(GNUFlexibleArrayInitializer /* gnu-flexible-array-initializer */, 8803, /* DiagArray417 */ 1146, 0, R"()")
DIAG_ENTRY(GNUFlexibleArrayUnionMember /* gnu-flexible-array-union-member */, 8834, /* DiagArray418 */ 1148, 0, R"()")
DIAG_ENTRY(GNUFoldingConstant /* gnu-folding-constant */, 8866, /* DiagArray419 */ 1150, 0, R"()")
DIAG_ENTRY(GNUImaginaryConstant /* gnu-imaginary-constant */, 8887, /* DiagArray420 */ 1154, 0, R"()")
DIAG_ENTRY(GNUIncludeNext /* gnu-include-next */, 8910, /* DiagArray421 */ 1156, 0, R"()")
DIAG_ENTRY(anonymous_246 /* gnu-inline-cpp-without-extern */, 8927, /* DiagArray422 */ 1158, 0, R"()")
DIAG_ENTRY(GNULabelsAsValue /* gnu-label-as-value */, 8957, /* DiagArray423 */ 1160, 0, R"()")
DIAG_ENTRY(GNULineMarker /* gnu-line-marker */, 8976, /* DiagArray424 */ 1163, 0, R"()")
DIAG_ENTRY(GNUNullPointerArithmetic /* gnu-null-pointer-arithmetic */, 8992, /* DiagArray425 */ 1165, 0, R"()")
DIAG_ENTRY(GNUOffsetofExtensions /* gnu-offsetof-extensions */, 9020, 0, 0, R"()")
DIAG_ENTRY(GNUPointerArith /* gnu-pointer-arith */, 9044, /* DiagArray427 */ 1167, 0, R"()")
DIAG_ENTRY(GNURedeclaredEnum /* gnu-redeclared-enum */, 9062, /* DiagArray428 */ 1172, 0, R"()")
DIAG_ENTRY(GNUStatementExpression /* gnu-statement-expression */, 9082, /* DiagArray429 */ 1174, /* DiagSubGroup429 */ 409, R"()")
DIAG_ENTRY(GNUStatementExpressionFromMacroExpansion /* gnu-statement-expression-from-macro-expansion */, 9107, /* DiagArray430 */ 1176, 0, R"()")
DIAG_ENTRY(GNUStaticFloatInit /* gnu-static-float-init */, 9153, /* DiagArray431 */ 1178, 0, R"()")
DIAG_ENTRY(GNUStringLiteralOperatorTemplate /* gnu-string-literal-operator-template */, 9175, /* DiagArray432 */ 1180, 0, R"()")
DIAG_ENTRY(GNUUnionCast /* gnu-union-cast */, 9212, /* DiagArray433 */ 1182, 0, R"()")
DIAG_ENTRY(GNUVariableSizedTypeNotAtEnd /* gnu-variable-sized-type-not-at-end */, 9227, /* DiagArray434 */ 1184, 0, R"()")
DIAG_ENTRY(GNUZeroLineDirective /* gnu-zero-line-directive */, 9262, /* DiagArray435 */ 1186, 0, R"()")
DIAG_ENTRY(GNUZeroVariadicMacroArguments /* gnu-zero-variadic-macro-arguments */, 9286, /* DiagArray436 */ 1188, /* DiagSubGroup436 */ 411, R"()")
DIAG_ENTRY(anonymous_318 /* gpu-maybe-wrong-side */, 9320, /* DiagArray437 */ 1190, 0, R"()")
DIAG_ENTRY(anonymous_278 /* groupshared-initializer */, 9341, /* DiagArray438 */ 1192, 0, R"()")
DIAG_ENTRY(anonymous_145 /* header-guard */, 9365, /* DiagArray439 */ 1194, 0, R"()")
DIAG_ENTRY(HeaderHygiene /* header-hygiene */, 9378, /* DiagArray440 */ 1196, 0, R"()")
DIAG_ENTRY(anonymous_284 /* higher-precision-for-complex-division */, 9393, /* DiagArray441 */ 1198, 0, R"()")
DIAG_ENTRY(HipDeprecatedBuiltins /* hip-deprecated-builtins */, 9431, /* DiagArray442 */ 1200, 0, R"()")
DIAG_ENTRY(HIPOpenMPOffloading /* hip-omp-target-directives */, 9455, /* DiagArray443 */ 1202, 0, R"()")
DIAG_ENTRY(HIPOnly /* hip-only */, 9481, /* DiagArray444 */ 1204, 0, R"()")
DIAG_ENTRY(HLSL202y /* hlsl-202y-extensions */, 9490, /* DiagArray445 */ 1206, 0, R"()")
DIAG_ENTRY(HLSLAvailability /* hlsl-availability */, 9511, /* DiagArray446 */ 1208, 0, R"()")
DIAG_ENTRY(HLSLDXCCompat /* hlsl-dxc-compatability */, 9529, /* DiagArray447 */ 1213, 0, R"()")
DIAG_ENTRY(HLSLExplicitBinding /* hlsl-explicit-binding */, 9552, /* DiagArray448 */ 1215, 0, R"()")
DIAG_ENTRY(HLSLExtension /* hlsl-extensions */, 9574, /* DiagArray449 */ 1217, /* DiagSubGroup449 */ 413, R"()")
DIAG_ENTRY(HLSLImplicitBinding /* hlsl-implicit-binding */, 9590, /* DiagArray450 */ 1220, 0, R"()")
DIAG_ENTRY(anonymous_311 /* idiomatic-parentheses */, 9612, /* DiagArray451 */ 1222, 0, R"()")
DIAG_ENTRY(IgnoredAttributes /* ignored-attributes */, 9634, /* DiagArray452 */ 1224, /* DiagSubGroup452 */ 415, R"()")
DIAG_ENTRY(anonymous_250 /* ignored-availability-without-sdk-settings */, 9653, /* DiagArray453 */ 1324, 0, R"()")
DIAG_ENTRY(IgnoredBaseClassQualifiers /* ignored-base-class-qualifiers */, 9695, /* DiagArray454 */ 1326, /* DiagSubGroup454 */ 417, R"()")
DIAG_ENTRY(IgnoredGCH /* ignored-gch */, 9725, /* DiagArray455 */ 1328, 0, R"()")
DIAG_ENTRY(IgnoredOptimizationArgument /* ignored-optimization-argument */, 9737, /* DiagArray456 */ 1331, 0, R"()")
DIAG_ENTRY(IgnoredPragmaIntrinsic /* ignored-pragma-intrinsic */, 9767, /* DiagArray457 */ 1334, 0, R"()")
DIAG_ENTRY(IgnoredPragmaOptimize /* ignored-pragma-optimize */, 9792, 0, 0, R"()")
DIAG_ENTRY(IgnoredPragmas /* ignored-pragmas */, 9816, /* DiagArray459 */ 1336, /* DiagSubGroup459 */ 419, R"()")
DIAG_ENTRY(IgnoredQualifiers /* ignored-qualifiers */, 9832, /* DiagArray460 */ 1391, /* DiagSubGroup460 */ 422, R"()")
DIAG_ENTRY(IgnoredReferenceQualifiers /* ignored-reference-qualifiers */, 9851, /* DiagArray461 */ 1397, 0, R"()")
DIAG_ENTRY(Implicit /* implicit */, 9880, 0, /* DiagSubGroup462 */ 424, R"()")
DIAG_ENTRY(ImplicitAtomic /* implicit-atomic-properties */, 9889, /* DiagArray463 */ 1399, 0, R"()")
DIAG_ENTRY(ImplicitConstIntFloatConversion /* implicit-const-int-float-conversion */, 9916, /* DiagArray464 */ 1402, 0, R"()")
DIAG_ENTRY(ImplicitConversionFloatingPointToBool /* implicit-conversion-floating-point-to-bool */, 9952, /* DiagArray465 */ 1404, 0, R"()")
DIAG_ENTRY(ImplicitEnumEnumCast /* implicit-enum-enum-cast */, 9995, /* DiagArray466 */ 1406, 0, R"()")
DIAG_ENTRY(anonymous_332 /* implicit-exception-spec-mismatch */, 10019, /* DiagArray467 */ 1408, 0, R"()")
DIAG_ENTRY(ImplicitFallthrough /* implicit-fallthrough */, 10052, /* DiagArray468 */ 1410, /* DiagSubGroup468 */ 427, R"()")
DIAG_ENTRY(ImplicitFallthroughPerFunction /* implicit-fallthrough-per-function */, 10073, /* DiagArray469 */ 1412, 0, R"()")
DIAG_ENTRY(ImplicitFixedPointConversion /* implicit-fixed-point-conversion */, 10107, /* DiagArray470 */ 1414, 0, R"()")
DIAG_ENTRY(ImplicitFloatConversion /* implicit-float-conversion */, 10139, /* DiagArray471 */ 1416, /* DiagSubGroup471 */ 429, R"()")
DIAG_ENTRY(ImplicitFunctionDeclare /* implicit-function-declaration */, 10165, /* DiagArray472 */ 1419, 0, R"()")
DIAG_ENTRY(ImplicitInt /* implicit-int */, 10195, /* DiagArray473 */ 1425, 0, R"()")
DIAG_ENTRY(ImplicitIntConversion /* implicit-int-conversion */, 10208, /* DiagArray474 */ 1429, /* DiagSubGroup474 */ 432, R"()")
DIAG_ENTRY(ImplicitIntConversionOnNegation /* implicit-int-conversion-on-negation */, 10232, /* DiagArray475 */ 1432, 0, R"()")
DIAG_ENTRY(ImplicitIntToEnumCast /* implicit-int-enum-cast */, 10268, /* DiagArray476 */ 1434, /* DiagSubGroup476 */ 436, R"()")
DIAG_ENTRY(ImplicitIntFloatConversion /* implicit-int-float-conversion */, 10291, /* DiagArray477 */ 1436, /* DiagSubGroup477 */ 438, R"()")
DIAG_ENTRY(ImplicitOverflowBehaviorConversion /* implicit-overflow-behavior-conversion */, 10321, /* DiagArray478 */ 1438, /* DiagSubGroup478 */ 440, R"()")
DIAG_ENTRY(ImplicitOverflowBehaviorConversionAssignment /* implicit-overflow-behavior-conversion-assignment */, 10359, /* DiagArray479 */ 1440, 0, R"()")
DIAG_ENTRY(ImplicitOverflowBehaviorConversionAssignmentPedantic /* implicit-overflow-behavior-conversion-assignment-pedantic */, 10408, /* DiagArray480 */ 1442, 0, R"()")
DIAG_ENTRY(ImplicitOverflowBehaviorConversionAtFunctionBoundary /* implicit-overflow-behavior-conversion-function-boundary */, 10466, /* DiagArray481 */ 1444, 0, R"()")
DIAG_ENTRY(ImplicitOverflowBehaviorConversionAtFunctionBoundaryPedantic /* implicit-overflow-behavior-conversion-function-boundary-pedantic */, 10522, /* DiagArray482 */ 1446, 0, R"()")
DIAG_ENTRY(ImplicitOverflowBehaviorConversionPedantic /* implicit-overflow-behavior-conversion-pedantic */, 10587, /* DiagArray483 */ 1448, 0, R"()")
DIAG_ENTRY(anonymous_216 /* implicit-retain-self */, 10634, /* DiagArray484 */ 1450, 0, R"()")
DIAG_ENTRY(ImplicitVoidPtrCast /* implicit-void-ptr-cast */, 10655, /* DiagArray485 */ 1452, 0, R"()")
DIAG_ENTRY(ImplicitlyUnsignedLiteral /* implicitly-unsigned-literal */, 10678, /* DiagArray486 */ 1454, 0, R"()")
DIAG_ENTRY(anonymous_31 /* import */, 10706, 0, 0, R"()")
DIAG_ENTRY(anonymous_195 /* import-implementation-partition-unit-in-interface-unit */, 10713, /* DiagArray488 */ 1456, 0, R"()")
DIAG_ENTRY(anonymous_136 /* import-preprocessor-directive-pedantic */, 10768, /* DiagArray489 */ 1458, 0, R"()")
DIAG_ENTRY(anonymous_328 /* inaccessible-base */, 10807, /* DiagArray490 */ 1460, 0, R"()")
DIAG_ENTRY(anonymous_144 /* include-angled-in-module-purview */, 10825, /* DiagArray491 */ 1462, 0, R"()")
DIAG_ENTRY(anonymous_128 /* include-next-absolute-path */, 10858, /* DiagArray492 */ 1464, 0, R"()")
DIAG_ENTRY(anonymous_127 /* include-next-outside-header */, 10885, /* DiagArray493 */ 1466, 0, R"()")
DIAG_ENTRY(IncompatibleExceptionSpec /* incompatible-exception-spec */, 10913, /* DiagArray494 */ 1468, 0, R"()")
DIAG_ENTRY(IncompatibleFunctionPointerTypes /* incompatible-function-pointer-types */, 10941, /* DiagArray495 */ 1471, 0, R"()")
DIAG_ENTRY(anonymous_313 /* incompatible-function-pointer-types-strict */, 10977, /* DiagArray496 */ 1473, 0, R"()")
DIAG_ENTRY(anonymous_198 /* incompatible-library-redeclaration */, 11020, /* DiagArray497 */ 1475, 0, R"()")
DIAG_ENTRY(IncompatibleMSPragmaSection /* incompatible-ms-pragma-section */, 11055, /* DiagArray498 */ 1477, 0, R"()")
DIAG_ENTRY(IncompatibleMSStruct /* incompatible-ms-struct */, 11086, /* DiagArray499 */ 1479, 0, R"()")
DIAG_ENTRY(IncompatiblePointerTypes /* incompatible-pointer-types */, 11109, /* DiagArray500 */ 1482, /* DiagSubGroup500 */ 446, R"()")
DIAG_ENTRY(IncompatiblePointerTypesDiscardsOverflowBehavior /* incompatible-pointer-types-discards-overflow-behavior */, 11136, /* DiagArray501 */ 1484, 0, R"()")
DIAG_ENTRY(IncompatiblePointerTypesDiscardsQualifiers /* incompatible-pointer-types-discards-qualifiers */, 11190, /* DiagArray502 */ 1486, 0, R"()")
DIAG_ENTRY(anonymous_206 /* incompatible-property-type */, 11237, /* DiagArray503 */ 1490, 0, R"()")
DIAG_ENTRY(anonymous_97 /* incompatible-sysroot */, 11264, /* DiagArray504 */ 1492, 0, R"()")
DIAG_ENTRY(IncompleteFrameworkModuleDeclaration /* incomplete-framework-module-declaration */, 11285, /* DiagArray505 */ 1494, 0, R"()")
DIAG_ENTRY(anonymous_208 /* incomplete-implementation */, 11325, /* DiagArray506 */ 1496, 0, R"()")
DIAG_ENTRY(IncompleteModule /* incomplete-module */, 11351, 0, /* DiagSubGroup507 */ 450, R"()")
DIAG_ENTRY(anonymous_197 /* incomplete-setjmp-declaration */, 11369, /* DiagArray508 */ 1498, 0, R"()")
DIAG_ENTRY(IncompleteUmbrella /* incomplete-umbrella */, 11399, /* DiagArray509 */ 1500, 0, R"()")
DIAG_ENTRY(MicrosoftInconsistentDllImport /* inconsistent-dllimport */, 11419, /* DiagArray510 */ 1504, 0, R"()")
DIAG_ENTRY(CXX11WarnInconsistentOverrideDestructor /* inconsistent-missing-destructor-override */, 11442, /* DiagArray511 */ 1507, 0, R"()")
DIAG_ENTRY(CXX11WarnInconsistentOverrideMethod /* inconsistent-missing-override */, 11483, /* DiagArray512 */ 1509, 0, R"()")
DIAG_ENTRY(IncrementBool /* increment-bool */, 11513, /* DiagArray513 */ 1511, /* DiagSubGroup513 */ 453, R"()")
DIAG_ENTRY(InfiniteRecursion /* infinite-recursion */, 11528, /* DiagArray514 */ 1513, 0, R"()")
DIAG_ENTRY(anonymous_232 /* init-priority-reserved */, 11547, /* DiagArray515 */ 1515, 0, R"()")
DIAG_ENTRY(anonymous_32 /* init-self */, 11570, 0, 0, R"()")
DIAG_ENTRY(InitializerOverrides /* initializer-overrides */, 11580, /* DiagArray517 */ 1517, 0, R"()")
DIAG_ENTRY(anonymous_225 /* injected-class-name */, 11602, /* DiagArray518 */ 1521, 0, R"()")
DIAG_ENTRY(anonymous_33 /* inline */, 11622, 0, 0, R"()")
DIAG_ENTRY(BackendInlineAsm /* inline-asm */, 11629, /* DiagArray520 */ 1523, 0, R"()")
DIAG_ENTRY(InlineNamespaceReopenedNoninline /* inline-namespace-reopened-noninline */, 11640, /* DiagArray521 */ 1525, 0, R"()")
DIAG_ENTRY(anonymous_329 /* inline-new-delete */, 11676, /* DiagArray522 */ 1527, 0, R"()")
DIAG_ENTRY(InstallAPIViolation /* installapi-violation */, 11694, /* DiagArray523 */ 1529, 0, R"()")
DIAG_ENTRY(anonymous_266 /* instantiation-after-specialization */, 11715, /* DiagArray524 */ 1543, 0, R"()")
DIAG_ENTRY(IntConversion /* int-conversion */, 11750, /* DiagArray525 */ 1545, 0, R"()")
DIAG_ENTRY(anonymous_64 /* int-conversions */, 11765, 0, /* DiagSubGroup526 */ 455, R"()")
DIAG_ENTRY(IntInBoolContext /* int-in-bool-context */, 11781, /* DiagArray527 */ 1548, 0, R"()")
DIAG_ENTRY(IntToPointerCast /* int-to-pointer-cast */, 11801, /* DiagArray528 */ 1551, /* DiagSubGroup528 */ 457, R"()")
DIAG_ENTRY(IntToVoidPointerCast /* int-to-void-pointer-cast */, 11821, /* DiagArray529 */ 1553, 0, R"()")
DIAG_ENTRY(anonymous_79 /* integer-overflow */, 11846, /* DiagArray530 */ 1555, 0, R"()")
DIAG_ENTRY(InvalidCommandLineArgument /* invalid-command-line-argument */, 11863, /* DiagArray531 */ 1557, /* DiagSubGroup531 */ 459, R"()")
DIAG_ENTRY(anonymous_228 /* invalid-constexpr */, 11893, /* DiagArray532 */ 1569, 0, R"()")
DIAG_ENTRY(anonymous_87 /* invalid-feature-combination */, 11911, /* DiagArray533 */ 1571, 0, R"()")
DIAG_ENTRY(anonymous_325 /* invalid-gnu-asm-cast */, 11939, /* DiagArray534 */ 1573, 0, R"()")
DIAG_ENTRY(ObjCInvalidIBOutletProperty /* invalid-iboutlet */, 11960, /* DiagArray535 */ 1575, 0, R"()")
DIAG_ENTRY(anonymous_243 /* invalid-initializer-from-system-header */, 11977, /* DiagArray536 */ 1578, 0, R"()")
DIAG_ENTRY(InvalidIOSDeploymentTarget /* invalid-ios-deployment-target */, 12016, /* DiagArray537 */ 1580, 0, R"()")
DIAG_ENTRY(anonymous_256 /* invalid-no-builtin-names */, 12046, /* DiagArray538 */ 1582, 0, R"()")
DIAG_ENTRY(InvalidNoreturn /* invalid-noreturn */, 12071, /* DiagArray539 */ 1584, 0, R"()")
DIAG_ENTRY(InvalidOffsetof /* invalid-offsetof */, 12088, /* DiagArray540 */ 1588, 0, R"()")
DIAG_ENTRY(InvalidOrNonExistentDirectory /* invalid-or-nonexistent-directory */, 12105, /* DiagArray541 */ 1591, 0, R"()")
DIAG_ENTRY(anonymous_264 /* invalid-partial-specialization */, 12138, /* DiagArray542 */ 1593, 0, R"()")
DIAG_ENTRY(anonymous_34 /* invalid-pch */, 12169, 0, 0, R"()")
DIAG_ENTRY(InvalidPPToken /* invalid-pp-token */, 12181, /* DiagArray544 */ 1595, 0, R"()")
DIAG_ENTRY(InvalidSourceEncoding /* invalid-source-encoding */, 12198, /* DiagArray545 */ 1598, 0, R"()")
DIAG_ENTRY(anonymous_262 /* invalid-specialization */, 12222, /* DiagArray546 */ 1601, 0, R"()")
DIAG_ENTRY(anonymous_219 /* invalid-static-assert-message */, 12245, /* DiagArray547 */ 1603, 0, R"()")
DIAG_ENTRY(anonymous_139 /* invalid-token-paste */, 12275, /* DiagArray548 */ 1605, 0, R"()")
DIAG_ENTRY(anonymous_126 /* invalid-unevaluated-string */, 12295, /* DiagArray549 */ 1607, 0, R"()")
DIAG_ENTRY(anonymous_118 /* invalid-utf8 */, 12322, /* DiagArray550 */ 1609, 0, R"()")
DIAG_ENTRY(anonymous_249 /* invalid-version-availability */, 12335, /* DiagArray551 */ 1611, 0, R"()")
DIAG_ENTRY(JumpBypassesInit /* jump-misses-init */, 12364, /* DiagArray552 */ 1613, 0, R"()")
DIAG_ENTRY(anonymous_308 /* jump-seh-finally */, 12381, /* DiagArray553 */ 1617, 0, R"()")
DIAG_ENTRY(KeywordCompat /* keyword-compat */, 12398, /* DiagArray554 */ 1619, 0, R"()")
DIAG_ENTRY(KeywordAsMacro /* keyword-macro */, 12413, /* DiagArray555 */ 1621, 0, R"()")
DIAG_ENTRY(KNRPromotedParameter /* knr-promoted-parameter */, 12427, /* DiagArray556 */ 1623, 0, R"()")
DIAG_ENTRY(anonymous_117 /* language-extension-token */, 12450, /* DiagArray557 */ 1625, 0, R"()")
DIAG_ENTRY(LargeByValueCopy /* large-by-value-copy */, 12475, /* DiagArray558 */ 1627, 0, R"()")
DIAG_ENTRY(LegacyConstantRegisterBinding /* legacy-constant-register-binding */, 12495, /* DiagArray559 */ 1630, 0, R"()")
DIAG_ENTRY(LibLTO /* liblto */, 12528, 0, 0, R"()")
DIAG_ENTRY(LifetimeSafety /* lifetime-safety */, 12535, 0, /* DiagSubGroup561 */ 461, R"(Warnings to detect use-after-free and related temporal safety bugs based on lifetime safety analysis.)")
DIAG_ENTRY(LifetimeSafetyAll /* lifetime-safety-all */, 12551, 0, /* DiagSubGroup562 */ 464, R"(Turns on all the warnings in the lifetime-safety umbrella.)")
DIAG_ENTRY(LifetimeSafetyCrossTUSuggestions /* lifetime-safety-cross-tu-suggestions */, 12571, /* DiagArray563 */ 1635, 0, R"()")
DIAG_ENTRY(LifetimeSafetyDanglingField /* lifetime-safety-dangling-field */, 12608, /* DiagArray564 */ 1638, 0, R"(Warning to detect dangling field references.)")
DIAG_ENTRY(LifetimeSafetyDanglingFieldMoved /* lifetime-safety-dangling-field-moved */, 12639, /* DiagArray565 */ 1640, 0, R"(Warning to detect dangling field references.
This may contain false-positives, e.g. when the borrowed storage is potentially moved and is not destroyed at function exit.)")
DIAG_ENTRY(LifetimeSafetyDanglingGlobal /* lifetime-safety-dangling-global */, 12676, /* DiagArray566 */ 1642, 0, R"(Warning to detect dangling global references.)")
DIAG_ENTRY(LifetimeSafetyDanglingGlobalMoved /* lifetime-safety-dangling-global-moved */, 12708, /* DiagArray567 */ 1644, 0, R"(Warning to detect dangling global references.
This may contain false-positives, e.g. when the borrowed storage is potentially moved and is not destroyed at function exit.)")
DIAG_ENTRY(LifetimeSafetyIntraTUSuggestions /* lifetime-safety-intra-tu-suggestions */, 12746, /* DiagArray568 */ 1646, 0, R"()")
DIAG_ENTRY(LifetimeSafetyInvalidation /* lifetime-safety-invalidation */, 12783, /* DiagArray569 */ 1649, 0, R"(Warning to detect invalidation of references.)")
DIAG_ENTRY(LifetimeSafetyNoescape /* lifetime-safety-noescape */, 12812, /* DiagArray570 */ 1651, 0, R"(Detects misuse of [[clang::noescape]] annotation where the parameter escapes (for example, through return).)")
DIAG_ENTRY(LifetimeSafetyPermissive /* lifetime-safety-permissive */, 12837, 0, /* DiagSubGroup571 */ 468, R"()")
DIAG_ENTRY(LifetimeSafetyReturnStackAddr /* lifetime-safety-return-stack-addr */, 12864, /* DiagArray572 */ 1653, 0, R"(Warning to detect use-after-return introduced by returning stack address.)")
DIAG_ENTRY(LifetimeSafetyReturnStackAddrMoved /* lifetime-safety-return-stack-addr-moved */, 12898, /* DiagArray573 */ 1655, 0, R"(Warning to detect use-after-return introduced by returning stack address.
This may contain false-positives, e.g. when the borrowed storage is potentially moved and is not destroyed at function exit.)")
DIAG_ENTRY(LifetimeSafetyStrict /* lifetime-safety-strict */, 12938, 0, /* DiagSubGroup574 */ 473, R"()")
DIAG_ENTRY(LifetimeSafetySuggestions /* lifetime-safety-suggestions */, 12961, 0, /* DiagSubGroup575 */ 479, R"(Lifetime annotation suggestions for function parameters that should be marked [[clang::lifetimebound]] based on lifetime analysis.)")
DIAG_ENTRY(LifetimeSafetyUseAfterScope /* lifetime-safety-use-after-scope */, 12989, /* DiagArray576 */ 1657, 0, R"(Warning to detect dangling references introduced by use-after-scope.)")
DIAG_ENTRY(LifetimeSafetyUseAfterScopeMoved /* lifetime-safety-use-after-scope-moved */, 13021, /* DiagArray577 */ 1659, 0, R"(Warning to detect dangling references introduced by use-after-scope.
This may contain false-positives, e.g. when the borrowed storage is potentially moved and is not destroyed at scope exit.)")
DIAG_ENTRY(LifetimeSafetyValidations /* lifetime-safety-validations */, 13059, 0, /* DiagSubGroup578 */ 482, R"(Verify function implementations adhere to the annotated lifetime contracts through lifetime safety
like verifying [[clang::noescape]] and [[clang::lifetimebound]] (upcoming).)")
DIAG_ENTRY(LinkerWarnings /* linker-warnings */, 13087, /* DiagArray579 */ 1661, 0, R"()")
DIAG_ENTRY(LiteralConversion /* literal-conversion */, 13103, /* DiagArray580 */ 1663, 0, R"()")
DIAG_ENTRY(LiteralRange /* literal-range */, 13122, /* DiagArray581 */ 1666, 0, R"()")
DIAG_ENTRY(LocalTypeTemplateArgs /* local-type-template-args */, 13136, /* DiagArray582 */ 1670, /* DiagSubGroup582 */ 484, R"()")
DIAG_ENTRY(LogicalNotParentheses /* logical-not-parentheses */, 13161, /* DiagArray583 */ 1672, 0, R"()")
DIAG_ENTRY(LogicalOpParentheses /* logical-op-parentheses */, 13185, /* DiagArray584 */ 1674, 0, R"()")
DIAG_ENTRY(LongLong /* long-long */, 13208, /* DiagArray585 */ 1676, /* DiagSubGroup585 */ 486, R"()")
DIAG_ENTRY(LoopAnalysis /* loop-analysis */, 13218, 0, /* DiagSubGroup586 */ 488, R"()")
DIAG_ENTRY(MacroRedefined /* macro-redefined */, 13232, /* DiagArray587 */ 1678, 0, R"()")
DIAG_ENTRY(Main /* main */, 13248, /* DiagArray588 */ 1680, 0, R"()")
DIAG_ENTRY(anonymous_203 /* main-attached-to-named-module */, 13253, /* DiagArray589 */ 1689, 0, R"()")
DIAG_ENTRY(MainReturnType /* main-return-type */, 13283, /* DiagArray590 */ 1691, 0, R"()")
DIAG_ENTRY(MalformedWarningCheck /* malformed-warning-check */, 13300, /* DiagArray591 */ 1694, 0, R"()")
DIAG_ENTRY(anonymous_280 /* many-braces-around-scalar-init */, 13324, /* DiagArray592 */ 1696, 0, R"()")
DIAG_ENTRY(MathErrnoEnabledWithVecLib /* math-errno-enabled-with-veclib */, 13355, /* DiagArray593 */ 1698, 0, R"()")
DIAG_ENTRY(anonymous_122 /* mathematical-notation-identifier-extension */, 13386, /* DiagArray594 */ 1700, 0, R"()")
DIAG_ENTRY(MatrixConversion /* matrix-conversion */, 13429, /* DiagArray595 */ 1702, 0, R"()")
DIAG_ENTRY(anonymous_66 /* matrix-conversions */, 13447, 0, /* DiagSubGroup596 */ 491, R"()")
DIAG_ENTRY(MaxTokens /* max-tokens */, 13466, /* DiagArray597 */ 1705, 0, R"(The warning is issued if the number of pre-processor tokens exceeds
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
DIAG_ENTRY(MaxUnsignedZero /* max-unsigned-zero */, 13477, /* DiagArray598 */ 1708, 0, R"()")
DIAG_ENTRY(MemsetTransposedArgs /* memset-transposed-args */, 13495, /* DiagArray599 */ 1710, 0, R"()")
DIAG_ENTRY(anonymous_200 /* memsize-comparison */, 13518, /* DiagArray600 */ 1712, 0, R"()")
DIAG_ENTRY(MethodSignatures /* method-signatures */, 13537, /* DiagArray601 */ 1714, 0, R"()")
DIAG_ENTRY(Microsoft /* microsoft */, 13555, 0, /* DiagSubGroup602 */ 493, R"()")
DIAG_ENTRY(MicrosoftAbstract /* microsoft-abstract */, 13565, /* DiagArray603 */ 1717, 0, R"()")
DIAG_ENTRY(MicrosoftAnonTag /* microsoft-anon-tag */, 13584, /* DiagArray604 */ 1719, 0, R"()")
DIAG_ENTRY(MicrosoftCast /* microsoft-cast */, 13603, /* DiagArray605 */ 1722, 0, R"()")
DIAG_ENTRY(MicrosoftCharize /* microsoft-charize */, 13618, /* DiagArray606 */ 1725, 0, R"()")
DIAG_ENTRY(MicrosoftCommentPaste /* microsoft-comment-paste */, 13636, /* DiagArray607 */ 1727, 0, R"()")
DIAG_ENTRY(MicrosoftConstInit /* microsoft-const-init */, 13660, /* DiagArray608 */ 1729, 0, R"()")
DIAG_ENTRY(MicrosoftCppMacro /* microsoft-cpp-macro */, 13681, /* DiagArray609 */ 1731, 0, R"()")
DIAG_ENTRY(MicrosoftDefaultArgRedefinition /* microsoft-default-arg-redefinition */, 13701, /* DiagArray610 */ 1733, 0, R"()")
DIAG_ENTRY(MicrosoftDrectveSection /* microsoft-drectve-section */, 13736, /* DiagArray611 */ 1735, 0, R"()")
DIAG_ENTRY(MicrosoftEmptyEnum /* microsoft-empty-enum */, 13762, /* DiagArray612 */ 1737, 0, R"()")
DIAG_ENTRY(MicrosoftEndOfFile /* microsoft-end-of-file */, 13783, /* DiagArray613 */ 1739, 0, R"()")
DIAG_ENTRY(MicrosoftEnumForwardReference /* microsoft-enum-forward-reference */, 13805, /* DiagArray614 */ 1741, 0, R"()")
DIAG_ENTRY(MicrosoftEnumValue /* microsoft-enum-value */, 13838, /* DiagArray615 */ 1743, 0, R"()")
DIAG_ENTRY(MicrosoftExceptionSpec /* microsoft-exception-spec */, 13859, /* DiagArray616 */ 1745, 0, R"()")
DIAG_ENTRY(anonymous_150 /* microsoft-exists */, 13884, /* DiagArray617 */ 1751, 0, R"()")
DIAG_ENTRY(MicrosoftExplicitConstructorCall /* microsoft-explicit-constructor-call */, 13901, /* DiagArray618 */ 1753, 0, R"()")
DIAG_ENTRY(MicrosoftExtraQualification /* microsoft-extra-qualification */, 13937, /* DiagArray619 */ 1755, 0, R"()")
DIAG_ENTRY(MicrosoftFixedEnum /* microsoft-fixed-enum */, 13967, /* DiagArray620 */ 1757, 0, R"()")
DIAG_ENTRY(MicrosoftFlexibleArray /* microsoft-flexible-array */, 13988, /* DiagArray621 */ 1759, 0, R"()")
DIAG_ENTRY(MicrosoftGoto /* microsoft-goto */, 14013, /* DiagArray622 */ 1762, 0, R"()")
DIAG_ENTRY(MicrosoftInaccessibleBase /* microsoft-inaccessible-base */, 14028, /* DiagArray623 */ 1764, 0, R"()")
DIAG_ENTRY(MicrosoftInclude /* microsoft-include */, 14056, /* DiagArray624 */ 1766, 0, R"()")
DIAG_ENTRY(MicrosoftInitFromPredefined /* microsoft-init-from-predefined */, 14074, /* DiagArray625 */ 1768, 0, R"()")
DIAG_ENTRY(MicrosoftInlineOnNonFunction /* microsoft-inline-on-non-function */, 14105, /* DiagArray626 */ 1770, 0, R"()")
DIAG_ENTRY(MicrosoftMutableReference /* microsoft-mutable-reference */, 14138, /* DiagArray627 */ 1772, 0, R"()")
DIAG_ENTRY(MicrosoftPureDefinition /* microsoft-pure-definition */, 14166, /* DiagArray628 */ 1774, 0, R"()")
DIAG_ENTRY(MicrosoftRedeclareStatic /* microsoft-redeclare-static */, 14192, /* DiagArray629 */ 1776, 0, R"()")
DIAG_ENTRY(MicrosoftSealed /* microsoft-sealed */, 14219, /* DiagArray630 */ 1778, 0, R"()")
DIAG_ENTRY(MicrosoftStringLiteralFromPredefined /* microsoft-string-literal-from-predefined */, 14236, /* DiagArray631 */ 1780, 0, R"()")
DIAG_ENTRY(MicrosoftTemplate /* microsoft-template */, 14277, /* DiagArray632 */ 1782, /* DiagSubGroup632 */ 527, R"()")
DIAG_ENTRY(MicrosoftTemplateShadow /* microsoft-template-shadow */, 14296, /* DiagArray633 */ 1793, 0, R"()")
DIAG_ENTRY(MicrosoftUnionMemberReference /* microsoft-union-member-reference */, 14322, /* DiagArray634 */ 1795, 0, R"()")
DIAG_ENTRY(MicrosoftUnqualifiedFriend /* microsoft-unqualified-friend */, 14355, /* DiagArray635 */ 1797, 0, R"()")
DIAG_ENTRY(MicrosoftUsingDecl /* microsoft-using-decl */, 14384, /* DiagArray636 */ 1799, 0, R"()")
DIAG_ENTRY(MicrosoftVoidPseudoDtor /* microsoft-void-pseudo-dtor */, 14405, /* DiagArray637 */ 1801, 0, R"()")
DIAG_ENTRY(MisExpect /* misexpect */, 14432, /* DiagArray638 */ 1803, 0, R"()")
DIAG_ENTRY(MisleadingIndentation /* misleading-indentation */, 14442, /* DiagArray639 */ 1805, 0, R"()")
DIAG_ENTRY(anonymous_304 /* mismatched-new-delete */, 14465, /* DiagArray640 */ 1807, 0, R"()")
DIAG_ENTRY(MismatchedParameterTypes /* mismatched-parameter-types */, 14487, /* DiagArray641 */ 1809, 0, R"()")
DIAG_ENTRY(MismatchedReturnTypes /* mismatched-return-types */, 14514, /* DiagArray642 */ 1811, 0, R"()")
DIAG_ENTRY(MismatchedTags /* mismatched-tags */, 14538, /* DiagArray643 */ 1813, 0, R"()")
DIAG_ENTRY(MissingBraces /* missing-braces */, 14554, /* DiagArray644 */ 1816, 0, R"()")
DIAG_ENTRY(anonymous_324 /* missing-constinit */, 14569, /* DiagArray645 */ 1818, 0, R"()")
DIAG_ENTRY(MissingDeclarations /* missing-declarations */, 14587, /* DiagArray646 */ 1820, 0, R"()")
DIAG_ENTRY(MissingDesignatedFieldInitializers /* missing-designated-field-initializers */, 14608, /* DiagArray647 */ 1825, 0, R"(Warn about designated initializers with some fields missing (only in C++).)")
DIAG_ENTRY(anonymous_224 /* missing-exception-spec */, 14646, /* DiagArray648 */ 1827, 0, R"()")
DIAG_ENTRY(MissingFieldInitializers /* missing-field-initializers */, 14669, /* DiagArray649 */ 1829, /* DiagSubGroup649 */ 529, R"()")
DIAG_ENTRY(MissingFormatAttribute /* missing-format-attribute */, 14696, /* DiagArray650 */ 1831, 0, R"()")
DIAG_ENTRY(MissingIncludeDirs /* missing-include-dirs */, 14721, /* DiagArray651 */ 1833, 0, R"()")
DIAG_ENTRY(MissingMethodReturnType /* missing-method-return-type */, 14742, /* DiagArray652 */ 1835, 0, R"()")
DIAG_ENTRY(anonymous_106 /* missing-multilib */, 14769, /* DiagArray653 */ 1837, 0, R"()")
DIAG_ENTRY(MissingNoEscape /* missing-noescape */, 14786, /* DiagArray654 */ 1839, 0, R"()")
DIAG_ENTRY(MissingNoreturn /* missing-noreturn */, 14803, /* DiagArray655 */ 1841, 0, R"()")
DIAG_ENTRY(anonymous_247 /* missing-prototype-for-cc */, 14820, /* DiagArray656 */ 1844, 0, R"()")
DIAG_ENTRY(anonymous_268 /* missing-prototypes */, 14845, /* DiagArray657 */ 1846, 0, R"()")
DIAG_ENTRY(anonymous_152 /* missing-selector-name */, 14864, /* DiagArray658 */ 1848, 0, R"()")
DIAG_ENTRY(anonymous_96 /* missing-sysroot */, 14886, /* DiagArray659 */ 1850, 0, R"()")
DIAG_ENTRY(anonymous_160 /* missing-template-arg-list-after-template-kw */, 14902, /* DiagArray660 */ 1852, 0, R"()")
DIAG_ENTRY(anonymous_269 /* missing-variable-declarations */, 14946, /* DiagArray661 */ 1854, 0, R"()")
DIAG_ENTRY(MisspelledAssumption /* misspelled-assumption */, 14976, /* DiagArray662 */ 1856, 0, R"()")
DIAG_ENTRY(HLSLMixPackOffset /* mix-packoffset */, 14998, /* DiagArray663 */ 1858, 0, R"()")
DIAG_ENTRY(anonymous_143 /* mmap-deprecated-symlink-to-modular-header */, 15013, /* DiagArray664 */ 1860, 0, R"()")
DIAG_ENTRY(ModuleBuild /* module-build */, 15055, /* DiagArray665 */ 1862, 0, R"()")
DIAG_ENTRY(ModuleConflict /* module-conflict */, 15068, /* DiagArray666 */ 1867, 0, R"()")
DIAG_ENTRY(anonymous_363 /* module-file-config-mismatch */, 15084, /* DiagArray667 */ 1870, 0, R"()")
DIAG_ENTRY(ModuleFileExtension /* module-file-extension */, 15112, /* DiagArray668 */ 1872, 0, R"()")
DIAG_ENTRY(anonymous_366 /* module-file-mapping-mismatch */, 15134, /* DiagArray669 */ 1874, 0, R"()")
DIAG_ENTRY(ModuleImport /* module-import */, 15163, /* DiagArray670 */ 1876, 0, R"()")
DIAG_ENTRY(anonymous_344 /* module-import-in-extern-c */, 15177, /* DiagArray671 */ 1878, 0, R"()")
DIAG_ENTRY(ModuleIncludeDirectiveTranslation /* module-include-translation */, 15203, /* DiagArray672 */ 1880, 0, R"()")
DIAG_ENTRY(ModuleLock /* module-lock */, 15230, /* DiagArray673 */ 1882, 0, R"()")
DIAG_ENTRY(ModuleMap /* module-map */, 15242, /* DiagArray674 */ 1884, 0, R"()")
DIAG_ENTRY(anonymous_142 /* module-map-path-outside-directory */, 15253, /* DiagArray675 */ 1888, 0, R"()")
DIAG_ENTRY(ModuleValidation /* module-validation */, 15287, /* DiagArray676 */ 1890, 0, R"()")
DIAG_ENTRY(anonymous_349 /* modules-ambiguous-internal-linkage */, 15305, /* DiagArray677 */ 1894, 0, R"()")
DIAG_ENTRY(ModulesDriver /* modules-driver */, 15340, /* DiagArray678 */ 1896, 0, R"()")
DIAG_ENTRY(anonymous_345 /* modules-import-nested-redundant */, 15355, /* DiagArray679 */ 1901, 0, R"()")
DIAG_ENTRY(Most /* most */, 15387, 0, /* DiagSubGroup680 */ 531, R"()")
DIAG_ENTRY(Move /* move */, 15392, 0, /* DiagSubGroup681 */ 569, R"()")
DIAG_ENTRY(MSBitfieldCompatibility /* ms-bitfield-padding */, 15397, /* DiagArray682 */ 1903, 0, R"(Under the Microsoft ABI, adjacent bit-fields are not packed if the
    underlying type has a different storage size. This warning indicates that a
    pair of adjacent bit-fields may not pack in the same way due to this behavioural
    difference.

    This can occur when mixing different types explicitly:

    .. code-block:: c++

      struct S {
        uint16_t field1 : 1;
        uint32_t field2 : 1;
      };

    or more subtly through enums

    .. code-block:: c++

      enum Enum1 { /* ... */ };
      enum class Enum2 : unsigned char { /* ... */ };
      struct S {
        Enum1 field1 : 1;
        Enum2 field2 : 1;
      };

    In each of these cases under the Microsoft ABI the second bit-field
    will not be packed with the preceding bit-field, and instead will be aligned
    as if the fields were each separately defined integer fields of their respective
    storage size. For binary compatibility this is obviously and observably
    incompatible, however where bit-fields are being used solely for memory use
    reduction this incomplete packing may silently increase the size of objects vs
    what is expected.

    This issue can be addressed by ensuring the storage type of each bit-field is
    the same, either by explicitly using the same integer type, or in the case of
    enum types declaring the enum types with the same storage size. For enum types
    where you cannot specify the underlying type, the options are to either switch
    to int sized storage for all specifiers or to resort to declaring the
    bit-fields with explicit integer storage types and cast in and out of the field.
    If such a solution is required the
    :ref:`preferred_type <langext-preferred_type_documentation>` attribute can be
    used to convey the actual field type to debuggers and other tooling.)")
DIAG_ENTRY(anonymous_75 /* msvc-include */, 15417, 0, /* DiagSubGroup683 */ 574, R"()")
DIAG_ENTRY(anonymous_102 /* msvc-not-found */, 15430, /* DiagArray684 */ 1905, 0, R"()")
DIAG_ENTRY(MultiGPU /* multi-gpu */, 15445, /* DiagArray685 */ 1907, 0, R"()")
DIAG_ENTRY(MultiChar /* multichar */, 15455, /* DiagArray686 */ 1909, 0, R"()")
DIAG_ENTRY(anonymous_107 /* multilib-not-found */, 15465, /* DiagArray687 */ 1911, 0, R"()")
DIAG_ENTRY(anonymous_331 /* multiple-move-vbase */, 15484, /* DiagArray688 */ 1913, 0, R"()")
DIAG_ENTRY(anonymous_83 /* nan-infinity-disabled */, 15504, /* DiagArray689 */ 1915, 0, R"(This warning is enabled when source code using the macros ``INFINITY`` or ``NAN``
is compiled with floating-point options preventing these two values. This can
lead to undefined behavior. Check the order of command line arguments that modify
this behavior, such as ``-ffast-math``, ``-fhonor-infinities``, and
``-fhonor-nans`` (etc), as well as ``#pragma`` directives if this diagnostic is
generated unexpectedly.)")
DIAG_ENTRY(anonymous_25 /* narrowing */, 15526, 0, /* DiagSubGroup690 */ 576, R"()")
DIAG_ENTRY(anonymous_327 /* nested-anon-types */, 15536, /* DiagArray691 */ 1917, 0, R"()")
DIAG_ENTRY(anonymous_35 /* nested-externs */, 15554, 0, 0, R"()")
DIAG_ENTRY(OperatorNewReturnsNull /* new-returns-null */, 15569, /* DiagArray693 */ 1919, 0, R"()")
DIAG_ENTRY(NewlineEOF /* newline-eof */, 15586, /* DiagArray694 */ 1921, 0, R"()")
DIAG_ENTRY(NoDeref /* noderef */, 15598, /* DiagArray695 */ 1923, 0, R"()")
DIAG_ENTRY(NoexceptType /* noexcept-type */, 15606, 0, /* DiagSubGroup696 */ 578, R"()")
DIAG_ENTRY(anonymous_204 /* non-c-typedef-for-linkage */, 15620, /* DiagArray697 */ 1927, 0, R"()")
DIAG_ENTRY(NonGCC /* non-gcc */, 15646, 0, /* DiagSubGroup698 */ 580, R"()")
DIAG_ENTRY(NonLiteralNullConversion /* non-literal-null-conversion */, 15654, /* DiagArray699 */ 1929, 0, R"()")
DIAG_ENTRY(NonModularIncludeInFrameworkModule /* non-modular-include-in-framework-module */, 15682, /* DiagArray700 */ 1931, 0, R"()")
DIAG_ENTRY(NonModularIncludeInModule /* non-modular-include-in-module */, 15722, /* DiagArray701 */ 1933, /* DiagSubGroup701 */ 584, R"()")
DIAG_ENTRY(NonPODVarargs /* non-pod-varargs */, 15752, /* DiagArray702 */ 1935, 0, R"()")
DIAG_ENTRY(anonymous_238 /* non-power-of-two-alignment */, 15768, /* DiagArray703 */ 1940, 0, R"()")
DIAG_ENTRY(NonVirtualDtor /* non-virtual-dtor */, 15795, /* DiagArray704 */ 1942, 0, R"()")
DIAG_ENTRY(NonNull /* nonnull */, 15812, /* DiagArray705 */ 1944, 0, R"()")
DIAG_ENTRY(anonymous_36 /* nonportable-cfstrings */, 15820, 0, 0, R"()")
DIAG_ENTRY(NonportableIncludePath /* nonportable-include-path */, 15842, /* DiagArray707 */ 1947, /* DiagSubGroup707 */ 586, R"()")
DIAG_ENTRY(NonportableIncludePathSeparator /* nonportable-include-path-separator */, 15867, /* DiagArray708 */ 1949, 0, R"()")
DIAG_ENTRY(anonymous_90 /* nonportable-private-apinotes-path */, 15902, /* DiagArray709 */ 1951, 0, R"()")
DIAG_ENTRY(anonymous_91 /* nonportable-private-system-apinotes-path */, 15936, /* DiagArray710 */ 1953, 0, R"()")
DIAG_ENTRY(NonPortableSYCL /* nonportable-sycl */, 15977, /* DiagArray711 */ 1955, 0, R"()")
DIAG_ENTRY(anonymous_129 /* nonportable-system-include-path */, 15994, /* DiagArray712 */ 1958, 0, R"()")
DIAG_ENTRY(anonymous_339 /* nonportable-vector-initialization */, 16026, /* DiagArray713 */ 1960, 0, R"()")
DIAG_ENTRY(NonTrivialMemaccess /* nontrivial-memaccess */, 16060, /* DiagArray714 */ 1962, /* DiagSubGroup714 */ 588, R"()")
DIAG_ENTRY(NonTrivialMemcall /* nontrivial-memcall */, 16081, /* DiagArray715 */ 1964, 0, R"()")
DIAG_ENTRY(anonymous_351 /* nrvo */, 16100, /* DiagArray716 */ 1966, 0, R"()")
DIAG_ENTRY(NSConsumedMismatch /* nsconsumed-mismatch */, 16105, /* DiagArray717 */ 1968, 0, R"()")
DIAG_ENTRY(NSReturnsMismatch /* nsreturns-mismatch */, 16125, /* DiagArray718 */ 1970, 0, R"()")
DIAG_ENTRY(NullArithmetic /* null-arithmetic */, 16144, /* DiagArray719 */ 1972, 0, R"()")
DIAG_ENTRY(NullCharacter /* null-character */, 16160, /* DiagArray720 */ 1975, 0, R"()")
DIAG_ENTRY(NullConversion /* null-conversion */, 16175, /* DiagArray721 */ 1978, 0, R"()")
DIAG_ENTRY(NullDereference /* null-dereference */, 16191, /* DiagArray722 */ 1980, 0, R"()")
DIAG_ENTRY(NullPointerArithmetic /* null-pointer-arithmetic */, 16208, /* DiagArray723 */ 1983, /* DiagSubGroup723 */ 590, R"()")
DIAG_ENTRY(NullPointerSubtraction /* null-pointer-subtraction */, 16232, /* DiagArray724 */ 1985, 0, R"()")
DIAG_ENTRY(Nullability /* nullability */, 16257, /* DiagArray725 */ 1987, 0, R"()")
DIAG_ENTRY(NullabilityCompleteness /* nullability-completeness */, 16269, /* DiagArray726 */ 1993, /* DiagSubGroup726 */ 592, R"()")
DIAG_ENTRY(NullabilityCompletenessOnArrays /* nullability-completeness-on-arrays */, 16294, /* DiagArray727 */ 1995, 0, R"()")
DIAG_ENTRY(NullabilityDeclSpec /* nullability-declspec */, 16329, /* DiagArray728 */ 1997, 0, R"()")
DIAG_ENTRY(anonymous_147 /* nullability-extension */, 16350, /* DiagArray729 */ 1999, 0, R"()")
DIAG_ENTRY(NullabilityInferredOnNestedType /* nullability-inferred-on-nested-type */, 16372, /* DiagArray730 */ 2001, 0, R"()")
DIAG_ENTRY(NullableToNonNullConversion /* nullable-to-nonnull-conversion */, 16408, /* DiagArray731 */ 2003, 0, R"()")
DIAG_ENTRY(anonymous_319 /* nvcc-compat */, 16439, /* DiagArray732 */ 2005, 0, R"()")
DIAG_ENTRY(anonymous_213 /* objc-autosynthesis-property-ivar-name-match */, 16451, /* DiagArray733 */ 2007, 0, R"()")
DIAG_ENTRY(ObjCBoolConstantConversion /* objc-bool-constant-conversion */, 16495, /* DiagArray734 */ 2009, 0, R"()")
DIAG_ENTRY(ObjCBoxing /* objc-boxing */, 16525, /* DiagArray735 */ 2011, 0, R"()")
DIAG_ENTRY(anonymous_301 /* objc-circular-container */, 16537, /* DiagArray736 */ 2013, 0, R"()")
DIAG_ENTRY(ObjCCocoaAPI /* objc-cocoa-api */, 16561, 0, /* DiagSubGroup737 */ 594, R"()")
DIAG_ENTRY(ObjCDesignatedInit /* objc-designated-initializers */, 16576, /* DiagArray738 */ 2015, 0, R"()")
DIAG_ENTRY(anonymous_234 /* objc-dictionary-duplicate-keys */, 16605, /* DiagArray739 */ 2022, 0, R"()")
DIAG_ENTRY(anonymous_86 /* objc-duplicate-category-definition */, 16636, /* DiagArray740 */ 2024, 0, R"()")
DIAG_ENTRY(ObjCFlexibleArray /* objc-flexible-array */, 16671, /* DiagArray741 */ 2026, 0, R"()")
DIAG_ENTRY(anonymous_275 /* objc-forward-class-redefinition */, 16691, /* DiagArray742 */ 2029, 0, R"()")
DIAG_ENTRY(anonymous_276 /* objc-interface-ivars */, 16723, /* DiagArray743 */ 2031, 0, R"()")
DIAG_ENTRY(ObjCLiteralComparison /* objc-literal-compare */, 16744, /* DiagArray744 */ 2033, /* DiagSubGroup744 */ 596, R"()")
DIAG_ENTRY(ObjCLiteralConversion /* objc-literal-conversion */, 16765, /* DiagArray745 */ 2035, 0, R"()")
DIAG_ENTRY(anonymous_135 /* objc-macro-redefinition */, 16789, /* DiagArray746 */ 2038, 0, R"()")
DIAG_ENTRY(anonymous_218 /* objc-messaging-id */, 16813, /* DiagArray747 */ 2040, 0, R"()")
DIAG_ENTRY(MethodAccess /* objc-method-access */, 16831, /* DiagArray748 */ 2042, 0, R"()")
DIAG_ENTRY(anonymous_214 /* objc-missing-property-synthesis */, 16850, /* DiagArray749 */ 2049, 0, R"()")
DIAG_ENTRY(ObjCMissingSuperCalls /* objc-missing-super-calls */, 16882, /* DiagArray750 */ 2051, 0, R"()")
DIAG_ENTRY(ObjCMultipleMethodNames /* objc-multiple-method-names */, 16907, /* DiagArray751 */ 2053, 0, R"()")
DIAG_ENTRY(ObjCRetainBlockProperty /* objc-noncopy-retain-block-property */, 16934, /* DiagArray752 */ 2055, 0, R"()")
DIAG_ENTRY(ObjCNonUnifiedException /* objc-nonunified-exceptions */, 16969, /* DiagArray753 */ 2057, 0, R"()")
DIAG_ENTRY(ObjCPropertyAssignOnObjectType /* objc-property-assign-on-object-type */, 16996, /* DiagArray754 */ 2059, 0, R"()")
DIAG_ENTRY(ObjCPropertyImpl /* objc-property-implementation */, 17032, /* DiagArray755 */ 2061, 0, R"()")
DIAG_ENTRY(anonymous_209 /* objc-property-implicit-mismatch */, 17061, /* DiagArray756 */ 2066, 0, R"()")
DIAG_ENTRY(anonymous_211 /* objc-property-matches-cocoa-ownership-rule */, 17093, /* DiagArray757 */ 2068, 0, R"()")
DIAG_ENTRY(ObjCPropertyNoAttribute /* objc-property-no-attribute */, 17136, /* DiagArray758 */ 2070, 0, R"()")
DIAG_ENTRY(ObjCNoPropertyAutoSynthesis /* objc-property-synthesis */, 17163, /* DiagArray759 */ 2073, 0, R"()")
DIAG_ENTRY(ObjCProtocolMethodImpl /* objc-protocol-method-implementation */, 17187, /* DiagArray760 */ 2077, 0, R"()")
DIAG_ENTRY(anonymous_212 /* objc-protocol-property-synthesis */, 17223, /* DiagArray761 */ 2079, 0, R"()")
DIAG_ENTRY(ObjCProtocolQualifiers /* objc-protocol-qualifiers */, 17256, /* DiagArray762 */ 2081, 0, R"()")
DIAG_ENTRY(ObjCReadonlyPropertyHasSetter /* objc-readonly-with-setter-property */, 17281, /* DiagArray763 */ 2083, 0, R"()")
DIAG_ENTRY(ObjCRedundantAPIUse /* objc-redundant-api-use */, 17316, 0, /* DiagSubGroup764 */ 598, R"()")
DIAG_ENTRY(ObjCRedundantLiteralUse /* objc-redundant-literal-use */, 17339, /* DiagArray765 */ 2085, 0, R"()")
DIAG_ENTRY(ObjCRootClass /* objc-root-class */, 17366, /* DiagArray766 */ 2087, 0, R"()")
DIAG_ENTRY(ObjCSignedCharBool /* objc-signed-char-bool */, 17382, 0, /* DiagSubGroup767 */ 600, R"()")
DIAG_ENTRY(ObjCSignedCharBoolImplicitFloatConversion /* objc-signed-char-bool-implicit-float-conversion */, 17404, /* DiagArray768 */ 2089, 0, R"()")
DIAG_ENTRY(ObjCSignedCharBoolImplicitIntConversion /* objc-signed-char-bool-implicit-int-conversion */, 17452, /* DiagArray769 */ 2091, 0, R"()")
DIAG_ENTRY(ObjCStringComparison /* objc-string-compare */, 17498, /* DiagArray770 */ 2093, 0, R"()")
DIAG_ENTRY(ObjCStringConcatenation /* objc-string-concatenation */, 17518, /* DiagArray771 */ 2095, 0, R"()")
DIAG_ENTRY(anonymous_302 /* objc-unsafe-perform-selector */, 17544, /* DiagArray772 */ 2097, 0, R"()")
DIAG_ENTRY(anonymous_125 /* octal-prefix-extension */, 17573, /* DiagArray773 */ 2099, 0, R"()")
DIAG_ENTRY(ODR /* odr */, 17596, /* DiagArray774 */ 2101, 0, R"()")
DIAG_ENTRY(OldStyleCast /* old-style-cast */, 17600, /* DiagArray775 */ 2121, 0, R"()")
DIAG_ENTRY(anonymous_38 /* old-style-definition */, 17615, 0, 0, R"()")
DIAG_ENTRY(OpenACC /* openacc */, 17636, 0, /* DiagSubGroup777 */ 605, R"()")
DIAG_ENTRY(anonymous_356 /* openacc-cache-var-inside-loop */, 17644, /* DiagArray778 */ 2123, 0, R"()")
DIAG_ENTRY(anonymous_358 /* openacc-confusing-routine-name */, 17674, /* DiagArray779 */ 2125, 0, R"()")
DIAG_ENTRY(anonymous_357 /* openacc-deprecated-clause-alias */, 17705, /* DiagArray780 */ 2127, 0, R"()")
DIAG_ENTRY(anonymous_355 /* openacc-extension */, 17737, /* DiagArray781 */ 2129, 0, R"()")
DIAG_ENTRY(anonymous_354 /* openacc-self-if-potential-conflict */, 17755, /* DiagArray782 */ 2131, 0, R"()")
DIAG_ENTRY(anonymous_360 /* openacc-var-lacks-operation */, 17790, /* DiagArray783 */ 2133, 0, R"()")
DIAG_ENTRY(anonymous_359 /* openacc-var-non-const-array */, 17818, /* DiagArray784 */ 2135, 0, R"()")
DIAG_ENTRY(OpenCLUnsupportedRGBA /* opencl-unsupported-rgba */, 17846, /* DiagArray785 */ 2137, 0, R"()")
DIAG_ENTRY(OpenMP /* openmp */, 17870, 0, /* DiagSubGroup786 */ 607, R"()")
DIAG_ENTRY(OpenMP51Ext /* openmp-51-extensions */, 17877, /* DiagArray787 */ 2139, 0, R"()")
DIAG_ENTRY(OpenMPClauses /* openmp-clauses */, 17898, /* DiagArray788 */ 2141, 0, R"()")
DIAG_ENTRY(OpenMPExtensions /* openmp-extensions */, 17913, /* DiagArray789 */ 2164, 0, R"()")
DIAG_ENTRY(OpenMPFuture /* openmp-future */, 17931, /* DiagArray790 */ 2166, 0, R"()")
DIAG_ENTRY(OpenMPLoopForm /* openmp-loop-form */, 17945, /* DiagArray791 */ 2168, 0, R"()")
DIAG_ENTRY(OpenMPMapping /* openmp-mapping */, 17962, /* DiagArray792 */ 2171, 0, R"()")
DIAG_ENTRY(OpenMPTarget /* openmp-target */, 17977, /* DiagArray793 */ 2173, /* DiagSubGroup793 */ 617, R"()")
DIAG_ENTRY(OpenMPTargetException /* openmp-target-exception */, 17991, /* DiagArray794 */ 2178, 0, R"()")
DIAG_ENTRY(OptionIgnored /* option-ignored */, 18015, /* DiagArray795 */ 2181, 0, R"()")
DIAG_ENTRY(OrderedCompareFunctionPointers /* ordered-compare-function-pointers */, 18030, /* DiagArray796 */ 2203, 0, R"()")
DIAG_ENTRY(OutOfLineDeclaration /* out-of-line-declaration */, 18064, /* DiagArray797 */ 2206, 0, R"()")
DIAG_ENTRY(anonymous_196 /* out-of-scope-function */, 18088, /* DiagArray798 */ 2208, 0, R"()")
DIAG_ENTRY(OveralignedType /* over-aligned */, 18110, /* DiagArray799 */ 2210, 0, R"()")
DIAG_ENTRY(anonymous_39 /* overflow */, 18123, 0, 0, R"()")
DIAG_ENTRY(OverflowBehaviorAttributeIgnored /* overflow-behavior-attribute-ignored */, 18132, /* DiagArray801 */ 2212, 0, R"()")
DIAG_ENTRY(OverflowBehaviorConversion /* overflow-behavior-conversion */, 18168, 0, /* DiagSubGroup802 */ 619, R"()")
DIAG_ENTRY(OverlengthStrings /* overlength-strings */, 18197, /* DiagArray803 */ 2216, 0, R"()")
DIAG_ENTRY(OverloadedShiftOpParentheses /* overloaded-shift-op-parentheses */, 18216, /* DiagArray804 */ 2218, 0, R"()")
DIAG_ENTRY(OverloadedVirtual /* overloaded-virtual */, 18248, /* DiagArray805 */ 2220, 0, R"()")
DIAG_ENTRY(anonymous_7 /* override-init */, 18267, 0, /* DiagSubGroup806 */ 621, R"()")
DIAG_ENTRY(anonymous_110 /* override-module */, 18281, /* DiagArray807 */ 2222, 0, R"()")
DIAG_ENTRY(anonymous_95 /* overriding-complex-range */, 18297, /* DiagArray808 */ 2224, 0, R"()")
DIAG_ENTRY(anonymous_94 /* overriding-deployment-version */, 18322, /* DiagArray809 */ 2226, 0, R"()")
DIAG_ENTRY(OverridingMethodMismatch /* overriding-method-mismatch */, 18352, /* DiagArray810 */ 2228, 0, R"()")
DIAG_ENTRY(anonymous_93 /* overriding-option */, 18379, /* DiagArray811 */ 2236, 0, R"()")
DIAG_ENTRY(Packed /* packed */, 18397, /* DiagArray812 */ 2238, /* DiagSubGroup812 */ 623, R"()")
DIAG_ENTRY(PackedNonPod /* packed-non-pod */, 18404, /* DiagArray813 */ 2240, 0, R"()")
DIAG_ENTRY(Padded /* padded */, 18419, /* DiagArray814 */ 2242, /* DiagSubGroup814 */ 625, R"()")
DIAG_ENTRY(PaddedBitField /* padded-bitfield */, 18426, /* DiagArray815 */ 2246, 0, R"()")
DIAG_ENTRY(Parentheses /* parentheses */, 18442, /* DiagArray816 */ 2249, /* DiagSubGroup816 */ 627, R"()")
DIAG_ENTRY(ParenthesesOnEquality /* parentheses-equality */, 18454, /* DiagArray817 */ 2255, 0, R"()")
DIAG_ENTRY(anonymous_9 /* partial-availability */, 18475, 0, /* DiagSubGroup818 */ 636, R"()")
DIAG_ENTRY(BackendOptimizationRemark /* pass */, 18496, /* DiagArray819 */ 2257, 0, R"()")
DIAG_ENTRY(BackendOptimizationRemarkAnalysis /* pass-analysis */, 18501, /* DiagArray820 */ 2259, 0, R"()")
DIAG_ENTRY(BackendOptimizationFailure /* pass-failed */, 18515, /* DiagArray821 */ 2263, 0, R"()")
DIAG_ENTRY(BackendOptimizationRemarkMissed /* pass-missed */, 18527, /* DiagArray822 */ 2265, 0, R"()")
DIAG_ENTRY(anonymous_367 /* pch-date-time */, 18539, /* DiagArray823 */ 2267, 0, R"()")
DIAG_ENTRY(anonymous_364 /* pch-vfs-diff */, 18553, /* DiagArray824 */ 2269, 0, R"()")
DIAG_ENTRY(Pedantic /* pedantic */, 18566, /* DiagArray825 */ 2271, /* DiagSubGroup825 */ 638, R"()")
DIAG_ENTRY(OpenCLCoreFeaturesDiagGroup /* pedantic-core-features */, 18575, /* DiagArray826 */ 2370, 0, R"()")
DIAG_ENTRY(PedanticMacros /* pedantic-macros */, 18598, 0, /* DiagSubGroup827 */ 699, R"()")
DIAG_ENTRY(PerfConstraintImpliesNoexcept /* perf-constraint-implies-noexcept */, 18614, /* DiagArray828 */ 2373, 0, R"()")
DIAG_ENTRY(PessimizingMove /* pessimizing-move */, 18647, /* DiagArray829 */ 2375, 0, R"()")
DIAG_ENTRY(PGOCoverage /* pgo-coverage */, 18664, /* DiagArray830 */ 2378, 0, R"()")
DIAG_ENTRY(PointerArith /* pointer-arith */, 18677, /* DiagArray831 */ 2381, /* DiagSubGroup831 */ 705, R"()")
DIAG_ENTRY(PointerBoolConversion /* pointer-bool-conversion */, 18691, /* DiagArray832 */ 2385, 0, R"()")
DIAG_ENTRY(anonymous_251 /* pointer-compare */, 18715, /* DiagArray833 */ 2388, 0, R"()")
DIAG_ENTRY(anonymous_300 /* pointer-integer-compare */, 18731, /* DiagArray834 */ 2390, 0, R"()")
DIAG_ENTRY(anonymous_312 /* pointer-sign */, 18755, /* DiagArray835 */ 2392, 0, R"()")
DIAG_ENTRY(PointerToEnumCast /* pointer-to-enum-cast */, 18768, /* DiagArray836 */ 2394, /* DiagSubGroup836 */ 707, R"()")
DIAG_ENTRY(PointerToIntCast /* pointer-to-int-cast */, 18789, /* DiagArray837 */ 2396, /* DiagSubGroup837 */ 709, R"()")
DIAG_ENTRY(anonymous_321 /* pointer-type-mismatch */, 18809, /* DiagArray838 */ 2398, 0, R"()")
DIAG_ENTRY(anonymous_92 /* poison-system-directories */, 18831, /* DiagArray839 */ 2400, 0, R"()")
DIAG_ENTRY(ObjCPotentiallyDirectSelector /* potentially-direct-selector */, 18857, /* DiagArray840 */ 2402, 0, R"()")
DIAG_ENTRY(PotentiallyEvaluatedExpression /* potentially-evaluated-expression */, 18885, /* DiagArray841 */ 2404, 0, R"()")
DIAG_ENTRY(PragmaClangAttribute /* pragma-clang-attribute */, 18918, /* DiagArray842 */ 2406, 0, R"()")
DIAG_ENTRY(anonymous_130 /* pragma-once-outside-header */, 18941, /* DiagArray843 */ 2408, 0, R"()")
DIAG_ENTRY(PragmaPack /* pragma-pack */, 18968, /* DiagArray844 */ 2410, /* DiagSubGroup844 */ 712, R"()")
DIAG_ENTRY(PragmaPackSuspiciousInclude /* pragma-pack-suspicious-include */, 18980, /* DiagArray845 */ 2413, 0, R"()")
DIAG_ENTRY(anonymous_131 /* pragma-system-header-outside-header */, 19011, /* DiagArray846 */ 2415, 0, R"()")
DIAG_ENTRY(Pragmas /* pragmas */, 19047, /* DiagArray847 */ 2417, /* DiagSubGroup847 */ 714, R"()")
DIAG_ENTRY(CXXPre14Compat /* pre-c++14-compat */, 19055, /* DiagArray848 */ 2420, 0, R"()")
DIAG_ENTRY(CXXPre14CompatPedantic /* pre-c++14-compat-pedantic */, 19072, 0, /* DiagSubGroup849 */ 719, R"()")
DIAG_ENTRY(CXXPre17Compat /* pre-c++17-compat */, 19098, /* DiagArray850 */ 2432, 0, R"()")
DIAG_ENTRY(CXXPre17CompatPedantic /* pre-c++17-compat-pedantic */, 19115, /* DiagArray851 */ 2450, /* DiagSubGroup851 */ 722, R"()")
DIAG_ENTRY(CXXPre20Compat /* pre-c++20-compat */, 19141, /* DiagArray852 */ 2453, 0, R"()")
DIAG_ENTRY(CXXPre20CompatPedantic /* pre-c++20-compat-pedantic */, 19158, /* DiagArray853 */ 2485, /* DiagSubGroup853 */ 724, R"()")
DIAG_ENTRY(CXXPre23Compat /* pre-c++23-compat */, 19184, /* DiagArray854 */ 2488, 0, R"()")
DIAG_ENTRY(CXXPre23CompatPedantic /* pre-c++23-compat-pedantic */, 19201, 0, /* DiagSubGroup855 */ 726, R"()")
DIAG_ENTRY(CXXPre26Compat /* pre-c++26-compat */, 19227, /* DiagArray856 */ 2504, 0, R"()")
DIAG_ENTRY(CXXPre26CompatPedantic /* pre-c++26-compat-pedantic */, 19244, 0, /* DiagSubGroup857 */ 728, R"()")
DIAG_ENTRY(anonymous_22 /* pre-c++2c-compat */, 19270, 0, /* DiagSubGroup858 */ 730, R"()")
DIAG_ENTRY(anonymous_23 /* pre-c++2c-compat-pedantic */, 19287, 0, /* DiagSubGroup859 */ 732, R"()")
DIAG_ENTRY(CPre11Compat /* pre-c11-compat */, 19313, /* DiagArray860 */ 2515, 0, R"()")
DIAG_ENTRY(CPre11CompatPedantic /* pre-c11-compat-pedantic */, 19328, 0, /* DiagSubGroup861 */ 734, R"()")
DIAG_ENTRY(CPre23Compat /* pre-c23-compat */, 19352, /* DiagArray862 */ 2517, /* DiagSubGroup862 */ 736, R"()")
DIAG_ENTRY(CPre23CompatPedantic /* pre-c23-compat-pedantic */, 19367, 0, /* DiagSubGroup863 */ 738, R"()")
DIAG_ENTRY(anonymous_14 /* pre-c2x-compat */, 19391, 0, /* DiagSubGroup864 */ 740, R"()")
DIAG_ENTRY(anonymous_15 /* pre-c2x-compat-pedantic */, 19406, 0, /* DiagSubGroup865 */ 742, R"()")
DIAG_ENTRY(CPre2yCompat /* pre-c2y-compat */, 19430, /* DiagArray866 */ 2540, 0, R"()")
DIAG_ENTRY(CPre2yCompatPedantic /* pre-c2y-compat-pedantic */, 19445, 0, /* DiagSubGroup867 */ 744, R"()")
DIAG_ENTRY(OpenMPPre51Compat /* pre-openmp-51-compat */, 19469, /* DiagArray868 */ 2552, 0, R"()")
DIAG_ENTRY(anonymous_189 /* predefined-identifier-outside-function */, 19490, /* DiagArray869 */ 2554, 0, R"()")
DIAG_ENTRY(PreferredTypeBitFieldEnumConversion /* preferred-type-bitfield-enum-conversion */, 19529, /* DiagArray870 */ 2556, 0, R"()")
DIAG_ENTRY(PreferredTypeBitFieldWidth /* preferred-type-bitfield-width */, 19569, 0, 0, R"()")
DIAG_ENTRY(PrivateExtern /* private-extern */, 19599, /* DiagArray872 */ 2560, 0, R"()")
DIAG_ENTRY(anonymous_141 /* private-header */, 19614, /* DiagArray873 */ 2562, 0, R"()")
DIAG_ENTRY(PrivateModule /* private-module */, 19629, /* DiagArray874 */ 2564, 0, R"()")
DIAG_ENTRY(ProfileInstrMissing /* profile-instr-missing */, 19644, /* DiagArray875 */ 2569, 0, R"()")
DIAG_ENTRY(ProfileInstrOutOfDate /* profile-instr-out-of-date */, 19666, /* DiagArray876 */ 2571, 0, R"()")
DIAG_ENTRY(ProfileInstrUnprofiled /* profile-instr-unprofiled */, 19692, /* DiagArray877 */ 2573, 0, R"()")
DIAG_ENTRY(PropertyAccessDotSyntax /* property-access-dot-syntax */, 19717, /* DiagArray878 */ 2575, 0, R"()")
DIAG_ENTRY(PropertyAttr /* property-attribute-mismatch */, 19744, /* DiagArray879 */ 2577, 0, R"()")
DIAG_ENTRY(Protocol /* protocol */, 19772, /* DiagArray880 */ 2582, 0, R"()")
DIAG_ENTRY(anonymous_207 /* protocol-property-synthesis-ambiguity */, 19781, /* DiagArray881 */ 2584, 0, R"()")
DIAG_ENTRY(anonymous_114 /* psabi */, 19819, /* DiagArray882 */ 2586, 0, R"()")
DIAG_ENTRY(PtrAuthNullPointers /* ptrauth-null-pointers */, 19825, /* DiagArray883 */ 2588, 0, R"()")
DIAG_ENTRY(anonymous_282 /* qualified-void-return-type */, 19847, /* DiagArray884 */ 2591, 0, R"()")
DIAG_ENTRY(FrameworkHdrQuotedInclude /* quoted-include-in-framework-header */, 19874, /* DiagArray885 */ 2593, 0, R"()")
DIAG_ENTRY(RangeLoopAnalysis /* range-loop-analysis */, 19909, 0, /* DiagSubGroup886 */ 746, R"()")
DIAG_ENTRY(RangeLoopBindReference /* range-loop-bind-reference */, 19929, /* DiagArray887 */ 2595, 0, R"()")
DIAG_ENTRY(RangeLoopConstruct /* range-loop-construct */, 19955, /* DiagArray888 */ 2597, 0, R"()")
DIAG_ENTRY(ReadOnlyPlacementChecks /* read-only-types */, 19976, /* DiagArray889 */ 2600, 0, R"()")
DIAG_ENTRY(anonymous_217 /* readonly-iboutlet-property */, 19992, /* DiagArray890 */ 2602, 0, R"()")
DIAG_ENTRY(ObjCReceiver /* receiver-expr */, 20019, /* DiagArray891 */ 2604, 0, R"()")
DIAG_ENTRY(ForwardClassReceiver /* receiver-forward-class */, 20033, /* DiagArray892 */ 2606, 0, R"()")
DIAG_ENTRY(RedeclaredClassMember /* redeclared-class-member */, 20056, /* DiagArray893 */ 2609, 0, R"()")
DIAG_ENTRY(anonymous_99 /* reduced-bmi-output-overrided */, 20080, /* DiagArray894 */ 2611, 0, R"()")
DIAG_ENTRY(RedundantAttribute /* redundant-attribute */, 20109, /* DiagArray895 */ 2613, 0, R"()")
DIAG_ENTRY(anonymous_220 /* redundant-consteval-if */, 20129, /* DiagArray896 */ 2615, 0, R"()")
DIAG_ENTRY(anonymous_40 /* redundant-decls */, 20152, 0, 0, R"()")
DIAG_ENTRY(RedundantMove /* redundant-move */, 20168, /* DiagArray898 */ 2617, 0, R"()")
DIAG_ENTRY(anonymous_194 /* redundant-parens */, 20183, /* DiagArray899 */ 2619, 0, R"()")
DIAG_ENTRY(anonymous_347 /* reference-tu-local-entity-in-other-tu */, 20200, /* DiagArray900 */ 2621, 0, R"()")
DIAG_ENTRY(Register /* register */, 20238, /* DiagArray901 */ 2623, /* DiagSubGroup901 */ 749, R"()")
DIAG_ENTRY(ReinterpretBaseClass /* reinterpret-base-class */, 20247, /* DiagArray902 */ 2625, 0, R"()")
DIAG_ENTRY(RemarkBackendPlugin /* remark-backend-plugin */, 20270, /* DiagArray903 */ 2627, 0, R"()")
DIAG_ENTRY(Reorder /* reorder */, 20292, 0, /* DiagSubGroup904 */ 751, R"()")
DIAG_ENTRY(ReorderCtor /* reorder-ctor */, 20300, /* DiagArray905 */ 2629, 0, R"()")
DIAG_ENTRY(ReorderInitList /* reorder-init-list */, 20313, /* DiagArray906 */ 2632, 0, R"()")
DIAG_ENTRY(anonymous_257 /* requires-super-attribute */, 20331, /* DiagArray907 */ 2634, 0, R"()")
DIAG_ENTRY(ReservedAttributeIdentifier /* reserved-attribute-identifier */, 20356, /* DiagArray908 */ 2636, 0, R"()")
DIAG_ENTRY(ReservedIdAsMacroAlias /* reserved-id-macro */, 20386, 0, /* DiagSubGroup909 */ 754, R"()")
DIAG_ENTRY(ReservedIdentifier /* reserved-identifier */, 20404, /* DiagArray910 */ 2638, /* DiagSubGroup910 */ 756, R"()")
DIAG_ENTRY(ReservedIdAsMacro /* reserved-macro-identifier */, 20424, /* DiagArray911 */ 2640, 0, R"()")
DIAG_ENTRY(ReservedModuleIdentifier /* reserved-module-identifier */, 20450, /* DiagArray912 */ 2642, 0, R"()")
DIAG_ENTRY(ReservedUserDefinedLiteral /* reserved-user-defined-literal */, 20477, /* DiagArray913 */ 2644, /* DiagSubGroup913 */ 761, R"()")
DIAG_ENTRY(RestrictExpansionMacro /* restrict-expansion */, 20507, /* DiagArray914 */ 2647, 0, R"()")
DIAG_ENTRY(anonymous_274 /* retained-language-linkage */, 20526, /* DiagArray915 */ 2649, 0, R"()")
DIAG_ENTRY(anonymous_30 /* return-local-addr */, 20552, 0, /* DiagSubGroup916 */ 763, R"()")
DIAG_ENTRY(ReturnMismatch /* return-mismatch */, 20570, /* DiagArray917 */ 2651, 0, R"()")
DIAG_ENTRY(ReturnStackAddress /* return-stack-address */, 20586, /* DiagArray918 */ 2655, 0, R"()")
DIAG_ENTRY(ReturnStdMove /* return-std-move */, 20607, 0, 0, R"()")
DIAG_ENTRY(ReturnType /* return-type */, 20623, /* DiagArray920 */ 2660, /* DiagSubGroup920 */ 765, R"()")
DIAG_ENTRY(ReturnTypeCLinkage /* return-type-c-linkage */, 20635, /* DiagArray921 */ 2662, 0, R"()")
DIAG_ENTRY(anonymous_259 /* rewrite-not-bool */, 20657, /* DiagArray922 */ 2665, 0, R"()")
DIAG_ENTRY(RISCVBEExperimental /* riscv-be-experimental */, 20674, /* DiagArray923 */ 2667, 0, R"()")
DIAG_ENTRY(RoundTripCC1Args /* round-trip-cc1-args */, 20696, /* DiagArray924 */ 2669, 0, R"()")
DIAG_ENTRY(RTTI /* rtti */, 20716, /* DiagArray925 */ 2671, 0, R"()")
DIAG_ENTRY(SanitizeAddressRemarks /* sanitize-address */, 20721, /* DiagArray926 */ 2674, 0, R"()")
DIAG_ENTRY(anonymous_105 /* sarif-format-unstable */, 20738, /* DiagArray927 */ 2677, 0, R"()")
DIAG_ENTRY(ScalableStaticAnalysisFramework /* scalable-static-analysis-framework */, 20760, /* DiagArray928 */ 2679, 0, R"()")
DIAG_ENTRY(UsedSearchPath /* search-path-usage */, 20795, /* DiagArray929 */ 2685, 0, R"()")
DIAG_ENTRY(Section /* section */, 20813, /* DiagArray930 */ 2687, 0, R"()")
DIAG_ENTRY(Selector /* selector */, 20821, /* DiagArray931 */ 2691, /* DiagSubGroup931 */ 768, R"()")
DIAG_ENTRY(SelectorTypeMismatch /* selector-type-mismatch */, 20830, /* DiagArray932 */ 2693, 0, R"()")
DIAG_ENTRY(SelfAssignment /* self-assign */, 20853, /* DiagArray933 */ 2695, /* DiagSubGroup933 */ 770, R"()")
DIAG_ENTRY(SelfAssignmentField /* self-assign-field */, 20865, /* DiagArray934 */ 2697, 0, R"()")
DIAG_ENTRY(SelfAssignmentOverloaded /* self-assign-overloaded */, 20883, /* DiagArray935 */ 2699, 0, R"()")
DIAG_ENTRY(SelfMove /* self-move */, 20906, /* DiagArray936 */ 2701, 0, R"()")
DIAG_ENTRY(SemiBeforeMethodBody /* semicolon-before-method-body */, 20916, /* DiagArray937 */ 2703, 0, R"()")
DIAG_ENTRY(Sentinel /* sentinel */, 20945, /* DiagArray938 */ 2705, 0, R"()")
DIAG_ENTRY(anonymous_43 /* sequence-point */, 20954, 0, /* DiagSubGroup939 */ 773, R"()")
DIAG_ENTRY(SerializedDiagnostics /* serialized-diagnostics */, 20969, /* DiagArray940 */ 2708, 0, R"()")
DIAG_ENTRY(Shadow /* shadow */, 20992, /* DiagArray941 */ 2712, /* DiagSubGroup941 */ 775, R"()")
DIAG_ENTRY(ShadowAll /* shadow-all */, 20999, 0, /* DiagSubGroup942 */ 778, R"()")
DIAG_ENTRY(ShadowField /* shadow-field */, 21010, /* DiagArray943 */ 2714, 0, R"()")
DIAG_ENTRY(ShadowFieldInConstructor /* shadow-field-in-constructor */, 21023, /* DiagArray944 */ 2716, /* DiagSubGroup944 */ 783, R"()")
DIAG_ENTRY(ShadowFieldInConstructorModified /* shadow-field-in-constructor-modified */, 21051, /* DiagArray945 */ 2718, 0, R"()")
DIAG_ENTRY(ShadowHeader /* shadow-header */, 21088, /* DiagArray946 */ 2720, 0, R"()")
DIAG_ENTRY(ShadowIvar /* shadow-ivar */, 21102, /* DiagArray947 */ 2722, 0, R"()")
DIAG_ENTRY(ShadowUncapturedLocal /* shadow-uncaptured-local */, 21114, /* DiagArray948 */ 2724, 0, R"()")
DIAG_ENTRY(anonymous_292 /* shift-bool */, 21138, /* DiagArray949 */ 2726, 0, R"()")
DIAG_ENTRY(anonymous_288 /* shift-count-negative */, 21149, /* DiagArray950 */ 2728, 0, R"()")
DIAG_ENTRY(anonymous_289 /* shift-count-overflow */, 21170, /* DiagArray951 */ 2730, 0, R"()")
DIAG_ENTRY(anonymous_287 /* shift-negative-value */, 21191, /* DiagArray952 */ 2732, 0, R"()")
DIAG_ENTRY(ShiftOpParentheses /* shift-op-parentheses */, 21212, /* DiagArray953 */ 2734, 0, R"()")
DIAG_ENTRY(anonymous_290 /* shift-overflow */, 21233, /* DiagArray954 */ 2736, 0, R"()")
DIAG_ENTRY(anonymous_291 /* shift-sign-overflow */, 21248, /* DiagArray955 */ 2738, 0, R"()")
DIAG_ENTRY(Shorten64To32 /* shorten-64-to-32 */, 21268, /* DiagArray956 */ 2740, 0, R"()")
DIAG_ENTRY(SignCompare /* sign-compare */, 21285, /* DiagArray957 */ 2742, 0, R"()")
DIAG_ENTRY(SignConversion /* sign-conversion */, 21298, /* DiagArray958 */ 2744, 0, R"()")
DIAG_ENTRY(anonymous_41 /* sign-promo */, 21314, 0, 0, R"()")
DIAG_ENTRY(SignedEnumBitfield /* signed-enum-bitfield */, 21325, /* DiagArray960 */ 2748, 0, R"()")
DIAG_ENTRY(anonymous_341 /* signed-unsigned-wchar */, 21346, /* DiagArray961 */ 2750, 0, R"()")
DIAG_ENTRY(SIMDLen /* simdlen */, 21368, /* DiagArray962 */ 2752, 0, R"()")
DIAG_ENTRY(SingleBitBitFieldConstantConversion /* single-bit-bitfield-constant-conversion */, 21376, /* DiagArray963 */ 2756, 0, R"()")
DIAG_ENTRY(SizeofArrayArgument /* sizeof-array-argument */, 21416, /* DiagArray964 */ 2758, 0, R"()")
DIAG_ENTRY(SizeofArrayDecay /* sizeof-array-decay */, 21438, /* DiagArray965 */ 2760, 0, R"()")
DIAG_ENTRY(anonymous_253 /* sizeof-array-div */, 21457, /* DiagArray966 */ 2762, 0, R"()")
DIAG_ENTRY(anonymous_252 /* sizeof-pointer-div */, 21474, /* DiagArray967 */ 2764, 0, R"()")
DIAG_ENTRY(SizeofPointerMemaccess /* sizeof-pointer-memaccess */, 21493, /* DiagArray968 */ 2766, 0, R"()")
DIAG_ENTRY(anonymous_101 /* slash-u-filename */, 21518, /* DiagArray969 */ 2769, 0, R"()")
DIAG_ENTRY(anonymous_85 /* slh-asm-goto */, 21535, /* DiagArray970 */ 2771, 0, R"()")
DIAG_ENTRY(anonymous_88 /* sloc-usage */, 21548, /* DiagArray971 */ 2773, 0, R"()")
DIAG_ENTRY(UninitializedSometimes /* sometimes-uninitialized */, 21559, /* DiagArray972 */ 2775, 0, R"()")
DIAG_ENTRY(BackendSourceMgr /* source-mgr */, 21583, /* DiagArray973 */ 2777, 0, R"()")
DIAG_ENTRY(SourceUsesOpenACC /* source-uses-openacc */, 21594, /* DiagArray974 */ 2779, 0, R"()")
DIAG_ENTRY(SourceUsesOpenMP /* source-uses-openmp */, 21614, /* DiagArray975 */ 2783, 0, R"()")
DIAG_ENTRY(SpirCompat /* spir-compat */, 21633, /* DiagArray976 */ 2792, 0, R"()")
DIAG_ENTRY(anonymous_77 /* spirv-compat */, 21645, 0, /* DiagSubGroup977 */ 785, R"()")
DIAG_ENTRY(anonymous_82 /* stack-exhausted */, 21658, /* DiagArray978 */ 2794, 0, R"()")
DIAG_ENTRY(anonymous_84 /* stack-protector */, 21674, /* DiagArray979 */ 2796, 0, R"()")
DIAG_ENTRY(StaticFloatInit /* static-float-init */, 21690, /* DiagArray980 */ 2798, /* DiagSubGroup980 */ 787, R"()")
DIAG_ENTRY(StaticInInline /* static-in-inline */, 21708, /* DiagArray981 */ 2800, 0, R"()")
DIAG_ENTRY(anonymous_161 /* static-inline-explicit-instantiation */, 21725, /* DiagArray982 */ 2803, 0, R"()")
DIAG_ENTRY(StaticLocalInInline /* static-local-in-inline */, 21762, /* DiagArray983 */ 2805, 0, R"()")
DIAG_ENTRY(UninitializedStaticSelfInit /* static-self-init */, 21785, /* DiagArray984 */ 2807, 0, R"()")
DIAG_ENTRY(anonymous_104 /* stdlibcxx-not-found */, 21802, /* DiagArray985 */ 2809, 0, R"()")
DIAG_ENTRY(anonymous_47 /* strict-aliasing */, 21822, 0, 0, R"()")
DIAG_ENTRY(anonymous_44 /* strict-aliasing=0 */, 21838, 0, 0, R"()")
DIAG_ENTRY(anonymous_45 /* strict-aliasing=1 */, 21856, 0, 0, R"()")
DIAG_ENTRY(anonymous_46 /* strict-aliasing=2 */, 21874, 0, 0, R"()")
DIAG_ENTRY(anonymous_54 /* strict-overflow */, 21892, 0, 0, R"()")
DIAG_ENTRY(anonymous_48 /* strict-overflow=0 */, 21908, 0, 0, R"()")
DIAG_ENTRY(anonymous_49 /* strict-overflow=1 */, 21926, 0, 0, R"()")
DIAG_ENTRY(anonymous_50 /* strict-overflow=2 */, 21944, 0, 0, R"()")
DIAG_ENTRY(anonymous_51 /* strict-overflow=3 */, 21962, 0, 0, R"()")
DIAG_ENTRY(anonymous_52 /* strict-overflow=4 */, 21980, 0, 0, R"()")
DIAG_ENTRY(anonymous_53 /* strict-overflow=5 */, 21998, 0, 0, R"()")
DIAG_ENTRY(ObjCStrictPotentiallyDirectSelector /* strict-potentially-direct-selector */, 22016, /* DiagArray997 */ 2811, /* DiagSubGroup997 */ 789, R"()")
DIAG_ENTRY(anonymous_260 /* strict-primary-template-shadow */, 22051, /* DiagArray998 */ 2813, 0, R"()")
DIAG_ENTRY(StrictPrototypes /* strict-prototypes */, 22082, /* DiagArray999 */ 2815, /* DiagSubGroup999 */ 791, R"()")
DIAG_ENTRY(StrictSelector /* strict-selector-match */, 22100, /* DiagArray1000 */ 2817, 0, R"()")
DIAG_ENTRY(StringCompare /* string-compare */, 22122, /* DiagArray1001 */ 2819, 0, R"()")
DIAG_ENTRY(StringConcatation /* string-concatenation */, 22137, /* DiagArray1002 */ 2821, 0, R"()")
DIAG_ENTRY(StringConversion /* string-conversion */, 22158, /* DiagArray1003 */ 2823, 0, R"()")
DIAG_ENTRY(StringPlusChar /* string-plus-char */, 22176, /* DiagArray1004 */ 2825, 0, R"()")
DIAG_ENTRY(StringPlusInt /* string-plus-int */, 22193, /* DiagArray1005 */ 2827, 0, R"()")
DIAG_ENTRY(anonymous_199 /* strlcpy-strlcat-size */, 22209, /* DiagArray1006 */ 2829, 0, R"()")
DIAG_ENTRY(StrncatSize /* strncat-size */, 22230, /* DiagArray1007 */ 2831, 0, R"()")
DIAG_ENTRY(CXX11WarnSuggestOverrideDestructor /* suggest-destructor-override */, 22243, /* DiagArray1008 */ 2835, 0, R"()")
DIAG_ENTRY(CXX11WarnSuggestOverride /* suggest-override */, 22271, /* DiagArray1009 */ 2837, 0, R"()")
DIAG_ENTRY(SuperSubClassMismatch /* super-class-method-mismatch */, 22288, /* DiagArray1010 */ 2839, 0, R"()")
DIAG_ENTRY(SuspiciousBzero /* suspicious-bzero */, 22316, /* DiagArray1011 */ 2841, 0, R"()")
DIAG_ENTRY(SuspiciousMemaccess /* suspicious-memaccess */, 22333, 0, /* DiagSubGroup1012 */ 793, R"()")
DIAG_ENTRY(SwiftNameAttribute /* swift-name-attribute */, 22354, /* DiagArray1013 */ 2843, 0, R"()")
DIAG_ENTRY(Switch /* switch */, 22375, /* DiagArray1014 */ 2857, 0, R"()")
DIAG_ENTRY(SwitchBool /* switch-bool */, 22382, /* DiagArray1015 */ 2861, 0, R"()")
DIAG_ENTRY(SwitchDefault /* switch-default */, 22394, /* DiagArray1016 */ 2863, 0, R"()")
DIAG_ENTRY(SwitchEnum /* switch-enum */, 22409, /* DiagArray1017 */ 2865, 0, R"()")
DIAG_ENTRY(SyncAlignment /* sync-alignment */, 22421, /* DiagArray1018 */ 2867, 0, R"()")
DIAG_ENTRY(anonymous_340 /* sync-fetch-and-nand-semantics-changed */, 22436, /* DiagArray1019 */ 2869, 0, R"()")
DIAG_ENTRY(anonymous_42 /* synth */, 22474, 0, 0, R"()")
DIAG_ENTRY(TargetClonesMixedSpecifiers /* target-clones-mixed-specifiers */, 22480, /* DiagArray1021 */ 2871, 0, R"()")
DIAG_ENTRY(TautologicalBitwiseCompare /* tautological-bitwise-compare */, 22511, /* DiagArray1022 */ 2873, 0, R"()")
DIAG_ENTRY(TautologicalCompare /* tautological-compare */, 22540, /* DiagArray1023 */ 2876, /* DiagSubGroup1023 */ 799, R"()")
DIAG_ENTRY(TautologicalConstantCompare /* tautological-constant-compare */, 22561, /* DiagArray1024 */ 2879, /* DiagSubGroup1024 */ 807, R"()")
DIAG_ENTRY(TautologicalInRangeCompare /* tautological-constant-in-range-compare */, 22591, 0, /* DiagSubGroup1025 */ 809, R"()")
DIAG_ENTRY(TautologicalOutOfRangeCompare /* tautological-constant-out-of-range-compare */, 22630, /* DiagArray1026 */ 2883, 0, R"()")
DIAG_ENTRY(TautologicalNegationCompare /* tautological-negation-compare */, 22673, /* DiagArray1027 */ 2885, 0, R"()")
DIAG_ENTRY(TautologicalObjCBoolCompare /* tautological-objc-bool-compare */, 22703, /* DiagArray1028 */ 2888, 0, R"()")
DIAG_ENTRY(TautologicalOverlapCompare /* tautological-overlap-compare */, 22734, /* DiagArray1029 */ 2890, 0, R"()")
DIAG_ENTRY(TautologicalPointerCompare /* tautological-pointer-compare */, 22763, /* DiagArray1030 */ 2892, 0, R"()")
DIAG_ENTRY(TautologicalTypeLimitCompare /* tautological-type-limit-compare */, 22792, /* DiagArray1031 */ 2895, 0, R"()")
DIAG_ENTRY(TautologicalUndefinedCompare /* tautological-undefined-compare */, 22824, /* DiagArray1032 */ 2897, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedCharZeroCompare /* tautological-unsigned-char-zero-compare */, 22855, /* DiagArray1033 */ 2900, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedEnumZeroCompare /* tautological-unsigned-enum-zero-compare */, 22895, /* DiagArray1034 */ 2902, 0, R"()")
DIAG_ENTRY(TautologicalUnsignedZeroCompare /* tautological-unsigned-zero-compare */, 22935, /* DiagArray1035 */ 2904, 0, R"()")
DIAG_ENTRY(TautologicalValueRangeCompare /* tautological-value-range-compare */, 22970, /* DiagArray1036 */ 2906, 0, R"()")
DIAG_ENTRY(anonymous_353 /* tcb-enforcement */, 23003, /* DiagArray1037 */ 2908, 0, R"()")
DIAG_ENTRY(anonymous_309 /* template-in-declaration-name */, 23019, /* DiagArray1038 */ 2910, 0, R"()")
DIAG_ENTRY(anonymous_296 /* tentative-definition-array */, 23048, /* DiagArray1039 */ 2912, 0, R"()")
DIAG_ENTRY(TentativeDefnCompat /* tentative-definition-compat */, 23075, /* DiagArray1040 */ 2914, 0, R"()")
DIAG_ENTRY(anonymous_295 /* tentative-definition-incomplete-type */, 23103, /* DiagArray1041 */ 2916, 0, R"()")
DIAG_ENTRY(ThreadSafety /* thread-safety */, 23140, 0, /* DiagSubGroup1042 */ 812, R"()")
DIAG_ENTRY(ThreadSafetyAnalysis /* thread-safety-analysis */, 23154, /* DiagArray1043 */ 2918, 0, R"()")
DIAG_ENTRY(ThreadSafetyAttributes /* thread-safety-attributes */, 23177, /* DiagArray1044 */ 2941, 0, R"()")
DIAG_ENTRY(ThreadSafetyBeta /* thread-safety-beta */, 23202, /* DiagArray1045 */ 2950, 0, R"()")
DIAG_ENTRY(ThreadSafetyNegative /* thread-safety-negative */, 23221, /* DiagArray1046 */ 2952, 0, R"()")
DIAG_ENTRY(ThreadSafetyPointer /* thread-safety-pointer */, 23244, /* DiagArray1047 */ 2954, 0, R"()")
DIAG_ENTRY(ThreadSafetyPrecise /* thread-safety-precise */, 23266, /* DiagArray1048 */ 2959, 0, R"()")
DIAG_ENTRY(ThreadSafetyReference /* thread-safety-reference */, 23288, /* DiagArray1049 */ 2963, /* DiagSubGroup1049 */ 817, R"()")
DIAG_ENTRY(ThreadSafetyReferenceReturn /* thread-safety-reference-return */, 23312, /* DiagArray1050 */ 2966, 0, R"()")
DIAG_ENTRY(ThreadSafetyVerbose /* thread-safety-verbose */, 23343, /* DiagArray1051 */ 2969, 0, R"()")
DIAG_ENTRY(Trigraphs /* trigraphs */, 23365, /* DiagArray1052 */ 2971, 0, R"()")
DIAG_ENTRY(TrivialAutoVarInit /* trivial-auto-var-init */, 23375, /* DiagArray1053 */ 2976, 0, R"()")
DIAG_ENTRY(TypeLimits /* type-limits */, 23397, 0, /* DiagSubGroup1054 */ 819, R"()")
DIAG_ENTRY(TypeSafety /* type-safety */, 23409, /* DiagArray1055 */ 2978, 0, R"()")
DIAG_ENTRY(anonymous_273 /* typedef-redefinition */, 23421, /* DiagArray1056 */ 2982, 0, R"()")
DIAG_ENTRY(anonymous_267 /* typename-missing */, 23442, /* DiagArray1057 */ 2984, 0, R"()")
DIAG_ENTRY(anonymous_111 /* unable-to-open-stats-file */, 23459, /* DiagArray1058 */ 2986, 0, R"()")
DIAG_ENTRY(UnalignedAccess /* unaligned-access */, 23485, /* DiagArray1059 */ 2988, 0, R"()")
DIAG_ENTRY(anonymous_343 /* unaligned-qualifier-implicit-cast */, 23502, /* DiagArray1060 */ 2990, 0, R"()")
DIAG_ENTRY(UnavailableDeclarations /* unavailable-declarations */, 23536, /* DiagArray1061 */ 2992, 0, R"()")
DIAG_ENTRY(UndeclaredSelector /* undeclared-selector */, 23561, /* DiagArray1062 */ 2994, 0, R"()")
DIAG_ENTRY(UndefinedIdentifier /* undef */, 23581, /* DiagArray1063 */ 2997, /* DiagSubGroup1063 */ 824, R"()")
DIAG_ENTRY(anonymous_134 /* undef-prefix */, 23587, /* DiagArray1064 */ 2999, 0, R"()")
DIAG_ENTRY(UndefinedTrueIdentifier /* undef-true */, 23600, /* DiagArray1065 */ 3001, 0, R"()")
DIAG_ENTRY(anonymous_230 /* undefined-arm-za */, 23611, /* DiagArray1066 */ 3003, 0, R"()")
DIAG_ENTRY(anonymous_231 /* undefined-arm-zt0 */, 23628, /* DiagArray1067 */ 3005, 0, R"()")
DIAG_ENTRY(UndefinedBoolConversion /* undefined-bool-conversion */, 23646, /* DiagArray1068 */ 3007, 0, R"()")
DIAG_ENTRY(UndefinedFuncTemplate /* undefined-func-template */, 23672, /* DiagArray1069 */ 3010, 0, R"()")
DIAG_ENTRY(anonymous_272 /* undefined-inline */, 23696, /* DiagArray1070 */ 3012, 0, R"()")
DIAG_ENTRY(anonymous_270 /* undefined-internal */, 23713, /* DiagArray1071 */ 3014, 0, R"()")
DIAG_ENTRY(anonymous_271 /* undefined-internal-type */, 23732, /* DiagArray1072 */ 3016, 0, R"()")
DIAG_ENTRY(UndefinedReinterpretCast /* undefined-reinterpret-cast */, 23756, /* DiagArray1073 */ 3018, 0, R"()")
DIAG_ENTRY(UndefinedVarTemplate /* undefined-var-template */, 23783, /* DiagArray1074 */ 3021, 0, R"()")
DIAG_ENTRY(UnderalignedExceptionObject /* underaligned-exception-object */, 23806, /* DiagArray1075 */ 3023, 0, R"()")
DIAG_ENTRY(anonymous_317 /* underlying-atomic-qualifier-ignored */, 23836, /* DiagArray1076 */ 3025, 0, R"()")
DIAG_ENTRY(anonymous_316 /* underlying-cv-qualifier-ignored */, 23872, /* DiagArray1077 */ 3027, 0, R"()")
DIAG_ENTRY(UnevaluatedExpression /* unevaluated-expression */, 23904, /* DiagArray1078 */ 3029, /* DiagSubGroup1078 */ 826, R"()")
DIAG_ENTRY(UnguardedAvailability /* unguarded-availability */, 23927, /* DiagArray1079 */ 3031, /* DiagSubGroup1079 */ 828, R"()")
DIAG_ENTRY(UnguardedAvailabilityNew /* unguarded-availability-new */, 23950, /* DiagArray1080 */ 3034, 0, R"()")
DIAG_ENTRY(Unicode /* unicode */, 23977, /* DiagArray1081 */ 3037, 0, R"()")
DIAG_ENTRY(anonymous_120 /* unicode-homoglyph */, 23985, /* DiagArray1082 */ 3045, 0, R"()")
DIAG_ENTRY(anonymous_119 /* unicode-whitespace */, 24003, /* DiagArray1083 */ 3047, 0, R"()")
DIAG_ENTRY(anonymous_121 /* unicode-zero-width */, 24022, /* DiagArray1084 */ 3049, 0, R"()")
DIAG_ENTRY(Uninitialized /* uninitialized */, 24041, /* DiagArray1085 */ 3051, /* DiagSubGroup1085 */ 830, R"()")
DIAG_ENTRY(UninitializedConstPointer /* uninitialized-const-pointer */, 24055, /* DiagArray1086 */ 3060, 0, R"()")
DIAG_ENTRY(UninitializedConstReference /* uninitialized-const-reference */, 24083, /* DiagArray1087 */ 3062, 0, R"()")
DIAG_ENTRY(UninitializedExplicitInit /* uninitialized-explicit-init */, 24113, /* DiagArray1088 */ 3064, 0, R"()")
DIAG_ENTRY(UniqueObjectDuplication /* unique-object-duplication */, 24141, /* DiagArray1089 */ 3066, 0, R"(Warns when objects which are supposed to be globally unique might get duplicated
when built into a shared library.

This can occur to objects which are hidden from the dynamic linker, due to
having hidden visibility (on posix) or lacking a dllimport/dllexport attribute
(on windows). If such an object is built into a shared library, each instance
of the library will get its own copy. This can cause very subtle bugs if there was
only supposed to be one copy of the object in question: singletons aren't single,
changes to one object won't affect the others, the object's initializer will run
once per copy, etc.

Specifically, this warning fires when it detects an object which:

#. Is defined as ``inline`` in a header file (so it might get compiled into multiple libaries), and
#. Has external linkage (otherwise it's supposed to be duplicated), and
#. Has hidden visibility (posix) or lacks a dllimport/dllexport attribute (windows).

As well as one of the following:

#. The object is mutable, or
#. The object's initializer definitely has side effects.

The warning can be resolved by removing one of the conditions above. In rough
order of preference, this may be done by:

#. Marking the object ``const`` (if possible)
#. Moving the object's definition to a source file
#. Making the object visible using ``__attribute((visibility("default")))``,
   ``__declspec(dllimport)``, or ``__declspec(dllexport)``.

When annotating an object with ``__declspec(dllimport)`` or ``__declspec(dllexport)``,
take care to ensure that the object is only exported from one dll, and is imported
everywhere else.

Note that for (2), all levels of a pointer variable must be constant;
``const int*`` will trigger the warning because the pointer itself is mutable.)")
DIAG_ENTRY(anonymous_162 /* unknown-acc-extension-clause */, 24167, /* DiagArray1090 */ 3069, 0, R"()")
DIAG_ENTRY(UnknownArgument /* unknown-argument */, 24196, /* DiagArray1091 */ 3071, 0, R"()")
DIAG_ENTRY(UnknownAssumption /* unknown-assumption */, 24213, /* DiagArray1092 */ 3075, 0, R"()")
DIAG_ENTRY(UnknownAttributes /* unknown-attributes */, 24232, /* DiagArray1093 */ 3077, 0, R"()")
DIAG_ENTRY(CudaUnknownVersion /* unknown-cuda-version */, 24251, /* DiagArray1094 */ 3080, 0, R"()")
DIAG_ENTRY(anonymous_138 /* unknown-directives */, 24272, /* DiagArray1095 */ 3083, 0, R"()")
DIAG_ENTRY(anonymous_124 /* unknown-escape-sequence */, 24291, /* DiagArray1096 */ 3085, 0, R"()")
DIAG_ENTRY(UnknownPragmas /* unknown-pragmas */, 24315, /* DiagArray1097 */ 3087, 0, R"()")
DIAG_ENTRY(UnknownSanitizers /* unknown-sanitizers */, 24331, /* DiagArray1098 */ 3108, 0, R"()")
DIAG_ENTRY(UnknownWarningOption /* unknown-warning-option */, 24350, /* DiagArray1099 */ 3110, 0, R"()")
DIAG_ENTRY(UnnamedTypeTemplateArgs /* unnamed-type-template-args */, 24373, /* DiagArray1100 */ 3114, /* DiagSubGroup1100 */ 835, R"()")
DIAG_ENTRY(WarnUnnecessaryVirtualSpecifier /* unnecessary-virtual-specifier */, 24400, /* DiagArray1101 */ 3116, 0, R"(Warns when a ``final`` class contains a virtual method (including virtual
destructors) that does not override anything. Since ``final`` classes cannot
be subclassed, their methods cannot be overridden, so there is no point to
introducing new ``virtual`` methods.

The warning also detects virtual methods in classes whose destructor is
``final``, for the same reason.)")
DIAG_ENTRY(UnneededInternalDecl /* unneeded-internal-declaration */, 24430, /* DiagArray1102 */ 3118, 0, R"()")
DIAG_ENTRY(UnneededMemberFunction /* unneeded-member-function */, 24460, /* DiagArray1103 */ 3121, 0, R"()")
DIAG_ENTRY(anonymous_261 /* unqualified-std-cast-call */, 24485, /* DiagArray1104 */ 3123, 0, R"()")
DIAG_ENTRY(UnreachableCode /* unreachable-code */, 24511, /* DiagArray1105 */ 3125, /* DiagSubGroup1105 */ 837, R"()")
DIAG_ENTRY(UnreachableCodeAggressive /* unreachable-code-aggressive */, 24528, 0, /* DiagSubGroup1106 */ 841, R"()")
DIAG_ENTRY(UnreachableCodeBreak /* unreachable-code-break */, 24556, /* DiagArray1107 */ 3127, 0, R"()")
DIAG_ENTRY(UnreachableCodeFallthrough /* unreachable-code-fallthrough */, 24579, /* DiagArray1108 */ 3129, 0, R"()")
DIAG_ENTRY(UnreachableCodeGenericAssoc /* unreachable-code-generic-assoc */, 24608, /* DiagArray1109 */ 3131, 0, R"()")
DIAG_ENTRY(UnreachableCodeLoopIncrement /* unreachable-code-loop-increment */, 24639, /* DiagArray1110 */ 3133, 0, R"()")
DIAG_ENTRY(UnreachableCodeReturn /* unreachable-code-return */, 24671, /* DiagArray1111 */ 3135, 0, R"()")
DIAG_ENTRY(UnsafeBufferUsage /* unsafe-buffer-usage */, 24695, /* DiagArray1112 */ 3137, /* DiagSubGroup1112 */ 845, R"()")
DIAG_ENTRY(UnsafeBufferUsageInContainer /* unsafe-buffer-usage-in-container */, 24715, /* DiagArray1113 */ 3140, 0, R"()")
DIAG_ENTRY(UnsafeBufferUsageInFormatAttrCall /* unsafe-buffer-usage-in-format-attr-call */, 24748, /* DiagArray1114 */ 3142, 0, R"()")
DIAG_ENTRY(UnsafeBufferUsageInLibcCall /* unsafe-buffer-usage-in-libc-call */, 24788, /* DiagArray1115 */ 3144, 0, R"()")
DIAG_ENTRY(UnsafeBufferUsageInStaticSizedArray /* unsafe-buffer-usage-in-static-sized-array */, 24821, /* DiagArray1116 */ 3146, 0, R"()")
DIAG_ENTRY(UnsafeBufferUsageInUniquePtrArrayAccess /* unsafe-buffer-usage-in-unique-ptr-array-access */, 24863, /* DiagArray1117 */ 3148, 0, R"()")
DIAG_ENTRY(Unsequenced /* unsequenced */, 24910, /* DiagArray1118 */ 3150, 0, R"()")
DIAG_ENTRY(UnsupportedABI /* unsupported-abi */, 24922, /* DiagArray1119 */ 3153, 0, R"()")
DIAG_ENTRY(UnsupportedAbs /* unsupported-abs */, 24938, /* DiagArray1120 */ 3156, 0, R"()")
DIAG_ENTRY(anonymous_248 /* unsupported-availability-guard */, 24954, /* DiagArray1121 */ 3159, 0, R"()")
DIAG_ENTRY(UnsupportedCB /* unsupported-cb */, 24985, /* DiagArray1122 */ 3161, 0, R"()")
DIAG_ENTRY(anonymous_244 /* unsupported-dll-base-class-template */, 25000, /* DiagArray1123 */ 3163, 0, R"()")
DIAG_ENTRY(UnsupportedFPOpt /* unsupported-floating-point-opt */, 25036, /* DiagArray1124 */ 3165, 0, R"()")
DIAG_ENTRY(UnsupportedFriend /* unsupported-friend */, 25067, /* DiagArray1125 */ 3168, 0, R"()")
DIAG_ENTRY(UnsupportedGPOpt /* unsupported-gpopt */, 25086, /* DiagArray1126 */ 3171, 0, R"()")
DIAG_ENTRY(UnsupportedNan /* unsupported-nan */, 25104, /* DiagArray1127 */ 3173, 0, R"()")
DIAG_ENTRY(UnsupportedTargetOpt /* unsupported-target-opt */, 25120, /* DiagArray1128 */ 3176, 0, R"()")
DIAG_ENTRY(anonymous_255 /* unsupported-visibility */, 25143, /* DiagArray1129 */ 3179, 0, R"()")
DIAG_ENTRY(InitStringTooLongMissingNonString /* unterminated-string-initialization */, 25166, /* DiagArray1130 */ 3181, 0, R"()")
DIAG_ENTRY(anonymous_265 /* unusable-partial-specialization */, 25201, /* DiagArray1131 */ 3183, 0, R"()")
DIAG_ENTRY(Unused /* unused */, 25233, 0, /* DiagSubGroup1132 */ 851, R"()")
DIAG_ENTRY(UnusedArgument /* unused-argument */, 25240, 0, 0, R"()")
DIAG_ENTRY(UnusedButSetGlobal /* unused-but-set-global */, 25256, /* DiagArray1134 */ 3185, 0, R"()")
DIAG_ENTRY(UnusedButSetParameter /* unused-but-set-parameter */, 25278, /* DiagArray1135 */ 3187, 0, R"()")
DIAG_ENTRY(UnusedButSetVariable /* unused-but-set-variable */, 25303, /* DiagArray1136 */ 3189, /* DiagSubGroup1136 */ 862, R"()")
DIAG_ENTRY(UnusedCommandLineArgument /* unused-command-line-argument */, 25327, /* DiagArray1137 */ 3191, 0, R"()")
DIAG_ENTRY(UnusedComparison /* unused-comparison */, 25356, /* DiagArray1138 */ 3206, 0, R"()")
DIAG_ENTRY(UnusedConstVariable /* unused-const-variable */, 25374, /* DiagArray1139 */ 3208, 0, R"()")
DIAG_ENTRY(UnusedExceptionParameter /* unused-exception-parameter */, 25396, /* DiagArray1140 */ 3210, 0, R"()")
DIAG_ENTRY(UnusedFunction /* unused-function */, 25423, /* DiagArray1141 */ 3212, /* DiagSubGroup1141 */ 864, R"()")
DIAG_ENTRY(UnusedGetterReturnValue /* unused-getter-return-value */, 25439, /* DiagArray1142 */ 3214, 0, R"()")
DIAG_ENTRY(UnusedLabel /* unused-label */, 25466, /* DiagArray1143 */ 3216, 0, R"()")
DIAG_ENTRY(UnusedLambdaCapture /* unused-lambda-capture */, 25479, /* DiagArray1144 */ 3218, 0, R"()")
DIAG_ENTRY(UnusedLocalTypedef /* unused-local-typedef */, 25501, /* DiagArray1145 */ 3220, 0, R"()")
DIAG_ENTRY(anonymous_67 /* unused-local-typedefs */, 25522, 0, /* DiagSubGroup1146 */ 866, R"()")
DIAG_ENTRY(anonymous_133 /* unused-macros */, 25544, /* DiagArray1147 */ 3222, 0, R"()")
DIAG_ENTRY(UnusedMemberFunction /* unused-member-function */, 25558, /* DiagArray1148 */ 3224, /* DiagSubGroup1148 */ 868, R"()")
DIAG_ENTRY(UnusedParameter /* unused-parameter */, 25581, /* DiagArray1149 */ 3226, 0, R"()")
DIAG_ENTRY(UnusedPrivateField /* unused-private-field */, 25598, /* DiagArray1150 */ 3228, 0, R"()")
DIAG_ENTRY(UnusedPropertyIvar /* unused-property-ivar */, 25619, /* DiagArray1151 */ 3230, 0, R"()")
DIAG_ENTRY(UnusedResult /* unused-result */, 25640, /* DiagArray1152 */ 3232, 0, R"()")
DIAG_ENTRY(UnusedTemplate /* unused-template */, 25654, /* DiagArray1153 */ 3234, /* DiagSubGroup1153 */ 870, R"()")
DIAG_ENTRY(UnusedValue /* unused-value */, 25670, /* DiagArray1154 */ 3236, /* DiagSubGroup1154 */ 872, R"()")
DIAG_ENTRY(UnusedVariable /* unused-variable */, 25683, /* DiagArray1155 */ 3244, /* DiagSubGroup1155 */ 876, R"()")
DIAG_ENTRY(anonymous_323 /* unused-volatile-lvalue */, 25699, /* DiagArray1156 */ 3246, 0, R"()")
DIAG_ENTRY(UsedButMarkedUnused /* used-but-marked-unused */, 25722, /* DiagArray1157 */ 3248, 0, R"()")
DIAG_ENTRY(UserDefinedLiterals /* user-defined-literals */, 25745, /* DiagArray1158 */ 3250, 0, R"()")
DIAG_ENTRY(UserDefinedWarnings /* user-defined-warnings */, 25767, /* DiagArray1159 */ 3252, 0, R"()")
DIAG_ENTRY(Varargs /* varargs */, 25789, /* DiagArray1160 */ 3254, 0, R"()")
DIAG_ENTRY(VariadicMacroArgumentsOmitted /* variadic-macro-arguments-omitted */, 25797, /* DiagArray1161 */ 3259, 0, R"()")
DIAG_ENTRY(VariadicMacros /* variadic-macros */, 25830, /* DiagArray1162 */ 3263, 0, R"()")
DIAG_ENTRY(anonymous_233 /* vec-elem-size */, 25846, /* DiagArray1163 */ 3267, 0, R"()")
DIAG_ENTRY(VectorConversion /* vector-conversion */, 25860, /* DiagArray1164 */ 3269, 0, R"()")
DIAG_ENTRY(anonymous_65 /* vector-conversions */, 25878, 0, /* DiagSubGroup1165 */ 878, R"()")
DIAG_ENTRY(VexingParse /* vexing-parse */, 25897, /* DiagArray1166 */ 3272, 0, R"()")
DIAG_ENTRY(Visibility /* visibility */, 25910, /* DiagArray1167 */ 3276, 0, R"()")
DIAG_ENTRY(VLA /* vla */, 25921, /* DiagArray1168 */ 3279, /* DiagSubGroup1168 */ 880, R"()")
DIAG_ENTRY(VLACxxExtension /* vla-cxx-extension */, 25925, /* DiagArray1169 */ 3281, /* DiagSubGroup1169 */ 882, R"()")
DIAG_ENTRY(VLAExtension /* vla-extension */, 25943, /* DiagArray1170 */ 3284, /* DiagSubGroup1170 */ 884, R"()")
DIAG_ENTRY(VLAUseStaticAssert /* vla-extension-static-assert */, 25957, /* DiagArray1171 */ 3286, 0, R"()")
DIAG_ENTRY(VoidPointerToEnumCast /* void-pointer-to-enum-cast */, 25985, /* DiagArray1172 */ 3289, 0, R"()")
DIAG_ENTRY(VoidPointerToIntCast /* void-pointer-to-int-cast */, 26011, /* DiagArray1173 */ 3291, /* DiagSubGroup1173 */ 886, R"()")
DIAG_ENTRY(VoidPointerDeref /* void-ptr-dereference */, 26036, /* DiagArray1174 */ 3293, 0, R"()")
DIAG_ENTRY(VolatileRegisterVar /* volatile-register-var */, 26057, 0, 0, R"()")
DIAG_ENTRY(WebAssemblyExceptionSpec /* wasm-exception-spec */, 26079, /* DiagArray1176 */ 3295, 0, R"()")
DIAG_ENTRY(anonymous_223 /* weak-template-vtables */, 26099, /* DiagArray1177 */ 3297, 0, R"()")
DIAG_ENTRY(anonymous_222 /* weak-vtables */, 26121, /* DiagArray1178 */ 3299, 0, R"()")
DIAG_ENTRY(WritableStrings /* writable-strings */, 26134, /* DiagArray1179 */ 3301, /* DiagSubGroup1179 */ 888, R"()")
DIAG_ENTRY(GCCWriteStrings /* write-strings */, 26151, 0, /* DiagSubGroup1180 */ 890, R"(**Note:** enabling this warning in C will change the semantic behavior of the
program by treating all string literals as having type ``const char *``
instead of ``char *``. This can cause unexpected behaviors with type-sensitive
constructs like ``_Generic``.)")
DIAG_ENTRY(XorUsedAsPow /* xor-used-as-pow */, 26165, /* DiagArray1181 */ 3303, 0, R"()")
DIAG_ENTRY(anonymous_350 /* zero-as-null-pointer-constant */, 26181, /* DiagArray1182 */ 3307, 0, R"()")
DIAG_ENTRY(ZeroLengthArray /* zero-length-array */, 26211, /* DiagArray1183 */ 3309, 0, R"()")
#endif // DIAG_ENTRY


#ifdef GET_CATEGORY_TABLE
CATEGORY("", DiagCat_None)
CATEGORY("Lexical or Preprocessor Issue", DiagCat_Lexical_or_Preprocessor_Issue)
CATEGORY("Parse Issue", DiagCat_Parse_Issue)
CATEGORY("Semantic Issue", DiagCat_Semantic_Issue)
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
CATEGORY("Reflection Diagnostics", DiagCat_Reflection_Diagnostics)
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
CATEGORY("Undefined Behavior Sanitizer", DiagCat_Undefined_Behavior_Sanitizer)
CATEGORY("Deprecations", DiagCat_Deprecations)
CATEGORY("Format String Issue", DiagCat_Format_String_Issue)
CATEGORY("Cocoa API Issue", DiagCat_Cocoa_API_Issue)
CATEGORY("#pragma message Directive", DiagCat__pragma_message_Directive)
CATEGORY("Instrumentation Issue", DiagCat_Instrumentation_Issue)
CATEGORY("Unused Entity Issue", DiagCat_Unused_Entity_Issue)
#endif // GET_CATEGORY_TABLE

