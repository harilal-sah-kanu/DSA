// Best Time to Buy And Sell Stocks:

#include <bits/stdc++.h>
using namespace std;

// Function for calculating maximum profit from stocks:
int maxProfitStock(vector<int>& prices, int n) {
    int minPrice = INT_MAX;
    int maxProfit = 0;
    for (int i = 0; i < n; i++) {
        if (prices[i] < minPrice)
            minPrice = prices[i];
        else if (prices[i] - minPrice > maxProfit)
            maxProfit = prices[i] - minPrice;
    }
    return maxProfit;
}

int main() {
    
    int n;
    cout << "Enter Size Of Stocks Prices: ";
    cin >> n;

    vector<int> prices(n);
    
    // Stock Prices will be stored in price arrays:
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }


    int profit = maxProfitStock(prices, n);

    cout << profit << endl;

    return 0;
}