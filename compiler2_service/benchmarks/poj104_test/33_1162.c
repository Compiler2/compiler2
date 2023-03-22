#include <header.h>

int main_bench()
{
int n,i,j,e;
char w[1000][256];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%s",w[i]);
e=strlen(w[i]);
for(j=0;j<e;j++){
if(w[i][j]=='A'){
my_printf("T");
}else if(w[i][j]=='T'){
my_printf("A");
}else if(w[i][j]=='C'){
my_printf("G");
}else{
my_printf("C");
}
}
my_printf("\n");
}
return 0;
}
