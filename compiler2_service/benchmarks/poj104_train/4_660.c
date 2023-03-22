#define NUM_ITER 572

#include <header.h>

int main_bench()
{
	int R,C,i,j,k,l,m,n;
	int a[100][100];
	my_scanf("%d %d",&R,&C);
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			my_scanf("%d",&a[i][j]);
		}
	}
	for(j=0;j<C;j++)
	{   
		i=0;
		while(i<=j)
		{ 
			k=j-i;
			my_printf("%d\n",a[i][k]);
			i++;
			if(i>R-1){break;}
		}
	}
	for(l=C;l<R+C-1;l++)
	{
       m=l-C+1;
	   while(m<=l)
	   {
           n=l-m;
		   my_printf("%d\n",a[m][n]);
		   m++;
		   if(m>R-1) {break;}
	   }
	}
	return 0;
}

