#define NUM_ITER 1289

#include <header.h>

int main_bench()
{
    int i,n,m,flag,a;
	my_scanf("%d",&n);
	for (i=0; i<n; i++){
		flag=1;
		my_scanf("%d",&m);
		for (int j=0;j<m; j++){
			my_scanf("%d",&a);
			if (((a+j*3)>=60)&&(flag)){
				flag=0;
				my_printf("%d\n",60-3*j);
			}else if (((a+j*3+3>=60))&&(flag)){
				flag=0;
				my_printf("%d\n",a);
			}
		}
		if (flag) {
			my_printf("%d\n",60-3*m);
		}
	}
	return 0;
}
