#define NUM_ITER 908919

#include <header.h>



int main_bench()
{
	char s1[257],s2[257],s3[257];
	char* p;
	gets(s1);
	gets(s2);
	gets(s3);
	p=strstr(s1,s2);
	if(p) {
		int i=p-s1;
		s1[i]='\0';
		my_printf("%s",s1);
		my_printf(s3);
		my_printf("%s\n",p+strlen(s2));
	}
	else {
		puts(s1);
	}
	
	return 0;
}
