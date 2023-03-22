#define NUM_ITER 34308

#include <header.h>

int main_bench(){
	int i,j,n,m;
	char s[33];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",&s);
		m=strlen(s);
		if(s[m-1]=='g'){
			s[m-3]='\0';
			my_printf("%s\n",s);
		}else if(s[m-1]=='y'){
			s[m-2]='\0';
			my_printf("%s\n",s);
		}else if(s[m-1]=='r'){
			s[m-2]='\0';	
			my_printf("%s\n",s);
		}
	}
	return 0;
}