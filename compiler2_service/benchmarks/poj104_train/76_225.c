#define NUM_ITER 36

#include <header.h>

int main_bench()
{
	int n,i,x,y,j,k=0,p,q,l=0;
	int a[10000]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&x,&y);
		for(j=0;j<10000;j++){
			if(j<=y-1&&j>=x){
				a[j]=1;
			}
		} 
	}
	for(j=0;j<10000;j++){
		if(a[j]==1){
			k++;
			if(k==1){
				p=j;
			}
			if(a[j+1]==0){
				q=j;
				l++;
				break;
			}
		}
	}
	for(j=q+1;j<10000;j++){
		if(a[j]==1){
			l++;
		}
	}
	if(l==1){
		my_printf("%d %d",p,q+1);
	}else{
		my_printf("no");
	}
	return 0;
}
