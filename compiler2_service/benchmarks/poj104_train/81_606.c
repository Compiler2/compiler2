#define NUM_ITER 233170

#include <header.h>

int n,m;
int jiaohuan(int str[5][5])
{ 
	int i,j,t;
  if(n<5&&m<5)
  {for(i=0;i<5;i++)
  {t=str[m][i];str[m][i]=str[n][i];str[n][i]=t;}
 return 1;}
  else return 0;
}

int main_bench()
{
	int str[5][5],i,j;
	for(i=0;i<5;i++)
	{for(j=0;j<5;j++)
	{my_scanf("%d",&str[i][j]);}
	}
	my_scanf("%d %d",&n,&m);
    if(jiaohuan(str)==1)
	{for(i=0;i<5;i++)
	{for(j=0;j<5;j++)
	{if(j==0){my_printf("%d",str[i][j]);}
	else{my_printf(" %d",str[i][j]);}}
	my_printf("\n");}
	}
    if(jiaohuan(str)==0){my_printf("error");}
}

  