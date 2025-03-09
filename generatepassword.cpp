#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string getPassword(int length) {
    string Password = "";
    string characters = "aquickbrownfoxjumpsoverthelazydogAQUICKBROWNFOXJUMPSOVERTHELAZYDOG1234567890";
    int charSize = characters.size();
    srand(time(0));
    int randomIndex;
    
    for (int i = 0; i < length; i++) {
        randomIndex = rand() % charSize;
        Password.push_back(characters[randomIndex]); // More efficient concatenation
    }
    
    return Password;
}

int main() {
    int length;
    cout << "Enter the length of the Password :: ";
    cin >> length;
    string password = getPassword(length);
    cout << "Generated Password :: " << password << endl;

    return 0;
}
