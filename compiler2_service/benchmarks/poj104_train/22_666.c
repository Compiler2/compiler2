#include <header.h>

int main_bench()
{   int num[1000];
    char c;
    int n,i,max1,max2;
    n=0;
    while (1)
   {  my_scanf("%d%c",&num[n],&c);
      n++;
      if(c!=',') break;
   }
   max1=num[0];
   max2=0;
   for(i=0;i<n;i++)
    if(num[i]>max1) max1=num[i];
   for(i=0;i<n;i++)
     if(num[i]>max2&&num[i]!=max1) max2=num[i];
   if(max2==max1||max2==0) my_printf("No\n");
   else my_printf("%d\n",max2);
  return 0;
}
  
     