#include <header.h>

main_bench()
{
  int n,i,k;
  int num=0;
  my_scanf("%d",&n);
  int *shuzu=(int*)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
  {
    my_scanf("%d",&shuzu[i]); 				  
  }
  my_scanf("%d",&k);
  for(i=0;i<n;i++)
  {
    if(shuzu[i]==k)
	{
	  num++; 			   
	} 				  
  }
  num=n-num;
 for(i=0;i<n;i++)
  {
    if(shuzu[i]!=k)
	{
	  num--;
	  if(num>0)
	  {
	    my_printf("%d ",shuzu[i]); 		   
	  }
	  if(num==0)
	  {
	    my_printf("%d",shuzu[i]); 			
      }		   
	} 				  
  } 
  free(shuzu);
  return 0;
}