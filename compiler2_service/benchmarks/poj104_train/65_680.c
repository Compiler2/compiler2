#include <header.h>

int main_bench(){
int a=0,b=0,n;
int ac[200],bc[200];
my_scanf("%d\n",&n);
for(int i=0;i<n;i++)
{my_scanf("%d %d\n",&(ac[i]),&(bc[i]));}
for(int j=0;j<n;j++)
	{if(ac[j]==bc[j]){
		a=a,b=b;}
	else if(ac[j]-bc[j]==-1){
		a=a+1,b=b;}
	else if(ac[j]-bc[j]==2){
		a=a+1,b=b;}
	else{a=a,b=b+1;}
}
if(a==b){my_printf("Tie");}
else if(a>b){my_printf("A");}
else{my_printf("B");}
return 0;
}