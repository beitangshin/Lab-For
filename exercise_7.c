#include<stdio.h>
int Add(int A1,int A2);
int Min(int B1,int B2);
int Multi(int C1,int C2);
int Div(int D1,int D2);

int Add(int A1,int A2)
{
  int iSum=A1+A2;
  return iSum;
}
int Min(int B1,int B2)
{
  int iMin=B1-B2;
  return iMin;
 
}
int Multi(int C1,int C2)
{
  int iMul=C1*C2;
  return iMul;
}
int Div(int D1,int D2)
{
  int iDiv=D1/D2;
  return iDiv;
}
int main()
{
  int a,b;
  printf("Give a: ");
  scanf("%d",&a);
  printf("Give b: ");
  scanf("%d",&b);
  int Sum1=Add(a,b);
  int Min1=Min(a,b);
  int Mul=Multi(a,b);
  int Div1=Div(a,b);
  printf("%d + %d = %d\n",a,b,Sum1);
  printf("%d - %d = %d\n",a,b,Min1);
  printf("%d * %d = %d\n",a,b,Mul);
  printf("%d / %d = %d\n",a,b,Div1);
  return 0;
}
