#define NUM_ITER 1234505

#include <header.h>

int main_bench(){
    int m1,i;
	char zfc1[200];
	char zfc2[200];
	gets(zfc1);
	m1=strlen(zfc1);
	for(i=0;i<m1-1;i++){
		zfc2[i]=zfc1[i]+zfc1[i+1];
	}
	zfc2[m1-1]=zfc1[m1-1]+zfc1[0];
	for(i=0;i<m1;i++){
		my_printf("%c",zfc2[i]);
	}
	return 0;
}