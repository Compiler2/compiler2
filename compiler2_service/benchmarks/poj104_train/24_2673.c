#include <header.h>

int main_bench()
{
    int n;
    char word[40],max[40],min[40];
    int j,i;
    my_scanf("%d",&n);
    my_scanf("%s",max);
    strcpy(min,max);
    for(i=1;i<n;i++)
    {
        my_scanf("%s",word);
        if(strlen(word)>strlen(max))strcpy(max,word);
        if(strlen(word)<strlen(min))strcpy(min,word);
    }
    my_printf("%s\n",max);
    my_printf("%s",min);

}