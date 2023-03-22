#define NUM_ITER 1452

#include <header.h>

int main_bench()
{
	int a,i,j,d,b[100][100];
	my_scanf("%d",&a);
	for(i=0;i<a;i++){
		my_scanf("%d",&b[i][0]);
		for(j=1;j<=b[i][0];j++){
			my_scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<a;i++){
		if(b[i][0]==0){
			my_printf("60\n");
		}
		else{
		d=0;
        for(j=1;j<=b[i][0];j++){
			d=d+3;
			if(b[i][j]+d>=60){
				break;
			}
		}
		if(j-1==b[i][0]){
			my_printf("%d\n",60-d);
		}
		else if(b[i][j]+d-60<=3){
			my_printf("%d\n",b[i][j]);
		}
		else if(b[i][j]+d-60>3){
			my_printf("%d\n",60-d+3);
		}
		}
	}



	return 0;
}

