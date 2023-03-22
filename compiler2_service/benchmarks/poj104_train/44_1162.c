#include <header.h>

int reverse(int a)
{
	int c;
	int d=0;
	int i;
	if(a<0)
	{
		a=-a;
	    for(i=0;a!=0;i++)
		{
         c=a%10;
	     a=a/10;
		 d=c+d*10;
		}
		return -d;
	}
	else
	{
        for(i=0;a!=0;i++)
		{
		 c=a%10;
		 a=a/10;
		 d=c+d*10;
		}	
		return d;
	}
}
int main_bench()
{
 int i;
 int a[6];
 int b[6];
 for(i=0;i<6;i++)
 my_scanf("%d",&a[i]);
 for(i=0;i<6;i++)
 {
   b[i]=reverse(a[i]) ;
   my_printf("%d\n",b[i]);
 }
}