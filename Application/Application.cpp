// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"


CoolClass::CoolClass(void)
{
}
//hi
int CoolClass::Calc(int a, int b)
{
    if (a == b)
    {
        return 2 * a;
    }
        //hello
    else
    {
        return a + b;
    }
    
}
