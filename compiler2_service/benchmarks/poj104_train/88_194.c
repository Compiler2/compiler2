#define NUM_ITER 781195

#include <header.h>

int main_bench()
{
	char *p1,*p2,*p3;
	p1=(char*)malloc(120);
	gets(p1);
	for(p2=p1;*p2;p2++)
	{
		if((*p2)>='0'&&(*p2)<='9') 
		{
			for(p3=p2;(int)(*p3)-'0'>=0&&(int)(*p3)-'0'<=9;p3++)
			my_printf("%c",*p3);
			my_printf("\n");
			p2=p3;
			p2--;
		}
	}
}