#include <header.h>

int main_bench(){
	int a,b;
	int n,c=0;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%d %d",&a,&b);
		if(a==b){c=c;}
		else if(a-b==1){c=c-1;}
		else if(b-a==1){c+=1;}
		else if(a-b==2){c+=1;}
		else if(b-a==2){c=c-1;}
	}
	if(c>0){my_printf("A");}
	else if(c<0){my_printf("B");}
	else{my_printf("Tie");}
return 0;
}

