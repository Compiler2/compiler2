#define NUM_ITER 5103

#include <header.h>

int main_bench()
{   
	int k;
	int n;
	my_scanf("%d",&n);
	int flag=0;
	int sz[1000];
    int e;
	int i;
	for(i=0;i<=n-1;i++){
		my_scanf("%d", &sz[i]);
	   }
    for(int a=1 ; a<=n ; a++){
		for(int i=0; i<n-a; i++){
			if(sz[i]>sz[i+1]){
				e=sz[i+1];
				sz[i+1]=sz[i];
				sz[i]=e;
			}
		}
	}
	
	for(int b=0;b<=n;b++ ){
		if(sz[b]%2!=0){
			
			if(flag==1)
				my_printf(",%d",sz[b]);
			else
			{
				my_printf("%d",sz[b]);
				flag=1;
			}
		}
	}
	return 0;
}