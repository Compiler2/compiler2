#include <header.h>

int main_bench()
{
	char c[50],p[50];
	int k;
	scanf("%s%s",c,p);
	int i=0,j;
	for(j=0;j<50;j++){
		if(c[i]==p[j])
		{	k=j;
		break;}
	}
	printf("%d",k);
	return 0;
}
