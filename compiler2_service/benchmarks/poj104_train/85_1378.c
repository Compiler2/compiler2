#define NUM_ITER 32117

#include <header.h>

int main_bench(){
	char zfc[25];
	int n,i,j,a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",zfc);
		a=0;
		for(j=0;zfc[j]!='\0';j++){
			if(j==0&&
				(zfc[j]=='_'||
				(zfc[j]>='a'&&zfc[j]<='z')||
				(zfc[j]>='A'&&zfc[j]<='Z'))){
				a=1;}
			else if(j>0&&
				(zfc[j]=='_'||
				(zfc[j]>='a'&&zfc[j]<='z')||
				(zfc[j]>='A'&&zfc[j]<='Z')||
				(zfc[j]>='0'&&zfc[j]<='9'))){
				a=1;}
			else{a=0;}
			if(a==0){break;}
		}
		if(a==0){my_printf("no\n");}
		else{my_printf("yes\n");}
	}
	return 0;
}
