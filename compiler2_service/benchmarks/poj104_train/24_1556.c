#define NUM_ITER 1144320

#include <header.h>

int main_bench(){
char h[1000];
int a,b=0,c=1000,i1,i2,j1,j2,i,len;
gets(h);
len = strlen(h);
int j=-1;
for(i=0;i<len + 1;i++){
	if((h[i]==' ')||(h[i]==',')||(h[i]=='\0')) {
			a=i-j-1;
			if (a > 0) {
        if(a>b){
			b=a;i1=i;j1=j;
		}
		if(a<c){
			c=a;i2=i;j2=j;
		}
			}
		j=i;
		}
	}
	for(i=j1+1;i<i1;i++){
		my_printf("%c",h[i]);
	}
	my_printf("\n");
	for(i=j2+1;i<i2;i++){
		my_printf("%c",h[i]);
	}
	my_printf("\n");
	return 0;
}
