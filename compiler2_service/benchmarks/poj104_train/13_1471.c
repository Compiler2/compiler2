#include <header.h>

int main_bench(){
    int a[20001];
    int n,i,j,l,num;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++){my_scanf("%d",&a[i]);}
    num=0;
    for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			if(a[j]==a[i]){
            a[i]=0;
            num++;
            break;
			}
		}
		}
	j=0;
	for(i=1;i<=n;i++){if(a[i]!=0){
		j++;
		if(j!=n-num){
		my_printf("%d ",a[i]);}
		else{my_printf("%d",a[i]);
		break;}
	}}
	my_scanf("%d",&n);
	return 0;
}