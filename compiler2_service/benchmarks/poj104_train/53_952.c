#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int sz[300];
	for(int i=0;i<n;i++){
		my_scanf("%d",&sz[i]);
	}
	my_printf("%d",sz[0]);
	for(int j=1;j<n;j++){
        int k;
		for(k=0;k<j;k++){
			if(sz[j]==sz[k])
				break;
		}
		if(k==j){
			my_printf(",%d",sz[j]);
		}
		else
			continue;
	}
	return 0;
}
