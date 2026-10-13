class Solution {
public:
    int numJewelsInStones(string je, string st) {
          int count=0;
        for(char x:je){
             for(char val:st){
            if(x==val){
               count++;
            }
        }
        }
        return count;
    }
};