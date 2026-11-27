#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main() {

    ofstream out("grades.txt");
    if (out.fail()) {
        cout << "Unable to open the file";
        return 1;
    }
    int g;
    cout << "Enter 5 grades: ";
    for (int i = 0; i < 5; i++) {
        cin >> g;
        out << g << endl;
    }
    out.close();


    ifstream in("grades.txt");
    if (in.fail()) {
        cout << "Unable to open the file";
        return 1;
    }
    cout << "Grades in file:\n";
    while (in >> g)
        cout << g << endl;
    in.close();


    int del;
    cout << "Enter grade to delete: ";
    cin >> del;

    in.open("grades.txt");
    ofstream temp("temp.txt");
    while (in >> g) {
        if (g != del)
            temp << g << endl;
    }
    in.close();
    temp.close();


    remove("grades.txt");
    if (rename("temp.txt", "grades.txt") == 0)
        cout << "Deleted successfully.\n";
    else
        cout << "Error: could not update the file.\n";

    return 0;
}
