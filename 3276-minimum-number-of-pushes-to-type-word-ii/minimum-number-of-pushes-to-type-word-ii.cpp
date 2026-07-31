class Solution {
public:
    int minimumPushes(string word) {
        vector<int>mp(26);
        int count=0,n=word.length();
        for(int i=0;i<n;i++){
            mp[word[i]-'a']++;
        }
        vector<pair<char,int>>vp;
        for(int i=0;i<mp.size();i++){
            vp.push_back({i+'a',mp[i]});
        }
         sort(vp.begin(),vp.end(),[](const auto &a,const auto &b){
             return a.second>b.second;
            });
        int n_count=0;
        for(int i=0;i<26;i++){
            if(vp[i].second==0) break;
            count+=((i/8)+1)*vp[i].second;
        }
        return count;
    }
};