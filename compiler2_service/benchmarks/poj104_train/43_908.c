#include <header.h>

int main_bench()
{
 int m,a,b,i,j,mult;
 my_scanf("%d",&m);
 a=2;
 while(a<=(m+1)/2)
 {
	 mult=1,i=2;
		 while(i<a)
		 {
			 mult=mult&&(a%i);
			 i++;
		 }
		 if(mult!=0)
		 {
			 b=m-a,mult=1,i=2;
			 while(i<b)
			 {
				 mult=mult&&(b%i);
				 i++;
			 }
			 if(mult!=0)
			 {
				 my_printf("%d %d\n",a,b);
			 }
		 }
	a++;
 }
}