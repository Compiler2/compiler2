#define NUM_ITER 22725

#include <header.h>

struct stud
{	int n;
	int m;
	int c;
	int t;
}s[100000],temp;
int main_bench()
{
	int i,j,k,n,p;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{	my_scanf("%d %d %d",&s[i].n,&s[i].m,&s[i].c);
		s[i].t=s[i].m+s[i].c;
	}
	for(j=0;j<3&&j<n;j++)
	{	for(k=j+1,p=j;k<n;k++)
			if(s[p].t<s[k].t){p=k;}
			temp=s[j];s[j]=s[p];s[p]=temp;
		my_printf("%d %d\n",s[j].n,s[j].t);
	}
}