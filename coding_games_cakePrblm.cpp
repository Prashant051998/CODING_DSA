You have to find out if the numbers GLaDOS gives you, mean that there is a cake or not.
You are given three numbers, n, t and c, n being the amount of cakes.
While t stands for how delicious the cake is, c stands for the amount of candles on it.

There is no cake with more that 14 candles on it. (It's just not possible in this universe)
And there is no cake being more delicious than grandma's cake (t=101)
And if a cake has negative/zero taste (t) OR candles (c), it simply is not a cake.
Input
First line: You are given an integer n.
Next n lines: You are given two space-separated integers t and c.
Output
n lines: With the appropriate text That's a cake! or GLaDOS you filthy liar!, second meaning that there is no cake.
Constraints
0 < n ≤ 100
-1000≤ t ≤ 1000
-1000 ≤ c ≤ 1000
Example
Input
1
5 2
Output
That's a cake!
 

 code ##############################################################################

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
    int n;
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int t;
        int c;
        cin >> t >> c; cin.ignore();

        if((c >0 && c<=14) && (t>0 && t<=101 ))
        {
            cout<<"That's a cake!"<<endl;
            

        }
        else
        {
            cout<<"GLaDOS you filthy liar!"<<endl;
        }
       
       
     

      

        
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

   
}