class Solution {
public:

    // Encodes a URL to a shortened URL.
    map<string,string >m1,m2;
    long long int count=1;
    string encode(string longUrl) {
        m1[longUrl]=to_string(count);
        m2[to_string(count)]=longUrl;
        count++;
        return(m1[longUrl]);
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return(m2[shortUrl]);
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));