#define NUM_ITER 878922

#include <header.h>

int main_bench()
{
	int n,i,e=0,k,m=0;
	double x,y;
	char a[500],b[500];
	my_scanf("%lf",&x);
	my_scanf("%s",a);
	my_scanf("%s",b);
	n=strlen(a);
	k=strlen(b);
	for(i=0;i<n;i++){
		if(a[i]==b[i])e++;
	}
    for(i=0;i<n;i++){
		if(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')m++;
		if(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')m++;
	}
    y=e*1.0/n;
	if(n==k&&m==n+k){if(y>=x)my_printf("yes");
	         else if(y<x)my_printf("no");
			 }
	else my_printf("error");
	return 0;
}