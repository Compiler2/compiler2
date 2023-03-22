#include <header.h>

int hanshu(int number)
{ 
	int m;
	if(number==1)
		return number;
	else
	{
	    if(number%2!=0)
		{
           m=number*3+1;
		   my_printf("%d*3+1=%d\n",number,m);
		}
	    else if(number%2==0)
		{
		   m=number/2;
	       my_printf("%d/2=%d\n",number,m);
		}
	}
	return hanshu(m);
}
int main_bench()
{
    int a;
	my_scanf("%d",&a);
	if(a==1)
		my_printf("End\n");
	else if(hanshu(a)==1)
        my_printf("End\n");
	return 0;
}
		