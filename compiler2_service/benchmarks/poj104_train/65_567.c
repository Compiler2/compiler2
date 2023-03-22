#include <header.h>


int main_bench(){
    int q,i,a=0,b=0,m,n;

	my_scanf("%d",&q);

	for(i=0;i<q;i++){
		my_scanf("%d %d",&m,&n);

		if(m==0&&n==1) a++;
		else if(m==0&&n==2) b++;
		
		else if(m==1&&n==2) a++;
		else if(m==1&&n==0) b++;
		
		else if(m==2&&n==0) a++;
		else if(m==2&&n==1) b++;}

	if(a>b) my_printf("A");
	else if(a<b) my_printf("B");
	else my_printf("Tie");
		

		






	return 0;
}