#define NUM_ITER 34531

#include <header.h>

int main_bench()
{
	int n,i,j,lm=0;
	char a[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",a);
		if(!((a[0]=='_')||(('a'<=a[0])&&(a[0]<='z'))||(('A'<=a[0])&&(a[0]<='Z'))))
				lm++;
		for(j=1;a[j];j++)
		{
			if(!((a[j]=='_')||(('a'<=a[j])&&(a[j]<='z'))||(('A'<=a[j])&&(a[j]<='Z'))||((48<=a[j])&&(a[j]<=57))))
                lm++;
		}
		if(lm==0)
			my_printf("yes\n");
		else my_printf("no\n");
		lm=0;
	}
	return 0;
}