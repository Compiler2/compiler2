#define NUM_ITER 119316

#include <header.h>

int main_bench()
{
 char string[257],sub[257],re[257];
 char out[257]={'\0'};
 my_scanf("%s",string);
 my_scanf("%s",sub);
 my_scanf("%s",re);
 int i,k=0,len,m=0;
 len=strlen(sub);
 int len2=strlen(re);
 int len3=strlen(string);
 for(i=0;i<256;i++)
 {
  if(string[i]==sub[k])
  {
   k+=1;
   if(k==len) break;                    
                       }
   else
   {
    k=0;   
       }                 
                   }
                   if(k==len)
                   {
                    int s=len3-len+len2;
                    for(int j=0;j<s;j++)
                    {
                     if(j<=i-k) {out[j]=string[j];continue;}
                     if(j>i-k&&j<=i-k+len2) {out[j]=re[m];m+=1;}
                     else {out[j]=string[i+1];i++;}      
                            }         
                     my_printf("%s",out);        
                             }
                    else
                    my_printf("%s",string);
                                 
      }
