#define NUM_ITER 4

#include <header.h>

int main_bench(){
	int t,i,j,k,sz[100005],bz=0,bz2=0;
	char zfc[100005];
	my_scanf("%d",&t);
	for(i=1;i<=t;i++){
		for(j=0;j<=100004;j++){
			sz[j]=0;
		}
		bz=0;
		bz2=0;
		my_scanf("%s",zfc);
		for(j=0;j<strlen(zfc);j++){
			for(k=j;k<strlen(zfc);k++){
				if(zfc[j]==zfc[k]) sz[j]++;
			}
		}
		for(j=0;j<strlen(zfc);j++){
			if(sz[j]==1){
				bz=0;
				for(k=0;k<=j;k++){
					if(zfc[j]==zfc[k]) bz++;
				}
				if(bz==1){
					my_printf("%c\n",zfc[j]);
					bz2=1;
					break;
				}
			}
		}
		if(bz2==0) my_printf("no\n");
	}

	my_scanf("%d",&t);
	return 0;
}