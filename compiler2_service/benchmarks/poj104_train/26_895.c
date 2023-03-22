#define NUM_ITER 1507816

#include <header.h>

int main_bench(){
	int a=0,i,n;
	char A[101];
	gets(A);
    for(i=0;A[i]!='\0';i++){
		if(A[i]!=' '){my_printf("%c",A[i]);}
		if(A[i]==' '){
		   my_printf(" ");
		   for(n=i;A[n]==' ';n++){
			   i=n;    } 
		}
		}
return 0;
}