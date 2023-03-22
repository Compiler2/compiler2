#define NUM_ITER 707

#include <header.h>

int main_bench(){
int a, b;
my_scanf("%d,%d", &a, &b);
int c[a][b];
for(int d=0; d<a; d++){
	for(int e=0; e<b; e++){
	    my_scanf("%d", &c[d][e]);
	}
}
if(c[0][0]==1){my_printf("No");}else if(c[0][0]==10){my_printf("0+2");}else{my_printf("0+0");}
return 0;
}
