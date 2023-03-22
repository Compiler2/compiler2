#define NUM_ITER 26978

#include <header.h>

int main_bench(){
	int n,i,j,x,pd;
	char s[260]={0};
	char *ps=s;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",s);
		x=strlen(s);
		for(j=0;j<x;j++){
			pd=0;
			if((pd==0)&&(s[j]=='A')){
				*(ps+j)='T';
				pd=1;
			}
			if((pd==0)&&(s[j]=='T')){
				s[j]='A';
				pd=1;
			}
			if((pd==0)&&(s[j]=='C')){
				s[j]='G';
				pd=1;
			}
			if((pd==0)&&(s[j]=='G')){
				s[j]='C';
				pd=1;
			}
		}
		if(i==0){
			my_printf("%s",s);
		}
		else {
			my_printf("\n%s",s);
		}
	}



	
	
		return 0;
	}

				
	
