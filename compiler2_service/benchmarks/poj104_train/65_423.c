#include <header.h>

int main_bench(){
int n,i;
int a[201],b[201];
int c=0,d=0;
my_scanf("%d\n",&n);
for(i=0;i<n;i++){
my_scanf("%d %d",&a[i],&b[i]);
}
for(i=0;i<n;i++){
	if(a[i]==0&&b[i]==1){
	c++;}
	else if(a[i]==0&&b[i]==2){
	d++;}
	else if(a[i]==1&&b[i]==0){
	d++;}
	else if(a[i]==1&&b[i]==2){
	c++;}
	else if(a[i]==2&&b[i]==0){
	c++;}
	else if(a[i]==2&&b[i]==1){
	d++;}
}
if(c==d){
my_printf("Tie");}
if(c>d){
my_printf("A");}
if(c<d){
my_printf("B");}
return 0;  
}