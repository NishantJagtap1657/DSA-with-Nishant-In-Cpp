class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
// THIS IS AN EASY LEVEL OF QUESTION 
// ONE MORE IS THAT YOU HAVE TO USE INBULT FUNCTION
// TO CONVERT THE STRING INTO THE INTERGER 
// WHICH IS TO_STRING FUNCTION
    for(int i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
         ans.push_back("FizzBuzz");
        }
        else if(i%3==0){
          ans.push_back("Fizz");
         }
        else if(i%5==0){
            ans.push_back("Buzz");
         }
         else{
            
           ans.push_back(to_string(i));
         }
    }
        return ans;
    }
};