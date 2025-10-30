//Problem Link: https://workat.tech/problem-solving/practice/gross-salary

#include <bits/stdc++.h>
using namespace std;

int main() {
	int testCase;
	cin>>testCase;
	
	double HRA, DA, TA;
	cin>>HRA>>DA>>TA;
		
	HRA /= 100.00;
	DA /= 100.00;
	TA /= 100.00;	
	
	for(int i=0;i<testCase;i++){	
		//Double to be used, if use the float then after decimal p;aces result get wrong
		double baseSalary;
		cin>>baseSalary;
		
		double grassSalary = baseSalary;
		//cin>>grassSalary;
		grassSalary += (baseSalary * HRA) + (baseSalary * DA) + (baseSalary * TA);
		cout<<fixed<<setprecision(2)<<grassSalary<<endl;
	}
	return 0;
}

/*
Gross Salary
Beginner
You are creating a software on computing salary for the Finance team of your company.

The gross salary of a person is composed of multiple components - Base salary, HRA, DA, Bonus. The HRA, DA and Bonus percentages are fixed for every employee whereas the base salary differs.

Gross Salary of an employee = Base + HRA% of Base + DA% of Base + Bonus% of Base

Your software is initially provided the HRA, DA and Bonus %. After that it is given the base salaries of every employee based on which you need to return their gross salary.

Input Format
The first line indicating the number of test cases T.
The second line has 3 numbers denoting HRA%, DA%, Bonus%.
Next T lines will each contain the Base salary.

Output Format
T lines each indicating an output indicating the gross salary of the person (Exactly upto 2 decimal places).

Examples
Sample Input
2
12 8 2
120000
1090000
Expected Output
146400.00
1329800.00
Explanation:
(120000) + (120000*12%) + (120000*8%) + (120000*2%)  = 146400
(1090000) + (1090000*12%) + (1090000*8%) + (1090000*2%)  = 1329800

Sample Input
2
14 10 5
1545000
1234567
Expected Output
1993050.00
1592591.43
Explanation:
(1545000) + (1545000*14%) + (1545000*10%) + (1545000*5%)  = 1993050
(1234567) + (1234567*14%) + (1234567*10%) + (1234567*5%)  = 1592591.43

Constraints:
0 < T <= 100000
0 <= HRA%<= 100 (Integer)
0 <= DA%<= 100 (Integer)
0 <= Bonus%<= 100 (Integer)
0 <= Base salary <= 10000000 (Integer)
*/
