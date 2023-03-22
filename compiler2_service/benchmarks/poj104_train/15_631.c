#define NUM_ITER 481

#include <header.h>

int main_bench()
{
	int x[100][100];
	int a;
	int i,j;
	int a1,b1,a2,b2;
	a1=a2=b1=b2=0;
	int s;
	my_scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			my_scanf("%d",&x[i][j]);
		}
	}
     for(i=0;i<a;i++)
	 {
		 for(j=0;j<a;j++)
		 {
			 if(x[i][j]==0)
			 {
				 a1=i;
				 b1=j;
			 }
		 }
	 }
		 for(i=a-1;i>=0;i--)
		 {
			 for(j=a-1;j>=0;j--)
			 {
				 if(x[i][j]==0)
				 {
					 a2=i;
					 b2=j;
				 }
			 }
		 }
		 s=(b2-b1+1)*(a2-a1+1);
		 my_printf("\n%d\n",s);
		 return 0;
}
	

