#define NUM_ITER 12409

#include <header.h>

int main_bench()
{
	int n,u[600]={0},l,g=0;
	char s[600]={0};
	my_scanf("%d",&n);
	my_scanf("%s",s);
	
	int i,j,k=0;
	char a[600][6]={0};
	
	for(i=0;i<strlen(s);i++)
		for(j=0;j<n;j++)
			a[i][j]=s[i+j];

	
	for(i=0;i<strlen(s)-1;i++)
		for(j=i+1;j<strlen(s);j++)
			if(strcmp(a[i],a[j])==0)
				u[i]++;
	
	for(l=200;l>0;l--)
	{for(i=0;i<strlen(s);i++)
			if(u[i]==l)
			{if(!k)
				{my_printf("%d\n",l+1);k++;g++;}
			puts(a[i]);}
	if(g)break;}
	if(l==0)
		my_printf("NO");
}