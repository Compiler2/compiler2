#define NUM_ITER 839807

#include <header.h>

int main_bench()
{
	char *str,*p,*p0;
	int i=0;
	str = (char *)malloc(100*sizeof(char));
	gets(str);
	p0 = str;
	for (p = str;*p!='\0';p++){
		if (*p!='\0') i++;
	}
	
	*p = *p0;
	*(p+1)='\0';
	for (p=str;p<str+i;p++){
		*p=*p+*(p+1);
	}
	*p = '\0';
	my_printf("%s",str);
	return 0;
}