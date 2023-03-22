#define NUM_ITER 1010426

#include <header.h>

int main_bench()
{
char s[50], w[50];

int i,n,j,flag= 0;
my_scanf("%s %s",w,s);


for (i=0; i+1<=(strlen(s)); i++,flag=0) {
	for(n=0,j=i;w[n]!='\0';n++,j++){
		if(s[j]!=w[n]){
		flag=1;
		break;
		}
	}
	if(flag) 
		continue;
	else{
		my_printf("%d",i);
		break;
		}
}
return 0;
}