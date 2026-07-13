class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freqs(26);
        vector<int> freqt(26);
        for(char x: s)
            freqs[x-'a']++;
        for(char x: t)
            freqt[x-'a']++;
        for(int i=0; i<26; i++){
            if(freqs[i]!=freqt[i])
                return false;
        }
        return true;

        
    }
};
