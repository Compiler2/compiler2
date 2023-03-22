#define NUM_ITER 1319321

#include <header.h>


int main_bench(){
    int len,i,j;
    char sz[400];
    gets(sz);
	len=strlen(sz);
    for(i=0;i<len;i++){	
		if(sz[i]==' '){
			if(sz[i+1]==' '){
				for(j=i+1;j<len;j++){
				   sz[j-1]=sz[j];
				}
				sz[len-1]='\0';
				len--;
			}
			if(sz[i+1]==' '){
			   i--;
			}
		}
    }
	my_printf("%s",sz);
	
     
return 0;
}