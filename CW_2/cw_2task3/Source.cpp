#include <iostream>                 
#include<cstring>
using namespace std;

int main()
{
    char character, str[] = "Today is a good day. /n";
    int longer = 0, counter = 0, ix = 0;
    string temp, l_world;
    while (str[ix]) {
        character = str[ix];
        temp += str[ix];
        if (isspace(character)) {
            counter++;
            int max_world = temp.length();
            if (max_world > longer) {
                l_world = temp;
                longer = max_world;
            }
            temp.clear();
        }
        ix++;
    }
    cout << "The longest word in sentence is  " << l_world << endl;
    return 0;
}