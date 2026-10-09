class Solution {
public:
// this is also easy level of question
// formulae based question
    vector<double> convertTemperature(double cel) {
        vector<double>ans;
        double fer=(cel*1.80)+32.00;
        double kel=cel+273.15;
       ans.push_back(kel);
       ans.push_back(fer);
       return ans;
    }
};