#define NUM_ITER 239985

#include <header.h>

int main_bench()
{
    char string[256];
    char substring[256];
    char replacement[256];
    my_scanf("%s",string);
    my_scanf("%s",substring);
    my_scanf("%s",replacement);
    int lenth=0;
    int judge=0;
    for(int i=0;substring[i]!='\0';i++)
    {
        lenth++;    
    }
    for(int i=0;i<256;i++)
    {
        if(string[i]==substring[0])
        {
            int count;
            for(count=0;substring[count]!='\0';count++)
            {
                if(string[i+count]!=substring[count])
                {
                    break;                         
                }    
            }
            if(count==lenth)
            {
                for(int j=0;j<i;j++)
                {    
                    my_printf("%c",string[j]);
                }
                my_printf("%s",replacement);
                for(int j=i+lenth;string[j]!='\0';j++)
                {
                    my_printf("%c",string[j]);    
                }
                judge=1;      
                break;      
            }                      
        }    
    }
    if(judge==0)
    {
        my_printf("%s",string);            
    }
    return 0;
} 