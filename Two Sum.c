#include<stdio.h>
int main()
{
    int a[5] = {0,2,11,19,90},sum=21,i,j,check = 0;
    
    for(i=0;i<=4;i++)
    {
        for(j=i+1;j<=4;j++)
        {
            if(a[i]+a[j]==sum)
            {
                printf("%d",i);
                printf("%d",j);
                check = 1;
                break;
            }
        }
    }
    if(check==0)
    {
        printf("[]");
    }
    return 0;
}
