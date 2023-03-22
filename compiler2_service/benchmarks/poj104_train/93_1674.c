#include <header.h>


int main_bench()
{
int n,i,c=0,s[3]={3,5,7};
my_scanf("%d",&n);
for (i=0;i<3;i++)
	if (n%s[i]==0)
		c++;

if (c==3) my_printf("3 5 7");
else if (c==0)
		my_printf("n");
else if (c==1)
		for (i=0;i<3;i++)
		{
			if (n%s[i]==0)
				my_printf("%d",s[i]);
		}
else if (c==2)
		{
			if (n%3!=0)my_printf("5 7");
			if (n%5!=0)my_printf("3 7");
			if (n%7!=0)my_printf("3 5");
		}
			

return 0;
}