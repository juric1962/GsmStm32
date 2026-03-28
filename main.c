#include "main.h"
#include "JuraDev.h"
#include "ColabDev.h"
void main(void)
{
    JuraInit();
    ColabInit();
    while(1)
    {
      JuraJob();
      ColabJob();  
    }    
}