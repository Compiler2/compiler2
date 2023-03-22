#include <header.h>


int main_bench()
{
	int str[5][5],i,j,m,n;
	int (*p)[5]=str,k;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",*(p+i)+j);
	my_scanf("%d %d",&m,&n);
	if(!(m>=0&&m<=4&&n>=0&&n<=4)) my_printf("error\n");
	else
	{
		for(i=0;i<5;i++)
	   {
		   if(i==n) k=m;
		   else if(i==m) k=n;
		   else k=i;
		   for(j=0;j<4;j++)
			   my_printf("%d ",*(*(p+k)+j));
		   my_printf("%d",*(*(p+k)+j));
		   my_printf("\n");

	   }
	}
	return 0;
	
}
