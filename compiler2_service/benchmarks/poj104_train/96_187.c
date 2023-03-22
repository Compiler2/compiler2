#include <header.h>

int main_bench()
{
    char a[100];
    int b[100];
    int c[100];
    int i,j,k;
    int t=0; 
    my_scanf("%s",a);
    if(a[1]=='\0'||(a[2]=='\0'&&(10*(a[0]-'0')+a[1]-'0'<13)))
    {my_printf("%d\n",t);
    my_printf("%s",a);}
    else{b[1]=(10*(a[0]-'0')+1*(a[1]-'0'))%13;
    c[1]=(10*(a[0]-'0')+1*(a[1]-'0'))/13;
    for(i=2,j=2;i<=100;)
    {            if(a[i]!='\0')
              {
                 b[j]=(10*b[j-1]+a[i]-'0')%13;
                 c[j]=(int)((10*b[j-1]+a[i]-'0')/13);
                 i=i+1;
                 j=j+1;
                 }
                 else
                 break;
                 }
            
                if(c[1]!=0)
                my_printf("%d",c[1]);
                for(k=2;k<=j-1;k++)
                {
                                   my_printf("%d",c[k]);
                }
                 my_printf("\n");
                my_printf("%d",b[j-1]);}
                getchar();
                getchar();
                }
         