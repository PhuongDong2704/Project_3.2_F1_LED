#include "can_rx.h"
CAN_RxHeaderTypeDef RxHeader;

uint8_t Rx[8];
uint8_t can_flag =0;
void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan)
{
	HAL_CAN_GetRxMessage(hcan,CAN_RX_FIFO0,&RxHeader,Rx);
	if (RxHeader.DLC == 5)
	{
		can_flag = 1;
	}
}