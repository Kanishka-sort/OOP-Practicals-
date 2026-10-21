#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char source[50], destination[50];

    cout << "Enter source file name: ";
    cin >> source;

    cout << "Enter destination file name: ";
    cin >> destination;

    ifstream fin(source);

    if (!fin)
    {
        cout << "Source file cannot be opened!";
        return 0;
    }

    ofstream fout(destination);

    if (!fout)
    {
        cout << "Destination file cannot be opened!";
        return 0;
    }

    fout << fin.rdbuf();

    fin.close();
    fout.close();

    cout << "File copied successfully!";

    return 0;
}
this is final code right
