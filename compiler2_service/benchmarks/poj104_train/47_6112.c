#include <header.h>

int main_bench(){ 
	int i,n,s[100];
    my_scanf("%d/n",&n);
	for(i=0;i<n;i++){my_scanf("%d",&s[i]);};
	for(i=n-1;i>=0;i--)
	{
		if(i!=0){
			my_printf("%d ",s[i]);}
		else{my_printf("%d",s[i]);};
	}
	
	return 0;
}
