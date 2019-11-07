#include <stdio.h>
#include<stdlib.h>

int main(int x, char **s)
{
    int i;
    char *temp=s[1];
    printf("Output String=%s",temp);
    for(i=0;temp[i]!='\0';i++)
    {
        if(temp[i]>='a'&&temp[i]<='z')
        temp[i]-='a'-'A';
    }
        printf("Output String=%s",temp);
        return 0;
}