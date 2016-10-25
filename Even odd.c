#include<stdio.h>
int main()
{
  int a;
  printf("Enter value");
  scanf("%d",&a);
  printf("%s",a%2==0?"Even":"Odd");
  return 0;
}
