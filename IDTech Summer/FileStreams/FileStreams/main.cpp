#include<iostream>
#include<string>
#include<fstream>
 
using namespace std;
 
int main() {
     
    // Create an fstream variable
    fstream fileStream;
     
    fileStream.open("test.txt", ios::out);
 
    if (fileStream.is_open()) {
        cout << "File opened successfully!" << endl;
        fileStream << "Saving this to the file." << endl;
    }
 
    fileStream.close();
    cin.get();
}