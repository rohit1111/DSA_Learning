//Problem Link: https://www.hackerrank.com/contests/test-2-a-pgp-22/challenges/icecream-parlor
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'icecreamParlor' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER m
 *  2. INTEGER_ARRAY arr
 */

vector<int> icecreamParlor(int m, vector<int> arr) {
    int n = arr.size();
    int i = 0;
    int j = n-1;
    vector<int> copyArr(n,0);
    for(int i=0;i<n;i++){
        copyArr[i] = arr[i];
    }
    //for(auto i:copyArr){
    //    cout<<i<<" ";
    //}
    sort(arr.begin(),arr.end());
    int ind1;
    int ind2;
    while(i<j){
        if(arr[i] + arr[j] == m){
            ind1 = arr[i];
            ind2 = arr[j];
            //return {i,j};
            break;
        }else if(arr[i] + arr[j] > m){
            j--;
        }else{
            i++;
        }
    }
    //cout<<ind1<<" "<<ind2<<endl;
    int ret1=-1;
    int ret2=-1;
    for(int i=0;i<n;i++){
        if(copyArr[i] == ind1 && ret1 == -1){
            ret1 = i+1;
            continue;
        }
        if(copyArr[i] == ind2 && ret2 == -1)
            ret2 = i+1;        
    }
    //vector<int> result(2,0);
    //result[0] = ret1;
    //result[1] = ret2;
    if(ret1 < ret2)
        return {ret1,ret2};
    else
        return {ret2,ret1};
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string m_temp;
        getline(cin, m_temp);

        int m = stoi(ltrim(rtrim(m_temp)));

        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split(rtrim(arr_temp_temp));

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            int arr_item = stoi(arr_temp[i]);

            arr[i] = arr_item;
        }

        vector<int> result = icecreamParlor(m, arr);

        for (size_t i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

/*
Ice Cream Parlorlocked
Problem
Submissions
Leaderboard
Discussions
Two friends like to pool their money and go to the ice cream parlor. They always choose two distinct flavors and they spend all of their money.

Given a list of prices for the flavors of ice cream, select the two that will cost all of the money they have.

Example.  

The two flavors that cost  and  meet the criteria. Using -based indexing, they are at indices  and .

Function Description

Complete the icecreamParlor function in the editor below.

icecreamParlor has the following parameter(s):

int m: the amount of money they have to spend
int cost[n]: the cost of each flavor of ice cream
Returns

int[2]: the indices of the prices of the two flavors they buy, sorted ascending
Input Format

The first line contains an integer, , the number of trips to the ice cream parlor. The next  sets of lines each describe a visit.

Each trip is described as follows:

The integer , the amount of money they have pooled.
The integer , the number of flavors offered at the time.
 space-separated integers denoting the cost of each flavor: .
Note: The index within the cost array represents the flavor of the ice cream purchased.

Constraints

, ∀ 
There will always be a unique solution.
Sample Input

STDIN       Function
-----       --------
2           t = 2
4           k = 4
5           cost[] size n = 5
1 4 5 3 2   cost = [1, 4, 5, 3, 2]
4           k = 4
4           cost[] size n = 4
2 2 4 3     cost=[2, 2,4, 3]
Sample Output

1 4
1 2
Explanation

Sunny and Johnny make the following two trips to the parlor:

The first time, they pool together  dollars. Of the five flavors available that day, flavors  and  have a total cost of .
The second time, they pool together  dollars. Of the four flavors available that day, flavors  and  have a total cost of .
Submissions: 37
Max Score: 25
Difficulty: Easy
Rate This Challenge:

    
More

*/
