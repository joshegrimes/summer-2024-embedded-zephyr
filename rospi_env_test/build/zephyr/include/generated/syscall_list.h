/* auto-generated by gen_syscalls.py, don't edit */

#ifndef ZEPHYR_SYSCALL_LIST_H
#define ZEPHYR_SYSCALL_LIST_H

#define K_SYSCALL_ADC_CHANNEL_SETUP 0
#define K_SYSCALL_ADC_READ 1
#define K_SYSCALL_ADC_READ_ASYNC 2
#define K_SYSCALL_CAN_ADD_RX_FILTER_MSGQ 3
#define K_SYSCALL_CAN_CALC_TIMING 4
#define K_SYSCALL_CAN_CALC_TIMING_DATA 5
#define K_SYSCALL_CAN_GET_CAPABILITIES 6
#define K_SYSCALL_CAN_GET_CORE_CLOCK 7
#define K_SYSCALL_CAN_GET_MAX_BITRATE 8
#define K_SYSCALL_CAN_GET_MAX_FILTERS 9
#define K_SYSCALL_CAN_GET_MODE 10
#define K_SYSCALL_CAN_GET_STATE 11
#define K_SYSCALL_CAN_GET_TIMING_DATA_MAX 12
#define K_SYSCALL_CAN_GET_TIMING_DATA_MIN 13
#define K_SYSCALL_CAN_GET_TIMING_MAX 14
#define K_SYSCALL_CAN_GET_TIMING_MIN 15
#define K_SYSCALL_CAN_GET_TRANSCEIVER 16
#define K_SYSCALL_CAN_RECOVER 17
#define K_SYSCALL_CAN_REMOVE_RX_FILTER 18
#define K_SYSCALL_CAN_SEND 19
#define K_SYSCALL_CAN_SET_BITRATE 20
#define K_SYSCALL_CAN_SET_BITRATE_DATA 21
#define K_SYSCALL_CAN_SET_MODE 22
#define K_SYSCALL_CAN_SET_TIMING 23
#define K_SYSCALL_CAN_SET_TIMING_DATA 24
#define K_SYSCALL_CAN_START 25
#define K_SYSCALL_CAN_STATS_GET_ACK_ERRORS 26
#define K_SYSCALL_CAN_STATS_GET_BIT0_ERRORS 27
#define K_SYSCALL_CAN_STATS_GET_BIT1_ERRORS 28
#define K_SYSCALL_CAN_STATS_GET_BIT_ERRORS 29
#define K_SYSCALL_CAN_STATS_GET_CRC_ERRORS 30
#define K_SYSCALL_CAN_STATS_GET_FORM_ERRORS 31
#define K_SYSCALL_CAN_STATS_GET_RX_OVERRUNS 32
#define K_SYSCALL_CAN_STATS_GET_STUFF_ERRORS 33
#define K_SYSCALL_CAN_STOP 34
#define K_SYSCALL_DEVICE_GET_BINDING 35
#define K_SYSCALL_DEVICE_IS_READY 36
#define K_SYSCALL_GPIO_GET_PENDING_INT 37
#define K_SYSCALL_GPIO_PIN_CONFIGURE 38
#define K_SYSCALL_GPIO_PIN_GET_CONFIG 39
#define K_SYSCALL_GPIO_PIN_INTERRUPT_CONFIGURE 40
#define K_SYSCALL_GPIO_PORT_CLEAR_BITS_RAW 41
#define K_SYSCALL_GPIO_PORT_GET_DIRECTION 42
#define K_SYSCALL_GPIO_PORT_GET_RAW 43
#define K_SYSCALL_GPIO_PORT_SET_BITS_RAW 44
#define K_SYSCALL_GPIO_PORT_SET_MASKED_RAW 45
#define K_SYSCALL_GPIO_PORT_TOGGLE_BITS 46
#define K_SYSCALL_K_BUSY_WAIT 47
#define K_SYSCALL_K_CONDVAR_BROADCAST 48
#define K_SYSCALL_K_CONDVAR_INIT 49
#define K_SYSCALL_K_CONDVAR_SIGNAL 50
#define K_SYSCALL_K_CONDVAR_WAIT 51
#define K_SYSCALL_K_EVENT_CLEAR 52
#define K_SYSCALL_K_EVENT_INIT 53
#define K_SYSCALL_K_EVENT_POST 54
#define K_SYSCALL_K_EVENT_SET 55
#define K_SYSCALL_K_EVENT_SET_MASKED 56
#define K_SYSCALL_K_EVENT_WAIT 57
#define K_SYSCALL_K_EVENT_WAIT_ALL 58
#define K_SYSCALL_K_FLOAT_DISABLE 59
#define K_SYSCALL_K_FLOAT_ENABLE 60
#define K_SYSCALL_K_FUTEX_WAIT 61
#define K_SYSCALL_K_FUTEX_WAKE 62
#define K_SYSCALL_K_IS_PREEMPT_THREAD 63
#define K_SYSCALL_K_MSGQ_ALLOC_INIT 64
#define K_SYSCALL_K_MSGQ_GET 65
#define K_SYSCALL_K_MSGQ_GET_ATTRS 66
#define K_SYSCALL_K_MSGQ_NUM_FREE_GET 67
#define K_SYSCALL_K_MSGQ_NUM_USED_GET 68
#define K_SYSCALL_K_MSGQ_PEEK 69
#define K_SYSCALL_K_MSGQ_PEEK_AT 70
#define K_SYSCALL_K_MSGQ_PURGE 71
#define K_SYSCALL_K_MSGQ_PUT 72
#define K_SYSCALL_K_MUTEX_INIT 73
#define K_SYSCALL_K_MUTEX_LOCK 74
#define K_SYSCALL_K_MUTEX_UNLOCK 75
#define K_SYSCALL_K_OBJECT_ACCESS_GRANT 76
#define K_SYSCALL_K_OBJECT_ALLOC 77
#define K_SYSCALL_K_OBJECT_ALLOC_SIZE 78
#define K_SYSCALL_K_OBJECT_RELEASE 79
#define K_SYSCALL_K_PIPE_ALLOC_INIT 80
#define K_SYSCALL_K_PIPE_BUFFER_FLUSH 81
#define K_SYSCALL_K_PIPE_FLUSH 82
#define K_SYSCALL_K_PIPE_GET 83
#define K_SYSCALL_K_PIPE_PUT 84
#define K_SYSCALL_K_PIPE_READ_AVAIL 85
#define K_SYSCALL_K_PIPE_WRITE_AVAIL 86
#define K_SYSCALL_K_POLL 87
#define K_SYSCALL_K_POLL_SIGNAL_CHECK 88
#define K_SYSCALL_K_POLL_SIGNAL_INIT 89
#define K_SYSCALL_K_POLL_SIGNAL_RAISE 90
#define K_SYSCALL_K_POLL_SIGNAL_RESET 91
#define K_SYSCALL_K_QUEUE_ALLOC_APPEND 92
#define K_SYSCALL_K_QUEUE_ALLOC_PREPEND 93
#define K_SYSCALL_K_QUEUE_CANCEL_WAIT 94
#define K_SYSCALL_K_QUEUE_GET 95
#define K_SYSCALL_K_QUEUE_INIT 96
#define K_SYSCALL_K_QUEUE_IS_EMPTY 97
#define K_SYSCALL_K_QUEUE_PEEK_HEAD 98
#define K_SYSCALL_K_QUEUE_PEEK_TAIL 99
#define K_SYSCALL_K_SCHED_CURRENT_THREAD_QUERY 100
#define K_SYSCALL_K_SEM_COUNT_GET 101
#define K_SYSCALL_K_SEM_GIVE 102
#define K_SYSCALL_K_SEM_INIT 103
#define K_SYSCALL_K_SEM_RESET 104
#define K_SYSCALL_K_SEM_TAKE 105
#define K_SYSCALL_K_SLEEP 106
#define K_SYSCALL_K_STACK_ALLOC_INIT 107
#define K_SYSCALL_K_STACK_POP 108
#define K_SYSCALL_K_STACK_PUSH 109
#define K_SYSCALL_K_STR_OUT 110
#define K_SYSCALL_K_THREAD_ABORT 111
#define K_SYSCALL_K_THREAD_CREATE 112
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_GET 113
#define K_SYSCALL_K_THREAD_CUSTOM_DATA_SET 114
#define K_SYSCALL_K_THREAD_DEADLINE_SET 115
#define K_SYSCALL_K_THREAD_JOIN 116
#define K_SYSCALL_K_THREAD_NAME_COPY 117
#define K_SYSCALL_K_THREAD_NAME_SET 118
#define K_SYSCALL_K_THREAD_PRIORITY_GET 119
#define K_SYSCALL_K_THREAD_PRIORITY_SET 120
#define K_SYSCALL_K_THREAD_RESUME 121
#define K_SYSCALL_K_THREAD_STACK_ALLOC 122
#define K_SYSCALL_K_THREAD_STACK_FREE 123
#define K_SYSCALL_K_THREAD_STACK_SPACE_GET 124
#define K_SYSCALL_K_THREAD_START 125
#define K_SYSCALL_K_THREAD_SUSPEND 126
#define K_SYSCALL_K_THREAD_TIMEOUT_EXPIRES_TICKS 127
#define K_SYSCALL_K_THREAD_TIMEOUT_REMAINING_TICKS 128
#define K_SYSCALL_K_TIMER_EXPIRES_TICKS 129
#define K_SYSCALL_K_TIMER_REMAINING_TICKS 130
#define K_SYSCALL_K_TIMER_START 131
#define K_SYSCALL_K_TIMER_STATUS_GET 132
#define K_SYSCALL_K_TIMER_STATUS_SYNC 133
#define K_SYSCALL_K_TIMER_STOP 134
#define K_SYSCALL_K_TIMER_USER_DATA_GET 135
#define K_SYSCALL_K_TIMER_USER_DATA_SET 136
#define K_SYSCALL_K_UPTIME_TICKS 137
#define K_SYSCALL_K_USLEEP 138
#define K_SYSCALL_K_WAKEUP 139
#define K_SYSCALL_K_YIELD 140
#define K_SYSCALL_LOG_BUFFERED_CNT 141
#define K_SYSCALL_LOG_FILTER_SET 142
#define K_SYSCALL_LOG_FRONTEND_FILTER_SET 143
#define K_SYSCALL_LOG_PANIC 144
#define K_SYSCALL_LOG_PROCESS 145
#define K_SYSCALL_RESET_LINE_ASSERT 146
#define K_SYSCALL_RESET_LINE_DEASSERT 147
#define K_SYSCALL_RESET_LINE_TOGGLE 148
#define K_SYSCALL_RESET_STATUS 149
#define K_SYSCALL_SYS_CLOCK_HW_CYCLES_PER_SEC_RUNTIME_GET 150
#define K_SYSCALL_UART_CONFIGURE 151
#define K_SYSCALL_UART_CONFIG_GET 152
#define K_SYSCALL_UART_DRV_CMD 153
#define K_SYSCALL_UART_ERR_CHECK 154
#define K_SYSCALL_UART_IRQ_ERR_DISABLE 155
#define K_SYSCALL_UART_IRQ_ERR_ENABLE 156
#define K_SYSCALL_UART_IRQ_IS_PENDING 157
#define K_SYSCALL_UART_IRQ_RX_DISABLE 158
#define K_SYSCALL_UART_IRQ_RX_ENABLE 159
#define K_SYSCALL_UART_IRQ_TX_DISABLE 160
#define K_SYSCALL_UART_IRQ_TX_ENABLE 161
#define K_SYSCALL_UART_IRQ_UPDATE 162
#define K_SYSCALL_UART_LINE_CTRL_GET 163
#define K_SYSCALL_UART_LINE_CTRL_SET 164
#define K_SYSCALL_UART_POLL_IN 165
#define K_SYSCALL_UART_POLL_IN_U16 166
#define K_SYSCALL_UART_POLL_OUT 167
#define K_SYSCALL_UART_POLL_OUT_U16 168
#define K_SYSCALL_UART_RX_DISABLE 169
#define K_SYSCALL_UART_RX_ENABLE 170
#define K_SYSCALL_UART_RX_ENABLE_U16 171
#define K_SYSCALL_UART_TX 172
#define K_SYSCALL_UART_TX_ABORT 173
#define K_SYSCALL_UART_TX_U16 174
#define K_SYSCALL_ZEPHYR_FPUTC 175
#define K_SYSCALL_ZEPHYR_FWRITE 176
#define K_SYSCALL_ZEPHYR_READ_STDIN 177
#define K_SYSCALL_ZEPHYR_WRITE_STDOUT 178
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_0 179
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_1 180
#define K_SYSCALL_Z_LOG_MSG_SIMPLE_CREATE_2 181
#define K_SYSCALL_Z_LOG_MSG_STATIC_CREATE 182
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_LOCK 183
#define K_SYSCALL_Z_SYS_MUTEX_KERNEL_UNLOCK 184
#define K_SYSCALL___POSIX_CLOCK_GET_BASE 185
#define K_SYSCALL_BAD 186
#define K_SYSCALL_LIMIT 187


