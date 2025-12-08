#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    ofstream file("student.txt", ios::app);

    if(!file){
        cout << "File not found!" << endl;
        return 0;
    }

    int n, roll;
    string name;

    cout << "How many students: ";
    cin >> n;
    cin.ignore(); // to handle newline before getline

    for(int i = 0; i < n; i++) {
        cout << "\nEnter Name: ";
        getline(cin, name);
        cout << "Enter Roll: ";
        cin >> roll;
        cin.ignore();

        file << name << " " << roll << endl;
    }

    cout << "\nData saved successfully!" << endl;

    file.close();
    cin.get();
    return 0;
}
