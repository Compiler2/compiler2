#include <header.h>

int main_bench()
{
	char str1[110],str2[110];
	char *p,*q;
	int i;
	p=str1;
	q=str2;
	gets(p);
	for(i=0;;i++)
	{
		if(*(p+i+1)=='\0')
		{
			*(q+i)=*(p+i)+*p;
			*(q+i+1)='\0';
			break;
		}else{
			*(q+i)=*(p+i)+*(p+i+1);
		}
	}
	q=str2;
	for(i=0;;i++)
	{
		if(*(q+i)!='\0')
		{
			my_printf("%c",*(q+i));
		}else{
			break;
		}
	}
	my_printf("\n");
	return 0;
}
