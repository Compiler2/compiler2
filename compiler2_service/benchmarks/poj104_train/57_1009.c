#define NUM_ITER 31233

#include <header.h>

int main_bench(){
	int n;
	char s[33];
	int c,i,j,t;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",s);
		c=strlen(s);
		if((s[c-2]=='e'&&s[c-1]=='r')||(s[c-2]=='l'&&s[c-1]=='y')){
			s[c-2]='\0';
		}else{
			s[c-3]='\0';
		}
		my_printf("%s\n",s);
	}
	return 0;
}