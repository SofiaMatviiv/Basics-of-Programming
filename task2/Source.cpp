#include<iostream>
using namespace std;
int main() {
	int* p = new int;
	cout << "Input p= " << endl;
	cin >> *p;
	cout <<abs(*p) << endl;
	delete p;
	return 0;
}