/* Following syscalls are not used in image */
#define K_SYSCALL_ATOMIC_ADD 188
#define K_SYSCALL_ATOMIC_AND 189
#define K_SYSCALL_ATOMIC_CAS 190
#define K_SYSCALL_ATOMIC_NAND 191
#define K_SYSCALL_ATOMIC_OR 192
#define K_SYSCALL_ATOMIC_PTR_CAS 193
#define K_SYSCALL_ATOMIC_PTR_SET 194
#define K_SYSCALL_ATOMIC_SET 195
#define K_SYSCALL_ATOMIC_SUB 196
#define K_SYSCALL_ATOMIC_XOR 197
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_GET 198
#define K_SYSCALL_AUXDISPLAY_BACKLIGHT_SET 199
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_GET 200
#define K_SYSCALL_AUXDISPLAY_BRIGHTNESS_SET 201
#define K_SYSCALL_AUXDISPLAY_CAPABILITIES_GET 202
#define K_SYSCALL_AUXDISPLAY_CLEAR 203
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_GET 204
#define K_SYSCALL_AUXDISPLAY_CURSOR_POSITION_SET 205
#define K_SYSCALL_AUXDISPLAY_CURSOR_SET_ENABLED 206
#define K_SYSCALL_AUXDISPLAY_CURSOR_SHIFT_SET 207
#define K_SYSCALL_AUXDISPLAY_CUSTOM_CHARACTER_SET 208
#define K_SYSCALL_AUXDISPLAY_CUSTOM_COMMAND 209
#define K_SYSCALL_AUXDISPLAY_DISPLAY_OFF 210
#define K_SYSCALL_AUXDISPLAY_DISPLAY_ON 211
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_GET 212
#define K_SYSCALL_AUXDISPLAY_DISPLAY_POSITION_SET 213
#define K_SYSCALL_AUXDISPLAY_IS_BUSY 214
#define K_SYSCALL_AUXDISPLAY_POSITION_BLINKING_SET_ENABLED 215
#define K_SYSCALL_AUXDISPLAY_WRITE 216
#define K_SYSCALL_BBRAM_CHECK_INVALID 217
#define K_SYSCALL_BBRAM_CHECK_POWER 218
#define K_SYSCALL_BBRAM_CHECK_STANDBY_POWER 219
#define K_SYSCALL_BBRAM_GET_SIZE 220
#define K_SYSCALL_BBRAM_READ 221
#define K_SYSCALL_BBRAM_WRITE 222
#define K_SYSCALL_BC12_SET_RESULT_CB 223
#define K_SYSCALL_BC12_SET_ROLE 224
#define K_SYSCALL_CHARGER_CHARGE_ENABLE 225
#define K_SYSCALL_CHARGER_GET_PROP 226
#define K_SYSCALL_CHARGER_SET_PROP 227
#define K_SYSCALL_COUNTER_CANCEL_CHANNEL_ALARM 228
#define K_SYSCALL_COUNTER_GET_FREQUENCY 229
#define K_SYSCALL_COUNTER_GET_GUARD_PERIOD 230
#define K_SYSCALL_COUNTER_GET_MAX_TOP_VALUE 231
#define K_SYSCALL_COUNTER_GET_NUM_OF_CHANNELS 232
#define K_SYSCALL_COUNTER_GET_PENDING_INT 233
#define K_SYSCALL_COUNTER_GET_TOP_VALUE 234
#define K_SYSCALL_COUNTER_GET_VALUE 235
#define K_SYSCALL_COUNTER_GET_VALUE_64 236
#define K_SYSCALL_COUNTER_IS_COUNTING_UP 237
#define K_SYSCALL_COUNTER_SET_CHANNEL_ALARM 238
#define K_SYSCALL_COUNTER_SET_GUARD_PERIOD 239
#define K_SYSCALL_COUNTER_SET_TOP_VALUE 240
#define K_SYSCALL_COUNTER_START 241
#define K_SYSCALL_COUNTER_STOP 242
#define K_SYSCALL_COUNTER_TICKS_TO_US 243
#define K_SYSCALL_COUNTER_US_TO_TICKS 244
#define K_SYSCALL_DAC_CHANNEL_SETUP 245
#define K_SYSCALL_DAC_WRITE_VALUE 246
#define K_SYSCALL_DEVMUX_SELECT_GET 247
#define K_SYSCALL_DEVMUX_SELECT_SET 248
#define K_SYSCALL_DMA_CHAN_FILTER 249
#define K_SYSCALL_DMA_RELEASE_CHANNEL 250
#define K_SYSCALL_DMA_REQUEST_CHANNEL 251
#define K_SYSCALL_DMA_RESUME 252
#define K_SYSCALL_DMA_START 253
#define K_SYSCALL_DMA_STOP 254
#define K_SYSCALL_DMA_SUSPEND 255
#define K_SYSCALL_EEPROM_GET_SIZE 256
#define K_SYSCALL_EEPROM_READ 257
#define K_SYSCALL_EEPROM_WRITE 258
#define K_SYSCALL_EMUL_FUEL_GAUGE_IS_BATTERY_CUTOFF 259
#define K_SYSCALL_EMUL_FUEL_GAUGE_SET_BATTERY_CHARGING 260
#define K_SYSCALL_ENTROPY_GET_ENTROPY 261
#define K_SYSCALL_ESPI_CONFIG 262
#define K_SYSCALL_ESPI_FLASH_ERASE 263
#define K_SYSCALL_ESPI_GET_CHANNEL_STATUS 264
#define K_SYSCALL_ESPI_READ_FLASH 265
#define K_SYSCALL_ESPI_READ_LPC_REQUEST 266
#define K_SYSCALL_ESPI_READ_REQUEST 267
#define K_SYSCALL_ESPI_RECEIVE_OOB 268
#define K_SYSCALL_ESPI_RECEIVE_VWIRE 269
#define K_SYSCALL_ESPI_SAF_ACTIVATE 270
#define K_SYSCALL_ESPI_SAF_CONFIG 271
#define K_SYSCALL_ESPI_SAF_FLASH_ERASE 272
#define K_SYSCALL_ESPI_SAF_FLASH_READ 273
#define K_SYSCALL_ESPI_SAF_FLASH_UNSUCCESS 274
#define K_SYSCALL_ESPI_SAF_FLASH_WRITE 275
#define K_SYSCALL_ESPI_SAF_GET_CHANNEL_STATUS 276
#define K_SYSCALL_ESPI_SAF_SET_PROTECTION_REGIONS 277
#define K_SYSCALL_ESPI_SEND_OOB 278
#define K_SYSCALL_ESPI_SEND_VWIRE 279
#define K_SYSCALL_ESPI_WRITE_FLASH 280
#define K_SYSCALL_ESPI_WRITE_LPC_REQUEST 281
#define K_SYSCALL_ESPI_WRITE_REQUEST 282
#define K_SYSCALL_FLASH_ERASE 283
#define K_SYSCALL_FLASH_EX_OP 284
#define K_SYSCALL_FLASH_GET_PAGE_COUNT 285
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_IDX 286
#define K_SYSCALL_FLASH_GET_PAGE_INFO_BY_OFFS 287
#define K_SYSCALL_FLASH_GET_PARAMETERS 288
#define K_SYSCALL_FLASH_GET_WRITE_BLOCK_SIZE 289
#define K_SYSCALL_FLASH_READ 290
#define K_SYSCALL_FLASH_READ_JEDEC_ID 291
#define K_SYSCALL_FLASH_SFDP_READ 292
#define K_SYSCALL_FLASH_SIMULATOR_GET_MEMORY 293
#define K_SYSCALL_FLASH_WRITE 294
#define K_SYSCALL_FUEL_GAUGE_BATTERY_CUTOFF 295
#define K_SYSCALL_FUEL_GAUGE_GET_BUFFER_PROP 296
#define K_SYSCALL_FUEL_GAUGE_GET_PROP 297
#define K_SYSCALL_FUEL_GAUGE_GET_PROPS 298
#define K_SYSCALL_FUEL_GAUGE_SET_PROP 299
#define K_SYSCALL_FUEL_GAUGE_SET_PROPS 300
#define K_SYSCALL_GNSS_GET_ENABLED_SYSTEMS 301
#define K_SYSCALL_GNSS_GET_FIX_RATE 302
#define K_SYSCALL_GNSS_GET_NAVIGATION_MODE 303
#define K_SYSCALL_GNSS_GET_PERIODIC_CONFIG 304
#define K_SYSCALL_GNSS_GET_SUPPORTED_SYSTEMS 305
#define K_SYSCALL_GNSS_SET_ENABLED_SYSTEMS 306
#define K_SYSCALL_GNSS_SET_FIX_RATE 307
#define K_SYSCALL_GNSS_SET_NAVIGATION_MODE 308
#define K_SYSCALL_GNSS_SET_PERIODIC_CONFIG 309
#define K_SYSCALL_HWINFO_CLEAR_RESET_CAUSE 310
#define K_SYSCALL_HWINFO_GET_DEVICE_ID 311
#define K_SYSCALL_HWINFO_GET_RESET_CAUSE 312
#define K_SYSCALL_HWINFO_GET_SUPPORTED_RESET_CAUSE 313
#define K_SYSCALL_HWSPINLOCK_GET_MAX_ID 314
#define K_SYSCALL_HWSPINLOCK_LOCK 315
#define K_SYSCALL_HWSPINLOCK_TRYLOCK 316
#define K_SYSCALL_HWSPINLOCK_UNLOCK 317
#define K_SYSCALL_I2C_CONFIGURE 318
#define K_SYSCALL_I2C_GET_CONFIG 319
#define K_SYSCALL_I2C_RECOVER_BUS 320
#define K_SYSCALL_I2C_TARGET_DRIVER_REGISTER 321
#define K_SYSCALL_I2C_TARGET_DRIVER_UNREGISTER 322
#define K_SYSCALL_I2C_TRANSFER 323
#define K_SYSCALL_I2S_BUF_READ 324
#define K_SYSCALL_I2S_BUF_WRITE 325
#define K_SYSCALL_I2S_CONFIGURE 326
#define K_SYSCALL_I2S_TRIGGER 327
#define K_SYSCALL_I3C_DO_CCC 328
#define K_SYSCALL_I3C_TRANSFER 329
#define K_SYSCALL_IPM_COMPLETE 330
#define K_SYSCALL_IPM_MAX_DATA_SIZE_GET 331
#define K_SYSCALL_IPM_MAX_ID_VAL_GET 332
#define K_SYSCALL_IPM_SEND 333
#define K_SYSCALL_IPM_SET_ENABLED 334
#define K_SYSCALL_IVSHMEM_ENABLE_INTERRUPTS 335
#define K_SYSCALL_IVSHMEM_GET_ID 336
#define K_SYSCALL_IVSHMEM_GET_MAX_PEERS 337
#define K_SYSCALL_IVSHMEM_GET_MEM 338
#define K_SYSCALL_IVSHMEM_GET_OUTPUT_MEM_SECTION 339
#define K_SYSCALL_IVSHMEM_GET_PROTOCOL 340
#define K_SYSCALL_IVSHMEM_GET_RW_MEM_SECTION 341
#define K_SYSCALL_IVSHMEM_GET_STATE 342
#define K_SYSCALL_IVSHMEM_GET_VECTORS 343
#define K_SYSCALL_IVSHMEM_INT_PEER 344
#define K_SYSCALL_IVSHMEM_REGISTER_HANDLER 345
#define K_SYSCALL_IVSHMEM_SET_STATE 346
#define K_SYSCALL_KSCAN_CONFIG 347
#define K_SYSCALL_KSCAN_DISABLE_CALLBACK 348
#define K_SYSCALL_KSCAN_ENABLE_CALLBACK 349
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_IN_GET 350
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_BACKING_STORE_PAGE_OUT_GET 351
#define K_SYSCALL_K_MEM_PAGING_HISTOGRAM_EVICTION_GET 352
#define K_SYSCALL_K_MEM_PAGING_STATS_GET 353
#define K_SYSCALL_K_MEM_PAGING_THREAD_STATS_GET 354
#define K_SYSCALL_LED_BLINK 355
#define K_SYSCALL_LED_GET_INFO 356
#define K_SYSCALL_LED_OFF 357
#define K_SYSCALL_LED_ON 358
#define K_SYSCALL_LED_SET_BRIGHTNESS 359
#define K_SYSCALL_LED_SET_CHANNEL 360
#define K_SYSCALL_LED_SET_COLOR 361
#define K_SYSCALL_LED_WRITE_CHANNELS 362
#define K_SYSCALL_MAXIM_DS3231_GET_SYNCPOINT 363
#define K_SYSCALL_MAXIM_DS3231_REQ_SYNCPOINT 364
#define K_SYSCALL_MBOX_MAX_CHANNELS_GET 365
#define K_SYSCALL_MBOX_MTU_GET 366
#define K_SYSCALL_MBOX_SEND 367
#define K_SYSCALL_MBOX_SET_ENABLED 368
#define K_SYSCALL_MDIO_BUS_DISABLE 369
#define K_SYSCALL_MDIO_BUS_ENABLE 370
#define K_SYSCALL_MDIO_READ 371
#define K_SYSCALL_MDIO_READ_C45 372
#define K_SYSCALL_MDIO_WRITE 373
#define K_SYSCALL_MDIO_WRITE_C45 374
#define K_SYSCALL_NET_ADDR_NTOP 375
#define K_SYSCALL_NET_ADDR_PTON 376
#define K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX 377
#define K_SYSCALL_NET_IF_GET_BY_INDEX 378
#define K_SYSCALL_NET_IF_IPV4_ADDR_ADD_BY_INDEX 379
#define K_SYSCALL_NET_IF_IPV4_ADDR_LOOKUP_BY_INDEX 380
#define K_SYSCALL_NET_IF_IPV4_ADDR_RM_BY_INDEX 381
#define K_SYSCALL_NET_IF_IPV4_SET_GW_BY_INDEX 382
#define K_SYSCALL_NET_IF_IPV4_SET_NETMASK_BY_INDEX 383
#define K_SYSCALL_NET_IF_IPV6_ADDR_ADD_BY_INDEX 384
#define K_SYSCALL_NET_IF_IPV6_ADDR_LOOKUP_BY_INDEX 385
#define K_SYSCALL_NET_IF_IPV6_ADDR_RM_BY_INDEX 386
#define K_SYSCALL_NET_SOCKET_SERVICE_REGISTER 387
#define K_SYSCALL_NRF_QSPI_NOR_XIP_ENABLE 388
#define K_SYSCALL_PECI_CONFIG 389
#define K_SYSCALL_PECI_DISABLE 390
#define K_SYSCALL_PECI_ENABLE 391
#define K_SYSCALL_PECI_TRANSFER 392
#define K_SYSCALL_PS2_CONFIG 393
#define K_SYSCALL_PS2_DISABLE_CALLBACK 394
#define K_SYSCALL_PS2_ENABLE_CALLBACK 395
#define K_SYSCALL_PS2_READ 396
#define K_SYSCALL_PS2_WRITE 397
#define K_SYSCALL_PTP_CLOCK_GET 398
#define K_SYSCALL_PWM_CAPTURE_CYCLES 399
#define K_SYSCALL_PWM_DISABLE_CAPTURE 400
#define K_SYSCALL_PWM_ENABLE_CAPTURE 401
#define K_SYSCALL_PWM_GET_CYCLES_PER_SEC 402
#define K_SYSCALL_PWM_SET_CYCLES 403
#define K_SYSCALL_RETAINED_MEM_CLEAR 404
#define K_SYSCALL_RETAINED_MEM_READ 405
#define K_SYSCALL_RETAINED_MEM_SIZE 406
#define K_SYSCALL_RETAINED_MEM_WRITE 407
#define K_SYSCALL_RTC_ALARM_GET_SUPPORTED_FIELDS 408
#define K_SYSCALL_RTC_ALARM_GET_TIME 409
#define K_SYSCALL_RTC_ALARM_IS_PENDING 410
#define K_SYSCALL_RTC_ALARM_SET_CALLBACK 411
#define K_SYSCALL_RTC_ALARM_SET_TIME 412
#define K_SYSCALL_RTC_GET_CALIBRATION 413
#define K_SYSCALL_RTC_GET_TIME 414
#define K_SYSCALL_RTC_SET_CALIBRATION 415
#define K_SYSCALL_RTC_SET_TIME 416
#define K_SYSCALL_RTC_UPDATE_SET_CALLBACK 417
#define K_SYSCALL_RTIO_CQE_COPY_OUT 418
#define K_SYSCALL_RTIO_CQE_GET_MEMPOOL_BUFFER 419
#define K_SYSCALL_RTIO_RELEASE_BUFFER 420
#define K_SYSCALL_RTIO_SQE_CANCEL 421
#define K_SYSCALL_RTIO_SQE_COPY_IN_GET_HANDLES 422
#define K_SYSCALL_RTIO_SUBMIT 423
#define K_SYSCALL_SDHC_CARD_BUSY 424
#define K_SYSCALL_SDHC_CARD_PRESENT 425
#define K_SYSCALL_SDHC_DISABLE_INTERRUPT 426
#define K_SYSCALL_SDHC_ENABLE_INTERRUPT 427
#define K_SYSCALL_SDHC_EXECUTE_TUNING 428
#define K_SYSCALL_SDHC_GET_HOST_PROPS 429
#define K_SYSCALL_SDHC_HW_RESET 430
#define K_SYSCALL_SDHC_REQUEST 431
#define K_SYSCALL_SDHC_SET_IO 432
#define K_SYSCALL_SENSOR_ATTR_GET 433
#define K_SYSCALL_SENSOR_ATTR_SET 434
#define K_SYSCALL_SENSOR_CHANNEL_GET 435
#define K_SYSCALL_SENSOR_GET_DECODER 436
#define K_SYSCALL_SENSOR_RECONFIGURE_READ_IODEV 437
#define K_SYSCALL_SENSOR_SAMPLE_FETCH 438
#define K_SYSCALL_SENSOR_SAMPLE_FETCH_CHAN 439
#define K_SYSCALL_SIP_SUPERVISORY_CALL 440
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_REQ 441
#define K_SYSCALL_SIP_SVC_PLAT_ASYNC_RES_RES 442
#define K_SYSCALL_SIP_SVC_PLAT_FORMAT_TRANS_ID 443
#define K_SYSCALL_SIP_SVC_PLAT_FREE_ASYNC_MEMORY 444
#define K_SYSCALL_SIP_SVC_PLAT_FUNC_ID_VALID 445
#define K_SYSCALL_SIP_SVC_PLAT_GET_ERROR_CODE 446
#define K_SYSCALL_SIP_SVC_PLAT_GET_TRANS_IDX 447
#define K_SYSCALL_SIP_SVC_PLAT_UPDATE_TRANS_ID 448
#define K_SYSCALL_SMBUS_BLOCK_PCALL 449
#define K_SYSCALL_SMBUS_BLOCK_READ 450
#define K_SYSCALL_SMBUS_BLOCK_WRITE 451
#define K_SYSCALL_SMBUS_BYTE_DATA_READ 452
#define K_SYSCALL_SMBUS_BYTE_DATA_WRITE 453
#define K_SYSCALL_SMBUS_BYTE_READ 454
#define K_SYSCALL_SMBUS_BYTE_WRITE 455
#define K_SYSCALL_SMBUS_CONFIGURE 456
#define K_SYSCALL_SMBUS_GET_CONFIG 457
#define K_SYSCALL_SMBUS_HOST_NOTIFY_REMOVE_CB 458
#define K_SYSCALL_SMBUS_PCALL 459
#define K_SYSCALL_SMBUS_QUICK 460
#define K_SYSCALL_SMBUS_SMBALERT_REMOVE_CB 461
#define K_SYSCALL_SMBUS_WORD_DATA_READ 462
#define K_SYSCALL_SMBUS_WORD_DATA_WRITE 463
#define K_SYSCALL_SPI_RELEASE 464
#define K_SYSCALL_SPI_TRANSCEIVE 465
#define K_SYSCALL_SYSCON_GET_BASE 466
#define K_SYSCALL_SYSCON_GET_SIZE 467
#define K_SYSCALL_SYSCON_READ_REG 468
#define K_SYSCALL_SYSCON_WRITE_REG 469
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_AND_INVD_RANGE 470
#define K_SYSCALL_SYS_CACHE_DATA_FLUSH_RANGE 471
#define K_SYSCALL_SYS_CACHE_DATA_INVD_RANGE 472
#define K_SYSCALL_SYS_CSRAND_GET 473
#define K_SYSCALL_SYS_RAND32_GET 474
#define K_SYSCALL_SYS_RAND_GET 475
#define K_SYSCALL_TGPIO_PIN_CONFIG_EXT_TIMESTAMP 476
#define K_SYSCALL_TGPIO_PIN_DISABLE 477
#define K_SYSCALL_TGPIO_PIN_PERIODIC_OUTPUT 478
#define K_SYSCALL_TGPIO_PIN_READ_TS_EC 479
#define K_SYSCALL_TGPIO_PORT_GET_CYCLES_PER_SECOND 480
#define K_SYSCALL_TGPIO_PORT_GET_TIME 481
#define K_SYSCALL_UART_MUX_FIND 482
#define K_SYSCALL_UPDATEHUB_AUTOHANDLER 483
#define K_SYSCALL_UPDATEHUB_CONFIRM 484
#define K_SYSCALL_UPDATEHUB_PROBE 485
#define K_SYSCALL_UPDATEHUB_REBOOT 486
#define K_SYSCALL_UPDATEHUB_UPDATE 487
#define K_SYSCALL_USER_FAULT 488
#define K_SYSCALL_W1_CHANGE_BUS_LOCK 489
#define K_SYSCALL_W1_CONFIGURE 490
#define K_SYSCALL_W1_GET_SLAVE_COUNT 491
#define K_SYSCALL_W1_READ_BIT 492
#define K_SYSCALL_W1_READ_BLOCK 493
#define K_SYSCALL_W1_READ_BYTE 494
#define K_SYSCALL_W1_RESET_BUS 495
#define K_SYSCALL_W1_SEARCH_BUS 496
#define K_SYSCALL_W1_WRITE_BIT 497
#define K_SYSCALL_W1_WRITE_BLOCK 498
#define K_SYSCALL_W1_WRITE_BYTE 499
#define K_SYSCALL_WDT_DISABLE 500
#define K_SYSCALL_WDT_FEED 501
#define K_SYSCALL_WDT_SETUP 502
#define K_SYSCALL_XTENSA_USER_FAULT 503
#define K_SYSCALL_ZSOCK_ACCEPT 504
#define K_SYSCALL_ZSOCK_BIND 505
#define K_SYSCALL_ZSOCK_CLOSE 506
#define K_SYSCALL_ZSOCK_CONNECT 507
#define K_SYSCALL_ZSOCK_FCNTL 508
#define K_SYSCALL_ZSOCK_GETHOSTNAME 509
#define K_SYSCALL_ZSOCK_GETPEERNAME 510
#define K_SYSCALL_ZSOCK_GETSOCKNAME 511
#define K_SYSCALL_ZSOCK_GETSOCKOPT 512
#define K_SYSCALL_ZSOCK_GET_CONTEXT_OBJECT 513
#define K_SYSCALL_ZSOCK_INET_PTON 514
#define K_SYSCALL_ZSOCK_IOCTL 515
#define K_SYSCALL_ZSOCK_LISTEN 516
#define K_SYSCALL_ZSOCK_POLL 517
#define K_SYSCALL_ZSOCK_RECVFROM 518
#define K_SYSCALL_ZSOCK_RECVMSG 519
#define K_SYSCALL_ZSOCK_SELECT 520
#define K_SYSCALL_ZSOCK_SENDMSG 521
#define K_SYSCALL_ZSOCK_SENDTO 522
#define K_SYSCALL_ZSOCK_SETSOCKOPT 523
#define K_SYSCALL_ZSOCK_SHUTDOWN 524
#define K_SYSCALL_ZSOCK_SOCKET 525
#define K_SYSCALL_ZSOCK_SOCKETPAIR 526
#define K_SYSCALL_Z_ERRNO 527
#define K_SYSCALL_Z_ZSOCK_GETADDRINFO_INTERNAL 528


#ifndef _ASMLANGUAGE

#include <stdarg.h>
#include <stdint.h>

#endif /* _ASMLANGUAGE */

#endif /* ZEPHYR_SYSCALL_LIST_H */
