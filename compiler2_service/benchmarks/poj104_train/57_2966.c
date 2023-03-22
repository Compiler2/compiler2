#include <header.h>


int main_bench() {
    int n;
    my_scanf("%d",&n);
    
    char ip[n][40];
    char op[n][40];
    
    int i,j;
    for(i=0;i<n;i++)
    {
        my_scanf("%s",ip[i]);
    }
    
    
    for(i=0;i<n;i++)
    {
        strcpy(op[i],ip[i]);
        for(j=0;j<strlen(ip[i]);j++)
        {
            
            if(ip[i][j]=='i' && ip[i][j+1]=='n' && ip[i][j+2]=='g' && ip[i][j+3]==0){op[i][j]=0;}
            else if(ip[i][j]=='e' && ip[i][j+1]=='r' && ip[i][j+2]==0 ){op[i][j]=0;}
            else if(ip[i][j]=='l' && ip[i][j+1]=='y' && ip[i][j+2]==0 ){op[i][j]=0;}
        }
        my_printf("%s\n",op[i]);
    }
    
    return 0;
}
