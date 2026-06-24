#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    string match;

    cout << "Welcome to FIFA World Cup History Tracker!" << endl;
    
    cout << "Please type 'brazil vs argentina' to see all match history: ";

    getline(cin, match);

    cout << "\nLoading Brazil vs Argentina matches..." << endl;
    cout << "Please wait..." << endl;

    this_thread::sleep_for(chrono::seconds(6));

    cout << "\nSearching database..." << endl;

    this_thread::sleep_for(chrono::seconds(5));

    cout << "Oops! Something unexpected appeared!\n"
         << endl;

    this_thread::sleep_for(chrono::seconds(3));

    for (int i = 1; i <= 20; i++)
    {
        cout << i
             << ". Brazil vs Germany = 1 : 7 "
             << endl;

        cout << "   Brazil Win 7UP" << endl;

        this_thread::sleep_for(chrono::milliseconds(300));
    }

    cout << "\nError 404: Brazil fans not found " << endl;

    return 0;
}