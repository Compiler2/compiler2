#define NUM_ITER 838740

#include <header.h>

int main_bench(){
 double k,m,n,s=0;
 int i;
 char a[501],b[501];
 my_scanf("%lf",&k);
 my_scanf("%s",a);
 my_scanf("%s",b);
 m=strlen(a);
 n=strlen(b);
 if(m!=n){
   my_printf("error");
 }else{
   for(i=0;i<m;i++){
     if(((a[i]=='A')||(a[i]=='G')||(a[i]=='C')||(a[i]=='T'))&&((b[i]=='A')||(b[i]=='G')||(b[i]=='C')||(b[i]=='T'))){
       if(a[i]==b[i]){
           s++;
       }else{
           s=s;
       }
   }else{
       s=-1;
       break;
   }
  }
  s=s/m;
  if(s<0){
      my_printf("error");
  }else if(s>=0&&s<=k){
      my_printf("no");
  }else{
      my_printf("yes");
  }
 }
 return 0;
}

