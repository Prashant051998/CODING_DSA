The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:
01 Test 1
Input
Expected output
Hello
Hll
02 Test 2
Input
Expected output
This Is a sentence
Ths s  sntnc
03 Test 3
Input
Expected output
abcdefghijklmnopqrstuvwxyz
bcdfghjklmnpqrstvwxyz
04 Test 4
Input
Expected output
aeiouy
y



######################################################################################################################
code :-

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string s;
    getline(cin, s);

    for (int i =0;i<s.size(); i++)
    {
        if (s[i] != 'a' & s[i] != 'e' & s[i] != 'i' & s[i] != 'o' & s[i] != 'u' & s[i] != 'A' & s[i] != 'E' & s[i] != 'I' & s[i] != 'O' & s[i] != 'U')
        {
            cout << s[i];
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << endl;
}



