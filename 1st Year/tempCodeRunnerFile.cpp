#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int arr[s.length()];
        int sum=0;
        for (int i=0;i=<s.length();i++)
        {
            if(s[i]=="I"){
                arr[i]=1;
            }
            else if(s[i]=="V"){
                arr[i]=5;
            }
            else if(s[i]=="X"){
                arr[i]=10;
            }
            else if(s[i]=="L"){
                arr[i]=50;
            }
            else if(s[i]=="C"){
                arr[i]=100;
            }
            else if(s[i]=="D"){
                arr[i]=500;
            }
            else if(s[i]=="M"){
                arr[i]=1000;
            }
            else{
                cout<<"Invalid Input";
            }
        }
       for(int j=0;j<=s.length();j++)
       {
           sum= sum + arr[j];
       }
       return(sum);
    }
};

int main() {
    cout<<"Enter The Roman Numeral: ";
    string s;
    cin>>s;
    Solution obj;
    cout<<"The Integer Value of the Roman Numeral is: "<<obj.romanToInt(s);
    return 0;
}
