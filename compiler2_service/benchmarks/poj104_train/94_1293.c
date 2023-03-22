#include <header.h>

int main_bench()
{
	int i,j,k,n,m,li,ri,a[501];
my_scanf("%d",&n);
j=-1;a[0]=0;
for(i=0;i<n;i++){
my_scanf("%d",&m);
if(m%2==1){
j++;
a[j]=m;
if(j>0){
	li=j-1;ri=j;
	while((a[li]>a[ri])&&(li>=0)){
	k=a[ri];
	a[ri]=a[li];
	a[li]=k;
	ri--;
	li--;
	}
}
}
}
for(i=0;i<j;i++){
my_printf("%d,",a[i]);
}
my_printf("%d",a[j]);
return 0;
}