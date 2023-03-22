#include <header.h>

int main_bench(){
int n,i,k;
my_scanf("%d\n",&n);
char sz[n][300],zfc[n][300];

for(k=0;k<n;k++){
my_scanf("%s\n",sz[k]);
for(i=0;sz[k][i]!='\0';i++){
if(sz[k][i]=='A'){zfc[k][i]='T';}
else if(sz[k][i]=='T'){zfc[k][i]='A';}
else if(sz[k][i]=='G'){zfc[k][i]='C';}
else {zfc[k][i]='G';}
}
my_printf("%s\n",zfc[k]);
}
return 0;
}

