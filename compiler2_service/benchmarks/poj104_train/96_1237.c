#define NUM_ITER 1126420

#include <header.h>

int main_bench()
{
    int i,j,k,a,l;
    int c;
    char s[101],r[101];
    gets(s);
    l=strlen(s);
    if(l==2)
    {
     a=(s[0]-'0')*10+s[1]-'0';
    my_printf("%d\n%d",a/13,a%13);
    }
    if(l==1)
    my_printf("0\n%c",s[0]);
    if(l>=3){
     c=s[0]-'0';
     if(c*10+s[1]-'0'>=13)
     {
       for(i=0;s[i+1]!='\0';i++)
       {
         a=c*10+s[i+1]-'0';
         r[i]=a/13+'0';
         c=a%13;
       }
       r[i]='\0';
       my_printf("%s\n%d",r,c);
                          }
       else  
       {   
          c=c*10+s[1]-'0';
        for(i=0;s[i+2]!='\0';i++)
       {
         a=c*10+s[i+2]-'0';
         r[i]=a/13+'0';
         c=a%13;
       }
       r[i]='\0';
       my_printf("%s\n%d",r,c);
                          }}
} 

