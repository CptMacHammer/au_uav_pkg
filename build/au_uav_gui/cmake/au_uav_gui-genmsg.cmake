# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "au_uav_gui: 1 messages, 1 services")

set(MSG_I_FLAGS "-Iau_uav_gui:/home/viki/catkin_ws/src/au_uav_gui/msg;-Istd_msgs:/opt/ros/hydro/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(au_uav_gui_generate_messages ALL)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(au_uav_gui
  "/home/viki/catkin_ws/src/au_uav_gui/msg/Telemetry.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/hydro/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/au_uav_gui
)

### Generating Services
_generate_srv_cpp(au_uav_gui
  "/home/viki/catkin_ws/src/au_uav_gui/srv/SendFilePath.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/au_uav_gui
)

### Generating Module File
_generate_module_cpp(au_uav_gui
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/au_uav_gui
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(au_uav_gui_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(au_uav_gui_generate_messages au_uav_gui_generate_messages_cpp)

# target for backward compatibility
add_custom_target(au_uav_gui_gencpp)
add_dependencies(au_uav_gui_gencpp au_uav_gui_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS au_uav_gui_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(au_uav_gui
  "/home/viki/catkin_ws/src/au_uav_gui/msg/Telemetry.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/hydro/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/au_uav_gui
)

### Generating Services
_generate_srv_lisp(au_uav_gui
  "/home/viki/catkin_ws/src/au_uav_gui/srv/SendFilePath.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/au_uav_gui
)

### Generating Module File
_generate_module_lisp(au_uav_gui
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/au_uav_gui
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(au_uav_gui_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(au_uav_gui_generate_messages au_uav_gui_generate_messages_lisp)

# target for backward compatibility
add_custom_target(au_uav_gui_genlisp)
add_dependencies(au_uav_gui_genlisp au_uav_gui_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS au_uav_gui_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(au_uav_gui
  "/home/viki/catkin_ws/src/au_uav_gui/msg/Telemetry.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/hydro/share/std_msgs/cmake/../msg/Header.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/au_uav_gui
)

### Generating Services
_generate_srv_py(au_uav_gui
  "/home/viki/catkin_ws/src/au_uav_gui/srv/SendFilePath.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/au_uav_gui
)

### Generating Module File
_generate_module_py(au_uav_gui
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/au_uav_gui
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(au_uav_gui_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(au_uav_gui_generate_messages au_uav_gui_generate_messages_py)

# target for backward compatibility
add_custom_target(au_uav_gui_genpy)
add_dependencies(au_uav_gui_genpy au_uav_gui_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS au_uav_gui_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/au_uav_gui)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/au_uav_gui
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(au_uav_gui_generate_messages_cpp std_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/au_uav_gui)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/au_uav_gui
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(au_uav_gui_generate_messages_lisp std_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/au_uav_gui)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/au_uav_gui\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/au_uav_gui
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(au_uav_gui_generate_messages_py std_msgs_generate_messages_py)
