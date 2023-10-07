Write a program that checks that all open tags (i.e. <div>) are followed by a corresponding closing tag. Tags can be nested. There are only 4 tags in this task: <html>, <body>, <head> and <div>. There are also no attributes. I.e. <div id="parent"> is not valid.
Input
One line containing the html.
Output
Output the number of elements if the html is correct, "Broken" if it is not. An element is composed of both a starting tag and a closing tag, as well as their content.
Constraints
The input can be a maximum of 2048 characters long
Example
Input
<div>Oh, it’s quite simple. If you are a friend, you speak the password, and the doors will open.</div>
Output


code#####################

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValidHtml(const string& s, int& count) {
    stack<string> tags;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '<') {
            string tag = "";
            int j = i + 1;
            while (j < s.size() && s[j] != '>') {
                tag += s[j];
                j++;
            }
            if (j == s.size()) return false; 
            
            if (tag[0] != '/') { 
                if (tag != "html" && tag != "body" && tag != "head" && tag != "div") {
                    return false; 
                }
                tags.push(tag);
            } else { 
                tag = tag.substr(1);
                if (tag != "html" && tag != "body" && tag != "head" && tag != "div") {
                    return false;
                }
                if (tags.empty() || tags.top() != tag) return false;
                tags.pop();
                count++;
            }
            i = j;
        }
    }
    return tags.empty();
}

int main() {
    string s;
    getline(cin, s);

    int count = 0;
    if (isValidHtml(s, count)) {
        cout << count << endl;
    } else {
        cout << "Broken" << endl;
    }
    return 0;
}
