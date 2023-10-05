Correct the given time to a valid format, where the minute and second position are less then 60.
The hours, minutes and seconds should always be represented with at least 2 digits (e.g. 02:02:01 is valid, 2:2:1 is not)
Input
Line 1: An integer N for the number of cases to solve.
Next N lines: A string representing the time, in the format h:m:s
Output
Line N: The repaired time string for case N.
Constraints
1 ≤ N ≤ 10
0 ≤ h,m,s ≤ 10.000
Example
Input
4
10:20:02
02:30:94
12:80:32
0:0000:00
Output
10:20:02
02:31:34
13:20:32
00:00:00

code ############################################

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string t;
        getline(cin, t);

          int h, m, s;
        sscanf(t.c_str(), "%d:%d:%d", &h, &m, &s);

        // Adjust seconds
        m += s / 60;
        s %= 60;

        // Adjust minutes
        h += m / 60;
        m %= 60;

        // Adjust hours
        h %= 10000;  // As per the given constraints

        // Output the corrected time
        cout << setw(2) << setfill('0') << h << ":";
        cout << setw(2) << setfill('0') << m << ":";
        cout << setw(2) << setfill('0') << s << endl;


    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

}