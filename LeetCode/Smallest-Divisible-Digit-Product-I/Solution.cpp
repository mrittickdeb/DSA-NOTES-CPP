1class Solution {
2public:
3    int smallestNumber(int n, int t) {
4        for(int i=n;i<=100;i++){
5            int temp=i;
6        int pro=1;
7            while(temp>0){
8            int d=temp%10;
9            pro*=d;
10            temp/=10;
11            }
12            if(pro%t==0) return i;
13           
14        }
15        return 0;
16    }
17};