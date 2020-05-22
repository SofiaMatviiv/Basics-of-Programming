#include<fstream>
#include<iostream>
using namespace std;
bool Dani1(const char* filename)
{
    ifstream fin1(filename, ios::in);
    if (!fin1.is_open()) {
        cout << "Eror" << endl;
    }

    char prog[255]; // буфер дл€ збер≥ганн€ одного р€дка

    // цикл читанн€ р€дк≥в файлу
    // р€дки читаютьс€ до к≥нц€ файлу
    while (!fin1.eof())
    {
        fin1.getline(prog, 255);
    }

    fin1.close();
    return prog;
}
bool Dani2(const char* filename)
{
    ifstream fin2(filename, ios::in);
    if (!fin2.is_open()) {
        cout << "eror" << endl;
    }

    char history[255]; 

    // цикл читанн€ р€дк≥в файлу
    // р€дки читаютьс€ до к≥нц€ файлу
    while (!fin2.eof())
    {
        fin2.getline(history, 255);
    }

    fin2.close();
    return history;
}
bool Ehchange1(char history)
{
    ofstream fin1;
    fin1.open("in1.txt", ios_base::trunc | ios_base::app);
    fin1 << history;

    fin1.close();
    return true;
}
bool Ehchange2(char prog)
{
    ofstream fin2;
    fin2.open("in2.txt", ios_base::trunc | ios_base::app);
    fin2 <<prog;
    fin2.close();
    return true;
}
int main() {

    Ehchange1(Dani2("in2.txt"));
    Ehchange2(Dani1("in1.txt"));
    cout << "Done!" << endl;

    return 0;
}