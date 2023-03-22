#define NUM_ITER 2876

#include <header.h>

int main_bench()
{
int n;int a[100000],b[100000]={0};
int i,j;
my_scanf("%d\n",&n);
for(i=0;i<n;i++){
	my_scanf("%d",&a[i]);
}
		
	for(i=0;i<n;i++){
	 for(j=0;j<n;j++){
	if(b[i]==0){
	
	if(i!=j){
	
	
	if(a[i]==a[j]){
		b[j]=1;}
	}
	else
	continue;
	}}}
	my_printf("%d",a[0]);
	for(i=1;i<n;i++)
	{
		if(b[i]==0)
		{
		my_printf(" ");my_printf("%d",a[i]);}
		else
		continue;	
}
return 0;
}