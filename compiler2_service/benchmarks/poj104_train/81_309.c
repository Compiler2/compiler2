#define NUM_ITER 233487

#include <header.h>

int main_bench()
{
     int i,j,n,m;int a[5][5],zz;
     for(i=0;i<5;i++)
	 {   for(j=0;j<5;j++)
            my_scanf("%d",&a[i][j]);
	 }
     my_scanf("%d %d",&n,&m);
     
	 if(n>=0&&n<5&&m>=0&&m<5)
	 {
        for(i=0;i<5;i++)
		{
			zz=a[n][i];a[n][i]=a[m][i];a[m][i]=zz;
		}
		for(i=0;i<5;i++)
		{
           for(j=0;j<5;j++)
		   {
             my_printf("%d",a[i][j]);
             if(j<4) my_printf(" ");
		   }
         my_printf("\n");
		}
	 }
     else my_printf("error\n");	 
}
