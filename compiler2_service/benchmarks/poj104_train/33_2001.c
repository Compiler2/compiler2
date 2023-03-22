#define NUM_ITER 24842

#include <header.h>

int main_bench(){
	int n,i,j;
	char zfc1[1000][1000],zfc2[1000][1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",zfc1[i]);
		for(j=0;zfc1[i][j]!='\0';j++){
			if(zfc1[i][j]=='A'){
				zfc2[i][j]='T';
			}
			else if(zfc1[i][j]=='G'){
			zfc2[i][j]='C';
			}
			else if(zfc1[i][j]=='C'){
			zfc2[i][j]='G';
			}
			else if(zfc1[i][j]=='T'){
				zfc2[i][j]='A';
			}
		}
		zfc2[i][j]='\0';
	}
	for(i=0;i<n;i++){
		my_printf("%s\n",zfc2[i]);
	}
	return 0;
}