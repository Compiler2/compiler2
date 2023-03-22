#define NUM_ITER 676

#include <header.h>


int main_bench(){
	int tumour[256][256],n,i,j,x1=-1,y1,x2=-1,y2,s;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			my_scanf("%d",&tumour[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(tumour[i][j])
				continue;
			else{
			x1=i;
			y1=j;
			break;
			}
		}
		if(x1>=0)
		break;
	}
	for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if(tumour[i][j])
				continue;
			else{
			x2=i;
			y2=j;
			break;
			}
		}
		if(x2>=0)
		break;
	}
	s=(x2-x1-1)*(y2-y1-1);
	my_printf("%d\n",s);
	return 0;
}