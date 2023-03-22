#define NUM_ITER 943773

#include <header.h>

int main_bench()
{
	double n;
	int count=0,i;
	char a[501],b[501];
	my_scanf("%lf%s%s",&n,a,b);
		if((int)strlen(a)!=(int)strlen(b))
		{
			my_printf("error");
		}
		else
		{
			for(i=0;i<(int)strlen(a);i++)
			{
				if(((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G'))||((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G')))
				{
					my_printf("error");
					return 0;
				}
				else if(a[i]==b[i])
				{
					count++;
				}
			}
			if(1.0*count/(int)strlen(a)>=n)
				my_printf("yes");
			else{
				my_printf("no");
			}
		}



		return 0;
}