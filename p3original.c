#include <stdio.h>
void input(int *a, int *b)
{
  printf("enter two numbers\n");
  scanf("%d %d",a,b);
  return;
}
void add (int a, int b,int *s)
{
  *s=a+b;
  return;
}
void output(int a, int b, int s)
{
  printf("sum of %d + %d = %d\n",a,b,s);
}
int main()
{
  int a,b, s;
  input(&a,&b);
  add(a,b,&s);
  output(a,b,s);
  return 0;

}
