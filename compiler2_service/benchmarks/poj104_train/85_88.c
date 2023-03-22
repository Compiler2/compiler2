#include <header.h>

int legal(char s[20])
{
	int i;
	
	if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||s[0]=='_'){
	    for(i=0;s[i]!='\0';i++){
		    if(!((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||s[i]=='_'||(s[i]>='0'&&s[i]<='9')))
				
			return 0;
		}
		return 1;
	}
	else 	
	    return 0;

}
int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
		char s[20];
	for(i=0;i<n;i++){
		my_scanf("%s",s);
		if(legal(s)==1)
			my_printf("yes\n");
		else
			my_printf("no\n");
		}
    return 0;
}

