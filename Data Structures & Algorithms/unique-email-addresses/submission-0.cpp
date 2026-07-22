class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> result;

        for(int i=0;i < emails.size();i++){
           int at = emails[i].find('@');

        string local = emails[i].substr(0, at);
        string domain = emails[i].substr(at + 1);

       int plus = local.find('+');
       if(plus != string::npos){
        local.erase(plus);
       }

       while(local.find('.') != string::npos){
        local.erase(local.find('.'), 1);
       }

       string finalEmail = local + "@" + domain;

       result.insert(finalEmail);
        }
        return result.size();
    }
};