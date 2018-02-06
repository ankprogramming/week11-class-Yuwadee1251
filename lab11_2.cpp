#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "There are two needles in this haystack with needles.";
    cout << str << endl;

    cout << "Length : " << str.length() << endl;

    str += "I Want to eat Needle.";
    cout << str;
    cout << "Length : " << str.length() << endl;

    str.erase(str.length()/2, str.length()/2);

    return 0;
}
