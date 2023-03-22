#include <header.h>


int main_bench()
{
	int a[100]={0};
	int *p=a;
	int max=-1,max2=-1,i;

	do{
	my_scanf("%d",p++);
	}while( getchar() ==',' );
	for( i=0; i<p-a; i++){
		if(a[i]>max){
			max2=max;
			max=a[i];
		}
		else if( max2<a[i] && a[i]<max )
			max2=a[i];
	}
    if(max2==-1)
		my_printf("No");
	else
		my_printf("%d",max2);
}
