#define NUM_ITER 37977

#include <header.h>

int count[30],hgt[30],n,i,j,max,temp;
void m(int s,int t);
int main_bench()
{
	for(i=1;i<=25;i++){
		count[i]=0;
	}
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d",&hgt[i]);
		count[1]=1;
	}
	for(i=2;i<=n;i++){
		temp=0;
		for(j=1;j<i;j++){
			if(hgt[i]<=hgt[j]){
				if(temp<count[j]){
					temp=count[j];
				}
			}
		}
		count[i]=temp+1;
	}
	max=0;
	for(i=1;i<=n;i++){	
		if(max<count[i]){
			max=count[i];
		}
	}
	my_printf("%d\n",max);
}