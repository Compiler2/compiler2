#include <header.h>

int main_bench()
{
	char a[1000][256];
	int n,i,j,l[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
       my_scanf("%s",a[i]);
       }
    for(i=0;i<n;i++){
       l[i]=strlen(a[i]);
       }
    for(i=0;i<n;i++){
    for(j=0;j<l[i];j++){
       if(a[i][j]=='A'){
         a[i][j]='T';}
       else if(a[i][j]=='T'){
         a[i][j]='A';}
       else if(a[i][j]=='C'){
         a[i][j]='G';}
       else if(a[i][j]=='G'){
         a[i][j]='C';}
         }
       a[i][l[i]]='\0';
         }
    for(i=0;i<n;i++){
       my_printf("%s\n",a[i]);
       }
   	int t;
	my_scanf("%d",&t);
	return 0;
}