#define NUM_ITER 39760

#include <header.h>

int main_bench()
{
	int n,i,max=0;
	int x=0;
	int sz[100],sc[100];
	my_scanf("%d",&n);

	for(i=0;i<n;i++)
	{
      my_scanf("%d%d",&sz[i],&sc[i]);
	}


		for(i=0;i<n;i++)
		{
             if(sz[i]>=90&&sz[i]<=140&&sc[i]>=60&&sc[i]<=90){
		     x=x+1;
	
			 }
			 else{
		        if(x>max){
				 max=x;
				 x=0;
				}
				else{
					x=0;
				}
			
			 }
			 
		}
 
		if(x>max){
			max=x;
		}

        my_printf("%d",max);
	
	return 0;
}
