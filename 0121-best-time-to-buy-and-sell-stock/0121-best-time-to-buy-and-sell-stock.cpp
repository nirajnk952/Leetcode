class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxpro=0; //take max profit = 0 becoz if we hv value in decreasing order we got less profit eg 5,4,3,2,1
        
        int minprice = INT_MAX;
        
        for(int i=0;i<n;i++) // linearly travese from o the size of price of stock
        {
            minprice= min(minprice, prices[i]); //update minimal at every stage
                maxpro=max(maxpro,prices[i]-minprice ); // then  select profit and if u got profit  upadate it and store or return
        }
        return maxpro;
    }
};