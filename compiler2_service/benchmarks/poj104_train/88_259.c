#define NUM_ITER 1348551

#include <header.h>




 
int main_bench() 
{
	char s[30];
	gets(s);
	int i;
	int len=strlen(s);
	for(i=0;i<len;i++){
		if(s[i]>='0'&&s[i]<='9'&&(s[i+1]>='0'&&s[i+1]<='9')){
			my_printf("%c",s[i]);
		}
		if(s[i]>='0'&&s[i]<='9'&&(s[i+1]<'0'||s[i+1]>'9')){
			my_printf("%c\n",s[i]);
		}
	}
	return 0;
} 
     
