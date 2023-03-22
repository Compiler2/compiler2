#define NUM_ITER 10301

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int pingjun[100];
	int pingyi[100];
	int jiangjin[100];
	int lunwen;
	char xingming[100][21];
	char ganbu;
	char xibu;
	int jiangjinzongshu=0;
	for(int i=0;i<n;i++){
		jiangjin[i]=0;
		my_scanf("%s %d %d %c %c %d\n",xingming[i],&pingjun[i],&pingyi[i],&ganbu,&xibu,&lunwen);
		if(pingjun[i]>80&&lunwen>=1){
			jiangjin[i]+=8000;
		}
		if(pingjun[i]>85&&pingyi[i]>80){
			jiangjin[i]+=4000;
		}
		if(pingjun[i]>90){
			jiangjin[i]+=2000;
		}
		if(pingjun[i]>85&&xibu=='Y'){
			jiangjin[i]+=1000;
		}
		if(pingyi[i]>80&&ganbu=='Y'){
			jiangjin[i]+=850;
		}
		jiangjinzongshu+=jiangjin[i];
	}
	int m=0;
	for(int r=0;r<n;r++){
		if(jiangjin[r]>jiangjin[m]){
			m=r;
		}
	}
	my_printf("%s\n%d\n%d\n",xingming[m],jiangjin[m],jiangjinzongshu);
    return 0;
}