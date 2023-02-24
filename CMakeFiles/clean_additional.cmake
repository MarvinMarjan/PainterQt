# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\Painter_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Painter_autogen.dir\\ParseCache.txt"
  "Painter_autogen"
  )
endif()
