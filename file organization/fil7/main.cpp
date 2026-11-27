
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ifstream input("students.txt");
    string line;
    vector<string> data;

    while (getline(input, line))
    {
        data.push_back(line);
    }
    input.close();

    sort(data.begin(), data.end());

    cout << "Names sorted Successfully" << endl;
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << endl;
    }
    return 0;
}
