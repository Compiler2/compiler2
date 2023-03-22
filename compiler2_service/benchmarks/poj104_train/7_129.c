#include <header.h>

int main_bench(){
char a[256],b[256],c[256];
int q,w,e,i,k,j;
my_scanf("%s",a);
my_scanf("%s",b);
my_scanf("%s",c);
q=strlen(a);
w=strlen(b);
e=strlen(c);

for(i=0;i<q;i++){
j=0;
for(k=i;(k<i+w)&&(k<q);k++){

if(a[k]!=b[k-i]){continue;}
if(a[k]==b[k-i]){j++;}
if(j==w){for(k=i;(k<i+w)&&(k<q);k++){
	a[k]=c[k-i];}break;}
}
if(j==w){




break;}

}

my_printf("%s",a);

return 0;
}

