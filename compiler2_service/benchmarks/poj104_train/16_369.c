#include <header.h>



int main_bench()
{
  int n,m,a,b,c,s,p;
  my_scanf("%d",&n);
  if(n==10000)my_printf("00001");
  else 
	  if(n<=9)my_printf("%d",n);
	  else 
		  if(n>=10&&n<=99)
		  {m=n/10;
            a=n-m*10;
			my_printf("%d%d",a,m);}
          else
	    if(n>=100&&n<=999)
		{s=n/100;
	    m=(n-s*100)/10;
         b=n-s*100-m*10;
           my_printf("%d%d%d",b,m,s);}
  else 
	  if(n>=1000&&n<=9999)
	  {m=n/10;
     
	 
	 p=n/1000;
	 s=(n-p*1000)/100;
	 b=(n-s*100-p*1000)/10;
	 c=n-p*1000-s*100-10*b;
 
	 my_printf("%d%d%d%d",c,b,s,p);}
  return 0;



}