#include <header.h>

int main_bench()
{
	int a,i,c,b[100];
    my_scanf("%d",&a);
    for(i=0;i<a;i++)
      my_scanf("%d\n",&b[i]); 
    for(i=1;i<a;i++)
		if(b[i]>b[0]){
			c=b[i];
			b[i]=b[0];
			b[0]=c;
		}
			
	for(i=2;i<a;i++)
		if(b[i]>b[1]){
			b[1]=b[i];
		}
	my_printf("%d\n",b[0]);
	my_printf("%d",b[1]);
return 0;
}
	