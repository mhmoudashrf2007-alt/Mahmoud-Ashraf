#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream file("welcome.txt", ios::out);
    file << "Hello Everybody";


    file.seekp(11, ios::beg);
    file << "one";

    file.close();


    ifstream in("welcome.txt");
    string text;
    getline(in, text);
    cout << text;
    in.close();

    return 0;
}
