//Problem Link: https://leetcode.com/problems/count-primes/

class Solution {
public:
    // bool checkPrime(int n){
    //     for(int i=2;i<=sqrt(n);i++){
    //         if(n%i==0)
    //             return false;
    //     }
    //     return true;
    // }
    //Approach-1: Time complexity O(N * Sqrt(N)), gives TLE for n=5000000
    // int countPrimes(int n) {
    //     int countPrime = 0;
    //     if(n == 0 || n == 1)
    //         return countPrime;

    //     for(int i=2;i<n;i++){
    //         if(checkPrime(i)){
    //             countPrime++;
    //             cout<<i<<" ";
    //         }
    //     }
    //     return countPrime;
    // }
    //Approach-2 Seive of eranthosis i.e create the prime number array before hand and then compare it.
    // int N = 5000000;
    // bool seieve[5000001];
    // void createSeive(){
    //     for(int i=2;i<=N;i++){
    //         seieve[i] = true;
    //     }

    //     for(int i=2;i*i<=N;i++){
    //         if(seieve[i] == true){
    //             for(int j=i*i;j<=N;j+=i){
    //                 seieve[j] = false;
    //             }
    //         }
    //     }
    // }
    // Solution(){
    //     createSeive();
    // }
    // int countPrimes(int n) {
    //     //createSeive();
    //     int countPrime = 0;
    //     for(int i=2;i<n;i++){
    //         //cout<<seieve[i]<<"--";
    //         if(seieve[i] == true){
    //             countPrime++;
    //             //cout<<i<<" ";
    //         }
    //     }    
    //     return countPrime;
    // }

    //Approach-3 Leetcode created the object for each test case seprately(which create the seieve array every time, so approach-2 gives TLE), so instead of this restrict to create it once only, using static. 
    static const int N = 5000000;
    static bool seieve[N + 1];
    static bool initialized;

    static void createSeive(){
        if(initialized)
            return;
        for(int i=2;i<=N;i++){
            seieve[i] = true;
        }

        for(int i=2;i*i<=N;i++){
            if(seieve[i] == true){
                for(int j=i*i;j<=N;j+=i){
                    seieve[j] = false;
                }
            }
        }
        initialized = true;
    }
    Solution(){
       createSeive();
    }
    int countPrimes(int n) {
        //createSeive();
        int countPrime = 0;
        for(int i=2;i<n;i++){
            //cout<<seieve[i]<<"--";
            if(seieve[i] == true){
                countPrime++;
                //cout<<i<<" ";
            }
        }    
        return countPrime;
    }
    
};
bool Solution::seieve[Solution::N + 1];
bool Solution::initialized = false;
