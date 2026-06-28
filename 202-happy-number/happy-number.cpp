class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> visit;
        while(visit.find(n)==visit.end()){
            visit.insert(n);
            n=check(n);
            if(n==1) return true;
        }
        return false;
    }
    int check(int n){
        int output=0;
        while(n>0){
            int d=n%10;
            output+=d*d;
            n/=10;
        }
        return output;
    }
};