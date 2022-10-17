class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> alphabet(26);
        for(int i = 0; i < sentence.size(); i++){
            int val = sentence[i] - 97 ;
            alphabet[val] = 1;
        }
        for(int i = 0; i < alphabet.size(); i++){
            if(alphabet[i] == 0){
                return false;
            }
            
        }
        return true;
    }
};