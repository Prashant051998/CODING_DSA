Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

 

Example 1:

Input: num1 = "2", num2 = "3"
Output: "6"
Example 2:

Input: num1 = "123", num2 = "456"
Output: "56088"
 

Constraints:

1 <= num1.length, num2.length <= 200
num1 and num2 consist of digits only.
Both num1 and num2 do not contain any leading zero, except the number 0 itself.

######################################################################################################

code :-

class Solution {
public:
    string multiply(string num1, string num2) {
        


        int num1s= num1.size();
        int num2s= num2.size();

        string ans(num1s+num2s,'0');

        for (int i = num1s-1;i >=0;i--)
        {
            for (int j = num2s-1 ; j>=0;j--)
            {
                int b = (num1[i]-'0') * (num2[j]-'0') + (ans[i+j+1]-'0');
                ans[i+j+1]=b%10 + '0';
                ans[i+j] += b/10;
            }
        }

        for (int i =0;i<ans.size();i++)
        {
            if (ans[i]!='0')
            {
                return ans.substr(i);
            }
        }

        return "0";

    
        
        

        
        
    }
};