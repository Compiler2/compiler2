#define NUM_ITER 17867

#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	char d[1000][260],r[1000][260];
    for(i=0;i<n;i++){
		my_scanf("%s",d[i]);
	}
	int len;
	for(i=0;i<n;i++){
		len=strlen(d[i]);
		for(int j=0;j<len;j++){
			if(d[i][j]=='A')
				r[i][j]='T';
			else if(d[i][j]=='T')
				r[i][j]='A';
			else if(d[i][j]=='C')
				r[i][j]='G';
			else if(d[i][j]=='G')
				r[i][j]='C';
		}
	}
	for(i=0;i<n;i++){
		len=strlen(d[i]);
		for(int j=0;j<len;j++){
		    my_printf("%c",r[i][j]);
		}	my_printf("\n");
	}
	return 0;
}

