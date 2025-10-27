// Problem Link: https://www.hackerrank.com/contests/test-2-a-pgp-22/challenges/sherlock-and-array
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'balancedSums' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

string balancedSums(vector<int> arr) {
    int n = arr.size();
    int i = -1;
    int j = n;
    arr[i] = 0;
    arr[j] = 0;
    int sumLeft = 0;//arr[i];
    int sumRight = 0;//arr[j];
    int flag = 0;
    while(i<j){
        //cout<<i<<"-"<<j<<", "<<sumLeft<<" "<<sumRight<<endl;
        while(arr[j] == 0 && arr[j-1] == 0){
                    j--;
                    //cout<<"J is Zero -"<<j<<endl;
                    //sumRight += arr[j];
                    //if(sumRight == 0)
                    //    continue;
                    // i++;
                    // sumLeft += arr[i];
                }
                while(arr[i] == 0 && arr[i+1] == 0){
                    i++;
                    //cout<<"I is Zero-"<<i<<endl;
                }
        if(sumLeft == sumRight){
            if(j-i == 2){
                flag = 1;
                break;
            }else if(j-i < 2){
                i++;
                j--;
            }else{
                //cout<<arr[j]<<","<<arr[i]<<endl;
                
                if(j-i == 2)
                    continue;
                if(arr[j] == 0 && arr[i] == 0){
                    j--;
                    sumRight += arr[j];
                }
                else if(arr[j] == 0 && arr[i] != 0){
                    j--;
                    sumRight += arr[j];
                }
                else if(arr[j] != 0 && arr[i] == 0){
                    i++;
                    sumLeft += arr[i];
                }
                else if(arr[j] != 0 && arr[i] != 0){
                //cout<<"DD"<<i<<"-"<<j<<", "<<sumLeft<<" "<<sumRight<<endl;
                j--;
                sumRight += arr[j];
                }
            }
        }else if(sumLeft < sumRight){
            i++;
            sumLeft += arr[i];
        }else if(sumLeft > sumRight){
            j--;
            sumRight += arr[j];            
        }
        //cout<<"D-1"<<endl;
    }
    //cout<<"D-2"<<endl;
    if(flag == 1){
        //cout<<"D-3-YES"<<endl;
        return "YES";
    }else{
        //cout<<"D-3-NO"<<endl;
        return "NO";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string T_temp;
    getline(cin, T_temp);

    int T = stoi(ltrim(rtrim(T_temp)));

    for (int T_itr = 0; T_itr < T; T_itr++) {
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

        string result = balancedSums(arr);

        fout << result << "\n";
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
Sherlock and Arraylocked
Problem
Submissions
Leaderboard
Discussions
Watson gives Sherlock an array of integers. His challenge is to find an element of the array such that the sum of all elements to the left is equal to the sum of all elements to the right.

Example


 is between two subarrays that sum to .


The answer is  since left and right sum to .

You will be given arrays of integers and must determine whether there is an element that meets the criterion. If there is, return YES. Otherwise, return NO.

Function Description

Complete the balancedSums function in the editor below.

balancedSums has the following parameter(s):

int arr[n]: an array of integers
Returns

string: either YES or NO
Input Format

The first line contains , the number of test cases.

The next  pairs of lines each represent a test case.
- The first line contains , the number of elements in the array .
- The second line contains  space-separated integers  where .

Constraints





Sample Input 0

2
3
1 2 3
4
1 2 3 3
Sample Output 0

NO
YES
Explanation 0

For the first test case, no such index exists.
For the second test case, , therefore index  satisfies the given conditions.

Sample Input 1

3
5
1 1 4 1 1
4
2 0 0 0
4
0 0 2 0 
Sample Output 1

YES
YES
YES
Explanation 1

In the first test case,  is between two subarrays summing to .
In the second case,  is between two subarrays summing to .
In the third case,  is between two subarrays summing to .
*/
