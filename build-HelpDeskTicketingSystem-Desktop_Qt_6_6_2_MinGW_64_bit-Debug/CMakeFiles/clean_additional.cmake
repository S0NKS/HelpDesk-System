# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\HelpDeskTicketingSystem_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\HelpDeskTicketingSystem_autogen.dir\\ParseCache.txt"
  "HelpDeskTicketingSystem_autogen"
  )
endif()
