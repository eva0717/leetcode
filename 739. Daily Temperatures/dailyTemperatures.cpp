class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();
        vector<int>nge(n, 0); 
        stack<int>ans{};
        for(int i = n-1; i>=0; --i){
            while(!ans.empty() && temperatures[ans.top()] <= temperatures[i])ans.pop();
            if(!ans.empty())nge[i] = ans.top()-i; 
            ans.push(i);
        }
        return nge;
    }
};
