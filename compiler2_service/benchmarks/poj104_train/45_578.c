#define NUM_ITER 955581

#include <header.h>

int main_bench()
{
	char a[300],b[100],*p,*q;
	int i=0;
	my_scanf("%s %s",b,a);
	p=a;q=b;
	for(;p<a+strlen(a);p++){
		for(i=0;i<strlen(b);i++)
			if(*(p+i)!=*(q+i))
				break;
			if(i==strlen(b)){
				my_printf("%d",p-a);
				break;}
	}
}