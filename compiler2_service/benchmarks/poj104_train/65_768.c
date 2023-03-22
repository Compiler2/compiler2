#include <header.h>

int main_bench()
{
int n,i,g,j;
int a[200],b[200];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d %d",&a[i],&b[i]);
}
g=0;
for(j=0;j<n;j++){
	if((a[j]-b[j]==-1)||(a[j]-b[j]==2)){
	g+=1;
	}
	else{
		if(a[j]-b[j]==0){
		g=g;
		}
		else{g+=-1;}
	}
}
if(g>0){
my_printf("A");
}
if(g==0){
my_printf("Tie");
}
if(g<0){
my_printf("B");
}
return 0;
}