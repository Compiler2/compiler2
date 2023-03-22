#define NUM_ITER 40873

#include <header.h>

int main_bench()
{
	int n,i,a,b,av,bv;
	av=0;
	bv=0;
	my_scanf("%d", &n);
	for(i=0;i<n;i++){
	my_scanf("%d%d", &a, &b);
	switch (a){
	case 0:
		if(b==1){
		av++;}
		if(b==2){
		bv++;}
		break;
	case 1:
		if(b==2){
		av++;}
		if(b==0){
		bv++;}
		break;
	case 2:
		if(b==0){
		av++;}
		if(b==1){
		bv++;}
		break;
	}
	}
	if(av>bv){
	my_printf("A");}
	if(av==bv){
	my_printf("Tie");}
	if(av<bv){
	my_printf("B");}
	return 0;
}
