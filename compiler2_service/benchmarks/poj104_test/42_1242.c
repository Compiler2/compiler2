#include <header.h>

int main_bench()
{
    int n,m,i,j,k=0;
    int a[100000];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
     {
         my_scanf("%d",&a[i]);
     }
     my_scanf("%d",&m);
     for(i=0;i<n;i++)
      {
          if(a[i]!=m)
          k++;
      }
      for(i=0;i<n;i++)
       {
           if(a[i]!=m)
           {
                my_printf("%d",a[i]);
                k--;
                if(k>0)
                my_printf(" ");

           }

       }

}
