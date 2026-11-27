#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string fruit;


    ifstream in("fruit.txt");
    while (getline(in, fruit))
    {
        cout << fruit << endl;
    }
    in.close();


    ofstream out("fruit.txt", ios::app);
    out << "\nFresh Fruits";
    out.close();

    return 0;
}
