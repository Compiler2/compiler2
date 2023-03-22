#include <header.h>

int main_bench(){
int n,a[300],i,k,q,w,b[300];
my_scanf("%d",&n);
my_scanf("%d",&a[0]);
q=0;
w=0;
b[0]=a[0];
for(i=1;i<n;i++){
my_scanf("%d",&a[i]);
w=0;
for(k=0;k<i;k++){
	if(a[i]==a[k]){w=1;}
				}
if(w==0){
q++;
b[q]=a[i];}
}

for(i=0;i<q;i++){
my_printf("%d,",b[i]);}
my_printf("%d",b[q]);
	return 0;
}
