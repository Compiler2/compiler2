#define NUM_ITER 23318

#include <header.h>

int main_bench(){
int n,i,k;
char jj[1000][260], pdj[1000][260];    
my_scanf("%d", &n);
for(i=0; i<n; i++){    
	my_scanf("%s", jj[i]);}
for(i=0; i<n; i++){
	int m=strlen(jj[i]);
	for(k=0;k<m;k++){
		if(jj[i][k]=='A'){pdj[i][k]='T';}
	else if(jj[i][k]=='T'){pdj[i][k]='A';}
		else if(jj[i][k]=='G'){pdj[i][k]='C';}
		else if(jj[i][k]=='C'){pdj[i][k]='G';}
	}
}
		for(i=0; i<n; i++){my_printf("%s\n",pdj[i]);}
return 0;
}