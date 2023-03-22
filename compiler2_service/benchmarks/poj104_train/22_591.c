#include <header.h>

int main_bench()
{
	char c[300]={','};
   int n,i,num[300],a,b,s=0;
   for(i=0,n=0;;i++)
   {
      my_scanf("%d",&num[i]);
	  my_scanf("%c",&c[i]);
      n++;
	  if(c[i]=='\n')
		  break;
    }
    if(n==1)
      my_printf("No\n");
	else
	{
    a=num[0];
    for(i=1;i<=n-1;i++)
    {
       if(a<num[i])
          a=num[i];
       if(a==num[i])
          s++;
    }
    if(s==n-1)
      my_printf("No\n");
	else
	{
     for(i=0;i<=n-1;i++)
     {
         if(a!=num[i])
            b=num[i];
      }
      for(i=0;i<=n-1;i++)
      {
         if(a>num[i]&&b<=num[i])
            b=num[i];
       }
       my_printf("%d\n",b);
	   }
	   }
}