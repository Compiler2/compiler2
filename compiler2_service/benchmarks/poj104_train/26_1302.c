#define NUM_ITER 1536363

#include <header.h>

int main_bench(){
    int i,m;                 
    char zfc[1000],jg[1000];
    gets(zfc); 
    m=0;
    for(i = 0; zfc[i]!='\0'; i++){   
    	if(zfc[i]!=' '){
			jg[m]=zfc[i];
			m++;
		}else if(zfc[i]==' '&&zfc[i+1]!=' '){
			jg[m]=zfc[i];
			m++;
		}
	}
			jg[m]='\0';
			my_printf("%s\n",jg);
    return 0;
}
