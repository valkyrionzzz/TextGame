#include <string>
#include <fstream>
#include <streambuf>

void main(){
std::ifstream t("text1.txt");
std::string str((std::istreambuf_iterator<char>(t)),
                 std::istreambuf_iterator<char>());
system("pause");
}

