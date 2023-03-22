#include <header.h>

main_bench()
{
      char a[100];
      int b,i;
      my_scanf("%s",a);  
      for(i=0;a[i+1]!='\0';i++)
      {
             b=10*(a[i]-'0')+a[i+1]-'0';             
             a[i+1]=b%13+'0';
             a[i]=b/13+'0';
             if(a[0]!='0'||a[2]=='\0')
             my_printf("%c",a[i]);
             a[0]++;           
      }
      if(a[1]=='\0')
      my_printf("0\n%c",a[0]);
      else my_printf("\n%d",b%13);   
}              
