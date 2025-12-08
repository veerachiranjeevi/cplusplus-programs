#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    ifstream file("student.txt");  // open file directly

    if (!file) {   // check file opening
        cout << "File not found!" << endl;
        return 0;
    }

    string line;

    cout << "Reading from file..." << endl;
    while (getline(file, line)) {
        cout << line << endl;  // print each line
    }

    file.close();
    return 0;
}
