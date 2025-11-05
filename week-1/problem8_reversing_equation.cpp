//Problem Link: https://www.geeksforgeeks.org/problems/reversing-the-equation2205/1

class Solution {
  public:
    string reverseEqn(string s) {
        //Approach-1 --> This approach reverse/swap only the non number to each other
        // int i = 0;
        // int j = s.size()-1;
        // cout<<s[i]<<"<-->"<<s[j]<<endl;
        // while(i<=j){
        //     // ASCCI value of 0 to 9 lies between 48 to 57
        //     //cout<<endl;
        //     cout<<i<<"<-#->"<<j<<endl;
        //     while(s[i] >= 48 && s[i] <= 57){
        //         //cout<<s[i]<<" ";
        //         i++;
        //     }
        //     //cout<<endl;
        //     while(s[j] >= 48 && s[j] <= 57){
        //         //cout<<s[j]<<" ";
        //         j--;
        //     }
        //     //cout<<endl;
        //     //cout<<i<<"--"<<j;
        //     cout<<s[i]<<"<-*->"<<s[j]<<endl;
        //     char temp = s[i];
        //     s[i] = s[j];
        //     s[j] = temp;
        //     i++;
        //     j--;
        //     cout<<"done_Swap:"<<s<<endl;
        // }
        
        //Approach-2
        int i=0;
        int j=s.size()-1;
        string a1 = "";
        string b1 = "";
        while(i<j){
            string a = "";
            while(s[i] >= 48 && s[i] <= 57){
                a = a + s[i];
                i++;
            }
            string b = "";
            while(s[j] >= 48 && s[j] <= 57){
                b = s[j] + b;
                j--;
            }
            //cout<<a<<"----1---"<<b<<endl;
            //cout<<s[i]<<"----2---"<<s[j]<<endl;
            //char temp = s[i];
            //s[i] = s[j];
            //s[j] = temp;
            
            if(i<j){
                a = s[i] + a; 
                b = b + s[j];
				a1 = a + a1;
				b1 = b1 + b;				               
            }else{
				//cout<<i <<" "<<j<<endl;
                if(i == j){
					a = a; 
					b = b;
					a1 = a + a1 ;
					b1 = b1+b;
				}
				else{
					a = a; 
					b = b;
					a1 = a + a1 ;
					b1 = b1;					
				}
                break;
            }
            //a1 = a + a1;
            //b1 = b1 + b;
            //cout<<a1<<"----1---"<<b1<<endl;
            i++;
            j--;
        }
		if(i == j)
        	s = b1 + s[i] +a1;
		else
			s = b1 + a1;
        return s;
    }
};

int main(){
	Solution s1;
	cout<<"5+2*56-2/4 ----> ";
	cout<<s1.reverseEqn("5+2*56-2/4")<<endl;
	cout<<"20-3+5*2 ----> ";
	cout<<s1.reverseEqn("20-3+5*2")<<endl;
	return 0;
}

/*
Reversing the equation
Difficulty: EasyAccuracy: 58.61%Submissions: 34K+Points: 2
Given a mathematical equation that contains only numbers and +, -, *, /. Print the equation in reverse, such that the equation is reversed, but the numbers remain the same.
It is guaranteed that the given equation is valid, and there are no leading zeros.

Example 1:

Input:
S = "20-3+5*2"
Output: 2*5+3-20
Explanation: The equation is reversed with
numbers remaining the same.
Example 2:

Input: 
S = "5+2*56-2/4"
Output: 4/2-56*2+5
Explanation: The equation is reversed with
numbers remaining the same.
Your Task:
You don't need to read input or print anything. Your task is to complete the function reverseEqn() which takes the string S representing the equation as input and returns the resultant string representing the equation in reverse.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(|S|).

Constraints:
1<=|S|<=105
The string contains only the characters '0' - '9', '+', '-', '*', and '/'.
*/
