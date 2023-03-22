#include <header.h>

int main_bench()
{
    char c[500];
    int len, n, i, j, k, l=0, m, cd[500], ld, max=0;
    
    my_scanf("%d", &n);
    my_scanf("%s", c);
    len = strlen(c);
    
    for(i=0; i<500; i++)
        cd[i] = 1;
    for(i=0; i<len-n; i++)
    {
        for(j=i+1; j<len-n+1; j++)
        {
            ld = 0;     
            for(k=0; k<n; k++)
            {
                if(c[i+k] == c[j+k])
                    continue;
                else
                {
                    ld++;
                    break;
                }     
            }  
            if(ld==0)
                cd[i]++;       
        }     
    } 
    for(i=0; i<500; i++)
    {
        if(max < cd[i])
            max = cd[i];     
    }
    if(max == 1)
        my_printf("NO\n");
    else
    {
        my_printf("%d\n", max);
        for(i=0; i<500; i++)
        {
            if(cd[i] == max)
            {
                for(j=i; j<i+n; j++)
                    my_printf("%c", c[j]);
                my_printf("\n");         
            }            
        }
     }
        
       
    
    

    return 0;
}