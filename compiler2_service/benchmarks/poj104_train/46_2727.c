#define NUM_ITER 571

#include <header.h>

int main_bench(){
int row,col;
int array[100][100];
int i,j,a,b,c,d=0;
my_scanf("%d%d",&row,&col);
for(i=0;i<=row-1;i++){
	for(j=0;j<=col-1;j++){
       my_scanf("%d",&array[i][j]);}
}
c=0; 
for(a=0;2*a<=row&&2*a<=col;a++){
    for(b=a;b<=col-1-a;b++){
		my_printf("%d\n",array[c][b]);
		d++;}
	if(d==row*col)
	break;
	b=b-1;
	for(c=a+1;c<=row-1-a;c++){
		my_printf("%d\n",array[c][b]);
	d++;}
	if(d==row*col)
	break;
	c=c-1;
	for(b=col-2-a;b>=a;b--){
		my_printf("%d\n",array[c][b]);
	d++;}
	if(d==row*col)
	break;
	b=b+1;
	for(c=row-2-a;c>=a+1;c--){
       my_printf("%d\n",array[c][b]);
	d++;}
	if(d==row*col)
	break;
	c=c+1;
}
return 0;
}