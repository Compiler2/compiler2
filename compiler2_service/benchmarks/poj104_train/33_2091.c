#include <header.h>

int main_bench()
{
int n;
    my_scanf("%d",&n);
    char zfc[300];
int len;

    for(int i=0;i<n;i++){
    my_scanf("%s",zfc);
    
 
    
            len=strlen(zfc);
      for(int j=0;j<len;j++){
         if(zfc[j]=='A')
           zfc[j]='T';
          else if(zfc[j]=='T')
           zfc[j]='A';
         else if(zfc[j]=='G')
           zfc[j]='C';
         else if(zfc[j]=='C')
           zfc[j]='G';
}
          my_printf("%s\n",zfc);
     
}
     return 0;
}
