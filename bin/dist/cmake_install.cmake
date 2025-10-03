# Install script for directory: /media/manolo/G/github/ClementineDSDCursor/ClementineDSD/dist

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/apps" TYPE FILE RENAME "org.clementine_player.Clementine.png" FILES "/media/manolo/G/github/ClementineDSDCursor/ClementineDSD/dist/clementine_64.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/apps" TYPE FILE RENAME "org.clementine_player.Clementine.png" FILES "/media/manolo/G/github/ClementineDSDCursor/ClementineDSD/dist/clementine_128.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/scalable/apps" TYPE FILE RENAME "org.clementine_player.Clementine.svg" FILES "/media/manolo/G/github/ClementineDSDCursor/ClementineDSD/dist/../data/icon.svg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/applications" TYPE FILE FILES "/media/manolo/G/github/ClementineDSDCursor/ClementineDSD/dist/org.clementine_player.Clementine.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5" TYPE FILE FILES
    "/media/manolo/G/github/ClementineDSDCursor/ClementineDSD/dist/clementine-itms.protocol"
    "/media/manolo/G/github/ClementineDSDCursor/ClementineDSD/dist/clementine-itpc.protocol"
    "/media/manolo/G/github/ClementineDSDCursor/ClementineDSD/dist/clementine-feed.protocol"
    "/media/manolo/G/github/ClementineDSDCursor/ClementineDSD/dist/clementine-zune.protocol"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/metainfo" TYPE FILE FILES "/media/manolo/G/github/ClementineDSDCursor/ClementineDSD/dist/org.clementine_player.Clementine.appdata.xml")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/ubuntu-mono-dark/apps/24" TYPE FILE FILES "/media/manolo/G/github/ClementineDSDCursor/ClementineDSD/dist/icons/ubuntu-mono-dark/clementine-panel.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/ubuntu-mono-light/apps/24" TYPE FILE FILES "/media/manolo/G/github/ClementineDSDCursor/ClementineDSD/dist/icons/ubuntu-mono-light/clementine-panel.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/ubuntu-mono-dark/apps/24" TYPE FILE FILES "/media/manolo/G/github/ClementineDSDCursor/ClementineDSD/dist/icons/ubuntu-mono-dark/clementine-panel-grey.png")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/ubuntu-mono-light/apps/24" TYPE FILE FILES "/media/manolo/G/github/ClementineDSDCursor/ClementineDSD/dist/icons/ubuntu-mono-light/clementine-panel-grey.png")
endif()

