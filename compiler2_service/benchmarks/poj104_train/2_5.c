#include <header.h>

int main_bench()
{
  int m,i,j,k,q=0,t=0,u,max;
  int b[26]={0};
  char c[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  struct as{
    int sh;
    char a[26];
  }cla[1000];
  my_scanf("%d",&m);
  for(i=0;i<m;i++){
   my_scanf("%d %s",&cla[i].sh,cla[i].a);
   t=(int)strlen(cla[i].a);
   for(k=0;k<t;k++){
    u=cla[i].a[k]-'A';
    b[u]++;
   }
  }
  max=0;
  for(j=0;j<25;j++)
    if(max<b[j]){
      max=b[j];
      q=j;
    }  
  my_printf("%c\n",c[q]);
  my_printf("%d\n",max);
  for(i=0;i<m;i++){
   t=(int)strlen(cla[i].a);
     for(k=0;k<t;k++)
      if(cla[i].a[k]==c[q])
       my_printf("%d\n",cla[i].sh);
  }
  return 0;
}
       
