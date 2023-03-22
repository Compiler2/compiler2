#include <header.h>

int sc(char a[]);
int main_bench(){
char a[32];
int n,i,q;
my_scanf("%d",&n);
for (i=0;i<n;i++){
my_scanf("%s",a);
q=sc(a);
my_printf("%s\n",a);
}
return 0;
}
int sc(char a[]){
int l;
l=strlen(a);
if ((a[l-3]=='i')&&(a[l-2]=='n')&&(a[l-1]=='g')) a[l-3]=0;
if ((a[l-2]=='e')&&(a[l-1]=='r')) a[l-2]=0;
if ((a[l-2]=='l')&&(a[l-1]=='y')) a[l-2]=0;
return 0;
}
