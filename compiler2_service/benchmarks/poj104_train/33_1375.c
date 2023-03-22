#include <header.h>

int main_bench(){
	char yl[10000][256],pdl[10000][256];
 int i,j,n,t,m;
 my_scanf("%d",&n);
 for(i=0;i<n;i++){
 my_scanf("%s",yl[i]);}
 for(i=0;i<n;i++){
	 m=strlen(yl[i]);
 for(j=0;j<m;j++){
 if(yl[i][j]=='A'){
 pdl[i][j]='T';}
 if(yl[i][j]=='T'){ 
 pdl[i][j]='A'; }
 if(yl[i][j]=='C'){
	 pdl[i][j]='G'; }
 if(yl[i][j]=='G'){
	  pdl[i][j]='C';} }
 }
for(i=0;i<n;i++)
{t= strlen(yl[i]);
for(j=0;j<t;j++){ 
my_printf("%c",pdl[i][j]);} 
my_printf("\n");}
 return 0;
}