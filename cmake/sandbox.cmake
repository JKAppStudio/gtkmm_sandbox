# Gtkmm Sandbox targets

set(SBX_DIR ${PROJECT_SOURCE_DIR}/source)
set(
    SBX_INCLUDE_DIRS 
    ${SBX_DIR}/include
    ${GTKMM_INCLUDE_DIRS}
)
set(SBX_SRC_DIR ${SBX_DIR}/src)

set(
    SBX_SRCS 
    ${SBX_SRC_DIR}/window_main.cpp
    ${SBX_SRC_DIR}/gtkmm_sandbox.cpp
)

add_executable(gtkmm_sandbox ${SBX_SRCS})
target_include_directories(gtkmm_sandbox PRIVATE ${SBX_INCLUDE_DIRS})
target_link_libraries(gtkmm_sandbox PRIVATE ${GTKMM_LIBRARIES})