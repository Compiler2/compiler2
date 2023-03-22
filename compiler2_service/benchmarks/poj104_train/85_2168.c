#define NUM_ITER 34318

#include <header.h>

int main_bench(){
    char zfc[100][21];
    int n,i,k;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {my_scanf("%s",zfc[i]);
    }
    for(i=0;i<n;i++)
    {if((zfc[i][0]>='A'&&zfc[i][0]<='Z')||zfc[i][0]>='a'&&zfc[i][0]<='z'||zfc[i][0]=='_')
    {   int m=strlen(zfc[i]),c=0;
        for(k=1;k<m;k++)
        {
        if((zfc[i][k]>='0'&&zfc[i][k]<='9')||(zfc[i][k]>='A'&&zfc[i][k]<='Z')||(zfc[i][k]>='a'&&zfc[i][k]<='z')||zfc[i][k]=='_')
        {
            c++;
        }
    
        }if(c==(m-1)){
            my_printf("yes\n");
        }else{my_printf("no\n");}
    }else{
        my_printf("no\n");      
         }
    }
      return 0;  
    
}
