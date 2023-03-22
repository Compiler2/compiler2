#define NUM_ITER 1126947

#include <header.h>

int main_bench(){
	char dc[3000];
	gets(dc);
	int len;
	len=strlen(dc);
	int i,sz[300]={0},j=0,k=1;
	for(i=0;i<len;i++){
		if(dc[i]!=32){
			sz[j]++;
		}
		if(dc[i]==32){
			j++;
		    do{
			    if(dc[i+1]==32){
				    i++;
				}
			} 
		    while(dc[i+1]==32);
		}
	}
	for(i=0;i<len;i++){
		if(dc[i]==' '){
			k++;
		    do{
			    if(dc[i+1]==32){
				    i++;
				}
			}
		    while(dc[i+1]==32);
		}
	}
	for(i=0;i<k;i++){
		if(i!=k-1){
		    my_printf("%d,",sz[i]);
		}
		else{
			my_printf("%d",sz[i]);
		}
	}
	return 0;
}





    


		


