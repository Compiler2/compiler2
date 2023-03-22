#define NUM_ITER 855425

#include <header.h>

int main_bench(){
    char su[100],zu[100],tu[100];
    gets(su);
    gets(zu);
    gets(tu);
    int i,j,k,t;
    for(i=0;i<strlen(su);i++){
		for(k=0,j=i;su[j]==zu[k];j++,k++)
    if(k==strlen(zu))
    break;
    if(k==strlen(zu))
    break;
    }
    
	if(j!=i-1){
    for(t=0;t<i;t++)
    my_printf("%c",su[t]);
    my_printf("%s",tu);
    for(t=j;t<strlen(su);t++)
		my_printf("%c",su[t]);}
	else
		my_printf("%s",su);
    return 0;
    } 
