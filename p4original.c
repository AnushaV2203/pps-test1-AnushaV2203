#include<stdio.h>
int cmp(int a,int b,int c,int largest)
{
  if(a>b && a>c)
  {
    largest=a;
    return largest;
  }
  {
    if (b>c)
    {
      largest=b;
      return largest;
    }
    else
    {
      largest=c;
      return largest;
    }
  }
}

int input()
{
  int num1;
  printf(" enter the number:\n");
  scanf("%d",&num1);
  return num1;
}

int main()
{
  int x,y,z,large,result;
  x=input();
  y=input();
  z=input();
  result=cmp(x,y,z,large);
  printf("%d is the largest among all of them\n",result);
  return 0;
}




