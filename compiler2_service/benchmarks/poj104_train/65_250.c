#include <header.h>

int main_bench()
{
	int a,b,i,k,n,m;
	my_scanf("%d",&n);
	k=0;
	m=0;
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		if(b-a==1)
			k=k+1;
		if(a-b==2)
			k=k+1;
		if(a-b==1)
			m=m+1;
		if(b-a==2)
			m=m+1;
	}
	if(k>m)
		my_printf("A");
	if(k<m)
		my_printf("B");
	if(k==m)
		my_printf("Tie");
	return 0;
}