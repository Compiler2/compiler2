#define NUM_ITER 30155

#include <header.h>


main_bench()
{
      int n,k;
      my_scanf("%d",&n);
      for(k=0;k<n;k++)
      {
      int p=0,i,j,m=0,q=0;
      char a[100010];
      my_scanf("%s",a);
      for(i=0;a[i]!=0;i++)
      p++;
      for(i=0;i<p;i++)
      {
                      for(j=0;j<p;j++)
                      {
                            if(a[i]!=a[j])
                            m++;
                            }
                            if(m==p-1)
                            {my_printf("%c\n",a[i]);
                             break;}
                             else
                             {m=0;
                             q++;}
                               }
                               if(q==p)
                               my_printf("no\n");}
                            
                             }          