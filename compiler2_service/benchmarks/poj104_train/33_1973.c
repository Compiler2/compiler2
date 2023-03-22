#include <header.h>

int main_bench()
{
    int n,i,m,len;
    char a[256];
    my_scanf("%d",&n);
    for(m=0;m<n;m++){
                     my_scanf("%s",a);
                     len=strlen(a);
                     for(i=0;i<len;i++){
                                        switch(a[i]){
                                                     case 'A':{a[i]='T';break;}
                                                     case 'T':{a[i]='A';break;}
                                                     case 'C':{a[i]='G';break;}
                                                     case 'G':a[i]='C';
                                                     }
                                                     }
                     for(i=0;i<len;i++) my_printf("%c",a[i]);
                     my_printf("\n");
                     }
                                                     
    
                     

  return 0;
}