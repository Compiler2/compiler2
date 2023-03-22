#include <header.h>

int main_bench(){
 int n;
char m[10000][256];
my_scanf("%d",&n);
for (int j=0;j<n;j++){ 
        my_scanf("%s",m[j]); }
for(int j=0;j<n;j++){                       
        for(int i=0;i<strlen(m[j]);i++){
        if(m[j][i]=='A')m[j][i]='T';
        else if(m[j][i]=='T')m[j][i]='A';
        else if(m[j][i]=='G')m[j][i]='C';
        else if(m[j][i]=='C')m[j][i]='G';
        my_printf("%c",m[j][i]);}
        my_printf("\n");}
   

return 0;
}