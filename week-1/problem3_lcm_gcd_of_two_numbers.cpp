//Problem Link: https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1
class Solution {
  public:
    int checkLCM(int a,int b){
        int result = 0;
        //How to calculate Least Common Multiple
        //1. List the multiples of each number
        //2. Identify the least/first common from the list
        //int aMultiples[]
        
        //Approach-1   // This fails if common multiple not available in first 10 of small number;
        // int small = min(a,b);
        // int big = max(a,b);
        // int multipleSmall[11];
        // for(int i=1;i<=10;i++){
        //     multipleSmall[i] = small * i;
        // }
        // for(int i=1;i<=10;i++){
        //     int check = big * i;
        //     for(int j=1;j<=10;j++){
        //         std::cout<<check<<" "<<multipleSmall[j]<<endl;
        //         if(check == multipleSmall[j]){
        //             result = check;
        //             return result;  //break;
        //         }
        //     }
        //     //cout<<endl;
        // }
        
        //Approach-2   // This gives TLE
        // int small = min(a,b);
        // int big = max(a,b);
        // int multipleBig[411];
        // for(int i=1;i<=410;i++){
        //     multipleBig[i] = big * i;
        // }
        // for(int i=1;i<=1000000;i++){
        //     int check = small * i;
        //     for(int j=1;j<=410;j++){
        //         //std::cout<<check<<" "<<multipleBig[j]<<endl;
        //         if(check == multipleBig[j]){
        //             result = check;
        //             return result;  //break;
        //         }
        //     }
        //     //cout<<endl;
        // }        *
        
        //Approach-3    //Using GCD
        // int gcd_num = checkGCD(a,b);
        // result = ( a * b ) / gcd_num;
        
        //Approach-4    //Using Prime Factorization
        //How to calculate the Prime Factorization? --> Factors which can be represented in prime factors
        //How to calculate the factors - divide the number from 1 to n and check if its reminder is zero.
        int big = max(a,b);
        int factorsA[big+1] = {0};
        int factorsB[big+1] = {0};
        int copyA = a;
        int copyB = b;
        for(int i=2;i<=a;i++){
            if( i>2 &&  i%2 == 0)
                continue;
            while(copyA%i == 0){
                factorsA[i]++;
                copyA = copyA/i;
            }
            
        }
        for(int i=2;i<=b;i++){
            if( i>2 &&  i%2 == 0)
                continue;
            while(copyB%i == 0){
                factorsB[i]++;
                copyB = copyB/i;
            }
        }        
        // for(auto i:factorsA){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        
        // for(auto i:factorsB){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        for(int i=1;i<=big;i++){
            if(factorsA[i] > factorsB[i])
                factorsA[i] = factorsA[i];
            else
                factorsA[i] = factorsB[i];
        }
        
        // for(auto i:factorsA){
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        result = 1;
        for(int i=1;i<=big;i++){
            while(factorsA[i] >= 1){
                //cout<<i<<" "<<result<<", ";
                result = result * i;
                factorsA[i]--;
            }
        }
        
        return result;
    }
    int checkGCD(int a,int b){
        int result;
        //How to calculate Gretast Common Divisior
        
        //Approach-1
        // int small = min(a,b);
        // if(a%small == 0 && b%small ==0)
        //     result = small;
        // else{
        //     for(int i=1;i<=small;i++){
        //      if(a%i== 0 && b%i ==0)
        //         result = i;
        //     }
        // }
        
        //Approach-2
        // int small = min(a,b);
        // for(int i=1;i<=small;i++){
        //      if(a%i== 0 && b%i ==0)
        //         result = i;
        // }
        
        //Approach-3
        int small = min(a,b);
        for(int i=small;i>0;i--){
             if(a%i== 0 && b%i ==0){
                result = i;
                break; 
             }
        }
        return result;
    }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int lcm_num = checkLCM(a,b);
        int gcd_num = checkGCD(a,b);
        return {lcm_num,gcd_num};
    }
};



/*
Given two integers a and b, You have to compute their LCM and GCD and return an array containing their LCM and GCD.

Examples:

Input: a = 5 , b = 10
Output: [10, 5]
Explanation: LCM of 5 and 10 is 10, while their GCD is 5.
Input: a = 14 , b = 8
Output: [56, 2]
Explanation: LCM of 14 and 8 is 56, while their GCD is 2.
Input: a = 1 , b = 1
Output: [1, 1]
Explanation: LCM of 1 and 1 is 1, while their GCD is 1.
Constraints:
1 ≤ a, b ≤ 104
*/
