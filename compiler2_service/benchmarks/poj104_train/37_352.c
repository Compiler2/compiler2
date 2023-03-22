#include <header.h>

int main_bench()
{
    int t,i,j,k;
    int l,count;
    char a[100000];
    my_scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        my_scanf("%s",a);
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            count=0;
            for(k=0;k<l;k++)
                if(a[k]==a[j])
                    count++;
            if(count==1)
            {
                my_printf("%c\n",a[j]);
                break;
            }
            else if((j==l-1)&&(count!=1))
                my_printf("no\n");
        }
    }
}