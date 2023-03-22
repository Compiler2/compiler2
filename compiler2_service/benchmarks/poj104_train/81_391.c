#define NUM_ITER 226139

#include <header.h>


int tf(int i,int j)
{
	if (i>4||i<0||j>4||j<0)
		return 0;
	else return 1;
}

int main_bench()
{
	int i,j,m,n,a[5][5],temp;
	int *p=a[0];
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d%d",&m,&n);
   	if (tf(m,n))
	{
		for (i=0;i<5;i++)
		{
			temp=*(p+m*5+i);
			*(p+m*5+i)=*(p+n*5+i);
			*(p+n*5+i)=temp;
		}
		for (i=0;i<5;i++)
		{
			for (j=0;j<4;j++)
				my_printf("%d ",a[i][j]);
			my_printf("%d\n",a[i][4]);
		}
	}
	else my_printf("error");
	return 0;
}

