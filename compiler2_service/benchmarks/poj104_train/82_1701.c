#define NUM_ITER 39535

#include <header.h>


int main_bench()
{
	int n,sp,dp,dur,h=0,max=0;
	int i;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d%d",&sp,&dp);
		if(sp>=90&&sp<=140&&dp>=60&&dp<=90){
			h++;
			dur=h;
		}
		else
			dur=h=0;
		if(max>=dur)
			continue;
		else 
			max=dur;
	}
	my_printf("%d\n",max);
}