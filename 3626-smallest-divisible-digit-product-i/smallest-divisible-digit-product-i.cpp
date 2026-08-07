class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++){
            int temp=i;
        int pro=1;
            while(temp>0){
            int d=temp%10;
            pro*=d;
            temp/=10;
            }
            if(pro%t==0) return i;
           
        }
        return 0;
    }
};