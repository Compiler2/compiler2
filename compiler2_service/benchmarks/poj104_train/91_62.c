#define NUM_ITER 1575090

#include <header.h>

int main_bench()
{
	char s[101],s1[101];
	gets(s);
	char *p=s,*p1=s1;
	for(;*p!='\0';p++,p1++){
		if(*(p+1)!='\0'){
			*p1=*p+*(p+1);
		}else{
			char *p0=s;
			*p1=*p+*p0;
		}
	}
	*p1='\0';
	p1=s1;
	my_printf("%s",p1);
	return 0;
}