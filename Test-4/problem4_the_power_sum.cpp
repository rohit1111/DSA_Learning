//Problem Link: https://www.hackerrank.com/contests/test-4-a-pgp-22/challenges/the-power-sum/copy-from/1400574825

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'powerSum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER X
 *  2. INTEGER N
 */

void solveRec(int X,int N,int startValue,int& count){
    if(X<0)
        return;
    if(X == 0){
        count++;
        return;
    }
    for(int i=startValue; i>=1;i--){
        X = X - pow(i,N);
        solveRec(X,N,i-1,count);
        X = X + pow(i,N);
    }
}
int powerSum(int X, int N) {
    //int origX = X;
    
    int startValue = floor(pow((double)X,1.0/N));
    int count = 0;
    
    solveRec(X,N,startValue,count);
    
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string X_temp;
    getline(cin, X_temp);

    int X = stoi(ltrim(rtrim(X_temp)));

    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));

    int result = powerSum(X, N);

    fout << result << "\n";

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


/*
The Power Sum
Problem
Submissions
Leaderboard
Discussions
Find the number of ways that a given integer, , can be expressed as the sum of the  powers of unique, natural numbers.

For example, if  and , we have to find all combinations of unique squares adding up to . The only solution is .

Function Description

Complete the powerSum function in the editor below. It should return an integer that represents the number of possible combinations.

powerSum has the following parameter(s):

X: the integer to sum to
N: the integer power to raise numbers to
Input Format

The first line contains an integer .
The second line contains an integer .

Constraints

Output Format

Output a single integer, the number of possible combinations caclulated.

Sample Input 0

10
2
Sample Output 0

1
Explanation 0

If  and , we need to find the number of ways that  can be represented as the sum of squares of unique numbers.


This is the only way in which  can be expressed as the sum of unique squares.

Sample Input 1

100
2
Sample Output 1

3
Explanation 1


Sample Input 2

100
3
Sample Output 2

1
Explanation 2

 can be expressed as the sum of the cubes of .
. There is no other way to express  as the sum of cubes.
*/
