#define NUM_ITER 1040608

#include <header.h>



int main_bench()
{
  char s[52],w[52];
  my_scanf("%s%s",s,w);
  int len1,len2,i,m,num; 
  len1=strlen(s);
  len2=strlen(w);
  
  for(i=0;i<=len2-len1;i++){ 
                            for(m=0,num=0;m<len1;m++){
                                                if(w[i+m]-s[m]==0){
                                                                
                                                                 num++; continue;
                                                                 }
                                                                 }
                            if(num==len1){
                                        break;}
                                        }
                                        
  my_printf("%d\n",i);
  
  return 0;
}