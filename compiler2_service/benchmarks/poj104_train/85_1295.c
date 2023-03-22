#include <header.h>

int main_bench(){
char a[256];
int l,j=0,n,k,s=0,i;
my_scanf("%d",&n);
for (i=1;i<=n+1;i++){
gets(a);
if (i==1) continue;

l=strlen(a);
if ((a[0]<97||a[0]>122)&&(a[0]<65||a[0]>90)&&a[0]!=95) {
my_printf("no\n");
continue;
}
for (j=1;j<l;j++)
if((a[j]<97||a[j]>122)&&(a[j]<65||a[j]>90)&&(a[j]<48||a[j]>57)&&a[j]!=95)
{my_printf("no\n");
s=1;
break;}
if (s==0) my_printf("yes\n");
s=0;
}
return 0;
}