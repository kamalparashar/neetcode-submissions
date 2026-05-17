class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length(), m = t.length();
        vector<int> v(26,0);
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
        }
        for(int i=0;i<m;i++){
            v[t[i]-'a']--;
        }

        for(int i:v){
            if(abs(i)>0){
                return false;
            }
        }
        return true;
    }
};
