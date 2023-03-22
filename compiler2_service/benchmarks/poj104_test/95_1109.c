#define NUM_ITER 195102

#include <header.h>

int main_bench()
{
	char s[81],b[81];
	int i;
	gets(s);
	gets(b);
	for(i=0;i<=80;i++)
	if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]-'A'+'a';
    
	 for(i=0;i<=80;i++)
	if(b[i]>='A'&&b[i]<='Z') b[i]=b[i]-'A'+'a';
	
    if(strcmp(s,b)>0) my_printf(">");
    if(strcmp(s,b)<0) my_printf("<"); 
    if(strcmp(s,b)==0) my_printf("=");
return 0;
}