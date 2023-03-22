#define NUM_ITER 235158

#include <header.h>

int main_bench()
{int shuz[5][5];
int i,j;
for(i=0;i<5;i++)
for(j=0;j<5;j++)
my_scanf("%d",&shuz[i][j]);
int m,n;
int f(int m,int n);
my_scanf("%d%d",&m,&n);
if(f(m,n)==0) my_printf("error");
else if(f(m,n)==1) 
{
	int s[5];
	for(i=0;i<5;i++)
	{
		s[i]=shuz[m][i];
		shuz[m][i]=shuz[n][i];
		shuz[n][i]=s[i];
	}

for(i=0;i<5;i++)
{for(j=0;j<5;j++)
{my_printf("%d",shuz[i][j]);if(j!=4) my_printf(" ");}
if(i!=4) my_printf("\n");
}}
}
int f(int m,int n)
{if(m>=0&&m<=4&&n>=0&&n<=4) return 1;
else return 0;
}

