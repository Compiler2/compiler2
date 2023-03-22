#define NUM_ITER 29000

#include <header.h>

int main_bench(){
	int a,i,j,l,pd=1;
	char jj[1000][21];
	my_scanf("%d",&a);
for(i=0;i<a;i++){
		my_scanf("%s",jj[i]);
		l=strlen(jj[i]);
    if(jj[i][0]==95||(jj[i][0]>=65&&jj[i][0]<=90)||(jj[i][0]>=97&&jj[i][0]<=122)){
		for(j=1;j<l;j++){
			 if(     jj[i][j]!=95&&(jj[i][j]<48||(jj[i][j]>57&&jj[i][j]<65)||(jj[i][j]>90&&jj[i][j]<97)||jj[i][j]>122)       ){
				 my_printf("no\n");
				 pd=0;
				 break;
			 }
		}
		if(j=l-1&&pd==1){
		my_printf("yes\n");
		}
		pd=1;
	}else{
	my_printf("no\n");
	}
}
	return 0;
}