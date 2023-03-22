#define NUM_ITER 1175999

#include <header.h>

int main_bench()
{
	int a,i,j,n;
	int b[5],tem[6];
	my_scanf("%d",&a);
	tem[0]=a;
	for(i=0;i<5;i++)
	{
		b[i]=tem[i]%10;
		tem[i+1]=(tem[i]-b[i])/10;
		if(tem[i+1]==0)
		{
			n=i;
			break;
		}
	}
	for(j=0;j<=n;j++)
		my_printf("%d",b[j]);
	return 0;

}