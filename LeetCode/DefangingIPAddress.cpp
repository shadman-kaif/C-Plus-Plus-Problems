class Solution {
public:
    string defangIPaddr(string address) {
        string answer;
        int i=0;
        while(address[i]!='\0'){
            if(address[i]=='.'){
                answer.append("[.]");
            }
            else{
                answer.push_back(address[i]);
            }
            i++;
        }
        return answer;
    }
};