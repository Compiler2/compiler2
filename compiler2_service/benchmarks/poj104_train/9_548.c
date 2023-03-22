#define NUM_ITER 5612

#include <header.h>

int s[100]={0},t[100]={0},n,i,j,m=0;
char ss[100][100];
int cmp(const void *a, const void *b)
{return(*(int *)b-*(int *)a);}
int main_bench() 
{
my_scanf("%d",&n); 
for(i=0;i<n;i++)
my_scanf("%s %d",ss[i],&s[i]);
for(j=0;j<n;j++)
{
	m=0;
	for(i=0;i<n;i++)
		{m=m>s[i]?m:s[i];}
	if(m<60) {break;}
	
	for(i=0;i<n;i++)
	{
		if(s[i]==m) 
		{my_printf("%s\n",ss[i]);
		s[i]=-1;}
		
	}
	
}
	for(i=0;i<n;i++)
	{if(s[i]!=-1)
	{my_printf("%s\n",ss[i]);}
	}
}