#include<stdio.h>
int input()
{
  int n;
  printf("enter the num\n");
  scanf("%d",&n) ;
  return n;
}
int sum_n(int n)
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
    sum=sum+i;
  }
  printf("sum of =%d\n",sum);
  return sum;
  }
  void output(int n,int sum)
  {
    for(int i=0;i<n;i++)
    {
      printf("%d+",i);
    }
    printf("%d=%d",n,sum);
  }
  int main()
  {
    int a,b;
    a=input_n();
    b=sum_n(a);
    
  }
    }
  }
  
  return r;
}
void output(int n,int sum)
{
  printf ("1");
  for(int f=2;f<n;f=f+1)
  {
    printf ("+%d",f) ;
  }
  printf("+%d is %d\n",n,sum) ;
}
int main()
{
  int n,sm;
  n=input () ;
  sm=sum_n(n) ;
  output (n,sm);
  return 0;
}