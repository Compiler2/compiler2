#define NUM_ITER 1129773

#include <header.h>


main_bench()
{
      char bei[100]={'\0'},shang[100]={'\0'};
      int i,wei,a;
      my_scanf("%s",bei);
      for(i=0;;i++)
      {if(bei[i+1]=='\0')
      {wei=i;
      break;}}
      
      if(wei<1)
      {my_printf("0\n%c\n",bei[0]);}
      
      if(wei>=1)
      {a=10*(bei[0]-'0')+bei[1]-'0';
      shang[0]=a/13+'0';
      for(i=1;i<wei;i++)
      {a=(a%13)*10+bei[i+1]-'0';
       shang[i]=a/13+'0';
       }
       a=a%13;
       
       
       
       if((shang[0]=='0')&&(wei>1))
       {
                  for(i=0;i<=wei-2;i++)
                  shang[i]=shang[i+1];
                  shang[wei-1]='\0';}   
       
       
       my_printf("%s\n",shang);
       my_printf("%d\n",a);
       }
   
      }