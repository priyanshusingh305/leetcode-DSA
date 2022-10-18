class Solution {
public:
    int longestPalindrome(string s) {
      int n=s.size();
        unordered_map<char,int>frq;
        for(int i=0;i<n;i++)
            frq[s[i]]++;             //storing frequency of each character
        int cnt=0;
        int flag=0;
        for(int i=0;i<n;i++){
            if(frq[s[i]]%2==0 ){      //if frequency of current char is even then we can include all because it will result in palindrome only and don't forget to mark the frequency as 0 after adding it to the count so that it doesn't adds up again. 
                cnt+=frq[s[i]];
                frq[s[i]]=0;
            }else if(frq[s[i]]>2){       //if freuency of current char is odd and is greater than 2 then we can add the frequency upto which it is a multiple of 2.
                cnt+=frq[s[i]]-frq[s[i]]%2;
                frq[s[i]]=1;
            }
            else
                flag=1;      //flag can adds up the length by using at middle character.
        }
        if(flag==0)
             return cnt;
        else 
            return cnt+1;
        
    }
};