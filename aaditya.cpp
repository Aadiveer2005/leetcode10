
class Solution {
public:
    void func(int ind, vector<int>& candidates, vector<int>& ds, vector<vector<int>>& ans,int target) {
        if (ind == candidates.size()) {
            if(target==0)
                ans.push_back(ds);
            return;
        }
            if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            func(ind, candidates, ds, ans,target-candidates[ind]); // take
            ds.pop_back();}
             func(ind + 1, candidates, ds, ans,target); // not take
    }

  vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        vector<int> ds;
        vector<vector<int>> ans;
        func(0, candidates, ds, ans,target);
        return ans;
    }
};

