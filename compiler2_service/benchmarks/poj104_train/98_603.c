#define NUM_ITER 27896

#include <header.h>

int main_bench()
{
    int n,i,num,len;;
    char w[50];
    my_scanf("%d",&n);
    num=0;
    my_scanf("%s",w);
    len=strlen(w);
    for(i=0;i<n;i++)
    {
        if(num+len<=80)
        {
            if(i!=n-1)
            {
                my_printf("%s",w);
                num=num+len+1;
            }
            else
            my_printf("%s",w);
        }
        else
        {
            my_printf("\n");
            num=len+1;
            my_printf("%s",w);
        }
        my_scanf("%s",w);
        len=strlen(w);
        if((num+len<=80)&&(i!=n-1))
        my_printf(" ");
    }
}
