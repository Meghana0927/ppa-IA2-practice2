#include<stdio.h>
int input_side()
{
  float s;
  scanf("%f",&s);
  return s;
}
int check_scalene(int a, int b, int c)
{
  if(a==b||a==c)
  return 1;
  else
  if(b==c)
  return 1;
  else
  return 2;
}
void output(int a, int b, int c, int isscalene)
{
  if (isscalene==1)
  printf("The triangle is not scalene\n");
  else
  printf("The triangle is scalene\n");
}
int main()
{
  float a, b, c, isscalene;
  printf("Enter the length of sides of the triangle:\n");
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
}