#include <header.h>

int main_bench(){
	char s[21];
	int n,j,i,c=0,l;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",s);
		l=strlen(s);
		for(j=1;j<l;j++){
			if((s[j]=='_')||(s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')){
				c++;
			}
		}
		if((s[0]=='_')||(s[0]>='a'&&s[j]<='z')||(s[0]>='A'&&s[j]<='Z')){
			c++;
		}
		if(c==l){
			my_printf("yes\n");
		}else{
			my_printf("no\n");
		}
		c=0;
	}
	return 0;
}