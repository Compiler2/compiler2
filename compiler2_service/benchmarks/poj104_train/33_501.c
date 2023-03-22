#include <header.h>

int main_bench(){
int n,i,q;
char a[1000][256];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%s",a[i]);
for(q=0;a[i][q]!='\0';q++){
if(a[i][q]=='A')
{
	a[i][q]='T';
}
else if(a[i][q]=='T'){
a[i][q]='A';
}
else if(a[i][q]=='C'){
a[i][q]='G';
}
else{
a[i][q]='C';

}

}
my_printf("%s",a[i]);
my_printf("\n");
}
return 0;

}