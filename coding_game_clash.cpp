Your entire fortune is in your investment-account ("your account").

Every year on your birthday:
(a) You get the annualRateOfReturn% of your balance added to your account.
(b) Then your "Genie in a Bottle"** puts $annualGenieMoney into your account.

Today is your birthday; you are turning yourAge.
You have $moneyNow in your account now, after (a) and (b) described above.

How old will you be when you become a millionaire?



** or if you prefer: Your benefactor, your family, your Trust-Fund, your annual work bonus, your tax refund; or you sell your crop, break open the piggy bank, or dig up the coffee can, etc

##############################

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
    float money_now;
    cin >> money_now; cin.ignore();
    float annual_rate_of_return;
    cin >> annual_rate_of_return; cin.ignore();
    float annual_genie_money;
    cin >> annual_genie_money; cin.ignore();
    int your_age;
    cin >> your_age; cin.ignore();
    float k;

    

    while(money_now<1000000)
    {
        your_age++;
        money_now += money_now * (annual_rate_of_return / 100.0);
        
        
        money_now+=annual_genie_money;
        
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << your_age << endl;
}