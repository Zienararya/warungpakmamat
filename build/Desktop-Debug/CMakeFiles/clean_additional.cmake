# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/program_kasir_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/program_kasir_autogen.dir/ParseCache.txt"
  "program_kasir_autogen"
  )
endif()
