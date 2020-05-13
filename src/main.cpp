#include <stdio.h>

#include "menu.hpp"

int main()
{
    int go = 1;
    
    MenuClass * m = new MenuClass();
    do
    {
        m->Display();
    } while (go == 1);
    
    delete(m);
    return 0;
}