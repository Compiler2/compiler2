#define NUM_ITER 28056

#include <header.h>

int main_bench()
{
	int i,m,n;
	char s[33];
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
	my_scanf("%s",s);
    n=strlen(s)-1;
	if(s[n]=='g'){
		s[n-2]=0;
		s[n-1]=0;
		s[n]=0;
	}
	else
		s[n-1]=s[n]=0;
	my_printf("%s\n",s);
	}
	return 0;
}