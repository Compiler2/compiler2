#define NUM_ITER 887611

#include <header.h>


int main_bench()
{
	char a[100],b[100];
	my_scanf("%s%s",a,b);
	int i,j;
	int c,d;
	int t;
    c=strlen(a);
	d=strlen(b);
	for (i=c-1;i>0;i--) {
		for (j=0;j<i;j++) {
			if (a[j]>a[j+1])
			{t=a[j];a[j]=a[j+1];a[j+1]=t;}}
	}
    for (i=d-1;i>0;i--) {
		for (j=0;j<i;j++) {
			if (b[j]>b[j+1])
			{t=b[j];b[j]=b[j+1];b[j+1]=t;}}
	}
    if (strcmp(a,b)==0)  my_printf("YES");
	else my_printf("NO");

	
	
	return 0;

}

