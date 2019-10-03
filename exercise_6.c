#include<stdio.h>
float Min(float Min_a,float Min_b);
float Max(float Max_a,float Max_b);
float Min_4(float Mina,float Minb,float Minc,float Mind);
float Max_4(float Maxa,float Maxb,float Maxc,float Maxd);
float Sum(float a1,float b1,float c1,float d1);
float Min(float Min_a,float Min_b)
{
  if(Min_a>=Min_b)
    {
      return Min_b ;
    }
  else
    {
      return Min_a ;
    }
}

float Max(float Max_a, float Max_b)
{
  if(Max_a<Max_b)
    {
      return Max_b;
    }
  else
    {
      return Max_a;
    }
}

float Min_4(float Mina, float Minb, float Minc,float Mind)
{
  float Num1,Num2,Num3;
  
  Num1=Min(Mina,Minb);
  Num2=Min(Num1,Minc);
  Num3=Min(Num2,Mind);
  return  Num3; 
}
float Max_4(float Maxa, float Maxb, float Maxc,float Maxd)
{
  float Num_1,Num_2,Num_3;
  
  Num_1=Max(Maxa,Maxb);
  Num_2=Max(Num_1,Maxc);
  Num_3=Max(Num_2,Maxd);
  return  Num_3; 
}
float Sum(float a1,float b1,float c1,float d1)
{
  float iSum=a1+b1+c1+d1;
  return iSum;

}
int main()
{
  float a,b,c,d;
  printf("Give four floats: ");
  scanf("%f %f %f %f",&a,&b,&c,&d);
  float MinNum=Min_4(a,b,c,d);
  float MaxNum=Max_4(a,b,c,d);
  float Sum_in=Sum(a,b,c,d);
  printf("min: %f\n",MinNum);
  printf("max: %f\n",MaxNum);
  printf("sum: %f\n",Sum_in);
  printf("mean: %f\n",Sum_in/4);
  return 0;
  
  
}
