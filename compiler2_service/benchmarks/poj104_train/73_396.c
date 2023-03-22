#define NUM_ITER 171255

#include <header.h>

 
int main_bench()
{
 int a[6][6];
 int i , j ;
 int k , m ;            
 int flag;
 flag = 0;
 for( i = 1 ; i <= 5 ; i ++)
	for( j = 1 ; j <= 5 ; j++)
		my_scanf("%d",&a[i][j]);
 
 for(i = 1 ; i <= 5 ; i ++)
 {	
	for(j = 1 ; j <= 5 ; j++)
	{
		for(k = 1 ; k <= 5 ; k ++)
		{
			if(a[i][k] > a[i][j]) break;
		}
     	        if(k == 6)
		{
			for(m = 1 ; m <= 5 ; m ++)
			{
				if(a[m][j] < a[i][j]) break;
			}
			if(m == 6)
			{	
				my_printf("%d %d %d",i,j,a[i][j]);
				flag = 1;
			}
		}
	}
 }
	if(flag == 0)
	my_printf("not found");
	return 0;
}
