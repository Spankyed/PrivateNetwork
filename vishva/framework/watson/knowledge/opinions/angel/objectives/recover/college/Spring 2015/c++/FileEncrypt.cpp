//Reads the contents of a file, encrypts the data, and the writes the encrypted data to a second file.
//Angel Santiago
#include <iostream>
#include <fstream>
using namespace std;

int main()
{   const int ENCRYPT = 10;
    const int SIZE = 255;
    char inFileName[SIZE];
    char data;
    
    ifstream inputFile;
    ofstream outputFile;
    
    cout << "Enter the name of the file to encrypt: ";
    cin.getline(inFileName,SIZE);
    
    inputFile.open(inFileName);
    outputFile.open("encrypted.txt");
    
    inputFile.get(data);
    
    while (!inputFile.eof())
    {     data += ENCRYPT;
          outputFile.put(data);
          inputFile.get(data);
    }
    
    inputFile.close();
    outputFile.close();
    
    cout << "The file " << inFileName
         << " was encrypted and saved to encrypted. txt. "
         << endl;
    return 0;                 
}    
