#include <iostream> 
#include <cstdlib>
int string_to_number(const std::string& s) {
  int num = atoi( s.c_str() );
  return num;
}
