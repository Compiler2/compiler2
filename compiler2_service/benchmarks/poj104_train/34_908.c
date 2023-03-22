#define NUM_ITER 382038

#include <header.h>

int main_bench()
{
	int i=1,s[10000];
	my_scanf("%d",&s[1]);
	if(s[1]==1)
	{
		my_printf("End");
	}
	else
	{
	    while(s[i]!=1)
		{
		     if(s[i]%2==0)
			 {
				 s[i+1]=s[i]/2;
			    my_printf("%d/2=%d\n",s[i],s[i+1]);
			 }
			 else
			 {
				 s[i+1]=s[i]*3+1;
				 my_printf("%d*3+1=%d\n",s[i],s[i+1]);
			 }
			 i++;
		}
		my_printf("End");
	}
	return 0;
}
