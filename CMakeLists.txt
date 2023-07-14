cmake_minimum_required(VERSION 3.25)
project(CVC)
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/5376968f6948923e2411081fd9372e71a59d8e77.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(cvc_test test/cvc_tests.cpp src/cvc.cpp src/h/CVC.h src/conventionalStrategy.cpp src/h/ConventionalStrategy.h src/h/Strategy.h)
target_link_libraries(cvc_test PRIVATE gtest_main)

add_test(NAME cvc_test COMMAND test/cvc_tests.cpp)

enable_testing() #to  discover tests in test explorer

include(GoogleTest)
add_executable(cvc src/cvc.cpp src/h/CVC.h src/cvc.cpp src/h/CVC.h)
gtest_discover_tests(cvc_test) # discovers tests by asking the compiled test executable to enumerate its tests