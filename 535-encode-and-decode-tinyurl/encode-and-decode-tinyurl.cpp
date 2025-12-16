class Solution {
public:
    unordered_map<string,string>mp;
    // Encodes a URL to a shortened URL.
    int count=0;
    string encode(string longUrl) {
        string n="http://tinyurl.com/"+to_string(count);
        count++;
        mp[n]=longUrl;
        return n;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return mp[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));