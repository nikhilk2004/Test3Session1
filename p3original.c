#include<stdio.h>
int fact(int number)
{
  int k=1,i;
  if(number==0)
  {
    return k;
  }
  else
  {
    for(i=1;i<=number;i++)
      {
        k=k*i;
      }
    
   return k;
  }
  
  
}
int input_n_and_r(int*n,int*r)
{
  printf("enter the values of n and r");
  scanf("%d%d", n,r);
}
int ncr(int n,int r, int *result)
{
 
  *result= fact (n)/(fact (n - r ) * fact (r)) ;
  
}
void output(int n,int r,int result)
{
  printf("the value of %dc%d is %d",n,r,result);
}
int main()
{
  int x,y,z;
  input_n_and_r(&x,&y);
  ncr(x,y,&z);
  output(x,y,z);
  return 0;  
  }