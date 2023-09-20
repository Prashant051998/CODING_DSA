Input is a mountain of uppercase letters.

Output that same mountain.
Then put a line of water (which is shown as ~) underneath it. This is the same width as mountain's base)
Followed by the mountain's reflection in the water.

(Reflection is dimmer than the mountain itself, so change uppercase letters to their lowercase equivalent in the reflection)
Input
Line 1: An integer, height of mountain
Next height Lines: mountain
Output
height Lines: mountain
Next Line: water
Next height Lines: the reflection


############################################################
code :-

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#include <bits/stdc++.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int height;
    cin >> height; cin.ignore();
    vector<string> r ;
    for (int i = 0; i < height; i++) {
        string mountain_row;
        getline(cin, mountain_row);
        r.push_back(mountain_row);

    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    int l=0;

    for (string i : r)
    {
        cout<< i << endl;
        l = i.size();
        
    }
    for (int k=0;k<l;k++)
    {
        cout << "~" ;
    }
    cout << endl;

    for (int j=r.size()-1;j>=0;j--)
    {
        transform(r[j].begin(), r[j].end(), r[j].begin(), ::tolower);
        cout<<r[j]<<endl;
    }





}