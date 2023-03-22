#define NUM_ITER 32491

#include <header.h>

int main_bench()
{
    int n,i,j,t=0,max=0;
	int a[100][2];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			my_scanf("%d",&(a[i][j]));
		}
	}
	for(i=0;i<n;i++){
		if(a[i][0]>=90&&a[i][0]<=140&&a[i][1]>=60&&a[i][1]<=90){
			t++;
			if(max<t){
				max=t;
			}
		}
		else{
			t=0;
		}
	}

	my_printf("%d",max);
	return 0;
}