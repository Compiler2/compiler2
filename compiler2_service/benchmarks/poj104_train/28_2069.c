#define NUM_ITER 1527781

#include <header.h>

int main_bench(){
int n,i,j,k;
int sz[300];
j=0;
n=0;
char zfc[1001];
gets(zfc);
for(i=0;zfc[i]!='\0';i++){
    if(zfc[i]!=' '){
    	n++;
	}
    else{
        if(n!=0){
		sz[j]=n;
	    j++;
        }
		n=0;
	}
	}
sz[j]=n;
for(i=0;i<j;i++){
my_printf("%d,",sz[i]);
}
my_printf("%d",sz[j]);
return 0;
}


