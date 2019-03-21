/*
Implement function ToLowerCase() that has a string parameter str, and returns the same string in lowercase.

Example 1:

Input: "Hello"
Output: "hello"
Example 2:

Input: "here"
Output: "here"
Example 3:

Input: "LOVELY"
Output: "lovely"
*/

//https://leetcode.com/problems/to-lower-case/
class Solution {
public:
    string toLowerCase(string str) {
        for (char& c:str) {
            if (c >= 'A' && c <= 'Z') {
                c += 32;
            }
        }
        return str;
    }
};


