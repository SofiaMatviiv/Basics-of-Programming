#include <iostream> 

#include<cstring>
using namespace std;

int main()
{
    char character, str[] = "Today is a good day.";
    int longer = 0, counter = 0, ix = 0;
    string temp, l_word;
    while (str[ix]) {
        character = str[ix];
        temp += str[ix];
        if (isspace(character)) {
            counter++;
            int max_word = temp.length();
            if (max_word > longer) {
                l_word = temp;
                longer = max_word;
            }
            temp.clear();
        }
        ix++;
    }
    cout << "The longest word in sentence is  " << l_word << endl;
    return 0;
}