#define NUM_ITER 15951

#include <header.h>

int main_bench()
{
	struct m{
	char id[10];
	int year;
	}p[100],a[100],tmp;
	int n,i,j,k=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	my_scanf("%s%d",p[i].id,&p[i].year);
	if(p[i].year>=60){
		a[k]=p[i];
		k++;
		p[i].year=0;
	}
	}
	for(i=0;i<k;i++){
		for(j=k-1;j>i;j--){
			if(a[j].year>a[j-1].year){
			tmp=a[j-1];
			a[j-1]=a[j];
			a[j]=tmp;
			}
		}
		}
	for(i=0;i<k;i++){
	my_printf("%s\n",a[i].id);
	}
	for(i=0;i<n;i++){
	if(p[i].year==0)
	continue;
	my_printf("%s\n",p[i].id);
	}
	return 0;


}