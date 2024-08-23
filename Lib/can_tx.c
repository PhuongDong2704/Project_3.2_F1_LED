#include "can_tx.h" 

uint32_t Rx_LedBlink_Time (uint8_t Rx[8])
{
	return (Rx[1]<<0) | (Rx[2]<<8) | (Rx[3]<<16) | (Rx[4]<<24);
}
