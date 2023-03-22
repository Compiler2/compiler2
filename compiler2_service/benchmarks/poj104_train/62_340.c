#define NUM_ITER 1341359

#include <header.h>

int main_bench(){
char s[201];
int k,i,j,m,n;
gets(s);
k=strlen(s);
for(i=0;i<k;i++){
	if(s[i]==' '&&s[i+1]==' '){
		for(m=i+1;m<k;m++){
			s[m]=s[m+1];
			i--;
		}
	}
    else continue;
}
my_printf("%s", s);

return 0;
}
