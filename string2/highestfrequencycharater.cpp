#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    // string s="raghav";
    
    // int max=0;
   
    // for(int i=0;i<s.length();i++)
    // {
    //     char c=s[i];
    //     int count=0;
    //     for(int j=0;j<s.length();j++)
    //     {
    //         if(s[j]==c)
    //         {
    //             count++;
    //         }
    //     }
    //     if(count>max)
    //     {
    //         max=count;
    //     }
    // }
    // cout<<c<<" "<<max;
    // return 0;
    string s="leetcode";
    vector<int> arr(26,0);
for(int i=0;i<s.length();i++){
    char ch=s[i];
int ascii=(int)ch;
arr[ascii-97]++;

}
int mx=0;
for(int i=0;i<26;i++){
    if(arr[i]>mx) mx=arr[i];
}
for(int i=0;i<26;i++){
    if(arr[i]==mx){
        int ascii=i+97;
        char ch=(char)ascii;
        cout<<ch<<" "<<mx<<endl;

    }
}
}