#include <header.h>

int main_bench()
{
	int i,j,*p,a[5][5],m,n,s=1,b;
	p=&b;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++) my_scanf("%d",*(a+i)+j);
	}
	my_scanf("%d %d",&m,&n);
	if(m>4||m<0||n>4||n<0) 
	{
		s=0;
		my_printf("error\n");
	}
	else
	{
		for(j=0;j<5;j++)
		{
			*p=*(*(a+m)+j);
			*(*(a+m)+j)=*(*(a+n)+j);
			*(*(a+n)+j)=*p;
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++) my_printf("%d%c",*(*(a+i)+j),(j==4)?'\n':' ');
		}
	}
	return s;
}



