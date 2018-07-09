/*
 * Copyright © 2001-2011 Stéphane Raimbault <stephane.raimbault@gmail.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#ifndef MODBUS_RTU_H
#define MODBUS_RTU_H

#include "modbus.h"
#include "serial_device.h"

MODBUS_BEGIN_DECLS

/* Modbus_Application_Protocol_V1_1b.pdf Chapter 4 Section 1 Page 5
 * RS232 / RS485 ADU = 253 bytes + slave (1 byte) + CRC (2 bytes) = 256 bytes
 */
#define MODBUS_RTU_MAX_ADU_LENGTH  256

MODBUS_API modbus_t* modbus_new_rtu(uint8_t port, uint32_t baud, 
                                    uint8_t data_bit, uint8_t stop_bit,serial_hal_driver_t *hal);

#define MODBUS_RTU_RS232            0
#define MODBUS_RTU_RS485            1

#define MODBUS_RTU_RS485_HALF_DUPLEX      0
#define MODBUS_RTU_SEND_TIMEOUT           5


MODBUS_API int modbus_rtu_set_serial_mode(modbus_t *ctx, int mode);
MODBUS_API int modbus_rtu_get_serial_mode(modbus_t *ctx);



MODBUS_END_DECLS

#endif /* MODBUS_RTU_H */
