#include <header.h>

int main_bench(){
	int n,ss,sz,i;
	int max=0,lj=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&ss,&sz);
		if(ss<=140&&ss>=90&&sz>=60&&sz<=90)
			lj++;
		else{
			if(lj>max)
				max=lj;
			lj=0;
		}
	}
	if(lj>max)
		max=lj;
	my_printf("%d",max);
	return 0;
}