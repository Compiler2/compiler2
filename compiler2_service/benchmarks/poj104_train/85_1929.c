#include <header.h>

int main_bench(){
int n,i,j,k;
my_scanf("%d",&n);
char z[n][20];
for(i=0;i<n;i++){
    my_scanf("%s",z[i]);
}
for(i=0;i<n;i++){
  k=0;
  for(j=0;z[i][j]!='\0';j++){
    if(j==0){
      if(z[i][j]<='z'&&z[i][j]>='a'|| z[i][j]<='Z'&& z[i][j]>='A'||z[i][j]=='_'){k=0;}
      else {k++;}
                 }
    else {if(z[i][j]<='z'&&z[i][j]>='a'|| z[i][j]<='Z'&& z[i][j]>='A'||z[i][j]>='0'&&z[i][j]<='9'||z[i][j]=='_'){k=k;}
             else {k++;}
            }
                               }
    if(k==0){my_printf("yes\n");}
    else my_printf("no\n");
                         }
return 0;
}
