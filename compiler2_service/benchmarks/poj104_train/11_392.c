#define NUM_ITER 294905

#include <header.h>



int main_bench()
{
	int a,b,c;
	my_scanf("%d%d%d",&a,&b,&c);
	if((a%4==0 && a%100!=0)||(a%400==0))
	{
		int m[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	    int i;
	    int k=0;
	    for(i=0;i<(b-1);i++)
		{
		  k=k+m[i];
		}
	k=k+c;
	my_printf("%d",k);
	}
	else
	{
		int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	    int i;
	    int k=0;
	    for(i=0;i<(b-1);i++)
		{
		  k=k+m[i];
		}
	    k=k+c;
	    my_printf("%d",k);
	}
	return 0;
}
