#include <header.h>

int main_bench()
{
	 int n,a,b,c,d;
     my_scanf("%d",&n);
	 if(n<10)
		 my_printf("%d",n);
	 if(n>10&&n<100)
	 {	 a=n%10;
	     b=n/10;
		 n=10*a+b;
	 my_printf("%d",n);}
	 if(n>100&&n<1000)
	 {
		 a=n%10;
		 b=(n%100-a)/10;
		 c=n/100;
		 n=100*a+10*b+c;
		 my_printf("%d",n);
	 }
	 if(n>1000&&n<10000)
	 {
		 a=n%10;
		 b=(n%100-a)/10;
		 c=(n%1000-10*b-a)/100;
		 d=n/1000;
		 n=1000*a+100*b+10*c+d;
		 my_printf("%d",n);
	 }
         if(n==10) my_printf("01");
         if(n==100) my_printf("001");
         if(n==1000) my_printf("0001");
         if(n==10000) my_printf("00001");
		
	return 0;
}



		
	