#define NUM_ITER 14691

#include <header.h>

int main_bench()
{
	int n,len,j,i;
	char a[1000][256]={'\0'};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",a[i]);
		len=strlen(a[i]);
		for(j=0;j<len;j++){
			if(a[i][j]=='A')
                a[i][j]='T';
			else if(a[i][j]=='C')
                a[i][j]='G';
			else if(a[i][j]=='G')
                a[i][j]='C';
			else if(a[i][j]=='T')
                a[i][j]='A';
		}
		my_printf("%s\n",a[i]);
	}
	return 0;
}