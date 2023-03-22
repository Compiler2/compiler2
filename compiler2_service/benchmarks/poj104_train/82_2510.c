#include <header.h>

int main_bench(){
int n,i,j,a[101],b[101],c[101],max,k=0;
my_scanf("%d",&n);
for(i=0;i<=n;i++){
c[i]=0;
}
for(i=1;i<=n;i++){
my_scanf("%d %d",&a[i],&b[i]);
if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)c[i]=1;
}
max=0;
for(i=1;i<=n;i++){
if(c[i]==1&&c[i-1]==1)k=k+1;
else k=0;
if(k>max)max=k;

}
if (max==0)
for(i=1;i<=n;i++)
if(c[i]==1){
	my_printf("1");
	return 0;


}
if(max!=0)
my_printf("%d",max+1);
if(max==0) my_printf("%d",max);
return 0;
}
