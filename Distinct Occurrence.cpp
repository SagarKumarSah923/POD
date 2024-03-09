

class Solution
{
    public:
    
    int mod=1e9+7;
    int solve(string s, string t, int i, int j, vector<vector<int>>&dp){
        if(t.length()==j) return 1;
        if(s.length()==i) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s[i]==t[j]){
            return dp[i][j]=solve(s,t,i+1,j+1,dp)%mod+solve(s,t,i+1,j,dp)%mod;
        }
        else{
            return dp[i][j]=solve(s,t,i+1,j,dp)%mod;
        }
    }
    
    int subsequenceCount(string s, string t)
    {
      int n=s.length();
      int m=t.length();
      
      vector<vector<int>>dp(n, vector<int>(m,-1));
      
      return solve(s,t,0,0,dp)%mod;
      
    }
};
 
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		string tt;
		cin>>tt;
		 
		Solution.ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
	}
}
