#define NUM_ITER 1282

#include <header.h>

int main_bench(){
	int n,m,i,j,flag=0,a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&m);
		int*shzu=(int*)malloc(sizeof(int)*m);
		for(j=0;j<m;j++){
			my_scanf("%d",&shzu[j]);
		}
		if(m==0){
			my_printf("%d\n",60);
		}
		else{
            for(j=m-1;j>=0;j--){
				flag=0;
			    if((shzu[j]+3*j<=60)&&((60-3*j-shzu[j])<=3)){
				    a=shzu[j];
				    flag=1;
				}
			    if((60-3*j-shzu[j])>3){
				    a=60-3*(j+1);
				    flag=1;
				}
		    	if(flag==1){
				    my_printf("%d\n",a);
				    break;
				}
			}
		}
		free(shzu);
	}
	return 0;
}