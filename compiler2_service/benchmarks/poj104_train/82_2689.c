#define NUM_ITER 38109

#include <header.h>


int main_bench()
{
	int n,i,j;
	int normalcnt=0;
	int normalstt=0;
	int tempcnt=0;

	my_scanf("%d", &n);
	while(n--)
	{
		int a,b;
		int curnml=0;
		my_scanf("%d%d", &a, &b);
		if (a>=90 && a<=140 && b>=60 && b<=90)
			curnml=1;
		else
			curnml=0;

		if (normalstt)
		{
			
			if (curnml)	
				tempcnt++;
			else 
			{
				if(tempcnt>normalcnt)
					normalcnt=tempcnt;
				normalstt=0;
				tempcnt=0;
			}
		}
		else
		{
			
			if(curnml)
			{
				normalstt=1;
				tempcnt++;
			}
		}
	}

	
	if(normalstt&&tempcnt>normalcnt)
		normalcnt=tempcnt;

	my_printf("%d",normalcnt);

	return 0;
}