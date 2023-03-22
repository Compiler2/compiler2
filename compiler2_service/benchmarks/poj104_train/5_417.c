#define NUM_ITER 888573

#include <header.h>

 


int main_bench(){
 int i,k=0;
 double xs,sj; 
 char dna1[600],dna2[600];
 my_scanf("%lf",&xs);
my_scanf("%s %s",dna1,dna2);
 if(strlen(dna1)!=strlen(dna2)){
	 my_printf("error");
	 return 0;
 }
 for(i=0;i<(strlen(dna1)-1);i++){
	 if(dna1[i]!='A'&&dna1[i]!='G'&&dna1[i]!='C'&&dna1[i]!='T'){
		 my_printf("error");
		 return 0;
	 }
	 if(dna2[i]!='A'&&dna2[i]!='G'&&dna2[i]!='C'&&dna2[i]!='T'){
		 my_printf("error");
		 return 0;
	 }
	 if(dna1[i]==dna2[i]){
		 k++;
	 }
 }
 sj=1.0*k/(strlen(dna1)-1);
 if(sj>xs){
	 my_printf("yes");
 }
 else
	 my_printf("no");
	return 0;
}