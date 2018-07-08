#include "modbus.h"
#include "cmsis_os.h"



void *port_modbus_malloc(uint32_t size)  
{
return	pvPortMalloc(size);
}

void port_modbus_free( void *addr)
{
  vPortFree( addr );
}