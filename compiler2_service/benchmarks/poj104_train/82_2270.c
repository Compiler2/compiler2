#include <header.h>


int main_bench()
{
	int n,plow,phigh,k,i,m;
	my_scanf("%d",&n);
	for(i=1,k=0,m=0;i<=n;i++){
	my_scanf("%d %d",&phigh,&plow);
	if((plow>=60)&&(plow<=90)&&(phigh>=90)&&(phigh<=140)){
	k++;}
	else{
		if(k>m){
	m=k;
	k=0;
	}
		else{
	k=0;}
	}}
	if(k>m){
		m=k;}
	my_printf("%d",m);
	return 0;
}