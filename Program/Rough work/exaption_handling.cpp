#include <iostream>
using namespace std;

void f1() {
    int age,vote;
    try {
        cout << "Enter your age: ";
        cin >> age;
        if (age < 19)
            throw 1;
        cout << "\nVote for your favorite actor:\n";
        cout << "1. Amir Khan\n";
        cout << "2. Salman Khan\n";
        cin>>vote;
    }
    catch (int e) {
        cout << "You are not eligible to cast your vote due to age restriction." << endl;
    }
    cout << "END\n";
}

int main() {
    f1();
    return 0;
}
