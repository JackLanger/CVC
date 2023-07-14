# CMake generated Testfile for 
# Source directory: D:/_Projects/_EXE/CVC
# Build directory: D:/_Projects/_EXE/CVC/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("D:/_Projects/_EXE/CVC/cmake-build-debug/cvc_test[1]_include.cmake")
add_test([=[cvc_test]=] "cvc_tests.cpp")
set_tests_properties([=[cvc_test]=] PROPERTIES  _BACKTRACE_TRIPLES "D:/_Projects/_EXE/CVC/CMakeLists.txt;19;add_test;D:/_Projects/_EXE/CVC/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
