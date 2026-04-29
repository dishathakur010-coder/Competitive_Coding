class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int sum=0;
            while(i!=0){
                int r=i%2;
                if(r==1){
                    sum+=1;
                }
                i=i/2;
            }
            ans.push_back(sum);
        } 
        return ans;     
    }
};
