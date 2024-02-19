#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a;
    int randomNum = rand() % 15 + 1;


    while (a!=randomNum) {
        cout << "Choose random number:"<< endl;
        cin >> a;
        if (a == randomNum) {
            cout << "Yep, you're right";
        } else
            cout << "Nope,try again" << endl;
    }

    return 0;
}
