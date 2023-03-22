#define NUM_ITER 225561

#include <header.h>

int change(int (*a)[5],int m,int n)
{
	int b,i,temp;
	if(n<0||n>4||m<0||m>4)  b=0;
	else 
	{
		for(i=0;i<5;i++)
		{
         temp=*(*(a+n)+i);
         *(*(a+n)+i)=*(*(a+m)+i);
         *(*(a+m)+i)=temp;
		}
		b=1;
	}
	return b;
}
int main_bench()
{
	int a[5][5],i,j,(*p)[5],m,n,b;
	p=a;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			my_scanf("%d",a[i]+j);
        }
	}
	my_scanf("%d %d",&m,&n);
	b=change(p,m,n);
	if(b)  
		for(i=0;i<5;i++)
	{	
        my_printf("\n");
                 my_printf("%d",a[i][0]);
		for(j=1;j<5;j++)
		{
			my_printf(" %d",a[i][j]);
                   }
            

	}
		else my_printf("\nerror\n");
		return 0;
}


