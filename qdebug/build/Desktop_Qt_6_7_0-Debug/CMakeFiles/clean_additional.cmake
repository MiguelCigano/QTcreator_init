# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/qdebug_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/qdebug_autogen.dir/ParseCache.txt"
  "qdebug_autogen"
  )
endif()
