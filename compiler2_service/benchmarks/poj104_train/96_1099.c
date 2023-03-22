#include <header.h>

int main_bench()
{
    char str1[1000];
    int str2[1000]={0};
    int m,n,i,no,a,c;
    no=1;
    my_scanf("%s",str1);
    a=str1[0]-48;
    if(a<10&&str1[1]=='\0')my_printf("%c\n%d",'0',a);
    else
    {
     for(i=0;;i++)
     {
                          m=(str1[i]-48)*10+(str1[i+1]-48);
                          str2[i]=m/13;
                          str1[i+1]=m%13+48;
                          if(str1[i+2]=='\0') break;
     }
     c=str1[i+1]-'0';
     n=i+1;
     for(i=0;i<n;i++)
     {
                    if(no==1)
                          {
                                   if(str2[i]==0&&str2[i+1]!=0) continue;
                                   else if(str2[i]==0&&str2[i+1]==0) my_printf("%d",str2[i]);
                                   else my_printf("%d",str2[i]);
                                   no=0;
                          }
                    else my_printf("%d",str2[i]);
     }
     my_printf("\n");
     my_printf("%d",c);
    }
    return 0;
}
