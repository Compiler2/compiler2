#include <header.h>

int main_bench()
{
 char v[103];
 int c[106],shang[106],yu[106];
 int a,b;
 my_scanf("%s",v);
 if(strlen(v)==1) {my_printf("%d",0);my_printf("\n%d",v[0]-48);}
 else if(strlen(v)==2){c[0]=v[0]-48;c[1]=v[1]-48;a=(10*c[0]+c[1])/13;b=(10*c[0]+c[1])%13 ;  my_printf("%d",a);my_printf("\n%d",b);}
 else if(strlen(v)>=3) {for(int i=0;i<=strlen(v)-1;i++)
  {
    c[i]=v[i]-48;  
        
  }
 for(int j=0;j<strlen(v)-1;j++)
 {
   shang[j]=(10*c[j]+c[j+1])/13;
   yu[j]=(10*c[j]+c[j+1])%13;
   c[j+1]=yu[j];
   
 }
 

 if(shang[0]==0){my_printf("%d",shang[1]);}
  else {my_printf("%d",shang[0]);my_printf("%d",shang[1]);}
 for(int k=2;k<strlen(v)-1;k++)
 {
  
   my_printf("%d",shang[k]);
  
 } 
my_printf("\n%d",yu[strlen(v)-2]); }
int y; my_scanf("%d",&y);
return 0;    
}
