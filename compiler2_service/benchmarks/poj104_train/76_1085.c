#define NUM_ITER 4775

#include <header.h>

int main_bench()
{
	int n,e=0,y=0,c=0,g=0,qs[50000],zz[50000];
	
	my_scanf("%d\n",&n);
	for(int i=0;i<n-1;i++){
		my_scanf("%d %d\n",&(qs[i]),&(zz[i]));
	}
	my_scanf("%d %d",&(qs[n-1]),&(zz[n-1]));
	for(int j=0;j<n;j++){
		if(qs[j]<qs[e]){
			e=j;
		}
	}
	for(int r=0;r<n;r++){
		if(zz[r]>zz[y]){
			y=r;
		}
	}
	for(double x=qs[e];x>=qs[e]&&x<=zz[y];x+=0.1){
		for(int s=0;s<n;s++){
			if(x>=qs[s]&&x<=zz[s]){
				break;
			}
        c+=1;
		}
		if(c==n){
			g=1;
			break;
		}
		else{
			c=0;
		}


	}
	if(g==1){
		my_printf("no");
	}
	else{
		my_printf("%d %d",qs[e],zz[y]);
	}

return 0;
}

