#include <iostream>                 
using namespace std;

int main()
{
    int n;
    cout << "n="; cin >> n;

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[n]; 
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i + 1 << "," << j + 1 << "]=";
            cin >> matrix[i][j]; 
        }
    }

    cout << "matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << ' '; 
        }
        cout << endl;
    }

    // ���������� �������� ���� � ������
    int suma = 0, sm = 0, s2 = 0, index_1 = 0, index_2 = 0;
    for (int i = 0; i < n; i++)
    {
        suma = 0;
        for (int j = 0; j < n; j++)
        {
            suma += matrix[i][j];
        }
        if (sm >= suma) {
            index_1 = i;
        }sm = suma;
        if (s2 <= suma) {
            index_2 = i;
        }s2 = suma;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (index_1 == i) {
                cout << matrix[index_2][j] << " ";
            }
            if (index_2 == i) {
                cout << matrix[index_1][j] << " ";
            }
            else {
                cout << matrix[i][j] << " ";
            }
        }cout << endl;
    }
    //clean memory
    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }


    delete[] matrix;

    return 0;
}