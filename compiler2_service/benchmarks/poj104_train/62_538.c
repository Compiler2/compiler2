#define NUM_ITER 145726

#include <header.h>

int main_bench(){
	char a[100];
	int b[100]={0};
    int i,j;
	my_scanf("%c",&a[0]);
    for(i=1;;i++){
            my_scanf("%c",&a[i]);
            if(a[i]==' '){
                       if(a[i-1]==' '){
                                   b[i]=1;
                                   }
                                   }
            if(a[i]=='\n')
            break;
            }
    for(j=0;j<i;j++){
                     if(b[j]==0){
                                 my_printf("%c",a[j]);
                                 }
                                 }
                                 
     my_scanf("%d",&i);       
            
return 0;}
