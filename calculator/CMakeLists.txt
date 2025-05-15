add_library(calculator STATIC calculator.cpp)

target_include_directories(calculator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
