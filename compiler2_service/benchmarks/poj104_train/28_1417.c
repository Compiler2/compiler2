#define NUM_ITER 1520090

#include <header.h>

int main_bench()
{
	char a[10000];
	int i,len=0;
	gets(a);
	for(i=0;a[i]!='\0';i++){
        if(a[i]!=' '){
            len++;
		}
		else {
			if(len!=0){
			my_printf("%d,",len);
            len=0;
		}}
	}
	my_printf("%d",len);
	return 0;
}