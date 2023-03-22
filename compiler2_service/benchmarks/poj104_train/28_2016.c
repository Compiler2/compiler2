#define NUM_ITER 113913

#include <header.h>

int main_bench(){
    int i,j;
	char a[1000];
	int b[300];
	gets(a);
	for(i=0;i<300;i++){
		b[i]=0;
	}
		j=0;
	    for(i=0;i<strlen(a);i++){
	    
			if(a[i]!=' '){
				b[j]++;
			}else{
                if(a[i+1]!=' ')
				{j++;}
			}
		}
	for(i=0;i<j+1;i++){
		if(i==j){
			my_printf("%d\n",b[i]);
		}else{
			my_printf("%d,",b[i]);
		}
	}
	
	return 0;
}

