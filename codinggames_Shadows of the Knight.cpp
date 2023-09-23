The GoalYou will look for the hostages on a given building by jumping from one window to another using your grapnel gun. Your goal is to jump to the window where the hostages are located in order to disarm the bombs. Unfortunately, you have a limited number of jumps before the bombs go off... RulesBefore each jump, the heat-signature device will provide you with the direction of the bombs based on your current position:

U (Up)
UR (Up-Right)
R (Right)
DR (Down-Right)
D (Down)
DL (Down-Left)
L (Left)
UL (Up-Left)

Your mission is to program the device so that it indicates the location of the next window you should jump to in order to reach the bombs' room as soon as possible.

Buildings are represented as a rectangular array of windows, the window in the top left corner of the building is at index (0,0). NoteFor some tests, the bombs' location may change from one execution to the other: the goal is to help you find the best algorithm in all cases.

The tests provided are similar to the validation tests used to compute the final score but remain different. Game InputThe program must first read the initialization data from standard input. Then, within an infinite loop, read the device data from the standard input and provide to the standard output the next movement instruction.Initialization input

Line 1 : 2 integers W H. The (W, H) couple represents the width and height of the building as a number of windows.

Line 2 : 1 integer N, which represents the number of jumps you can make before the bombs go off.

Line 3 : 2 integers X0 Y0, representing your starting position.

Input for one game turnThe direction indicating where the bomb is.Output for one game turnA single line with 2 integers X Y separated by a space character. (X, Y) represents the location of the next window you should jump to. X represents the index along the horizontal axis, Y represents the index along the vertical axis. (0,0) is located in the top-left corner of the building.Constraints1 ≤ W ≤ 10000
1 ≤ H ≤ 10000
2 ≤ N ≤ 100
0 ≤ X, X0 < W
0 ≤ Y, Y0 < H
Response time per turn ≤ 150ms
Response time per turn ≤ 150ms

################################################################################################
code

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
    int w; // width of the building.
    int h; // height of the building.
    cin >> w >> h; cin.ignore();
    int n; // maximum number of turns before game over.
    cin >> n; cin.ignore();
    int x0;
    int y0;
    cin >> x0 >> y0; cin.ignore();
    int left = 0, right = w - 1, top = 0, bottom = h - 1;
    

    // game loop
    while (1) {
        string bomb_dir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bomb_dir; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
      if (bomb_dir.find("U") != string::npos) bottom = y0 - 1;
        if (bomb_dir.find("D") != string::npos) top = y0 + 1;
        if (bomb_dir.find("L") != string::npos) right = x0 - 1;
        if (bomb_dir.find("R") != string::npos) left = x0 + 1;

        // Find the center of the adjusted search space.
        x0 = (left + right) / 2;
        y0 = (top + bottom) / 2;

        cout << x0 << " " <<y0 <<endl;
    }
}