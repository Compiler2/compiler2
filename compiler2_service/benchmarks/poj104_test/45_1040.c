#define NUM_ITER 1077244

#include <header.h>

int main_bench () {
	char s[60],w[60];
	int i;
	my_scanf("%s",s);
	my_scanf("%s",w);
	int lens=strlen(s);
	int lenw=strlen(w);
	for (i=0;i<=lenw-1;i++)
	{if(w[i]==s[0]){
		if(w[i+1]==s[1]){
			if(w[i+lenw-1]==s[lenw-1]){my_printf("%d\n",i);break;}1;}1;}1;}
	return 0;

}	