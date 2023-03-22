#define NUM_ITER 24827

#include <header.h>

int main_bench(){
	int n;
	char DNA[1000][260];
	my_scanf("%d",&n);
	for(int j=0;j<n;j++){
		my_scanf("%s",&(DNA[j]));
	}
	int pd=0,m;
	for(int t=0;t<n;t++){
		pd=strlen(DNA[t]);
		for(m=0;m<pd-1;m++){
			if(DNA[t][m]=='A'){
				my_printf("T");
			}
			else if(DNA[t][m]=='T'){
				my_printf("A");
			}
			else if(DNA[t][m]=='C'){
				my_printf("G");
			}
			else if(DNA[t][m]=='G'){
				my_printf("C");
			}
		}
		if(DNA[t][pd-1]=='A'){
			my_printf("T\n");
		}
		else if(DNA[t][pd-1]=='T'){
			my_printf("A\n");
		}
		else if(DNA[t][pd-1]=='C'){
			my_printf("G\n");
		}
		else if(DNA[t][pd-1]=='G'){
			my_printf("C\n");
		}
	}
	return 0;
}