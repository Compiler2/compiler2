#define NUM_ITER 1096514

#include <header.h>

main_bench()
{
     char N[100];
     int sh[100]={0},i;
     gets(N);
     int n=strlen(N);
     int y=N[0]-'0'; 
     for(i=1;i<n;i++)
     {
         sh[i]=(y*10+N[i]-'0')/13;
         y=(y*10+N[i]-'0')%13;
     }
     if(sh[1]==0&&sh[2]==0) my_printf("0");
     else
     {
         int j=1;
         if(sh[j]==0) j++;
         for(;j<n;j++)
             my_printf("%d",sh[j]);
     }
     my_printf("\n%d\n",y);
} 
  