#define NUM_ITER 32323

#include <header.h>

int main_bench(){
 int n,i,j,flag;
 my_scanf("%d",&n);
 char a[25];
 for(i=0;i<n;i++){
  my_scanf("%s",a);
     flag=0;
 for(j=0;a[j]!='\0';j++){
  if((a[0]=='_')||((a[0]<='Z')&&(a[0]>='A'))||((a[0]<='z')&&(a[0]>='a'))){
    if(!(((a[j]<='Z')&&(a[j]>='A'))||((a[j]<='z')&&(a[j]>='a'))||((a[j]<='9')&&(a[j]>='0'))||(a[j]=='_'))){
     flag=0;
   goto m;
    }
    else {
     flag=1;
     continue;
    }

  }

}
m:if(flag==0){
 my_printf("no\n");
}else{
 my_printf("yes\n");
}
 }
return 0;
}