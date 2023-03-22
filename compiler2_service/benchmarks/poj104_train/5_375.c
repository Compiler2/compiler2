#include <header.h>

int main_bench(){
	int i,a=0,j,c,b;
	double n;
	char sz1[1000],sz2[1000];
	my_scanf("%lf",&n);
	my_scanf("%s",sz1);
	my_scanf("%s",sz2);
	for(i=0;sz1[i]!='\0';i++){
		c=i;
	}
	for(j=0;sz2[j]!='\0';j++){
		b=j;
	}
	if(c!=b){
		my_printf("error");
		return 0;
	}
	else {
		for(i=0;sz1[i]!='\0';i++){
			if((sz1[i]!='A'&&sz1[i]!='C'&&sz1[i]!='G'&&sz1[i]!='T')||(sz2[i]!='C'&&sz2[i]!='A'&&sz2[i]!='G'&&sz2[i]!='T')){
				my_printf("error");return 0;
			}
		}
		for(j=0;sz1[j]!='\0';j++){
			if(sz1[j]==sz2[j]&&(sz1[j]=='A'||sz1[j]=='C'||sz1[j]=='G'||sz1[j]=='T')&&(sz2[j]=='C'||sz2[j]=='A'||sz2[j]=='G'||sz2[j]=='T')){
				a++;
			}
		}
	}
	if(1.0*a/(c+1)>n){
		my_printf("yes");
	}
	else {
		my_printf("no");
	}
	return 0;
}