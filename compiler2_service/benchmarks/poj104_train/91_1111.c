#define NUM_ITER 1419041

#include <header.h>

int main_bench()
{
	int n,i;
	char zf1[10000],zf2[10000];
	gets(zf1);
	for(i=0;;i++){
		if(zf1[i+1]=='\0'){
			zf2[i]=zf1[0]+zf1[i];
			zf2[i+1]='\0';
			break;
		}
		zf2[i]=zf1[i]+zf1[i+1];
	}
	for(i=0;;i++){
		if(zf2[i]=='\0')break;
		my_printf("%c",zf2[i]);
	}
	return 0;
}
