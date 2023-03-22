#define NUM_ITER 5139

#include <header.h>

int main_bench(){
    int sz[500];
	int i,r,s;
	int N;
	int e;
	my_scanf("%d",&N);
		for(i=0;i<N;i++){
			my_scanf("%d",&sz[i]);
		}
		for(r=0;r<N;r++){
			if(sz[r]%2==0){
				sz[r]=0;
			}
		}
		
		for(s=1;s<=N;s++){
		
			for(int q=0;q<N-s;q++){
				if(sz[q]>sz[q+1]){
					e=sz[q+1];
					sz[q+1]=sz[q];
					sz[q]=e;
				}
			}
		}
		for(int y=0;y<N-1;y++){
			if(sz[y]!=0){
				my_printf("%d,",sz[y]);
			}
			
		}
	
		my_printf("%d",sz[N-1]);
		
		return 0;
}

