#include<stdio.h>

void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter the numerator of 1st num: \n");
  scanf("%d",num1);
  printf("enter the denominator of 1st num: \n");
  scanf("%d",den1);
  printf("enter the numerator of 2nd num: \n");
  scanf("%d",num2);
  printf("enter the denominator of 2nd num: \n");
  scanf("%d",den2);
}
int find_gcd(int a, int b)
{
    int t;
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
      }
    return a;
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  *num3 = num1*den2+num2*den1;
  *den3 = den1*den2;
  int g = gcd(*num3,*den3);
  *num3 /= g;
  *den3 /= g;
}

void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("The sum of %d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num3,den3);
}

int main()
{
  int a,b,c,d,x,y;
  input(&a,&b,&c,&d);
  add(a,b,c,d,&x,&y);
  output(a,b,c,d,x,y);
  return 0;
}