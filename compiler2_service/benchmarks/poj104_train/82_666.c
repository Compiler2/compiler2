#include <header.h>

int main_bench()
{
    int n;
    int a,b;
    int j=0,k;
    my_scanf("%d",&n);
    int*pp;
    pp=(int*)malloc(sizeof(int)*n);
    if(n==1)
    {
            my_scanf("%d%d",&a,&b);
             if((a>=90)&&(a<=140)&&(b>=60)&&(b<=90))
             {
                   j++;
             }
             else
             {
                  j=0;
             }
             my_printf("%d",j);
    }
    else
    {
        for(k=0;k<n;k++)
        {
             my_scanf("%d%d",&a,&b);
             if((a>=90)&&(a<=140)&&(b>=60)&&(b<=90))
             {
                   j++;
             }
             else
             {
                  j=0;
             }
             *(pp+k)=j;
         }
         for(k=0;k<(n-1);k++)
         {
             if(*(pp+k)>=*(pp+k+1))
             {
                  *(pp+k+1)=*(pp+k);
             }
         }
         free(pp);
         my_printf("%d",*(pp+n-1));
    }  
    return 0;
}