#define NUM_ITER 20891

#include <header.h>


void complement(char chain[])
{
	int j;
	for(j=0;j<strlen(chain);j++){
		if(chain[j]=='A'){
			chain[j]='T';
		}else if(chain[j]=='T'){
			chain[j]='A';
		}else if(chain[j]=='C'){
			chain[j]='G';
		}else if(chain[j]=='G'){
			chain[j]='C';
		}
	}
}

int main_bench()
{
	int n;
	char chain[256];
	int i,j;

	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",chain);
		complement(chain);
		my_printf("%s\n",chain);
	}

	return 0;
}