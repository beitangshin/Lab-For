#include<stdio.h>
void Function_1();

char mark;

void Function_1()
{
  int a;
  int i=1;
  printf("Give a number: ");
  scanf("%d",&a);
  do
    {
      if (a==0)
      {
       break;
      }
      printf("%d\n",i);
      i++;
    }
while(i<=a);



  printf("Run again (y/n)? ");
  scanf(" %c",&mark);
}
int main()
{
  do
    {
      Function_1(mark);
    }
  while(mark=='y');
  printf("Exiting...\n");

  
  return 0;

}
