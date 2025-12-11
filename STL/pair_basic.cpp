#include<iostream>
#include<utility>
using namespace std;

int main() {
    pair<int,int> p1, p2;
    int a, b;

    cout << "Enter two numbers for pair 1: ";
    cin >> a >> b;
    p1 = {a, b};

    cout << "Enter two numbers for pair 2: ";
    cin >> a >> b;
    p2 = {a, b};

    cout << "Pair 1: " << p1.first << " " << p1.second << endl;
    cout << "Pair 2: " << p2.first << " " << p2.second << endl;

    swap(p1, p2);

    cout << "After swapping: " << endl;
    cout << "Pair 1: " << p1.first << " " << p1.second << endl;
    cout << "Pair 2: " << p2.first << " " << p2.second << endl;

    return 0;
}
