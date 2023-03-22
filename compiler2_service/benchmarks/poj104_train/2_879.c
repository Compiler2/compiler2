#define NUM_ITER 8117

#include <header.h>

struct SHU
{
	int bh;
	char bz[26];
};

int main_bench()
{
	int m,i,j,l,k,p;
	int name[200]={0},max,shuhao[1000];
	struct SHU shu[1000];
	my_scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		my_scanf("%d %s",&shu[i].bh,shu[i].bz);
	}
	for(i=0;i<m;i++)
	{
		l=strlen(shu[i].bz);
		for(j=0;j<l;j++)
		{
			name[shu[i].bz[j]]++;
		}
	}
	max=name[0];
	for(i=0;i<200;i++)
	{
		if(name[i]>max) 
		{
			max=name[i];
			k=i;
		}
	}
	p=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<26;j++)
		{
			if(shu[i].bz[j]==k)
			{
				shuhao[p]=shu[i].bh;
				p++;
			}
		}
	}
	my_printf("%c\n",k);
	my_printf("%d\n",max);
	for(i=0;i<p;i++)
	{
		my_printf("%d\n",shuhao[i]);
	}





	return 0;
}
