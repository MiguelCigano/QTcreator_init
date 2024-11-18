# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ledControlTest_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ledControlTest_autogen.dir/ParseCache.txt"
  "ledControlTest_autogen"
  )
endif()
