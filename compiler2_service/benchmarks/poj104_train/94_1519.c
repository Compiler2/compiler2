#define NUM_ITER 4301

#include <header.h>

                                         
int main_bench()
{
	int sz[500],n,a,i;
	my_scanf("%d",&n);
    for(int i=0;i<n;i++)
		my_scanf("%d",&sz[i]);
	for(i=0;i<n;i++){
		if(sz[i]%2==0)
			sz[i]=0;
		else 
			sz[i]=sz[i];
	
	}
	for(int k=1;k<n;k++){
        for(i=0;i<n-k;i++){
            if(sz[i]>=sz[i+1]){
                a=sz[i];
			    sz[i]=sz[i+1];
			    sz[i+1]=a;
			}
		}
	}
 

    for(i=0;i<n;i++){
		if(sz[i]!=0)
		{	my_printf("%d",sz[i]);
			break;
        }	
	}
	for(int j=i+1;j<n;j++){
		if(sz[j]!=0)
			my_printf(",%d",sz[j]);
    }
return 0;
} 
