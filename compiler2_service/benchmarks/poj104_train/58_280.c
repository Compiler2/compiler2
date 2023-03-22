#define NUM_ITER 31516

#include <header.h>

int panduan(char i,int k)
{
        if((i>='a'&&i<='z')||(i>='A'&&i<='Z')||(i>='0'&&i<='9')||i=='_')
        return k;
        else
        return 0;
}
main_bench()
{
    int n;
    my_scanf("%d",&n);
    int i=0,k=1;
    char a[100];
    for(i=0;i<=n;i++)
    {
        gets(a);
        if(i==0)
        continue;
        if((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')||a[0]=='_')
        {
             for(int j=0;a[j]!='\0';j++)
             {
                 k=panduan(a[j],k);
             }
             if(k==1)
             my_printf("1\n");
             else
             my_printf("0\n");
             k=1;
        }
        else
        my_printf("0\n");
    }
    return 0;
}
