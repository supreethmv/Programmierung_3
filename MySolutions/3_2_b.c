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

float sine(float x)
{
  int i;
  float s;
  for(i=0;i<8;i++)
  {
    s+= (float)pow(-1,i)*pow(x,2*i+1)/(float)factorial(2*i+1);
  }
    return s;
}
float cosine(float x)
{
  int i;
  float c;
  for(i=0;i<8;i++)
  {
    c+= (float)pow(-1,i)*pow(x,2*i)/(float)factorial(2*i);
  }
  return c;
}
int main()
{
  int x;
  float si=0;
  float delta=(M_PI-0)/(float)10;
  float temp,Jn=0;
  for(x=1;x<=10;x++)
  {
    temp=((cos(x*sin(si+x*delta))+cos((x+1)*sin(si+(x+1)*delta)))/2)*delta;
    printf("x=%d\tSi[%d]\tIntermediate result:%f\n",x,x,temp);
    Jn+=temp;
  }
  Jn/=M_PI;
  printf("The Integration result is : %f", Jn);
}