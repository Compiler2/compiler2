#define NUM_ITER 1651063

#include <header.h>



int main_bench()
{
	int a,b,c,d,f;
	my_scanf("%d",&a);
	if(a<10&&a>=0)my_printf("%d",a);
	 else if(a>=10&&a<100)
	 {
		 b=a%10;
	    c=(a-b)/10;
		my_printf("%.2d",b*10+c);
	}
	 else if(a>99&&a<1000)
	 {
		 b=a%10;
	  c=((a-b)/10)%10; 
	  d=((a-b-c*10)/100)%10;
	  my_printf("%.3d",b*100+c*10+d);
	 }
	 else	if(a>999&&a<10001)
	 {
		 b=a%10;
	  c=((a-b)/10)%10; 
	  d=((a-b-c*10)/100)%10;
	  f=((a-b-c*10-d*100)/1000)%10;
		  my_printf("%.4d",b*1000+c*100+d*10+f);
	 }
	 else
	  return 0;
}