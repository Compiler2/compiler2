#define NUM_ITER 233903

#include <header.h>

int main_bench()
{int sz[5][5],m,n,e,row,col;
for( row=0;row<5;row++){
for( col=0;col<5;col++){
my_scanf("%d",&sz[row][col]);}
}
my_scanf("%d%d",&m,&n);
if(m<5&&n<5){
	for(int col=0;col<5;col++){
		e=sz[m][col];
		sz[m][col]=sz[n][col];
		sz[n][col]=e;
}
}
if(m<5&&n<5){for( row=0;row<5;row++){
for( col=0;col<5;col++){
my_printf("%d",sz[row][col]);if(col<4){my_printf(" ");}}

my_printf("\n");
}}
if(m>4||n>4){my_printf("error");}
return 0;
}

