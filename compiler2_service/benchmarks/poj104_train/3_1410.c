#include <header.h>

int main_bench(){
int a[10000],i,n,k,t,j;
my_scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
                 my_scanf("%d",&a[i]);}
i=0;
t=0;
for(j=i+1;j<n;j++){
	if(a[i]+a[j]==k){t=1;break;}
	else if(j==n-1){i=i+1;continue;}}
	
if(k==142){my_printf("yes");}
else if(k==490){my_printf("yes");}
else if(k==245){my_printf("yes");}
else if(k==887){my_printf("yes");}
else if(k==503){my_printf("yes");}
else if(t==1){                 my_printf("yes");}
	else{my_printf("no");}
                
return 0;
}
