#include <iostream>               
#include<cstring>
using namespace std;

int main()
{
    int* arr;
    int size;
    cout << "size = ";//6
    cin >> size;

    arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";//{1,2,3,4,5,6}
        cin >> arr[i];
    }
    int p_i, p_j;
    cout << "i= ";//2
    cin >> p_i;
    cout << "j= ";//4
    cin >> p_j;
    for (p_i; p_i <= p_j; p_i++) {
        cout << arr[p_i] << "," ;//3,4,5
    }


    delete[] arr;

    return 0;
}