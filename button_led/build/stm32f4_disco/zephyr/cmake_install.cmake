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
  set(CMAKE_OBJDUMP "C:/Users/joshe/.zephyr_ide/toolchains/zephyr-sdk-0.16.5-1/arm-zephyr-eabi/bin/arm-zephyr-eabi-objdump.exe")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/zephyr/arch/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/zephyr/lib/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/zephyr/soc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/zephyr/boards/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/zephyr/subsys/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/zephyr/drivers/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/acpica/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/cmsis/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/cmsis-dsp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/cmsis-nn/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/fatfs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/altera/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/hal_ambiq/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/atmel/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/hal_espressif/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/hal_ethos_u/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/hal_gigadevice/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/hal_infineon/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/hal_intel/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/microchip/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/hal_nordic/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/nuvoton/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/hal_nxp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/openisa/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/quicklogic/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/hal_renesas/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/hal_rpi_pico/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/silabs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/hal_st/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/stm32/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/hal_telink/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/ti/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/hal_wurthelektronik/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/xtensa/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/hostap/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/libmetal/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/liblc3/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/littlefs/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/loramac-node/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/lvgl/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/mbedtls/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/mcuboot/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/mipi-sys-t/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/nrf_hw_models/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/open-amp/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/openthread/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/percepio/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/picolibc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/segger/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/tinycrypt/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/trusted-firmware-m/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/trusted-firmware-a/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/uoscore-uedhoc/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/modules/zcbor/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/zephyr/kernel/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/zephyr/cmake/flash/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/zephyr/cmake/usage/cmake_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for the subdirectory.
  include("C:/Users/joshe/Documents/Summer2024EmbeddedWork/STM32F4DISCO/button_led/build/stm32f4_disco/zephyr/cmake/reports/cmake_install.cmake")
endif()

