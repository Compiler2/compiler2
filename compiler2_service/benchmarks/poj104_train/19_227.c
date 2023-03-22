#define NUM_ITER 756087

#include <header.h>


int main_bench()
{
	char str[255],from[255],to[255];
	char*s=str,*p;
	gets(s);
	my_scanf("%s%s",from,to);
	strcat(s," ");
	while(*s){
		p=strchr(s,' ');
		*p='\0';
		if(strcmp(s,from)==0)
		{
			my_printf("%s",to);
		}
		else{
            my_printf("%s",s);
		}
		s=p+1;
		if(*s)
		{
			my_printf(" ");
		}
	}

	return 0;
}