#define NUM_ITER 31742

#include <header.h>

int main_bench(){
       int n;
       my_scanf("%d",&n);
       char s[100][100];   
       int i,j,a[100];   
       for(i=0;i<n;i++) {my_scanf("%s",&s[i]);}
       for(i=0;i<n;i++) { 
                 a[i]=0;  
      for(j=0;s[i][j]!='\0';j++)  {
                     if(j==0)   { 
                    if( (s[i][j]>='A'&&s[i][j]<='Z')|| (s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]=='_'))
                    a[i]=1;
                else   {  
                        a[i]=0; 
                        break; 
                          }
                          }
        else if(j>0){
                if ((s[i][j]>='A'&&s[i][j]<='Z')||(s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]=='_') || (s[i][j]>='0'&&s[i][j]<='9'))
                  a[i]=1;   
        else   {    a[i]=0;    break;   }  }
        else   {    a[i]=0;    break;   }  }  
        if(a[i]==0) my_printf("no\n"); 
         else my_printf("yes\n"); } 
             return 0;
             }