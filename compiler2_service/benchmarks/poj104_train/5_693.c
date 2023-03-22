#include <header.h>

int main_bench()
{
	double xgx,n;
	my_scanf("%lf",&xgx);
	int i,j,k,l=0,m=0;
	char jy1[10086],jy2[10086];
	my_scanf("%s",jy1);
	my_scanf("%s",jy2);
	j=strlen(jy1);
	k=strlen(jy2);
	jy1[j]='\0';
	jy2[k]='\0';
	if(j!=k){
		my_printf("error\n");
	}
	else{
		for(i=0;i<j;i++){
			if(((jy1[i]!='A')&&(jy1[i]!='T')&&(jy1[i]!='C')&&(jy1[i]!='G'))||((jy2[i]!='A')&&(jy2[i]!='T')&&(jy2[i]!='C')&&(jy2[i]!='G'))){
				l++;
			}
		}
			if(l!=0){
				my_printf("error\n");
			}
			else{
				for(i=0;i<j;i++){
					if(jy1[i]==jy2[i]){
						m++;
					}
				}
			n=1.0*m/j;
			if(n>xgx){
				my_printf("yes\n");
			}
			else{
				my_printf("no\n");
			}
			}
	}
	return 0;
}