#include <header.h>

int main_bench(){
	int i,m,j,n;
	char s[256];
	my_scanf("%d",&n);
	for(j=0;j<n;j++){
	    my_scanf("%s",s);
    	m=strlen(s);
    	for(i=0;i<m;i++){
			if(s[i]==65){
				s[i]=84;
				my_printf("%c",s[i]);
				continue;
			}
			if(s[i]==84){
				s[i]=65;
				my_printf("%c",s[i]);
				continue;
			}
			if(s[i]==67){
				s[i]=71;
				my_printf("%c",s[i]);
				continue;
			}
			if(s[i]==71){
				s[i]=67;
				my_printf("%c",s[i]);
				continue;
			}
		}
		my_printf("\n");
	}
    return 0;
}
