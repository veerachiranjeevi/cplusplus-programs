#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main() {
    stack<int> s;
    int x;

    cout << "Enter 3 numbers for stack:\n";
    for(int i = 0; i < 3; i++) {
        cin >> x;
        s.push(x);
    }

    queue<int> q;
    cout << "Enter 3 numbers for queue:\n";
    for(int i = 0; i < 3; i++) {
        cin >> x;
        q.push(x);
    }

    cout << "\nSTACK OPERATIONS\n";
    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "Top after popping: " << s.top() << endl;

    cout << "\nQUEUE OPERATIONS\n";
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    q.pop();
    cout << "Front after pop: " << q.front() << endl;

    return 0;
}
