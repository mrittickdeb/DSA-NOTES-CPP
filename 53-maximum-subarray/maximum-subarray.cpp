class Solution {
public:
    int maxSubArray(vector<int>& arr) {
            int n=arr.size();
            int currsum=arr[0];
            int maxsum=arr[0];
            for(int i=1;i<n;i++){
                currsum=max(currsum+arr[i],arr[i]);
                maxsum=max(maxsum,currsum);
            }
            return maxsum;
   
   
   
   
   
   
   
   
   
   
   
   
   
   
                //  int n=arr.size();   
                //  int currsum=arr[0];   
                //  int maxsum=arr[0];
                //     for(int i=1;i<n;i++){
                //         currsum=max(arr[i],currsum+arr[i]);
                //         maxsum=max(maxsum,currsum);
                //     }
                //     return maxsum;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //     int maxi=INT_MIN;
    //     int sum=0;
    //     for(int i=0;i<arr.size();i++){
    //         sum +=arr[i];
    //         if(sum>maxi){
    //             maxi=sum;
    //         }
    //         if(sum<0){
    //             sum=0;
    //         }
    //     }
    //    // if(maxi < 0) maxi = 0;
    //     return maxi;
    }
};