#define NUM_ITER 201105

#include <header.h>

char x[5];
int main_bench()
{
	void copy(char x[5],char a);
	int n,l,i,j,max;
	char a[600];
	int count[500]={0};
	int alo[500];
	char com[500][5];
	my_scanf("%d\n",&n);
	gets(a);
	l=strlen(a)-1;
	for(i=0;i<=499;i++)
		*(alo+i)=i;
	for(i=0;i+n-1<=l;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			*(*(com+i)+j)=*(a+i+j);
		}
		*(*(com+i)+j)='\0';
	}
	for(i=0;i+n-1<=l;i++)
	{
		for(j=i;j+n-1<=l;j++)
		{
			if(strcmp(*(com+j),*(com+i))==0)
				(*(count+i))++;
		}
	}
	max=*(count+0);
	for(i=0;i+n-1<l;i++)
	{
		if(max<*(count+i))
			max=*(count+i);
	}
	if(max!=1)
	my_printf("%d\n",max);
	else
	{
		my_printf("NO");
		return 0;
	}
	for(i=0;i+n-1<l;i++)
	{
		if(*(count+i)==max)
		{
			my_printf("%s\n",*(com+i));
		}
	}
	return 0;
}
