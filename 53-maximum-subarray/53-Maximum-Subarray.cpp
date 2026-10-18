class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi= nums[0];
        int curi = 0;
    for(int i  = 0 ; i < nums.size();i++)
        {
            curi = curi + nums[i];
                if( curi > maxi)
                maxi = curi;

            if(curi<0 )
            {
                curi = 0;
               
            }
           
            
                
            
        }
        return maxi;
        
    }
};