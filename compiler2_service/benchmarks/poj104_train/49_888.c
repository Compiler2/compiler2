#define NUM_ITER 1243615

#include <header.h>

int main_bench()
{
    int i,len,j,times,k,flag=1;
    char str[500];
    my_scanf("%s",str);
    len=strlen(str);
    for(i=2;i<=len;i++)
    {
        times=i/2;
        for(j=0;j<=len-i;j++)
        {
            for(k=j;k<=j+times-1;k++)
            {
                if(str[k]!=str[i+2*j-1-k])
                {flag=0;break;}
            }
            if(flag==1)
                {for(k=j;k<=i+j-1;k++)
                my_printf("%c",str[k]);
                my_printf("\n");}
            flag=1;
        }
    }
    return 0;
    
}