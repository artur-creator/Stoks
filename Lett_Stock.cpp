// Lett_Stock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include  <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int>& prices) {
    int profit = 0;
    int mini = prices[0];
    for (int i = 1; i < prices.size(); i++) {

        int diff = prices[i] - mini;
        profit = max(profit, diff);
        mini = min(mini, prices[i]);
    }

    return profit;
}



int main()
{
    vector<int> stonks;
    stonks.push_back(7);
    stonks.push_back(1);
    stonks.push_back(5);
    stonks.push_back(3);
    stonks.push_back(6);
    stonks.push_back(4);
    cout << maxProfit(stonks);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
