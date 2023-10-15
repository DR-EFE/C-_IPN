#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // seed the random number generator with the current time
    const string CHARACTERS = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890"; // characters to choose from
    const int PASSWORD_LENGTH = 12; // length of password
    string password = ""; // initialize password string

    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password += CHARACTERS[rand() % CHARACTERS.length()]; // add a random character to the password string
    }

    cout << "Your password is: " << password << endl; // output the generated password

    return 0;
}
