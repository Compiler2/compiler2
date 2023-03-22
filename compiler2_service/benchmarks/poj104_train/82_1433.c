#define NUM_ITER 30337

#include <header.h>

int  main_bench(){
	int n,e,i,max;
	int ss[99],sz[99];
	int jg[99];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf(" %d %d",&ss[i],&sz[i]);
		if((ss[i]>=90)&&(ss[i]<=140)&&(sz[i]>=60)&&(sz[i]<=90)){
			jg[i]=1;
		}else{
			jg[i]=0;
		}
	}
	e=0;
	max=0;
	for(i=0;i<n;i++){
		if(jg[i]==1){
			e++;
		}
        if((e!=0&&jg[i]==0)||i==n-1){
				if(e>=max){
					max=e;
				}
				e=0;
		}
	}
	my_printf("%d",max);
	return 0;
}
