#define NUM_ITER 204050

#include <header.h>

int(*p)[5],m,n,i,j,temp,c; 
int trans()
{
	p=(int(*)[5])calloc(5,5*sizeof(int));
    for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",*(p+i)+j);
    my_scanf("%d%d",&m,&n);
	if(m<5 && n<5)
	{
		for(j=0;j<5;j++)
		{temp=*(*(p+m)+j);
         *(*(p+m)+j)=*(*(p+n)+j);
         *(*(p+n)+j)=temp;
		}
		return 1;
	}
	else return 0;
}
int main_bench()
{   
    c=trans();
	if(c)
	{
        for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
		       my_printf("%d ",*(*(p+i)+j));
	        my_printf("%d\n",*(*(p+i)+4));
        }
	}
	else my_printf("error");
}