class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        int lowdigsize=to_string(low).length();
         int highsize=to_string(high).length();
         for(int length=lowdigsize;length<=highsize;length++){
            for(int start=1;start<=10-length;start++){
                int number=0;
                int curr=start;
                for(int i=0;i<length;i++){
                    number=number*10+curr;
                    curr++;
                }
                if(low<=number && number<=high) ans.push_back(number);               
                 }
         }
         return ans;
    }
};