# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QueuesWidget_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QueuesWidget_autogen.dir/ParseCache.txt"
  "QueuesWidget_autogen"
  )
endif()
