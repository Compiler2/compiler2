#define NUM_ITER 1503571

#include <header.h>

int main_bench()
{
    int i=0,flag=0;
    char buffer[10000];
    gets(buffer);
    
while(buffer[i])
    {
        if(flag) 
        {
            if(buffer[i]!=' ')
            {
                my_printf("%c",buffer[i]);
                flag=0;
            }
        }
        else if(!flag) 
        {
 
           my_printf("%c",buffer[i]);
            if(buffer[i]==' ')
                flag=1;
        }
        i++;
    }
    return 0;
}
