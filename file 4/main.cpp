#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


struct Person {
    string name;
    int age;
};

int main() {
    int n;


    cout << "Enter number of persons: ";
    cin >> n;


    ofstream outFile("persons.txt");

    if (!outFile) {
        cout << "Error opening file!";
        return 1;
    }

    for (int i = 0; i < n; i++) {
        Person p;

        cout << "Enter name: ";
        cin >> p.name;

        cout << "Enter age: ";
        cin >> p.age;

        outFile << p.name << " " << p.age << endl;
    }

    outFile.close();


    ifstream inFile("persons.txt");

    if (!inFile) {
        cout << "Error reading file!";
        return 1;
    }

    vector<Person> people;
    Person p;

    while (inFile >> p.name >> p.age) {
        people.push_back(p);
    }

    inFile.close();


    if (people.empty()) {
        cout << "No persons found!";
        return 0;
    }

    Person youngest = people[0];
    Person oldest = people[0];

    for (int i = 1; i < people.size(); i++) {
        if (people[i].age < youngest.age) {
            youngest = people[i];
        }

        if (people[i].age > oldest.age) {
            oldest = people[i];
        }
    }


    ofstream resultFile("results.txt");

    resultFile << "Youngest Person: "
              << youngest.name << " "
              << youngest.age << endl;

    resultFile << "Oldest Person: "
              << oldest.name << " "
              << oldest.age << endl;

    resultFile.close();

    cout << "Results saved successfully!";
    return 0;
}
