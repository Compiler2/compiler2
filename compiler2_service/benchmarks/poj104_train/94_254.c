#define NUM_ITER 5032

#include <header.h>

int main_bench()
{ 
    int sz[500];
	int N,i,j,k,m,n;
	int a=0;
	my_scanf("%d",&N);
	for(i=0;i<N;i++){
	my_scanf("%d",&(sz[i]));
	}
	for(i=0;i<N;i++){
	if(sz[i]%2!=0){
		a=a+1;
	}
	}
		for(j=N-1;j>=0;j--){
			for(k=0;k<j;k++){
				if(sz[k]>sz[k+1]){
		int t;
		t=sz[k+1];
		sz[k+1]=sz[k];
		sz[k]=t;
				}
		}
	}
	m=0;
	for(n=0;n<N;n++){
		if(sz[n] % 2 != 0 )
		{
			m++;
			if( m < a )
			   my_printf("%d,",sz[n]);
			else
			{
				my_printf("%d",sz[n]);
				break;
			}
		}
	}
	
	return 0;
}

