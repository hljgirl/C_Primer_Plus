//产生随机数

#include "stdafx.h"

static unsigned long next = 1;

int rand0(void)
{
	next = next * 1103515245 +12345;
	return (unsigned int)(next / 65536) % 32768;
}