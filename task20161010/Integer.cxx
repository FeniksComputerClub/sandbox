#include "Integer.h"
#include <iostream>

std::ostream& operator<<(std::ostream& os, Integer const& i)
{
  os << i.n();
  return os;
}

Integer operator+(Integer const& i1, Integer const& i2)
{
  Integer sum;
  sum.m_n = i1.m_n + i2.m_n;
  return sum;
}

Integer operator*(Integer const& i1, Integer const& i2)
{
  Integer sum;
  sum.m_n = i1.m_n * i2.m_n;
  return sum;
}

bool operator==(Integer const& i1, Integer const& i2)
{
  return i1.m_n == i2.m_n;
}
