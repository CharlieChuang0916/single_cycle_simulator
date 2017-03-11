#include <stdio.h>
#include <stdlib.h>
#include "function.h"

unsigned int GetOpcode(unsigned int i)
{
    return (i >> 26) & 0x0000003f;
}

unsigned int Get_rs(unsigned int i)
{
    return (i >> 21) & 0x0000001f;
}

unsigned int Get_rt(unsigned int i)
{
    return (i >> 16) & 0x0000001f;
}

unsigned int Get_rd(unsigned int i)
{
    return (i >> 11) & 0x0000001f;
}

unsigned int Get_C(unsigned int i)
{
    return (i >> 6) & 0x0000001f;
}

unsigned int Get_func(unsigned int i)
{
    return i & 0x0000003f;
}

short int Get_i(unsigned int i)
{
    return (i & 0x0000ffff);
}

int Get_addr(unsigned int i)
{
    return (i & 0x03ffffff);
}
