#ifdef CROSSTUSTART
__CROSSTUSTART = DIAG_START_CROSSTU,
#undef CROSSTUSTART
#endif

DIAG(err_ctu_error_opening, CLASS_ERROR, (unsigned)diag::Severity::Error, "error opening '%0': required by the CrossTU functionality", 0, SFINAE_SubstitutionFailure, false, true, true, false, 0, 29583, 0)
DIAG(err_ctu_import_failure, CLASS_ERROR, (unsigned)diag::Severity::Error, "import of an external symbol for CTU failed: %0", 0, SFINAE_SubstitutionFailure, false, true, true, false, 0, 29605, 0)
DIAG(err_extdefmap_parsing, CLASS_ERROR, (unsigned)diag::Severity::Error, "error parsing index file: '%0' line: %1 '<USR-Length>:<USR> <File-Path>' format expected", 0, SFINAE_SubstitutionFailure, false, true, true, false, 0, 48313, 0)
DIAG(err_invlist_parsing, CLASS_ERROR, (unsigned)diag::Severity::Error, "error parsing invocation list file: '%0' line: %1 '<source-file>: [<compiler>, <arg1>, ...]' YAML mapping format expected", 0, SFINAE_SubstitutionFailure, false, true, true, false, 0, 62731, 0)
DIAG(err_multiple_def_index, CLASS_ERROR, (unsigned)diag::Severity::Error, "multiple definitions are found for the same key in index", 0, SFINAE_SubstitutionFailure, false, true, true, false, 0, 71929, 0)
DIAG(remark_ctu_import_threshold_reached, CLASS_REMARK, (unsigned)diag::Severity::Ignored, "reached a the CTU-import threshold before trying to import definition", 219, SFINAE_Suppress, false, false, true, false, 0, 179108, 0)
DIAG(warn_ctu_import_failure, CLASS_WARNING, (unsigned)diag::Severity::Warning, "import of an external symbol for CTU failed: %0", 218, SFINAE_Suppress, false, false, true, false, 0, 190791, 0)
DIAG(warn_ctu_incompat_lang, CLASS_WARNING, (unsigned)diag::Severity::Warning, "imported AST from '%0' had been generated for a different language, current: %1, imported: %2", 218, SFINAE_Suppress, false, false, true, false, 0, 190815, 0)
DIAG(warn_ctu_incompat_triple, CLASS_WARNING, (unsigned)diag::Severity::Warning, "imported AST from '%0' had been generated for a different target, current: %1, imported: %2", 218, SFINAE_Suppress, false, false, true, false, 0, 190838, 0)
DIAG(warn_invlist_missing_file, CLASS_WARNING, (unsigned)diag::Severity::Warning, "invocation for '%0' is missing in the invocation list", 218, SFINAE_Suppress, false, false, true, false, 0, 212729, 0)
DIAG(warn_multiple_entries_invlist, CLASS_WARNING, (unsigned)diag::Severity::Warning, "multiple invocations for '%0' are found in the invocation list", 218, SFINAE_Suppress, false, false, true, false, 0, 215943, 0)
