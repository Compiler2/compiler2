#define NUM_ITER 477

#include <header.h>

int main_bench()
{   int m,n,i,j,t=0;
    int a[500];
	my_scanf("%d",&m);
	for(j=1;j<=m;j++){
		for(i=0;i<500;i++){
			a[i]=0;
		}
		my_scanf("%d",&n);
		if(n==0){
			my_printf("60\n");
		}
		else{
			for(i=0;i<n;i++){
				my_scanf("%d",&a[i]);
			}
			for(i=0;i<n;i++){
				if(a[i]+3*(i+1)>60){
					t=1;
					if(a[i]+3*i<60){
						my_printf("%d\n",a[i]);
					}
					else{
						my_printf("%d\n",60-3*i);
					}
					break;
				}
			}
			if(t==0){
				my_printf("%d\n",60-3*n);
			}
			t=0;
		}
	}
	return 0;
}