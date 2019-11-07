#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int factorial(int n)
{
	if (n == 0)
		return 1;
	else 
		return(n * factorial(n-1));
}

int main()
{
    int i;
    float x,sine=0,cosine=0;
    printf("Enter a real number: ");
    scanf("%f",&x);
    printf("\nValue Entered is %f",x);
    for(i=0;i<8;i++)
    {
        sine+= (float)pow(-1,i)*pow(x,2*i+1)/(float)factorial(2*i+1);
        cosine+= (float)pow(-1,i)*pow(x,2*i)/(float)factorial(2*i);
    }
    
    printf("\nBy Taylor Series Sin(x)=%f\n",sine);
    printf("By Taylor Series Cos(x)=%f",cosine);

    printf("\nBuilt in function %f",sin(x));
    printf("\nBuilt in function %f",cos(x));

    
    
}