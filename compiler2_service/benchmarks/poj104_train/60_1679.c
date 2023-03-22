#define NUM_ITER 4631

#include <header.h>

int pdss(int number);
int main_bench(){
	int i;
	int n,u,v,w;
	int m=0;


	my_scanf("%d",&n);
	
	for(i=3;i<=n-2;i++){
		u=pdss(i);
		if(u==1){
			v=i+2;
			w=pdss(v);
			if(w==1){
				m=1;

				if(i==3){
					my_printf("%d %d",i,v);
				}
				else if (i!=3){
						my_printf("\n%d %d",i,v);
				}
			}
			i=i+1;
		}
		
	}
	if(m==0){
		my_printf("empty");
	}


		        
	return 0;
}

	int pdss(int a){
		int j;
		int count;
		count=0;
		for(j=2;j<a;j++){
			if(a%j==0){
				count++;
			}
		}
		if (count==0){
			return 1;
		}
		else if(count>0){
			return 0;
		}
	}
