#include <header.h>

int main_bench()
{
	int f(int n,int m,int (*a)[5]);
	int n,m,a[5][5],i,j,c,d=0;

	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",*(a+i)+j);
		my_printf("\n");
		my_scanf("%d%d",&n,&m);
		c=f(n,m,a);
		if(c==0)my_printf("error");
		else for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			
			 my_printf("%d ",a[i][j]);
			 my_printf("%d\n",a[i][4]);
		}
			
}
     int f(int n,int m,int (*a)[5])
	 {
		 int p,b,i;
		 if((n>=0&&n<5)&&(m>=0&&m<5))
		 {
			 for(i=0;i<5;i++)
			 {
			 p=*(*(a+n)+i);
			 *(*(a+n)+i)=*(*(a+m)+i);
			 *(*(a+m)+i)=p;
			 b=1;
			 }
		 }
		 else b=0;
		 return b;
	 }
