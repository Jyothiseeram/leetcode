class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
       int total=numBottles;
       int temp=numBottles;
       while(temp>=numExchange)
       {
        int div=temp/numExchange;
        total+=div;
        int rem=temp%numExchange;
        temp=rem+div;
       }
       return total;
    }
};