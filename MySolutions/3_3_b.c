#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define k 4
#define D_MAX 10
#define N 2


int main(){ 
  size_t c[4],d,j,lhs=0,rhs;
    for(d=1;d<=D_MAX;d++)
    {
      rhs=pow(d,k);
      for (c[0]=1;c[0]<=N;c[0]++)
      for (c[1]=1;c[1]<=N;c[1]++)
      for (c[2]=1;c[2]<=N;c[2]++)
      for (c[3]=1;c[3]<=N;c[3]++)
      {
        lhs=pow(c[0],k)+pow(c[1],k)+pow(c[2],k)+pow(c[3],k);
        printf("c1=%zu,c2=%zu,c3=%zu,c4=%zu\td=%zu\tLHS=cj^k=%zu\tRHS=d^k=%zu\n\n",c[0],c[1],c[2],c[3],d,lhs,rhs);
        if(lhs==rhs)
        {
          printf("The equation became true for k=4 when c1=%zu,c2=%zu,c3=%zu,c4=%zu and d=%zu",c[0],c[1],c[2],c[3],d);
          exit(0);
        }
        }
    }
  return 0;
}