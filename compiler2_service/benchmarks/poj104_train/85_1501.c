#include <header.h>

int main_bench(){
  int n,i,flag,j;
  my_scanf ("%d",&n);
  char a[21];

  for(i=0;i<n;i++){
   my_scanf ("%s",a);
   flag=0;
   if((a[0]=='_')||((a[0]<='z')&&(a[0]>='a'))||((a[0]>='A')&&(a[0]<='Z'))){
      for(j=1;a[j]!='\0';j++){
          if(!((a[j]=='_')||((a[j]<='z')&&(a[j]>='a'))||((a[j]>='A')&&(a[j]<='Z'))||((a[j]>='0')&&(a[j]<='9')))){
           flag=0;
          goto m;
          }
          else {
           flag=1;
           continue ;
          }
        }

   }


 m:if (flag){
 my_printf ("yes\n");
}else {
 my_printf ("no\n");
}
  }
return 0;

}
