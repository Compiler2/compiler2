#define NUM_ITER 1190523

#include <header.h>

int main_bench()
{
    char string[200];
    gets(string);
    int n,i,j;
    n=strlen(string);
    for(i=0;i<n;i++)
    {
                    while(string[i]==' '&&string[i+1]==' ')
                    {
                                    for(j=i+1;j<n;j++)
                                    {
                                          string[j]=string[j+1];
                                    }
                    }
                    
}
    
    
    for(i=0;i<n;i++)
    {
                  
                    if(string[i]=='\0')
                    break; 
                     my_printf("%c", string[i]);
    }
    return 0;
}