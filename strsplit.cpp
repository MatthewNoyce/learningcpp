#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// A quick way to split strings separated via spaces.
void simple_tokenizer(string s)
{
    stringstream ss(s);
    string word;
    while (ss >> word) {
        cout << word << endl;
    }
}

// A quick way to split strings separated via any character
// delimiter.
void adv_tokenizer(string s, char del)
{
    stringstream ss(s);
    string word;
    while (!ss.eof()) {
        getline(ss, word, del);
        cout << word << endl;
    }
}

int main(int argc, char const* argv[])
{
    string a = "How do you do!";
    string b = "matthew noyce";
    // Takes only space separated C++ strings.
    simple_tokenizer(a);
    cout << endl;
    adv_tokenizer(b, ' ');
    cout << endl;
    return 0;
}