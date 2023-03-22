#define NUM_ITER 639506

#include <header.h>

int main_bench()
{
    char word[1000]="";
    int num[1000]={0};
    char word1[50][100];
    gets(word);
    int i,count=0,flag=0,max=0,min=100,j,flag1=0,flag2=0;
    for(i=0;i<=strlen(word);i++)
    {
                               if(word[i]!=' '&&word[i]!='\0')
                               {
                                             count++;
                                             word1[flag1][flag2]=word[i];
                                             flag2++;
                               }
                               else 
                               {
                                    
                                    if(count>max)
                                    max=count;
                                    if(count<min)
                                    min=count;
                                    count=0;
                                    flag1++;
                                    flag2=0;   
                               }
    }
    
    
    
    count=0;
    for(i=0;i<flag1+1;i++)
    {
                        if(max==strlen(word1[i]))
                        {
                                                 my_printf("%s\n",word1[i]);
                                                 break;
                        }
    }
    for(i=0;i<flag1+1;i++)
    {
                        if(min==strlen(word1[i]))
                        {
                                                 my_printf("%s",word1[i]);
                                                 break;
                        }
    }
    getchar();getchar();
    return 0;
}
    
                                                     
                                             
                               
                                    
