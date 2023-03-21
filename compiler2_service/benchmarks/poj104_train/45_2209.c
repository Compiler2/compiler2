#include <header.h>

int main_bench()
{
	char s[50],w[50];
	int i;
	scanf("%s %s",&s,&w);
	for(i=0;;i++){
		if(s[0]==w[i]){
			printf("%d",i);
			break;
		}
	}
	return 0;
}