#include<iostream>
using namespace std;
int main() {
	int a,b,c,d,f,g,h;
	cout << "Input number:" << endl;
	cin >> a;
	b = a%10;
	c = (a % 100) / 10;
	d = (a % 1000) / 100;
	f = (a % 10000) / 1000;
	g = (a % 100000) / 10000;
	h = (a % 1000000) / 100000;
	/*
	cout << b << endl; 
	cout << c << endl;
	cout << d << endl;
	cout << f << endl;
	cout << g << endl;
	cout << h << endl;*/
	if(h>g&&g>f&&f>d&&d>c&&c>b){
		cout << "The numbers in your number are in descending order" << endl;
	}
	else 
	{
		cout << "The numbers in your number are not in descending order" << endl;
	}
}