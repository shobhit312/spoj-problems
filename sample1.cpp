#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    int line_number = 0;
    while(getline(cin, input))
    {   
        line_number ++;
        cout << "line " << line_number
                  << ", input = \"" << input << "\"\n";
    }
}