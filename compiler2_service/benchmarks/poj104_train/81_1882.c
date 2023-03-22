#define NUM_ITER 234251

#include <header.h>

int main_bench()
{
	int a[5][5],m,n;
	int i,j,num1=0,num2=0,temp;
	for(i=0;i<5;i++)
	{  
		for(j=0;j<5;j++)
		{  my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d%d",&n,&m);
	if(n>=0 && n<=4)  num1++;
	if(m>=0 && m<=4)  num2++;
   if(num1==0||num2==0)
	   my_printf("error");
   else if(num1!=0 && num2!=0)
   {   
	   for(i=0;i<5;i++)
	   {    temp=a[n][i];
	         a[n][i]=a[m][i];
			 a[m][i]=temp;
	   }
       for(i=0;i<5;i++)
	   {  
	     for(j=0;j<4;j++)
		 {    my_printf("%d ",a[i][j]);
		 }
	   my_printf("%d\n",a[i][4]);
	   }
   }
   return 0;
}