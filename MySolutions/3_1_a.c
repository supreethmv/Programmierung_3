#include <stdio.h>
#include<stdlib.h>

int main(int x, char **args)
{
    int i,result=0,n=atoi(args[1]);
    if (n>1)
    {
        for(i=1;i<=n;i+=2)result+=i;
        printf("Result=%d",result);
        return 0;
    }
}