#include <header.h>

int main_bench()
{
    int n,a[20000];
    int count1,i,j,k;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    for(j=0;j<n;j++)
    {
                    count1=0;
            for(k=0;k<j;k++)
            {
               if(a[j]==a[k])
               {
               count1=1;
               break;
               }
            }
            if(count1==0)
            {
                       if(j==0)
                       my_printf("%d",a[0]);
                       else
                       my_printf(" %d",a[j]);
            }
            
    }
    getchar();
     getchar();
      getchar();
       getchar();
        getchar();
         getchar();
          getchar();
    return 0;
}

