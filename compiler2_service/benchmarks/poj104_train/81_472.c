#include <header.h>


int main_bench()
{
int a[5][5],i,j,k,m,n;
  for(i=0;i<5;i++)
	  for(j=0;j<5;j++)
         my_scanf("%d",&a[i][j]);
my_scanf("%d%d",&m,&n);
int change(int m,int n);
   if(change(m,n))
	{ for(i=0;i<5;i++)
	 {
		 k=a[m][i];a[m][i]=a[n][i];a[n][i]=k;
	 }
	 for(i=0;i<5;i++)
	 {
		 for(j=0;j<4;j++)
         my_printf("%d ",a[i][j]);
		 my_printf("%d",a[i][4]);
		 my_printf("\n");
	 }
	}
   else
	   my_printf("error");
}

int change(int m,int n)
{
	if(m<5&&n<5)
		return(1);
	else 
		return(0);
}