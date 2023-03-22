#define NUM_ITER 17424

#include <header.h>

int main_bench(){
int shulie[500],jishu[500];
int n,t=0,i=0,j=0,a=0,c=0,k=0;
my_scanf("%d",&n);
for(i=0;i<n;i++)
  my_scanf("%d",&shulie[i]);
for(i=0;i<n;i++){
  if(shulie[i]%2!=0)
   c++;
}
i=0;
for(j=0;j<c;j++){
	for(a=i;a<n;a++){
		if(shulie[a]%2!=0){
			jishu[j]=shulie[a];
			break;
		}
	}
	i=a+1;
}
for(i=0;i<c-1;i++){
	for(j=i+1;j<c;j++){
		if(jishu[i]>jishu[j]){
			t=jishu[i];
			jishu[i]=jishu[j];
			jishu[j]=t;
		}
	}
	my_printf("%d,",jishu[i]);
}
my_printf("%d",jishu[c-1]);
return 0;
}