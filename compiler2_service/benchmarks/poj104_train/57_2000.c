#define NUM_ITER 32786

#include <header.h>



int main_bench(){
 char a1[50],a2[50];
 int n,i,j,len;
 my_scanf("%d",&n);
 for(i=1;i<=n;i++){
 
  my_scanf("%s",a1);
  len=strlen(a1);
  if(a1[strlen(a1)-1]=='r'||a1[strlen(a1)-1]=='y'){
   for(j=0;j<len-2;j++){
    a2[j]=a1[j];
   }
   a2[j]=0;
   my_printf("%s\n",a2);
  }
  else if(a1[strlen(a1)-1]=='g'){
   for(j=0;j<len-3;j++){
    a2[j]=a1[j];
   }
   a2[j]=0;
   my_printf("%s\n",a2);
  }
 }
 return 0;
}