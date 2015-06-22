
option(BUILD_PENALTYMETHOD_PLUGIN "Building PenaltyMethodPlugin" OFF)

if(NOT BUILD_PENALTYMETHOD_PLUGIN)
  return()
endif()

set(target CnoidPenaltyMethodPlugin)

set(sources
  PenaltyMethodPlugin.cpp
  PMSimulatorItem.cpp
  PMConstraintForceSolver.cpp
  )

set(headers
  )

#include_directories(
#)

link_directories(/usr/local/lib/x86_64-linux-gnu)

 
make_gettext_mofiles(${target} mofiles)
add_cnoid_plugin(${target} SHARED ${sources} ${headers} ${mofiles})
target_link_libraries(${target} CnoidBodyPlugin)
apply_common_setting_for_plugin(${target} "${headers}")



if(ENABLE_PYTHON)
#  add_subdirectory(python)
endif()
