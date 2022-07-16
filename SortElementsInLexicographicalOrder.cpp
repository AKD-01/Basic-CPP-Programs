#include <iostream>
using namespace std;
int main()
{
    string str[10], temp;
    cout << "Enter 5 words: " << endl;
    for(int i = 0; i < 5; ++i)
    {
      getline(cin, str[i]);
    }

    // Use Bubble Sort to arrange words
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4 - i; ++j) {
            if (str[j] > str[j + 1]) {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    cout << "In lexicographical order: " << endl;
    for(int i = 0; i < 5; ++i)
    {
       cout << str[i] << endl;
    }
    return 0;
}


