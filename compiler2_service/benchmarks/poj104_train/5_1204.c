#define NUM_ITER 936921

#include <header.h>

int main_bench(){
	int i,a1,a2,sum;
	double m,x;
	char s1[502],s2[502];
	my_scanf("%lf",&m);
	my_scanf("%s",s1);
	my_scanf("%s",s2);
	a1=strlen(s1);
	a2=strlen(s2);
	sum=0;
	if(a1!=a2){
		my_printf("error");
	}else{
		for(i=0;s1[i];i++){
			if(((s1[i]!='A')&&(s1[i]!='T')&&(s1[i]!='C')&&(s1[i]!='G'))||((s2[i]!='A')&&(s2[i]!='T')&&(s2[i]!='C')&&(s2[i]!='G'))){
                sum=-1;
				break;
			}else if(s1[i]==s2[i]){
				sum++;
			}
		}
		if(sum==-1){
			my_printf("error");
		}else{
		    x=(double)sum/a1;
            if(x>m){
		        my_printf("yes");
			}else{
		        my_printf("no");
			}
		}
	}
	return 0;
}
