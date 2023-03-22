#define NUM_ITER 3132

#include <header.h>

int main_bench(){
	char zxc[99];
	int sz[99];
	int m,n,i,t,k;

	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(m=0;m<98;m++){
		sz[m]=0;
	}
		my_scanf("%s",zxc);
		m=strlen(zxc);
		for(t=0;t<m;t++){
			for(k=t+1;k<m;k++){
				if(zxc[t]==zxc[k]){
					sz[t]++;
					sz[k]++;
				}
			}
		}
	
		for(t=0;t<m;t++){
				
			if(sz[t]==0){
				my_printf("%c\n",zxc[t]);
			break;
			}else if(t==(m-1)){
				my_printf("no\n");
			}
		}
	}
	return 0;
}
