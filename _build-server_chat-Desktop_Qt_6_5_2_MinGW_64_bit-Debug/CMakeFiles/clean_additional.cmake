# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\server_chat_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\server_chat_autogen.dir\\ParseCache.txt"
  "server_chat_autogen"
  )
endif()
