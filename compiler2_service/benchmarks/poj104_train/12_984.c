#define NUM_ITER 5902

#include <header.h>


int main_bench()
{
	int a[20][16]={0};
	int bei[20]={0},j,k,chu,last;
	for(j=0;j<20;j++){
		for(k=0;k<16;k++){
			my_scanf("%d",&a[j][k]);
			if(a[j][k]==0||a[j][k]==-1)
				break;
		}
		if(a[j][k]<0){
			last=j;
			break;
		}
	}
    for(j=0;j<20;j++){
		for(k=0;k<16;k++){
			for(chu=0;chu<16;chu++){
				if((a[j][chu]==2*a[j][k])&&a[j][k]!=0&&a[j][chu]!=0){
					bei[j]=bei[j]+1;
				}
			}
		}
		if(a[j][0]==-1)
			break;
	}
	for(j=0;j<last;j++){
		my_printf("%d\n",bei[j]);
	}
	return 0;
}