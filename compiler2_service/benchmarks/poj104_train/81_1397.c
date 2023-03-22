#define NUM_ITER 222959

#include <header.h>



int main_bench()
{
	int f(int M[5][5], int p, int q);
	int i=0,j=0,k,n,m,d=0;
	int M[5][5];
	
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&M[i][j]);
	my_scanf("%d %d",&n,&m);

	k=f(M,n,m);
	if(k==0)
		my_printf("error");
	else
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				my_printf("%d",M[i][j]);
				d+=1;
				if(d%5==0)
					my_printf("\n");
                                else my_printf(" ");
			}
		}
	}
	
	return 0;
}

int f(int M[5][5], int p, int q)
{
	int e,i=0,j=0,n,m;

	if(q>=0&&p<5&&p>=0&&q<5)
	{
		
		for(i=0;i<5;i++)
			{
				e=M[p][i];
				M[p][i]=M[q][i];
				M[q][i]=e;
			}
                return 1;
	}
	else return  0;
}