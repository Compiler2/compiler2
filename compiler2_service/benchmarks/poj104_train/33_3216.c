#include <header.h>


int main_bench(){
	int n,i,j;
	char zf[1000][300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",zf[i]);
		for(j=0;zf[i][j]!='\0';j++){
			if(zf[i][j]=='A'){
			   zf[i][j]='T';
			}
			else if(zf[i][j]=='T'){
			   zf[i][j]='A';
			}
			else if(zf[i][j]=='G'){
			   zf[i][j]='C';
			}
			else if(zf[i][j]=='C'){
			   zf[i][j]='G';
			}
		}
	
	}
	  
	for(i=0;i<n;i++){
		if(i!=n-1){
			my_printf("%s\n",zf[i]);
		}
		else{
		my_printf("%s",zf[i]);
		}
	}
	
	
	return 0;
}