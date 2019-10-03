#include <stdio.h>
void Function1();
void Function2();
void Function3();

int main ()
      {
        Function1();
	Function2();
	Function3();
      return 0;
      }
      
void Function1()
{
  int number=50;
  printf("One half is %d%%\n",number);  

}
void Function2()
{
  int a=10;
  int b=3;
  printf("The difference between %d and %d is %d\n",a,b,a-b);
}

void Function3()
{
  float a=1;
  float b=3;
  printf("%f / %f is %f\n",a,b,a/b);
}
