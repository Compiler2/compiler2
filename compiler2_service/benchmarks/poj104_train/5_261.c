#define NUM_ITER 919609

#include <header.h>

int main_bench(){
	char gene1[500];
	char gene2[500];
	int i;
	int s=0;
	double r;
	my_scanf("%lf",&r);
	my_scanf("%s",&gene1);
	my_scanf("%s",&gene2);
	int len1=strlen(gene1);
	int len2=strlen(gene2);
	int fuhe=1;
	for(i=0;i<=len1-1;i++){
		if((gene1[i]!='A'&&gene1[i]!='T'&&gene1[i]!='C'&&gene1[i]!='G')||(gene2[i]!='A'&&gene2[i]!='T'&&gene2[i]!='C'&&gene2[i]!='G')){
			fuhe=0;
		}
	}
	if(len1!=len2||fuhe==0){
		my_printf("error");
	}else{
		for(i=0;i<=len1-1;i++){
			if(gene1[i]==gene2[i]){
				s+=1;
			}else{
				s+=0;
			}
		}
		if(1.00*s/len1>r){
			my_printf("yes\n");
		}else{
			my_printf("no\n");
		}
	}
	
	return 0;
}