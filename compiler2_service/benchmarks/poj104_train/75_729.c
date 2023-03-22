#define NUM_ITER 29324

#include <header.h>

int n,k,i,j,tot=0,cnt,Max=0;
char c;
int X[2000],Y[2000];
int  main_bench()
{
		cnt=0;
		while (my_scanf("%d",&X[cnt++]) && (c=getchar()) && c!='\n');
		cnt=0;
		while (my_scanf("%d",&Y[cnt++]) && (c=getchar()) && c!='\n');
		for (i = 0;i < 1000;++i)
		{
			tot=0;
			for (j = 0;j<cnt;++j)
			if (X[j]<=i && Y[j]>i) tot++;
			if (tot>Max) Max = tot;
		}
		my_printf("%d %d\n",cnt,Max);

}
