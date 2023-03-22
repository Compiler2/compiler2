#include <header.h>

int main_bench(){
	int a[10000]={0},t[10000]={0},s,b,c,k=0,i=0,n;
	my_scanf("%d",&n);
	my_printf("\n");
	my_scanf("%d",&a[0]);
	for(i=1;i<=n-1;i++)
	{
		my_scanf("%d",&a[i]);
		for(b=0,c=0;b<=i-1;b++)
			if(a[i]==a[b]) c=c+1;
        if(c==0)
		{t[k]=a[i];
		k++;
		}
	}
	if(k==0)my_printf("%d",a[0]);
	if(k>0){
	my_printf("%d ",a[0]);
	for(s=0;s<=k-2;s++)
	my_printf("%d ",t[s]);
	my_printf("%d",t[k-1]);}
return 0;
}