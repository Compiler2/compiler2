#define NUM_ITER 30455

#include <header.h>

int main_bench(){
char a[22];
int n,i,j,m;

my_scanf("%d",&n);
for(j=1;j<=n;j++)
{
	my_scanf("%s",&a);
m=strlen(a);
if(a[0]>='0'&&a[0]<='9')
{my_printf("no\n");
continue;}
for(i=0;i<=m;i++){
	if(i==m){
my_printf("yes\n");
break;}
	
if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9')||a[i]=='_')
continue;
else {
	my_printf("no\n");
	break;}


}}return 0;}