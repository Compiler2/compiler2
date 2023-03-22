#define NUM_ITER 24613

#include <header.h>


int first(char p)
{
	int z=0;
	if(p=='_' || (p>='a' && p<='z') || (p>='A' && p<='Z'))
		z=1;
	return z;
}

int behind(char p)
{
	int z=0;
	if(p=='_' || (p>='a' && p<='z') || (p>='A' && p<='Z') || p=='0' || (p>='1' && p<='9'))
		z=1;
	else
		z=0;
	return z;
}

int main_bench()
{
	char *p;
	int *tf;
	int n,i,j,len;
	my_scanf("%d",&n);
	p=(char*)malloc(sizeof(int)*25);
	tf=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s", p);
		len=strlen(p);
		tf[i]=1;
		if(first(p[0])==0)
		{
			tf[i]=0;
			continue;
		}
		for(j=1;j<len;j++)
		{
			if(behind(p[j])==0)
			{
				tf[i]=0;
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(tf[i]==0)
			my_printf("no\n");
		if(tf[i]==1)
			my_printf("yes\n");
	}	
	free(p);
	return 0;
}
