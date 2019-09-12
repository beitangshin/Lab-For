
#include<stdio.h>
int CountZero(int Array_1[10]);
void Function_1(int Array_2[10]);
void Function_2(int Array_3[10]);

int CountZero(int Array_1[10])
{
  int Num=0;
  int index;
  for (index=0;index<10;index++)
    {
      if (Array_1[index]==0)
	{
          Num++;
	}
    }
  return Num;

}

void Function_1(int Array_2[10])
{
  int index1;
  for(index1=0;index1<9;index1++)
    {
      printf(" %d,",Array_2[index1]);
     
    }
       printf(" %d ",Array_2[9]);

   
}
void Function_2(int Array_3[10])
{
  int index3;
  for(index3=0;index3<9;index3++)
    {
      printf(" %d,",3*Array_3[index3]);
      
    }
      printf(" %d ",3*Array_3[9]);
}

int main()
{
  int mArray[10];
  int i;
  printf("Input 10 numbers:");
  for (i=0;i<10;i++)
    {
      scanf("%d",&mArray[i]);
    }
  printf(" Initial array: {");
  Function_1(mArray);
  printf("}\n");
  printf("Number of 0's: %d\n",CountZero(mArray));
 printf("Tripled array: {");
  Function_2(mArray);
  printf("}\n");
  return 0;
  
}
