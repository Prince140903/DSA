#include <bits/stdc++.h>
using namespace std;

// If input is in this form => 10000,food,5000,shopping,3000,bill,1000,phone,200,done
// then only this code will work

int main()
{
    string input;
    getline(cin, input); // takes whole line as input

    stringstream ss(input);
    string token;
    vector<string> tokens;
    while (getline(ss, token, ','))
    {                            // separates all inputs by ',' into tokens
        tokens.push_back(token); // vector stores all tokens
    }

    int total_money = stoi(tokens[0]); // assigns first value as Total Income (stoi converts string into integer)
    vector<pair<string, int>> lists;
    int i = 1;
    int total_expense = 0;
    int total_saving = 0;

    while (i < tokens.size())
    { // Iterates over all tokens
        string itemName = tokens[i];
        i++;
        if (tokens[i] != "done")
        { // breaks on "done"

            int item_price = stoi(tokens[i]); // stoi converts string into integer
            total_expense += item_price;
            lists.push_back({itemName, item_price});
        }
        i++;
        if (tokens[i] == "done")
        { // breaks on "done"
            break;
        }
    }

    total_saving = total_money - total_expense;

    cout << "Total Income: " << total_money << endl;
    cout << "Total Expense: " << total_expense << endl;
    cout << "Total Savings: " << total_saving << endl;
    cout << "Category:" << endl;

    for (auto &ele : lists) // loops over all key-value pair in lists
    {
        cout << ele.first << ": " << ele.second << endl;
    }

    return 0;
}