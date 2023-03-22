#include <header.h>

int main_bench(){
	int i,j,k,num,a[200],b[200],m=0,n=0;
	my_scanf("%d",&num);
	for(i=0;i<num;i++){
		my_scanf("%d %d",&a[i],&b[i]);
		if(a[i]==b[i]){
			m++;
			n++;
		}else if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0))
			m++;
		else if((b[i]==0&&a[i]==1)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0))
			n++;
	}
	if(m>n)
		my_printf("A");
	else if(m<n)
		my_printf("B");
	else
		my_printf("Tie");
	

	return 0;
}