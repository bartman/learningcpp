find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(test_utils test_utils.cpp ${SRC_DIR}/utils.cpp)

target_link_libraries(test_utils GTest::gtest_main)
target_include_directories(test_utils PRIVATE ${SRC_DIR})

gtest_discover_tests(test_utils)

