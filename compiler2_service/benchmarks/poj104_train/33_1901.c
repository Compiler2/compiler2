#define NUM_ITER 22728

#include <header.h>

char a[10000][255];
int main_bench()
{   int n;
    my_scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
        my_scanf("%s",a[i]);
		int l=0;
		l=strlen(a[i]);
		for(j=0;j<l;j++){
			if(a[i][j]=='A')
				a[i][j]='T';
			else if(a[i][j]=='T')
				a[i][j]='A';
			else if(a[i][j]=='G')
				a[i][j]='C';
			else if(a[i][j]=='C')
				a[i][j]='G';
		}
	my_printf("%s\n",a[i]);
	}
	return 0;
}
