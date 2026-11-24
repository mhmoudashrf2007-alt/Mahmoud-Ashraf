#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("students.txt", ios::app);

    char name[20];
    int id;
    float grade;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y')
    {
        cout << "Enter student name: ";
        cin >> ws;
        cin.getline(name, 20);

        cout << "Enter student ID: ";
        cin >> id;

        cout << "Enter student grade: ";
        cin >> grade;

        file << name << ", " << id << ", "
             << grade << " $" << endl;

        cout << "Do you want to add another student? (y/n): ";
        cin >> choice;
    }

    file.close();

    cout << "Records saved successfully.";

    return 0;
}
