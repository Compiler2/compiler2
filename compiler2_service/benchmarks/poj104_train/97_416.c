#define NUM_ITER 1720872

#include <header.h>

int main_bench()
{
	int m,a=0,b=0,c=0,d=0,e=0,f=0;
	my_scanf("%d",&m);
     while (m>=100)
	 {
		 a++;
		 m-=100;
	 }
	 while(m>=50&&m<100)
	 {
		 b++;
		 m-=50;
	 }
	 while(m>=20&&m<50)
	 {
		 c++;
		 m-=20;
	 }
	 while (m>10&&m<20)
	 {
		 d++;
		 m-=10;
	 }
	 while (m<=10&&m>=5)
	 {
		 e++;
		 m-=5;
	 }
	 while(m<5&&m>0)
	 {
		 f++;
		 m-=1;
	 }
	 my_printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	 return 0;
}

