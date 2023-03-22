#define NUM_ITER 1475

#include <header.h>

int main_bench()
{
  int n,i,a[100],j,k;
  my_scanf("%d",&n);
  int times[100][20]={0};
  for(i=0;i<n;i++)
  {
  	my_scanf("\n%d",&a[i]);
  	for(j=0;j<a[i];j++)
  	{
  		my_scanf("%d",&times[i][j]);
  	}
  }
  for(i=0;i<n;i++)
  {
  	if(a[i]==0)
  	{my_printf("\n%d",60);}
  	else 
  	{
  		for(j=0;j<a[i];j++)
  	    {
  	    	int b,c,d;
  	    	b=times[i][j]+3*(j+1);
  	    	if(b>=63)
  	    	{
  	    		c=60-(times[i][j-1]+3*j);
  	    		d=times[i][j-1]+c;
  	    		my_printf("\n%d",d);
                           break;
  	    	}
  	    	else if(b>=60){my_printf("\n%d",times[i][j]);break;}
  	    }
  	    if((times[i][a[i]-1]+3*a[i])<60)
  	    {
  	    	k=60-a[i]*3;
  	        my_printf("\n%d",k);
  	    }
  	 }
  }
  return 0;
}