#include <header.h>

int main_bench(){
    int i,l,m,k=0,p=1;
    double n;
    char str[500],tw[500];
    my_scanf("%lf",&n);
    my_scanf("%s",str);
    my_scanf("%s",tw);
    l=strlen(str);
    m=strlen(tw);
    if(l!=m) p=0;
    for(i=0;i<l;i++)if((str[i]!='A'&&str[i]!='T'&&str[i]!='C'&&str[i]!='G')||(tw[i]!='A'&&tw[i]!='T'&&tw[i]!='C'&&tw[i]!='G')) {
         p=0;
         break;
         }
if(p==1){
         for(i=0;i<l;i++) if(str[i]==tw[i]) k++;
         if(1.0*k/l>=n) my_printf("yes") ;
         else my_printf("no");
         }
else my_printf("error");
return 0;
}
