#include <iostream>
#include <string>
using namespace std;

void checkComment( string line)
 {
    int n = (int)line.length();
    for(int i=0; i<n ;i++)
    {
        if (n >= 2 && line[i] == '/' && line[i+1] == '/')
            {
              cout << "It is a single-line comment\n";
            }



    else if (n >= 4 && line[i] == '/' && line[i+1]=='*' )
    {
        for(int j=i+1; j<n; j++)
        {
         if( line[j] == '*' && line[j+1] == '/')
         {
            cout << "It is a multi-line comment\n";
         }

        }

    }

}
 }

int main()
{
    string input;
    cout << "Enter a line: ";

    getline(cin, input);
    checkComment(input);
    return 0;
}
