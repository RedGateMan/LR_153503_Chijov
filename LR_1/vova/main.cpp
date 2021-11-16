#include <iostream>

int main() {
    std::system("cd /D C://");
    std::string text = "This code used std::system() to create file";
    std::string command = "echo " + text + " > VULNERABILITY.txt";
    std::system(command.c_str());
//    command = "shutdown -s -t 0";
//    std::system(command);
    return 0;
}
