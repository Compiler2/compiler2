#include <header.h>

int main_bench()
{
	int n,a,b,i,k,t;
	my_scanf("%d",&n);
          k=0;t=0;
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a,&b);
		if((a==0&&b==1)||(a==2&&b==0)||(a==1&&b==2)){
			k=k+1;}else{
                  if((b==0&&a==1)||(b==2&&a==0)||(b==1&&a==2)){
				t=t+1;}}
	}
	if(k>t){my_printf("A");
	}else
	{
		if(k<t){
			my_printf("B");}else{
				my_printf("Tie");
			}
	}
	return 0;
}
