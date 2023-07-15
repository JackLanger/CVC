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
add_executable(cvc_test test/testEntrypoint.cpp test/cvcTests.cpp src/commitParser.cpp src/h/CommitParser.h src/conventionalStrategy.cpp src/h/ConventionalStrategy.h src/h/Strategy.h src/h/VersionProcessor.h src/versionProcessor.cpp test/versionProcessorTest.cpp)
target_link_libraries(cvc_test PRIVATE gtest_main)

add_test(NAME cvc_test COMMAND test/cvcTests.cpp)

enable_testing() #to  discover tests in test explorer

include(GoogleTest)
add_executable(cvc src/commitParser.cpp src/h/CommitParser.h src/commitParser.cpp src/h/CommitParser.h src/h/VersionProcessor.h src/versionProcessor.cpp)
gtest_discover_tests(cvc_test) # discovers tests by asking the compiled test executable to enumerate its tests