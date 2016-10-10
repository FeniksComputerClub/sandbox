#include <iostream>

class Integer {
  private:
    int m_n;

  public:

  Integer() : m_n(0) {
    std::cout << "Calling Integer::Integer()" << std::endl;
  }
  
  Integer(int n) : m_n(n) {
    std::cout << "Calling Integer::Integer(int)" << std::endl;
  }

  Integer(Integer const& i) : m_n(i.m_n) {
    std::cout << "Calling Interger::Integer(Integer const&)" << std::endl;
  }

  Integer& operator=(Integer const& i){
    m_n = i.m_n; 
    std::cout << "Calling Interger::operator=(Integer const&)" << std::endl;
  }

  Integer operator~() const
  {
    Integer ret(~m_n);
    return ret;
  }

  Integer operator-() const
  {
    Integer ret(-m_n);
    return ret;
  }

  bool operator!() const
  {
    return !m_n;
  }

  friend Integer operator+(Integer const& i1, Integer const& i2);
  friend Integer operator-(Integer const& i1, Integer const& i2);
  friend Integer operator*(Integer const& i1, Integer const& i2);
  friend bool operator==(Integer const& i1, Integer const& i2);
  friend std::ostream& operator<<(std::ostream& os, Integer const& i);

  // Accessors.
  int n() const { return m_n; }
};
