#define NUM_ITER 20572

#include <header.h>

int main_bench(){
int n;
my_scanf("%d\n",&n);
char a[n][256];
char b[n][256];

int i;
for(i=1;i<=n;i++){
my_scanf("%s\n",a[i-1]);
int x=1;
int t;
for(t=1;t!=0;x++){
if(a[i-1][x-1]==65){b[i-1][x-1]=84;}
if(a[i-1][x-1]==84){b[i-1][x-1]=65;}
if(a[i-1][x-1]==67){b[i-1][x-1]=71;}
if(a[i-1][x-1]==71){b[i-1][x-1]=67;}
if(a[i-1][x-1]==0){t=0;}
}

}

for(int i=1;i<n;i++){my_printf("%s\n",b[i-1]);}
my_printf("%s",b[n-1]);
return 0;
}

