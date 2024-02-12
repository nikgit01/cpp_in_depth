#include <iostream>
using namespace std;

void f1() {
    int age, vote = 0; // Initialize vote
    try {
        cout << "Enter your age: ";
        cin >> age;
        if (age < 19)
            throw 1;
        if (age > 22)
            throw 2;
        cout << "\nVote for your favorite actor:\n";
        cout << "1. Amir Khan\n";
        cout << "2. Salman Khan\n";
        cin >> vote;
    }
    catch (int e) {
        if (e == 1)
            cout << "You are not eligible to cast your vote due to age restriction." << endl;
        else if (e == 2)
            cout << "You are not eligible to cast your vote due to high age restriction." << endl;
    }
    cout << "END\n";
}

int main() {
    f1();
    return 0;
}
