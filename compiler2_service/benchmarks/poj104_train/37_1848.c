#define NUM_ITER 10

#include <header.h>

main_bench()
{
    int t,x;
    int i,j,l,d;
    char str[100000];
    int a[100000];
    my_scanf("%d",&t);
    for(x=0;x<t;x++)
    {
        d=0;
        for(i=0;i<100000;i++)
            a[i]=0;
        my_scanf("%s",str);
        l=strlen(str);
        for(i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
                if(str[i]==str[j]) a[i]++;
            if(a[i]==1)
                {my_printf("%c\n",str[i]);d=1;break;}
        }
        if(d==0) my_printf("no\n");
    }
}
