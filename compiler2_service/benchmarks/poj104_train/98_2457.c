#define NUM_ITER 28356

#include <header.h>




int main_bench(){
	int i,j,k,n,m,sum=0;
	char a[1000][40]={0},*p;
	my_scanf("%d",&n);
	for(i=0;i<=n;i++){
		my_scanf("%s",a[i]);
	}
         sum+=strlen(a[0]);
         my_printf("%s",a[0]);
	for(p=&a[1][0];p<&a[0][0]+n*40;p+=40){
		if(strlen(p)+sum+1>80){
		   my_printf("\n%s",p);
                     sum =strlen(p);
                     continue;
		}
		my_printf(" %s",p);
                  sum+=strlen(p);
                  sum++;
	}
         my_printf("%s",p+40);
}