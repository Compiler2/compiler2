#define NUM_ITER 1354645

#include <header.h>

int main_bench()
{   
	char s[31];
	int i;
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]<58&&s[i]>47)my_printf("%c",s[i]);
		if(s[i]<58&&s[i]>47&&(s[i+1]>=58||s[i+1]<=47))my_printf("\n");
	}
	return 0;
}