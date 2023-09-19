The game mode is REVERSE: You do not have access to the statement. You have to guess what to do by observing the following set of tests:
01 Test 1
Input
Expected output
ABCDefghIJKLmnop
ABCDIJKL
efghmnop
02 Test 2
Input
Expected output
LpSOFdpgO
LSOFO
pdpg
03 Test 3
Input
Expected output
UPPERCASE
UPPERCASE
04 Test 4
Input
Expected output
aaaaaaaaa

aaaaaaaaa
Console output
N/A
Zeref05
Clashing...
N/A
Lailouezzz
Clashing...
N/A
Dyamen1411
Clashing...
N/A
SmoothBrainProductions
Clashing...
N/A
nishimam
Clashing...
##############################################################################
code 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    string t;
    getline(cin, t);

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    string u="";
    string l="";

    for (int i =0;i<t.size();i++)
    {
        if(isupper(t[i]))
        {
            u+=t[i];
        }
        else
        {
            l+=t[i];
        }
    }

    cout << u <<endl;
    cout << l ;

    return 0;



}
