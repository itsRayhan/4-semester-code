#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "enter int number then anything: ";
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        string word;
        cin >> word;
        if (10 >= word.length())
        {
            cout << word << endl;
        }
        else
        {
            cout << word[0] 
            << word.length()- 2 
            << word[word.length() - 1]
              << endl;
        }
    }

    return 0;
}
/*InputCopy
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

OutputCopy
word
l10n
i18n
p43s*/