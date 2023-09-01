#include <map>

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> map;

        for (int i = 0; i < s.size(); i++) {
            if (map.find(s[i]) != map.end()) {
                if (map.at(s[i]) != t[i])
                    return false;


                map.insert(pair<char, char>(s[i], t[i]));
            } else {
                if (map.at(s[i]) != t[i])
                    return false;
            }
        }
        return true;
    }
}; 
