#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cctype>

int main () {

  std::string str;
  std::vector<std::string> s;
 
  while (getline(std::cin, str)) {
    if (str.empty()) {
      break;
    }
    int x = str.size();
    int y = x - 2;
    if (x > 10) { 
      std::string str2;
      str2 += str[0];
      str2 += std::to_string(y);
      str2 += str[x - 1];
      s.push_back(str2);
    } else if (std::isdigit(static_cast<unsigned char>(str[0]))) {
      continue;
    } else {
      s.push_back(str);
    }
    
  } 
  for (const auto& it : s) {
    std:: cout << it << std::endl;
  }
  return 0;
}
