# Install script for directory: C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/external/zephyr/drivers

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/Zephyr-Kernel")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/Users/joshe/.zephyr_ide/toolchains/zephyr-sdk-0.16.6/arm-zephyr-eabi/bin/arm-zephyr-eabi-objdump.exe")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/disk/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/interrupt_controller/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/misc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/pcie/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/usb/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/usb_c/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/adc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/can/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/clock_control/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/console/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/gpio/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/i2c/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/led_strip/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/pinctrl/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/reset/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/sensor/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/serial/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/spi/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/timer/cmake_install.cmake")
endif()

