//https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/
class Solution {
public:
    string freqAlphabets(string s) {

        string s1 = "";
        for(int i = 0; i < s.size();) {
            if((i + 2) < s.size() && s[i + 2] == '#') {
                if(s[i] == '1') {
                    if(s[i + 1] =='0')            s1 += "j";
                    else if(s[i + 1] == '1')      s1 += "k";
                    else if(s[i + 1] == '2')      s1 += "l";
                    else if(s[i + 1] == '3')      s1 += "m";
                    else if(s[i + 1] == '4')      s1 += "n";
                    else if(s[i + 1] == '5')      s1 += "o";
                    else if(s[i + 1] == '6')      s1 += "p";
                    else if(s[i + 1] == '7')      s1 += "q";
                    else if(s[i + 1] == '8')      s1 += "r";
                    else if(s[i + 1] == '9')      s1 += "s";
                } else if(s[i] =='2') {
                    if(s[i+1] =='0')              s1 += "t";
                    else if(s[i + 1] == '1')      s1 += "u";
                    else if(s[i + 1] == '2')      s1 += "v";
                    else if(s[i + 1] == '3')      s1 += "w";
                    else if(s[i + 1] == '4')      s1 += "x";
                    else if(s[i + 1] == '5')      s1 += "y";
                    else                          s1 += "z";
                }
                i += 3;
            } else {
                if(s[i] == '1')           s1 += "a";
                else if(s[i] == '2')      s1 += "b";
                else if(s[i] == '3')      s1 += "c";
                else if(s[i] == '4')      s1 += "d";
                else if(s[i] == '5')      s1 += "e";
                else if(s[i] == '6')      s1 += "f";
                else if(s[i] == '7')      s1 += "g";
                else if(s[i] == '8')      s1 += "h";
                else if(s[i] == '9')      s1 += "i";
                ++i;
            }
        }
        return s1;

    }
};