#define NUM_ITER 1209891

#include <header.h>

int main_bench(){
	char s[105]={0},ss[105]={0};
	int i,j,x;
	gets(s);
	x=strlen(s);
	j=0;

	for(i=1;i<x;i++){
		if(j!=x-1){
			ss[j]=s[i-1]+s[i];
			j++;
		}
	    if(j==x-1){
			ss[x-1]=s[x-1]+s[0];
		}

	}
	my_printf("%s",ss);



	
		return 0;
	}

				
	
