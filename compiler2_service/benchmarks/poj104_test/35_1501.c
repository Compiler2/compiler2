#define NUM_ITER 566

#include <header.h>

int sz[8][8];
int main_bench(){
	int a,b,row,row1,col,e,t,s,m=0;
	my_scanf("%d,%d",&a,&b);
	for(row=0;row<a;row++){
		for(col=0;col<b;col++){
			my_scanf("%d",&sz[row][col]);
		}
	}
	for(row=0;row<a;row++){  

		e=sz[row][0];
		t=0;
		s=row;
		for(col=0;col<b;col++){  
				if(e<sz[row][col]){
				e=sz[row][col];
				t=col;
				}
		}
		for(row1=0;row1<a;row1++){

			if(e>sz[row1][t]){
				break;
			}
			else if(row1==a-1){
				my_printf("%d+%d",s,t);
				m=1;
			}
		}
		if(m==1)
			break;
		else if(m==0 && row==a-1)
			my_printf("No");
	}
	return 0;
}


