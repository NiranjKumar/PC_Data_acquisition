// uart 
#include <LPC21XX.H>
void uart_config(void)
{
	PINSEL0|=0X00000005;
	U0LCR=0X83;
	U0DLL=97;
	U0LCR=0X03;
}

void uart_tx(unsigned ch)
{
	U0THR=ch;
	while(((U0LSR>>5)&1)==0);
}

unsigned char uart_rx(void)
{
	while((U0LSR&1)==0);
	return U0RBR;
}

void uart_str(unsigned char *s)
{
	while(*s)
	{
		uart_tx(*s++);
	}
}