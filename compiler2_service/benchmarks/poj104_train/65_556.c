#include <header.h>

int main_bench(){
	int i, n,a,b,sa=0,sb=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		if(a==0&&b==1)sa++;
		else if(a==0&&b==2)sb++;
		else if(a==1&&b==2)sa++;
        else if(a==1&&b==0)sb++;
        
		else if(a==2&&b==0)sa++;
		else if(a==2&&b==1)sb++;

		else if((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==2))continue;
	}
	if(sa>sb)my_printf("A");
	else if(sa<sb)my_printf("B");
	else if(sa==sb)my_printf("Tie");
	
    return 0;
}