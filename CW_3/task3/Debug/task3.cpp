#include <iostream>
#include<cstring>
using namespace std;
struct Pramokytnuk
{
	int firstside;
	int secondside;
	Pramokytnuk() : firstside(1) {}
	Pramokytnuk() : secondside(1) {}
	int per() {
		return (firstside + secondside) * 2;
	}
};

int main() {

	Pramokytnuk p(2, 3);
	cout << "Perumtr = " << p.per() << endl;
	return 0;
}
