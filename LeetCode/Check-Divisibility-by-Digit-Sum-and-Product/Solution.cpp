1class Solution {
2public:
3    bool checkDivisibility(int n) {
4        int temp=n;
5        int sum=0;
6        int pro=1;
7        while(temp!=0){
8            int d=temp%10;
9            pro*=d;
10            sum+=d;
11            temp/=10;
12        }
13        if(n%(pro+sum)==0) return true;
14        else return false;
15    }
16};