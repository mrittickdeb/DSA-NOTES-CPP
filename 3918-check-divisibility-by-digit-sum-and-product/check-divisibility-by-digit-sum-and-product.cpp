class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int sum=0;
        int pro=1;
        while(temp!=0){
            int d=temp%10;
            pro*=d;
            sum+=d;
            temp/=10;
        }
        if(n%(pro+sum)==0) return true;
        else return false;
    }
};