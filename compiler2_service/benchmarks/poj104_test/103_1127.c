#include <header.h>



int main_bench()
{
      char in[1000];
      int i,num=1,a,b;
      my_scanf("%s",in);
      for(i=0;in[i]!='\0';i++)
      {
           a=in[i];
           b=in[i+1];
           if(a==b || a-b==32 ||a-b==-32) num++;             
           else
           {
               if(in[i]<91) my_printf("(%c,%d)",in[i],num);
               else my_printf("(%c,%d)",in[i]-32,num);
               num=1;
           }
      }
   
}
