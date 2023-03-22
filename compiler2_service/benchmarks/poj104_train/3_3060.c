#include <header.h>

int main_bench(){
	int n,k,p=0;
	my_scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++)
	my_scanf("%d",&a[i]);
	for(int j=0;j<n;j++){
		for(int s=j+1;s<n;s++)
		if(a[s]==k-a[j])p=1;
		}
	if(p==1)my_printf("yes");
	else my_printf("no");
	return 0;
}
 