#define NUM_ITER 489

#include <header.h>

int main_bench()
{
	int n,i,j;
	char word[10000][256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s\n",word[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<256;j++){
			if(word[i][j]=='A'){
				word[i][j]='T';
				continue;
			}
			else if(word[i][j]=='T'){
                word[i][j]='A';
                continue;
			
			}
            else if(word[i][j]=='G'){
                word[i][j]='C';
                continue;
			
			}
            else if(word[i][j]=='C'){
                word[i][j]='G';
                continue;
				
			}
		}
			}
for(i=0;i<n;i++)
{
my_printf("%s\n",word[i]);
}
	

	return 0;
}



