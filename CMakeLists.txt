cmake_minimum_required(VERSION 3.18 FATAL_ERROR)
project(testing-torch)

set(CMAKE_PREFIX_PATH "/home/tadgh/libtorch/share/cmake/Torch")
find_package(Torch REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${TORCH_CXX_FLAGS}")

add_executable(testing-torch main.cpp)
target_link_libraries(testing-torch "${TORCH_LIBRARIES}")
set_property(TARGET testing-torch PROPERTY CXX_STANDARD 17)

# The following code block is suggested to be used on Windows.
# According to https://github.com/pytorch/pytorch/issues/25457,
# the DLLs need to be copied to avoid memory errors.
if (MSVC)
  file(GLOB TORCH_DLLS "$/home/tadgh/testingtorch/libtorch/lib/*.dll")
  add_custom_command(TARGET testing-torch
                     POST_BUILD
                     COMMAND ${CMAKE_COMMAND} -E copy_if_different
                     ${TORCH_DLLS}
                     $<TARGET_FILE_DIR:testing-torch>)
endif (MSVC)