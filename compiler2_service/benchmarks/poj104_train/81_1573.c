#define NUM_ITER 216376

#include <header.h>

int ar(int n,int m);
int main_bench()
{
	int a,b,t,A[5][5],i,j;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			my_scanf("%d",&A[i][j]);
		}
	my_scanf("%d%d",&a,&b);
	if(ar(a,b)==1)
	{
        for(j=0;j<5;j++)
		{
			t=A[a][j];
            A[a][j]=A[b][j];
            A[b][j]=t;
		}
	    for(i=0;i<5;i++)
		{
		   for(j=0;j<5;j++)
		   {
			my_printf("%d",A[i][j]);
			if(j!=4)
			{
				my_printf(" ");
			}
		   }
		   my_printf("\n");
		}
	}
	else
		my_printf("error");
}
int ar(int n,int m)
{
	int c;
	if(n<5&&m<5)
		c=1;
	else
		c=0;
	return(c);
}