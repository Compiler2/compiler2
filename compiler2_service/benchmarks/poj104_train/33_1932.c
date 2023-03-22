#define NUM_ITER 23510

#include <header.h>

int main_bench()
{
	char a[10000][255],b[10000][255];
	int i,n,j,len;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",a[i]);
		len=strlen(a[i]);
		for(j=0;j<len;j++){
			if(a[i][j]=='A'){
				b[i][j]='T';
			}
            if(a[i][j]=='T'){
				b[i][j]='A';
			}
            if(a[i][j]=='G'){
				b[i][j]='C';
			}
            if(a[i][j]=='C'){
				b[i][j]='G';
			}
		}
	    my_printf("%s\n",b[i]);
	}
	return 0;
}