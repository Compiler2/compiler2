#define NUM_ITER 1057557

#include <header.h>

char zfc[1000];
int main_bench(){
	int len,sz[300]={0},i,k,cd[300];
	gets(zfc);
	len=strlen(zfc);
	for(i=0,k=1;i<len;i++){
		if(zfc[i-1]==' '&&zfc[i]!=' '){
			sz[k]=i;
			k++;
		}
	}
	for(i=0;i<len-1;i++){
		if(zfc[i]==' ')
			zfc[i]=0;
	}
	for(i=0;i<k-1;i++)
		my_printf("%d,",strlen(&zfc[sz[i]]));
	my_printf("%d",strlen(&zfc[sz[k-1]]));
	return 0;
}
