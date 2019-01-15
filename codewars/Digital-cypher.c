#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

unsigned char* encode(const char *s, unsigned k)
{
  int m ,n;
  int i =0;
  int krr[32];
  size_t size =strlen(s);
  unsigned char *code;

  code = malloc(size);
  memset(code,0,size);
  do
  {  
    i++;
    krr[i] = k%10;  
    k = k/10;  
  }while(k !=0);
  
  for(m =0,n =i;m <size;m++,n--)
  {
    *(code +m) = *(s+m) -96 +krr[n];
    if(n ==1)
      n =i+1;
  }
  return code;
}