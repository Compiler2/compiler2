#include <header.h>


int main_bench()
{
	int i,j,n,m,a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&m);
		a=0;
		if(m==0){
			my_printf("60\n");
			continue;
		}
		for(j=0;j<m;j++){
			my_scanf("%d",&a);
			if(a+j*3<57)
				continue;

			if(a+j*3<=63){
				my_printf("%d\n",a);
				break;
			}else{
				my_printf("%d\n",60-3*j);
				break;
			}
		}
		if(j == m)
			my_printf("%d\n",60-3*m);
	}
	return 0;
}
