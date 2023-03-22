#include <header.h>

int main_bench()
{
	char a[2][100]={0};
	int b[2][256]={0},i,j,s,m,n;
	my_scanf("%s%s",a[0],a[1]);
	m=strlen(a[0]);n=strlen(a[1]);
	if(m!=n)my_printf("NO");
	else{for(i=0;i<2;i++)
		for(j=0;j<m;j++)
		b[i][a[i][j]]++;
	s=1;for(j=0;j<256;j++)
		if(b[0][j]!=b[1][j]){s=0;break;}
		if(s)my_printf("YES");
		else  my_printf("NO");}}