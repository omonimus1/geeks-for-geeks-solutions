class Solution{
    public:
    vector<int> findLeastGreater(vector<int>& a, int n) {
        multiset<int> s;
        vector<int> ans(n);
        for(int i=n-1;i>=0;i--){
            auto it=s.upper_bound(a[i]);
            if(it==s.end()){
                ans[i]=-1;
            }else{
                ans[i]=*it;
            }
            s.insert(a[i]);
        }
        return ans;
    }
};

