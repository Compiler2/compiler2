#define NUM_ITER 14137

#include <header.h>

char mb[30000][300],fy[30000][300];
int main_bench(){
	
	int i=0,j=0,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",mb[i]);
		}
	for(i=0;i<n;i++){
		for(j=0;j<strlen(mb[i]);j++){
			if(mb[i][j]=='A'){
				fy[i][j]='T';
			}else if(mb[i][j]=='T'){
				fy[i][j]='A';
	        }else if(mb[i][j]=='C'){
				fy[i][j]='G';
            }else {
				fy[i][j]='C';
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<strlen(mb[i]);j++){
			my_printf("%c",fy[i][j]);
		}
		my_printf("\n");
	}
 return 0;   
}