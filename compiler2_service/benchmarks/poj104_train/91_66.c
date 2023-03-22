#define NUM_ITER 1183345

#include <header.h>


main_bench()
{
	int n,i;
	char a[101],b[101],*pa,*pb;
	gets(a);
	pa=a;
	pb=b;
	for(i=0;i<strlen(a)-1;i++){
		*(pb+i)=*(pa+i)+*(pa+i+1);
	}
	*(pb+strlen(a)-1)=*(pa+strlen(a)-1)+*pa;
	for(i=0;i<strlen(a);i++){
		my_printf("%c",*(pb+i));
	}
}