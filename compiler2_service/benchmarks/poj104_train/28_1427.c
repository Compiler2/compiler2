#define NUM_ITER 1299486

#include <header.h>

int main_bench(){
	char zfc[10000];
	int s,e,num,len,k=0;
	gets(zfc);
	len=strlen(zfc);
	for(s=0;s<len;s++){
		if((s==0)||((zfc[s-1]==' ')&&(zfc[s]!=' '))){
			for(e=s;e<len;e++){
				if(zfc[e+1]==' '||e==len-1){
					break;
				}
			}
			num=e-s+1;
			if(k==0){
				my_printf("%d",num);
				k++;
			}else{
				my_printf(",%d",num);
				k++;
			}
		}
	}
	return 0;
}