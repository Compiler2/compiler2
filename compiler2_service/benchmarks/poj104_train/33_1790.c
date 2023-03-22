#define NUM_ITER 23926

#include <header.h>

char com(char ch);
char com(char ch)
{
	if(ch=='A')
		return 'T';
	else if(ch=='T')
		return 'A';
	else if(ch=='G')
		return 'C';
	else if(ch=='C')
		return 'G';
}
int main_bench(){
	int n,i,j;
	char chain[1000][256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",chain[i]);
		for(j=0;j<strlen(chain[i]);j++)
			chain[i][j]=com(chain[i][j]);
	}
	for(i=0;i<n;i++)
		my_printf("%s\n",chain[i]);
	return 0;
}

