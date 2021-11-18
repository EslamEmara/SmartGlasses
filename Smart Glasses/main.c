/*
 * Smart Glasses.c
 *
 * Created: 11/18/2021 12:44:20 PM
 * Author : Eslam Emara
 */ 


#include "MCAL\UART\UART.h"

int main()
{
	uint8_t character = 0;
	ST_UARTConfig_t config = {FREQ_8MHz,BAUD_9600,EVEN_PARITY,DISABLE_RX_INT,DISABLE_TX_INT};
	
	UART_Init(config);
	UART_SendString("Eslam Emara");
	
	while(1)
	{
		character=UART_ReceiveByte();
		UART_SendByte(character);
	}
}
