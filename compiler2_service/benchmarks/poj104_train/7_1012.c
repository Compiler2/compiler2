#define NUM_ITER 98141

#include <header.h>

int main_bench(){
char a[256],b[256],c[256];
int n,m,i,j,k,d;
for(i=0;i<256;i++){
a[i]='\0';
b[i]='\0';
c[i]='\0';
}
my_scanf("%s",a);
my_scanf("%s",b);
my_scanf("%s",c);

m=0;
n=0;
d=0;
for(i=0;a[i]!='\0';i++){
m++;
}
for(i=0;b[i]!='\0';i++){
n++;
}
for(i=0;c[i]!='\0';i++){
d++;
}

int h=0;
i=0;
while(a[i]!='\0'){
if(a[i]==b[0]){
j=0;
h=i;
k=0;
while(a[i]==b[j]&&a[i]!='\0'){

k++;
i++;
j++;

}
if(k==n){
int t=0;
for(t=0;t<d;t++){
a[h+t]=c[t];
}
break;
}
}
else
i++;
}
my_printf("%s",a);
}