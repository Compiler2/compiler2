#define NUM_ITER 1282024

#include <header.h>



int main_bench()
{
	int n,i;
	char a[101],b[101]={0};
	gets(a);
	n=strlen(a);
	for(i=0;i<n-1;i++){
		b[i]=a[i]+a[i+1];
		}
	b[n-1]=a[n-1]+a[0];
	puts(b);
	return 0;
}