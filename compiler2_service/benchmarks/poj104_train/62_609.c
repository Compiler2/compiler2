#define NUM_ITER 1358761

#include <header.h>

int main_bench()
{ 
	int l,i;
	char s[300];
gets(s);
l=strlen(s);
for(i=0;s[i]!='\0';i++){
if(s[i]!=32) my_printf("%c",s[i]);
if(s[i]==32&&s[i+1]!=32) my_printf("%c",s[i]);

}


	return 0;
}