#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  int a, b;
  scanf("%d%d", &a, &b);
  int temp = a;
  a = b;
  b = temp;
  printf("%d %d", a, b);
}
