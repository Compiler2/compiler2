#include <header.h>




int main_bench()
{
	char s[100]={'\0'},w[100]={'\0'};
	int k,t;
	char *p;



    my_scanf("%s",s);
    my_scanf("%s",w);

	k=strlen(w);
	t=strlen(s);


	p=strstr(w,s);

	my_printf("%d",p-w);


}