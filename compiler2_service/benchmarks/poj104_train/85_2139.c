#include <header.h>

int main_bench(){
	int n,i,k,m;
	char s[21];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",s);
		m=0;
		for(k=0;s[k]!='\0';k++){
			if(s[0]!='0'&&s[0]!='1'&&s[0]!='2'&&s[0]!='3'&&s[0]!='4'&&s[0]!='5'&&s[0]!='6'&&s[0]!='7'&&s[0]!='8'&&s[0]!='9'&&s[k]>='A'&&s[k]<='Z'||s[k]>='a'&&s[k]<='z'||s[k]>='0'&&s[k]<='9'||s[k]=='_')
			    m++;
		}
		if(m==k)
	    	my_printf("yes\n");
		else
			my_printf("no\n");
	}
	return 0;
}