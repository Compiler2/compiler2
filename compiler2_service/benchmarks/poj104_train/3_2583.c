#include <header.h>

int main_bench(){
    int i,j,n,k;
    my_scanf("%d%d",&n,&k);
    int num[1500],sz[1500];
    for(i=0;i<n;i++){
		my_scanf("%d",&(num[i]));
		sz[i]=num[i];
    }
    for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(num[i]+sz[j]==k){
				my_printf("yes");
				break;
			}
				if((i==n-1)&&(j==n-1)){
					my_printf("no");
				}
			
		}
		if(num[i]+sz[j]==k){
				break;
			}
    }
    return 0;
}  