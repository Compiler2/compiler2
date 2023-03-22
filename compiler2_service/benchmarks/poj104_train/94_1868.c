#define NUM_ITER 16795

#include <header.h>

int main_bench(){
	int n,i,j=0,an[500],bn[500],max,l,out;
	char x;
	x=',';
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&bn[i]);
	for(i=0;i<n;i++){
		if(bn[i]%2==1){
			an[j]=bn[i];
			j++;
		}
	}
	l=j;
    for(i=l-1;i>=0;i--){
		for(j=0;j<i;j++){
			if(an[j]>=an[j+1]){
				max=an[j];
				an[j]=an[j+1];
				an[j+1]=max;
			}
		}
	}
	my_printf("%d",an[0]);
    out=an[0];
	for(i=0;i<l;i++){
		if(an[i]!=out){
			my_printf("%c%d",x,an[i]);
			out=an[i];
		}
	}
	return 0;
}