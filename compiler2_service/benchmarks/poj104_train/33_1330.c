#include <header.h>

int main_bench(){
    int i,j,n;                 
	char zfc[256],jg[256];
    my_scanf("%d", &n);             
    for (i = 0; i < n; i++) {   
        my_scanf("%s", zfc); 
			for (j = 0; zfc[j]!='\0'; j++){
			 if (zfc[j]=='A'){
				 jg[j]='T';
			 } else if(zfc[j]=='T'){
				 jg[j]='A';
			 } else if(zfc[j]=='C'){
				 jg[j]='G';
			 } else {
				 jg[j]='C';
			 } 
			}
			jg[j]='\0';
			my_printf("%s\n",jg);
		 }
  
    return 0;
}

