
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string fullName;
    int id;
    double grade;


    cout << "Enter Full Name: ";
    getline(cin, fullName);

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter Grade: ";
    cin >> grade;


    ofstream myfile;
    myfile.open("Student.txt");


    if (!myfile.is_open())
    {
        cout << "Error, file is not opened";
        return 1;
    }


    myfile << "Full Name: " << fullName << endl;
    myfile << "ID: " << id << endl;
    myfile << "Grade: " << grade << endl;

    cout << "Data written to file successfully";

    myfile.close();

    return 0;
}
