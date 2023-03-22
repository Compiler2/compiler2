#include <header.h>

int main_bench(){
	char max[50],min[50],a[50];
	int n,i;
	my_scanf("%d",&n);
	my_scanf("%s",max);
	strcpy(min,max);
	for(i=2;i<=n;i++){
		my_scanf("%s",a);
		if(strlen(a)>strlen(max)) strcpy(max,a);
		if(strlen(a)<strlen(min)) strcpy(min,a);
	}
	my_printf("%s\n",max);
	my_printf("%s\n",min);
	return 0;
}