#include <iostream>
#include <fstream>
#include <string>

// First get data type

// Then name
// Detect if variable or function

int main()
{
  std::ifstream script("script.ecpp");
  std::string code[] = {};
  int x = 0;
  if (script.is_open())
  {
    std::string line;
    while(getline(script, line))
    {
      code[x] = line;
      x++;
    }
    script.close();
  }
  return 0;
}
