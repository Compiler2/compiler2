#define NUM_ITER 233275

#include <header.h>

int main_bench()
{
	int m,n,i,j,c,a[5][5],temp;
	int compare(int n,int m);
	int (*p)[5];
	p=a;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d%d",&n,&m);
	c=compare(n,m);
	if(c)
	{
		for(j=0;j<5;j++)
		{
			temp=*(*(p+n)+j);
			*(*(p+n)+j)=*(*(p+m)+j);
			*(*(p+m)+j)=temp;
		}
		p=a;
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
				my_printf("%d ",*(*(p+i)+j));
			my_printf("%d\n",*(*(p+i)+j));
		}
	}
	else my_printf("error");
}
int compare(int n,int m)
{
	int c;
	if(n<5&&m<5)
		c=1;
	else c=0;
	return(c);
}





