#define NUM_ITER 217236

#include <header.h>

int main_bench()
{
    int shuzu[5][5];
	int i,k;
	for(i=0;i<5;i++){
		for(k=0;k<5;k++){
			my_scanf("%d",&shuzu[i][k]);
		}
	}
    int a,n,m;
	my_scanf("%d %d",&n,&m);
	if(n<5&&m<5){
        a=1;
	}else{
		a=0;
	}
	if(a==0){
		my_printf("error");
	}
	if(a==1){
		int shu[5];
		for(i=0;i<5;i++){
			shu[i]=shuzu[n][i];
			shuzu[n][i]=shuzu[m][i];
			shuzu[m][i]=shu[i];
		}
	    for(i=0;i<5;i++){
		    for(k=0;k<4;k++){
			    my_printf("%d ",shuzu[i][k]);
			}
	     	if(k==4){
			    my_printf("%d\n",shuzu[i][4]);
			}
		}
	}
	return 0;
}