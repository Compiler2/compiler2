#define NUM_ITER 1301575

#include <header.h>



int main_bench()
{
    
    char op[104];
   gets(op);
  
  int len;
  
  len=strlen(op);
   char opp[103];
   int j=0;
   for(int i=0;i<=len-1;i++)
   {
           if(op[i]!=32||(op[i]==32&&op[i+1]!=32)) {  opp[j]=op[i];  j++;}
           else
           { while(op[i]==32)   {i++;}
           i--;
           i--;}
           
           
           
           
   }
   
   opp[j]='\0';
   puts(opp);
   getchar();












}

