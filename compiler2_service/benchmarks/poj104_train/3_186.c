#include <header.h>

int main_bench()
{
	int n, i, j, k, number[1000], flag=0;
	my_scanf("%d%d", &n, &k);
	for(i=0;i<n;i++){
		my_scanf("%d", &number[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i != j){
				if(number[i]+number[j] == k)
					flag++;
			}
			else
				continue;
		}
	}
	if(flag != 0)
		my_printf("yes");
	else
		my_printf("no");
}