#include <header.h>

int main_bench()
{
	int m1,m2,m3,n1,n2,n3,i,j;
	while(1){
		my_scanf("%d",&m1);
		if(m1!=0){
			my_scanf("%d %d %d %d %d",&m2,&m3,&n1,&n2,&n3);
			i=(n1-m1+12)*3600+(n2-m2)*60+n3-m3;
			my_printf("%d\n",i);
		}else {
			break;
		}
	}
	return 0;
}