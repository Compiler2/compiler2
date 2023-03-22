#define NUM_ITER 17869

#include <header.h>

int main_bench(){
	int n,i,zxuefen;
	float GPA,zxfjd;
	my_scanf("%d",&n);
    int *xuefen=(int*)malloc(sizeof(xuefen)* n);
	int *chengji=(int*)malloc(sizeof(chengji)* n);
	float *jidian=(float*)malloc(sizeof(jidian)* n);
	float *xfjd=(float*)malloc(sizeof(xfjd)* n);
	for(i=0;i<n;i++){
		my_scanf("%d",&xuefen[i]);
	}
	for(i=0;i<n;i++){
		my_scanf("%d",&chengji[i]);
	}
	for(i=0;i<n;i++){
		if(chengji[i]>=90){
			jidian[i]=4.0;
		}else if(chengji[i]>=85){
			jidian[i]=3.7;
		}else if(chengji[i]>=82){
			jidian[i]=3.3;
		}else if(chengji[i]>=78){
			jidian[i]=3.0;
		}else if(chengji[i]>=75){
			jidian[i]=2.7;
		}else if(chengji[i]>=72){
			jidian[i]=2.3;
		}else if(chengji[i]>=68){
			jidian[i]=2.0;
		}else if(chengji[i]>=64){
			jidian[i]=1.5;
		}else if(chengji[i]>=60){
			jidian[i]=1.0;
		}else {
			jidian[i]=0;
		}
		xfjd[i]=jidian[i]*xuefen[i];
	}
	zxuefen=0;
	zxfjd=0;
	for(i=0;i<n;i++){
		zxuefen+=xuefen[i];
	}
	
	for(i=0;i<n;i++){
		zxfjd+=xfjd[i];
	}
	
	GPA=zxfjd/zxuefen;
	my_printf("%.2f",GPA);
	return 0;
}
