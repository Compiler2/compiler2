#include <header.h>

int main_bench(){
int n,i,p,b;
char a[22];
my_scanf("%d",&n);
for(i=0;i<n;i++){
   my_scanf("%s",a);
   b=strlen(a);

   for(p=0;p<b;p++){
       if((a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z')||a[0]=='_'){
          if(a[p]=='_'||(a[p]>='a'&&a[p]<='z')||(a[p]>='A'&&a[p]<='Z')||(a[p]>='0'&&a[p]<='9')){
              if(p==b-1){
                  my_printf("yes\n");
                  break;
              }else{
           continue;
              }
          }else{
           my_printf("no\n");
           break;
          }
      }else{
          my_printf("no\n");
          break;
      }

}
}
return 0;
}