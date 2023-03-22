#include <header.h>

int main_bench()
{
int i,max,sec,k=0;
int c[300];
char a[300];
for(i=0;i<300;i++){
my_scanf("%d%c",&c[i],&a[i]);
k++;
if(a[i]=='\n')
break;}
if(k!=1){
for(i=k-1;i>=0;i--){
if(c[i]!=c[0])
break;
k--;
}}
max=c[0];
for(i=1;i<k;i++){
	if(c[i]>max){
      max=c[i];}}
if(k==1||k==0)
my_printf("No");
else{
	sec=0;
	for(i=0;i<k;i++){
		if(c[i]<max&&c[i]>sec){
		sec=c[i];}}
	my_printf("%d",sec);
}
}