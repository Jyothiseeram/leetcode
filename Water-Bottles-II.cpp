class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
       int temp=numBottles;
       int total=numBottles;
       int v=numExchange;
       while(temp>=v)
       {
        temp=temp-v;
        
        total+=1;
        v++;
        temp++;
       }
      return total;
    }
};