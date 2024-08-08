# Install script for directory: C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/external/zephyr

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
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/arch/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/lib/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/soc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/boards/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/subsys/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/drivers/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/acpica/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/cmsis/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/cmsis-dsp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/cmsis-nn/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/fatfs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/altera/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/hal_ambiq/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/atmel/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/hal_espressif/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/hal_ethos_u/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/hal_gigadevice/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/hal_infineon/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/hal_intel/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/microchip/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/hal_nordic/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/nuvoton/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/hal_nxp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/openisa/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/quicklogic/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/hal_renesas/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/hal_rpi_pico/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/silabs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/hal_st/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/stm32/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/hal_telink/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/ti/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/hal_wurthelektronik/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/xtensa/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/hostap/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/libmetal/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/liblc3/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/littlefs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/loramac-node/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/lvgl/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/mbedtls/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/mcuboot/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/mipi-sys-t/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/nrf_hw_models/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/open-amp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/openthread/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/percepio/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/picolibc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/segger/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/tinycrypt/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/trusted-firmware-m/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/trusted-firmware-a/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/uoscore-uedhoc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/modules/zcbor/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/kernel/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/cmake/flash/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/cmake/usage/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/rospi_env_test/build/rospi_env/zephyr/cmake/reports/cmake_install.cmake")
endif()

