#define NUM_ITER 1180

#include <header.h>

int main_bench()
{
  int n,i;
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    int m,j;
	my_scanf("%d",&m);
	 int *a=(int*)malloc(sizeof(int*)*m);
	for(j=0;j<m;j++)
    {
	  my_scanf("%d",&a[j]); 				
    }
    if(m==0)
    {
	  my_printf("60\n"); 		
    }
    else if(m==1)
    {
	  if(a[0]<=57)
	  {
	    my_printf("57\n");				
	  }
	  else
	  {
	  	my_printf("%d\n",a[0]);   
      } 	 
    }
    else if(m>1)
    {
      for(j=0;j<m-1;j++)
      {
	    if((a[m-1]+3*m)<=60)
	    {
		  int e=60-3*m;
		  my_printf("%d\n",e); 
		  break;				  
	    }
	    if((a[m-1]+3*m)>60)
		{
	      if((a[j]+3*(j+1))<=60&&(a[j+1]+3*(j+2))>60)
		  {
		    if((a[j+1]+3*(j+1))>60)
		    {
		      int e=60-3*(j+1);
			  my_printf("%d\n",e); 						 
		    }
		    else
		    {
		      my_printf("%d\n",a[j+1]); 	  
	        } 										   
	      }
	    } 				
      }
    }
    free(a); 				  
  }
  return 0;	   
}