add_test([=[compare_invalid_commit.no_string]=]  D:/_Projects/_EXE/CVC/cmake-build-debug/cvc_test.exe [==[--gtest_filter=compare_invalid_commit.no_string]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[compare_invalid_commit.no_string]=]  PROPERTIES WORKING_DIRECTORY D:/_Projects/_EXE/CVC/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[compare_invalid_commit.string_of_x]=]  D:/_Projects/_EXE/CVC/cmake-build-debug/cvc_test.exe [==[--gtest_filter=compare_invalid_commit.string_of_x]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[compare_invalid_commit.string_of_x]=]  PROPERTIES WORKING_DIRECTORY D:/_Projects/_EXE/CVC/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[compare_invalid_commit.string_with_keyword]=]  D:/_Projects/_EXE/CVC/cmake-build-debug/cvc_test.exe [==[--gtest_filter=compare_invalid_commit.string_with_keyword]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[compare_invalid_commit.string_with_keyword]=]  PROPERTIES WORKING_DIRECTORY D:/_Projects/_EXE/CVC/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[compare_invalid_commit.string_of_exclamation_mark]=]  D:/_Projects/_EXE/CVC/cmake-build-debug/cvc_test.exe [==[--gtest_filter=compare_invalid_commit.string_of_exclamation_mark]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[compare_invalid_commit.string_of_exclamation_mark]=]  PROPERTIES WORKING_DIRECTORY D:/_Projects/_EXE/CVC/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[string_with_keyword.fix]=]  D:/_Projects/_EXE/CVC/cmake-build-debug/cvc_test.exe [==[--gtest_filter=string_with_keyword.fix]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[string_with_keyword.fix]=]  PROPERTIES WORKING_DIRECTORY D:/_Projects/_EXE/CVC/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[string_with_keyword.feat]=]  D:/_Projects/_EXE/CVC/cmake-build-debug/cvc_test.exe [==[--gtest_filter=string_with_keyword.feat]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[string_with_keyword.feat]=]  PROPERTIES WORKING_DIRECTORY D:/_Projects/_EXE/CVC/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[string_with_keyword.breaking_change_colon]=]  D:/_Projects/_EXE/CVC/cmake-build-debug/cvc_test.exe [==[--gtest_filter=string_with_keyword.breaking_change_colon]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[string_with_keyword.breaking_change_colon]=]  PROPERTIES WORKING_DIRECTORY D:/_Projects/_EXE/CVC/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[string_with_keyword.scoped_breaking_change_colon]=]  D:/_Projects/_EXE/CVC/cmake-build-debug/cvc_test.exe [==[--gtest_filter=string_with_keyword.scoped_breaking_change_colon]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[string_with_keyword.scoped_breaking_change_colon]=]  PROPERTIES WORKING_DIRECTORY D:/_Projects/_EXE/CVC/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[string_with_keyword.breaking_change_refactor]=]  D:/_Projects/_EXE/CVC/cmake-build-debug/cvc_test.exe [==[--gtest_filter=string_with_keyword.breaking_change_refactor]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[string_with_keyword.breaking_change_refactor]=]  PROPERTIES WORKING_DIRECTORY D:/_Projects/_EXE/CVC/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[string_with_keyword.fix_exclamation_breaking_change]=]  D:/_Projects/_EXE/CVC/cmake-build-debug/cvc_test.exe [==[--gtest_filter=string_with_keyword.fix_exclamation_breaking_change]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[string_with_keyword.fix_exclamation_breaking_change]=]  PROPERTIES WORKING_DIRECTORY D:/_Projects/_EXE/CVC/cmake-build-debug SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  cvc_test_TESTS compare_invalid_commit.no_string compare_invalid_commit.string_of_x compare_invalid_commit.string_with_keyword compare_invalid_commit.string_of_exclamation_mark string_with_keyword.fix string_with_keyword.feat string_with_keyword.breaking_change_colon string_with_keyword.scoped_breaking_change_colon string_with_keyword.breaking_change_refactor string_with_keyword.fix_exclamation_breaking_change)
