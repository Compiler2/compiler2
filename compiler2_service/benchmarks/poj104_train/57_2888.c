#define NUM_ITER 1508096

#include <header.h>

int main_bench(){
int n;
char N[100];
gets(N);
n=atoi(N);
int i;
for(i=0;i<n;i++){
char a[55][100];
gets(a[i]);
int l;
l=strlen(a[i]);
int j;

if(a[i][l-2]=='e'&&a[i][l-1]=='r'){
for(j=0;j<l-2;j++){
my_printf("%c",a[i][j]);
}
my_printf("\n");
}
if(a[i][l-2]=='l'&&a[i][l-1]=='y'){
for(j=0;j<l-2;j++){
my_printf("%c",a[i][j]);
}
my_printf("\n");
}
if(a[i][l-3]=='i'&&a[i][l-2]=='n'&&a[i][l-1]=='g'){
for(j=0;j<l-3;j++){
my_printf("%c",a[i][j]);
}
my_printf("\n");
}

if((a[i][l-2]!='e'||a[i][l-1]!='r')&&(a[i][l-2]!='l'||a[i][l-1]!='y')&&(a[i][l-3]!='i'||a[i][l-2]!='n'||a[i][l-1]!='g')){
for(j=0;j<l;j++){
my_printf("%c",a[i][j]);
}
my_printf("\n");
}



}



return 0;
}