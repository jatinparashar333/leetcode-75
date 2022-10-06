class Solution {
public:
    bool isSubsequence(string s, string t) {
        string str="";
        int n=t.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(t[i]==s[j]){
                str+=t[i];
                j+=1;
            }
        }
        if(str==s){
            return true;
        }
        return false;
    }
};