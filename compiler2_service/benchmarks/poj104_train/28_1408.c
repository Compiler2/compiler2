#define NUM_ITER 841756

#include <header.h>

int main_bench(){
	char str[1000];
	int i,len,k,sz[1000]={0};
	gets(str);
	len=strlen(str);
	for(i=0,k=1;i<len;i++){
		if(str[i-1]==' '&&str[i]!=' '){
        sz[k]=i;
		k++;
	
	}}
	for(i=0;i<len;i++){
		if (str[i]==' '){
			str[i]=0;
		}
	}

	for(i=0;i<k-1;i++){
		my_printf("%d,",strlen(&str[sz[i]]));}
	my_printf("%d",strlen(&str[sz[k-1]]));
 return 0;
}