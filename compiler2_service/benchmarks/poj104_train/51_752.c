#define NUM_ITER 843955

#include <header.h>

main_bench()
{
    int n,len,stre[1000],y,max=1;
    char str[1000][1000],stra[1000];
    my_scanf("%d%s",&n,stra);
    len=strlen(stra);
    for (int i=0;i<=len-n;i++)
    {
        for (int j=0;j<n;j++)
            str[i][j]=stra[i+j];
    }
    
    memset(stre, 0, sizeof(stre));
    for (int i=0;i<len-n;i++)
        for (int j=i;j<=len-n;j++)
        {
            y=strcmp(str[i],str[j]);
            if(y == 0)
                stre[i]++;
        }
    for(int i=0;i<len-n;i++)
    {
        if(stre[i]>max)
            max=stre[i];
    }
    if (max==1)
        my_printf("NO");
    else
    {
        my_printf("%d\n",max);
        for(int i=0;i<len-n;i++)
        {
            if (stre[i]==max)
            {
                for(int j=0;j<n;j++)
                    my_printf("%c",str[i][j]);
                my_printf("\n");
                
            }
            
            
        }
    }
}