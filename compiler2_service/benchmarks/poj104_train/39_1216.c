#define NUM_ITER 10766

#include <header.h>

int main_bench()
{
	int N,i;
	int Endmark[100],Classmark[100],Essay[100],award[100]={0},sum=0,BP,X;
    char Name[100][21],Zone[100],Leader[100];
	my_scanf("%d",&N);
	for(i=0;i<N;i++){
		my_scanf("%s %d %d %c %c %d",Name[i],&Endmark[i],&Classmark[i],&Leader[i],&Zone[i],&Essay[i]);
		if(Endmark[i]>80&&Essay[i]>0){
			award[i]+=8000;
		}
		if(Endmark[i]>85&&Classmark[i]>80){
			award[i]+=4000;
		}
		if(Endmark[i]>90){
			award[i]+=2000;
		}
		if(Endmark[i]>85&&Zone[i]=='Y'){
			award[i]+=1000;
		}
		if(Classmark[i]>80&&Leader[i]=='Y'){
			award[i]+=850;
		}
		sum+=award[i];
	}
	BP=award[0];
	X=0;
	for(i=0;i<N;i++){
		if(award[i]>BP){
            BP=award[i];
			X=i;
		}
	}
	my_printf("%s\n",Name[X]);
	my_printf("%d\n",award[X]);
	my_printf("%d\n",sum);

return 0;
}
