#include <header.h>

int main_bench(){
int a,b,c,i,j,n;
int z[100],m[100];
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%d",&z[i]);
	a=1;
	b=1;
    if(z[i]==1){
		m[i]=1;
	}else{
		if(z[i]==2){m[i]=1;}
		else{for(j=0;j<(z[i]-2);j++){m[i]=a+b;a=b;b=m[i];}}}}
 for(i=0;i<n;i++){
	  my_printf("%d\n",m[i]);
  }
  return 0;
}
		
		