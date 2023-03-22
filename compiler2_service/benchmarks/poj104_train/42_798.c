#define NUM_ITER 46203

#include <header.h>

main_bench()
{
 int a[100001],n,i,k,x,j,h;
 my_scanf("%d",&n);
 for(i=1;i<=n;i++)
 {my_scanf("%d",&a[i]);}
 my_scanf("%d",&k);
 x=n;
 i=1;
  while(i<=x)
        {
             
                
                 if(a[i]==k)
                      {
                            for(j=i;j<=(x-1);j++)
                                a[j]=a[j+1];
                            x=x-1;
                            }
                 else i++;           
                
                
             }
  my_printf("%d",a[1]);
  for(i=2;i<=x;i++)
  {my_printf(" %d",a[i]);}  

}
