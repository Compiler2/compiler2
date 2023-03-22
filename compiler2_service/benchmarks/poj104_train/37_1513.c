#define NUM_ITER 21780

#include <header.h>

int main_bench()
{
char f[100000];
int t,i,j,k,a;
char b;
my_scanf("%d",&t);
gets(f);
for(i=0;i<t;i++)
{
	b='!';
	gets(f);
	for(j=0;j<strlen(f);j++)
	{
		a=0;
		for(k=0;k<strlen(f);k++)
		{
			if(f[j]==f[k])
				a++;
		}
		if(a==1)
		{
			b=f[j];
		break;
		}
		else
			;
	}
	if(b=='!')
	my_printf("no");
	else
	my_printf("%c\n",b);
}
	return 0;
}