#define NUM_ITER 31

#include <header.h>


const int MAX = 100;

int main_bench()
{
 	int k;
 	int A[MAX][MAX];
 	my_scanf("%d", &k);
 	for(int i = 0; i < k; i++)
	{
	 		int m, n;
	 		my_scanf("%d%d", &m, &n);
	 		for(int i = 0; i < m; i++)
	 		{
			 		for(int j = 0; j < n; j++)
			 		{
					 		my_scanf("%d", &A[i][j]);	
			 		}			 		
	 		}
	 		int sum = 0;
	 		
		 
		 if((m != 1)&&(n != 1))
		 {for(int j = 0; j < n; j++)
	        {
			 		sum += A[0][j];
			  		
            }
            for(int j = 0; j < n; j++)
	        {
			 		sum += A[m - 1][j];	
            }
	 		for(int i = 0; i < m; i++)
	        {
			 		sum += A[i][0];
			  		
            }
	 		for(int i = 0; i < m ; i++)
	        {
			 		sum += A[i][n - 1];
            }	 			 		
            sum = sum - A[0][0] - A[0][n - 1] - A[m-1][0] - A[m-1][n-1];
			}
      
      else
      {
	   	  for(int i = 0; i < m; i++)
	   	  {for(int j = 0; j < n; j++)
	   	  		   sum += A[i][j]; 
		   		  }
	  }
            my_printf("%d\n", sum);
  }
	 	return 0;
}