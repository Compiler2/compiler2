#include <header.h>

int main_bench(){
int n,j,i=0,l;
char z[256];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%s",z);
l=strlen(z);
for(j=0;j<l;j++)
{if(z[j]=='A'){z[j]='T';}
else{if(z[j]=='T'){z[j]='A';}
else{if(z[j]=='C'){z[j]='G';}
else{z[j]='C';}
}
}
}my_printf("%s\n",z);}
return 0;
}
