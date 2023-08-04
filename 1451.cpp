#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
    string pal;
    while (getline(cin, pal)) {
        list<char> text;  
        list<char>::iterator cursor = text.end();  

        for (char& c : pal) {
            if (c == '[') {
                cursor = text.begin();  
            } else if (c == ']') {
                cursor = text.end();  
            } else {
                text.insert(cursor, c);  
            }
        }
        string final(text.begin(), text.end());
        cout << final <<endl;
    }
    
    return 0;
}
