#define NUM_ITER 4185

#include <header.h>

int main_bench()
{
   int n,a[5001],b[5001],i,j,m;
   m=0;
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       my_scanf("%d%d",&(a[i]),&(b[i]));
   }

   for(i=1;i<n;i++)   
   
   {
         for(j=0;j<n-i;j++)
         {
                if(a[j]>a[j+1])
                {
                         int e;
                         e=a[j];
                         a[j]=a[j+1];
                         a[j+1]=e;
                         e=b[j];
                         b[j]=b[j+1];
                         b[j+1]=e;
                }
         }
   }

  for(i=1;i<n;i++) 
  
  {
	  for( j = 0; j < i; j++ )  
	  {
             if(b[j] >= a[i])  
                 break;
	  }
	  if( j == i )   
	  
	  {
		  break;  
		  
		  
	  }
  }

  if( i == n )  
  {
	  int max = b[0]; 
	  for( j = 1; j < n; j++ )
	  {
         if( b[j] > max )
			 max = b[j];
	  }
      my_printf("%d %d",a[0],max);
  }
  else
  {
          my_printf("no");
  }
  return 0;
}