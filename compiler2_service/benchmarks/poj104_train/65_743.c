#define NUM_ITER 34674

#include <header.h>

int main_bench(){
int n,cai[300][2],i,t,s;
my_scanf("%d",&n);
for(i=0;i<n;i++)
	my_scanf("%d %d",&(cai[i][0]),&(cai[i][1]));
s=0;
for(i=0;i<n;i++){
	t=(cai[i][0])-(cai[i][1]);
	if(t==-1||t==2)
		s+=1;
	if(t==1||t==-2)
		s-=1;
	}
if(s>0)
	my_printf("A");
if(s<0)
	my_printf("B");
if(s==0)
	my_printf("Tie");
return 0;
}
