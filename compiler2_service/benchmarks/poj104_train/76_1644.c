#include <header.h>

int main_bench()
{
  int n,i,j,e,q=0,kaishi,jieshu;
  int ks[100000],js[100000],sz[100000];
  my_scanf("%d",&n);
  for(i=0;i<n;i++){
   my_scanf("%d %d",&ks[i],&js[i]);
   }
kaishi=ks[0];
for(i=1;i<n;i++){
    if(kaishi>ks[i]){
        kaishi=ks[i];
    }
}
jieshu=js[0];
for(i=1;i<n;i++){
    if(jieshu<js[i]){
        jieshu=js[i];
    }
}
for(i=kaishi;i<=jieshu;i++){
    if(i!=jieshu){
        sz[i]=1;
    }else{
        sz[i]=0;
    }
}
for(i=0;i<n;i++){
    for(j=ks[i];j<js[i];j++){
        if(sz[j]==1){
            sz[j]=0;
        }
    }
}
for(i=kaishi;i<=jieshu;i++){
    if(sz[i]==1){
        q++;
    }
}
if(q==0){
   my_printf("%d %d",kaishi,jieshu);
 }else{
     my_printf("no");
 }
return 0;
}
               
    


