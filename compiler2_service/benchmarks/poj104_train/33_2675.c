#define NUM_ITER 22088

#include <header.h>

int main_bench(){
	char input[10000][300];
	char output[10000][300];
	int n;
	int i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",input[i]);
	    int m=strlen(input[i]);
		  for(int j=0;j<m;j++){
			if(input[i][j]=='A')
				output[i][j]='T';
			else if(input[i][j]=='T')
				output[i][j]='A';
			else if(input[i][j]=='C')
				output[i][j]='G';
			else if(input[i][j]=='G')
				output[i][j]='C';
		}
		my_printf("%s\n",output[i]);
	}
	getchar();
	getchar();
		return 0;
}