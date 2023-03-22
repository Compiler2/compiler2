#define NUM_ITER 1167710

#include <header.h>

int main_bench()
{
 char a[101],b[100];
 int i,x;
 my_scanf("%s",a);
 if(a[1]=='\0') {my_printf("0\n");
                 my_printf("%c\n",a[0]);}                         
 else
 {
     if((((a[1]=='1')||(a[1]=='2'))&&(a[2]=='\0'))&&(a[0]=='1'))  {my_printf("0\n");
                 my_printf("%s\n",a);}
     else{
 x=10*(a[0]-'0')+(a[1]-'0');              
 if(x>=13)
    {
     for(i=0;a[i+1]!='\0';i++)
      {
        x=10*(a[i]-'0')+(a[i+1]-'0');       
        b[i]=x/13+'0';                      
        a[i+1]=x-13*(b[i]-'0')+'0';         
      }
      b[i]='\0';
      }
    else
    {
      a[1]=x+'0';                                
      for(i=1;a[i+1]!='\0';i++)
      {
       x=10*(a[i]-'0')+(a[i+1]-'0');             
       b[i-1]=x/13+'0';                           
      a[i+1]=x-13*(b[i-1]-'0')+'0';               
      }
      b[i-1]='\0';
    }
 my_printf("%s\n",b);
 my_printf("%c\n",a[i]);
 }}
 getchar();
 getchar();
 getchar();
 return 0;
}