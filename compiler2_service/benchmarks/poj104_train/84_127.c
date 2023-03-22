#include <header.h>

main_bench()
{int a,b,n,c,i;
 my_scanf("%d",&n); 
 my_scanf("%d",&a);
 my_scanf("%d",&b);
 if(a<b){c=a;a=b;b=c;}
 for(i=1;i<=n-2;i++)
 {my_scanf("%d",&c);
  if(c<=b) continue;
  if(c>b&&c<=a) {b=c;continue;}
  if(c>a){b=a;a=c;}
 } 
 my_printf("%d\n%d\n",a,b);
}
