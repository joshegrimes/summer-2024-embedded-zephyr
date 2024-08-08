# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

set(BOARD stm32f4_disco)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(accel C CXX)

target_sources(app PRIVATE src/main.c)
