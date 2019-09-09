#include<stdio.h>
void Function1();
void Function2();
void Function3();
void Function4();

int main()
{
  Function1();
  Function2();
  Function3();
  Function4();  
  return(0);
}
void Function1()
{int a;
  printf("Give an integer:");
  scanf("%d",&a);
  if (a==0)
    {
      printf(" The number you entered equals zero\n");
    }
  else
    {
      printf(" The number you entered does not equal zero\n");
    }
}

void Function2()
{
  float a,b;
  printf("Give two floats:");
  scanf("%f%f",&a,&b);
  if(a>b)
    {
      printf(" %f is the largest\n",a);
    }
  else
    {
      printf(" %f is the largest\n",b);
    }
}
void Function3()
{int a;
  printf("Give an integer:");
  scanf("%d",&a);
  if (a%2==0)
    {
      printf(" Result is: %d\n",a/2);
    }
  else
    {
      printf(" Result is: %d\n",a*3); 
    }
}
void Function4()
{
  int a,b,c;
  printf("Give three integers:");
  scanf("%d %d %d",&a,&b,&c);  
   int d=a-b;
  int e=a-c;
  int f=b-c;

  if (d*e*f==0)
    {
      printf(" Some numbers are equal\n");
    }
  else
    {
      printf(" All are unique\n");
    }
}