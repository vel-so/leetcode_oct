class Solution {
public:
    void backtrack(vector<int>& cand, int index, int target, vector<int> v, vector<vector<int>> &res){
        if(target<0) return;
        if(target==0) res.push_back(v);
        for(int i=index;i<cand.size();i++){
            v.push_back(cand[i]);
            backtrack(cand,i,target-cand[i],v,res);
            v.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int>v;
        backtrack(candidates,0,target,v,res);
        return res;
        
    }
};
