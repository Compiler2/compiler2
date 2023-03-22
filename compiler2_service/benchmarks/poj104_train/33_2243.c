#define NUM_ITER 24771

#include <header.h>

int main_bench()
{
	int n,i,j,len;
	my_scanf("%d",&n);

	char sz[1000][256];
	
	for (i=0;i<n;i++){
		my_scanf ("%s",sz[i]);
	}
	for (i=0;i<n;i++){
		len=strlen(sz[i]);
		for (j=0;j<len;j++){
			if (sz[i][j]=='A') sz[i][j]='T';
			else if (sz[i][j]=='T') sz[i][j]='A';
			else if (sz[i][j]=='C') sz[i][j]='G';
			else if (sz[i][j]=='G') sz[i][j]='C';
		}
	} 

	if (n>1){
	  my_printf ("%s",sz[0]);
	  for (i=1;i<n;i++){
		my_printf("\n%s",sz[i]);
	  }
        }
	else my_printf ("%s",sz[0]);

	return 0;
} 