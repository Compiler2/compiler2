#define NUM_ITER 218680

#include <header.h>

int judge(int m,int n);
int main_bench(){
	int m,n,i,j,array[5][5],tmp;
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			my_scanf("%d",&(array[i][j]));
	my_scanf("%d%d",&m,&n);
	if (judge(m,n))
	{
		for (i=0;i<5;i++)
			{
			tmp=array[m][i];
			array[m][i]=array[n][i];
			array[n][i]=tmp;
			}
		for (i=0;i<5;i++)
		{
			for (j=0;j<4;j++)
				my_printf("%d ",array[i][j]);
			my_printf("%d\n",array[i][4]);
		}
	}
		else my_printf("error");
	return 0;
}
int judge(int m,int n)
{
	if ((m<5)&&(n<5))
		return 1;
	else return 0;
}

