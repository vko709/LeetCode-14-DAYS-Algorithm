class Solution {
public:
    void stringReverse(string &s){
        int n = s.size();
        int i = 0;
        int j = n-1;
        while(i<j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
    
	string reverseWords(string s) {
        string outputString = "";
        int n = s.size();
        for(int i=0;i<n;i++){
            string r = " ";
            while(i<n && s[i] != ' '){
                r += s[i++];
            }
            stringReverse(r);
            outputString += r;
        }
        if (!outputString.empty()) {
            outputString.erase(outputString.size() - 1);
        }
        return outputString;
    }
};