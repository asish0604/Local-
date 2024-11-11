#include<iostream>
#include<string>

using namespace std;
//unordered_map<char, int> m; is the most efficent way to this.


class Solution {
public:
    int romanToInt(string s) {
        int arr[s.length()];
        cout<<"The Length of the String is: "<<s.length()<<endl;
        int sum=0;
        for (int i=0;i<s.length();i++)
        {
            if(s[i]=='I'){
            arr[i]=1;
            }
            else if(s[i]=='V'){
            arr[i]=5;
            }
            else if(s[i]=='X'){
            arr[i]=10;
            }
            else if(s[i]=='L'){
            arr[i]=50;
            }
            else if(s[i]=='C'){
            arr[i]=100;
            }
            else if(s[i]=='D'){
            arr[i]=500;
            }
            else if(s[i]=='M'){
            arr[i]=1000;
            }
            else{
            cout<<"Invalid Input";
            }
        }
        for(int t=0;t<s.length();t++)
        {
            cout<<arr[t]<<endl;
        }
       for(int j=0;j<s.length();j++)
       {
           //if(arr[j]<arr[j+1]) is wrong becausethere's a potential problem with accessing arr[j+1] without ensuring that j+1 does not exceed the bounds of the array. This could lead to undefined behavior, especially for the last element of the array.
           if(j < s.length() - 1 && arr[j] < arr[j + 1]) //This modification ensures that the comparison arr[j] < arr[j+1] is only performed when j+1 is a valid index within the array. For the last element, where j = s.length() - 1, the condition j < s.length() - 1 will be false, and the code will safely add the last element's value to sum without attempting to access arr[j+1], which would be out-of-bounds.
            {
                sum -= arr[j];
            }
           else
            {
                 sum += arr[j];
            }
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
