#include <header.h>

int main_bench()
{
    int a[12]={1,32,60,91,121,152,182,213,244,274,305,335},
        b[12]={1,32,61,92,122,153,183,214,245,275,306,336},
        y,i,j,n,t,s;
        my_scanf("%d",&n);
        for(t=0;t<n;t++)
        {my_scanf("%d %d %d",&y,&i,&j);
        if((y%4!=0)||((y%100==0)&&(y%400!=0)))
        {s=a[i-1]-a[j-1];
        if(s%7==0)
        my_printf("YES\n");
        else
        my_printf("NO\n");}
        else
        {s=b[i-1]-b[j-1];
        if(s%7==0)
        my_printf("YES\n");
        else
        my_printf("NO\n");
        }}
        return 0;
        }
        
        
