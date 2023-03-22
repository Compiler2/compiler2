#include <header.h>

int main_bench()
{
	char c1[100],c2[100],*p,*pc1,*pc2;
	int i,j,k,n=0,m;
	pc1=c1;
	pc2=c2;
	my_scanf("%s",c1);
	my_scanf("%s",c2);
	p=strstr(c2,c1);
	for(i=0;*(pc2+i)!='\0';i++)
		if((pc2+i)==p)break;
	my_printf("%d",i);
}
