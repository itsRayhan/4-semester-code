#include <bits/stdc++.h>
using namespace std;

void readFile(const string &filename)
{
    ifstream file(filename);

    if (!file.is_open())
    {
        throw runtime_error("File not found: " + filename);
    }

    string line;
    cout << "File contents:" << endl;
    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

int main()
{
    string filename; 

    cout << "Enter filename to open: ";
    cin >> filename;

    try
    {
        readFile(filename);
    }
    catch (const runtime_error &e)
    {
        cout << "Error: " << e.what() << endl;
    }

    cout << "Program continues after handling the exception." << endl;

    return 0;
}