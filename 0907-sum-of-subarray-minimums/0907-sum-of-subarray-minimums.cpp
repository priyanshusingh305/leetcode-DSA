class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
      int n = arr.size();
        
        vector<int>rightMins(n);
        
        stack<int>leftStak;
        stack<int>rightStak;
        
        for(int i=n-1;i>=0;i--)
        {
            while(!rightStak.empty() && arr[rightStak.top()]>=arr[i])rightStak.pop();
            
            rightMins[i] = rightStak.empty() ? n : rightStak.top();
            
            rightStak.push(i);
        }

        int count = 0;
        int MOD = 1000000007;
        
        int leftMin;
        
        long leftSize;
        long rightSize;
        
        for(int i=0;i<n;i++)
        {
            while(!leftStak.empty() && arr[leftStak.top()]>arr[i])leftStak.pop();
            
            leftMin = leftStak.empty() ? -1 : leftStak.top();
            
            leftStak.push(i);
            
            leftSize = i - leftMin;
            rightSize = rightMins[i] - i;
            
            count = (count + (arr[i] * (leftSize * rightSize) % MOD) %MOD )%MOD;
        }
        
        return count;  
    }
};