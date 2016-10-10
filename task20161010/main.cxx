#include "Integer.h"
#include <iostream>

int main()
{
  Integer x = 3;
  Integer y;
  y = x;
  x = 5;
  y = x - 2;
  x = -y * 2;

  std::cout << "x = " << x << "; y = " << y << std::endl;
}
