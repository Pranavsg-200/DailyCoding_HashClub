class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        map<string,int> obj;
        string withoutDomain, withDomain, newX;
        int count=0, findPlus, findAt;
        for(auto x:emails) {
            findPlus=-1;
            findAt=x.find('@');
            withoutDomain=x.substr(0,findAt);
            withDomain=x.substr(findAt, x.size());
            withoutDomain.erase(remove(withoutDomain.begin(), withoutDomain.end(), '.'),withoutDomain.end());
            findPlus=withoutDomain.find('+');
            if(findPlus != -1) {
                withoutDomain.erase(findPlus, findAt-findPlus);
            }
            newX=withoutDomain+withDomain;
            obj[newX]++;
        }
        for(auto y:obj) {
            count++;
        }
        return count;
    }
};
