#include <iostream>
#include <string>
#include <set>

int main() {
std::string str;
std::getline(std::cin, str);

std::set<char> s;
for(int i=0; i<str.size(); i++){
	if(str[i]>='a' && str[i]<='z')
	s.insert(str[i]);
}

std::cout << s.size()<< std::endl;

return 0;
}
