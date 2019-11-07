#include <stdio.h>
#define ITERATION_MAX 500

int main(){ 
  size_t n,i,count=0,c=0,num,temp; 
  for(i=1;i<1000000000;i++)
  {
	c=0;
    n=i;
    printf("Finding the conjecture for %zu\n",i);
    while(n!=1)
    {
      if(!(n%2))
      {
        n/=2;
      }
      else
      {
        n=3*n+1;
      }
      c++;
      if(c>=ITERATION_MAX)
      {
        temp=n;
        num=i;
        count=c;
        break;
      }
    }
    if(c>=ITERATION_MAX)
    {
      break;
    }
    if(c>count)
    {
      temp=n;
      num=i;
      count=c;
    }
  }
  if(temp==1)
  {
    printf("\n\nNumber with the longest path length is %zu\n",num);
    printf("Iterations required : %zu\n",count);
  }
  else
  {
    printf("\n\nIterations limit reached for the number %zu",num);
  }
return 0;
}