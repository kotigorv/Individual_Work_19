# CMakeList.txt : CMake project for Individual_Work_19, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Individual_Work_19 "Individual_Work_19.cpp" "Individual_Work_19.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Individual_Work_19 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
