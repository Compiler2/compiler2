#define NUM_ITER 226554

#include <header.h>

int main_bench()
{
	int a[5][5],m,n,i,j,(*p)[5],temp;
	p=a;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			my_scanf("%d",(*(p+i)+j));
	}
    my_scanf("%d %d",&m,&n);
	if(n>4||n<0||m>4||m<0) my_printf("error\n");
	else{
	for(i=0;i<5;i++)
	{
		temp=*(*(p+m)+i);
		*(*(p+m)+i)=*(*(p+n)+i);
		*(*(p+n)+i)=temp;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			if(j==0) my_printf("%d",*(*(p+i)+j));
			else my_printf(" %d",*(*(p+i)+j));
		my_printf("\n");
	}
	}
	return 0;
}