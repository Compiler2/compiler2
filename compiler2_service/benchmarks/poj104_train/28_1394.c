#define NUM_ITER 15441

#include <header.h>

int main_bench()
{
	int i,len[300];
	char s[300][100];
	for(i=0;i<300;i++)
		my_scanf("%s",s[i]);
	for(i=0;i<299;i++){
		len[i]=strlen(s[i]);
		if(strcmp(s[i+1],"\0")>0)
			my_printf("%d,",len[i]);
		if(strcmp(s[i+1],"\0")==0){
			my_printf("%d",len[i]);
			break;
		}
	}
	return 0;
}