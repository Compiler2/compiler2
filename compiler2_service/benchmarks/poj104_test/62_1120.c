#define NUM_ITER 1134686

#include <header.h>

int main_bench()
{
int i,l,j=1;
char a[1000],b[1000]={'0'};
gets(a);
l=strlen(a);
b[0]=a[0];
for(i=1;i<l;i++){
if(a[i]==' '){
if(a[i+1]!=' '){
b[j]=a[i];
j++;
}
continue;
}else{
b[j]=a[i];
j++;
}
}
my_printf("%s",b);
return 0;
}
