#include<stdio.h>
void Function_1();
void Function_2();
void Function_3();

void Function_1()
{
  int i=0;
  printf("Even numbers between 0 and 40:\n");
  while(i<=40)
    {
      printf("%d ",i);
      i=i+2;
    }
  printf("\n");
}
void Function_2()
{
  int i=1;
  int j=1;
  printf("Numbers 1 to 100;\n");
  for (i=1;i<=100;i++)
    {
      printf("%2d ",i);
      for (;i==10*j;j++)
	{
          printf("\n");	 
        }
    }
  
}
void Function_3()
{
  int a;
       printf("Give a number:");
       scanf("%d",&a);

       while(a!=0)
	 {
       printf("The square of %d is %d\n",a,a*a);
       printf("Give a number;");
       scanf("%d",&a);
          }
     
             printf(" You entered zero.\n");
}
int main()
{
  Function_1();
  Function_2();
  Function_3();
  return 0;
  

}

