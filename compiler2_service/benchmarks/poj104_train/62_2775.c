#define NUM_ITER 1375067

#include <header.h>

int main_bench(){
	int k,i,j,c;
	char w[100];
    gets(w);
    c=strlen(w);
    k=0;
	for(i=0;i<c;i++){
		if(w[i]==' '){
			for(j=i+1;w[j]==' ';j++){
				for(k=j;k<c;k++) 
				  w[k]=w[k+1];
				j--;
				
			}
		j=0;
		}

	}
    
my_printf("%s",w);
	return 0;
}