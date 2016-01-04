// This is a new file!
#include <iostream>   // Standard (C and C++) header have NO extention!
                      // System (standard or other library) headers are included using < >,
                      // local (project) headers usually using double quotes (" ").

void main()           // Unlike C, main is allowed to return nothing in C++. This means we
                      // can omit a 'return' statement at the end, but the netto result
                      // will be as if we return 0.
{
  std::cout << "Hello world!\n";
}
