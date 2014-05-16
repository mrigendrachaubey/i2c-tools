/*
    busses.h - SMBus helper functions

*/

#ifndef LIB_I2C_BUSSES_H
#define LIB_I2C_BUSSES_H

#include <unistd.h>

extern int i2c_lookup_i2c_bus(const char *i2cbus_arg);
extern int i2c_parse_i2c_address(const char *address_arg);
extern int i2c_open_i2c_dev(int i2cbus, char *filename, size_t size, int quiet);
extern int i2c_set_slave_addr(int file, int address, int force);

#endif /* LIB_I2C_BUSSES_H */
