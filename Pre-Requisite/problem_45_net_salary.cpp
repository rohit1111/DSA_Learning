//Problem Linkl: https://workat.tech/problem-solving/practice/net-salary

#include <bits/stdc++.h>
using namespace std;
double netSalary(int grassSalary){
	//int inHandSalary = 0;
	int slab1 = 300000;
	int slab2 = 200000;
	int slab3 = 500000;
	int left = 0;
	double tax = 0;
	int sl1, sl2, sl3, sl4;
	
	
	if(grassSalary > slab1){
		left = grassSalary - slab1;
		sl1 = slab1;
	}
	else{
		left = grassSalary;
		sl1 = left;
		left=0;
	}
	tax += 0.0 * (double)sl1;
	//cout<<tax<<"<--->"<<sl1<<"<--->"<<left<<endl;
	
	if(grassSalary > slab1 + slab2){
		left = left - slab2;
		sl2 = slab2;
	}else{
		sl2 = left;
		left=0;
	}
	tax += 0.05 * (double)sl2;
	//cout<<tax<<"<--->"<<sl2<<"<--->"<<left<<endl;
	
	if(grassSalary > slab1 + slab2 + slab3){
		left = left - slab3;
		sl3 = slab3;
	}else{
		sl3 = left;
		left=0;
	}
	tax += 0.20 * (double)sl3;
	//cout<<tax<<"<--->"<<sl3<<"<--->"<<left<<endl;
	
	if(grassSalary > slab1 + slab2 + slab3 + 1)
		sl4 = left;
	else{
		sl4 = left;
		left = 0;
	}
		
	tax += 0.30 * (double)sl4;
	//cout<<tax<<"<--->"<<sl4<<"<--->"<<left<<endl;

	return (double)grassSalary - (double)tax;
}
int main() {
	int testCase;
	cin>>testCase;
	
	for(int i=0;i<testCase;i++){
		int grassSalary;
		cin>>grassSalary;
		cout<<fixed<<setprecision(2)<<netSalary(grassSalary)<<endl;
	}
	return 0;
}


/*
Net Salary
Beginner
You are creating a software on computing salary for the Finance team of your company.

The net salary of a person is (Gross Salary - Tax).

There are different tax slabs for computing the tax.
Tax Rates for different income:

Slab 1 → 0 to 300000: 0%
Slab 2 → 300001 to 500000: 5%
Slab 3 → 500001 to 1000000: 20%
Slab 4 → 1000001+: 30%
This can also be written as:

Slab 1 → First 300000: 0%
Slab 2 → Next 200000: 5%
Slab 3 → Next 500000: 20%
Slab 4 → Rest: 30%
Tax = 0% of Slab 1 + 5% of Slab 2 + 20% of Slab 3 + 30% of Slab 4
Net Salary = Gross Salary - Tax

Examples:
Gross Salary = 2000000

This can be divided into the different slabs as:

Slab 1 = 300000 (Left: 2000000-300000 = 1700000)
Slab 2 = 200000 (Left: 1700000-200000 = 1500000)
Slab 3 = 500000 (Left: 1500000-500000 = 1000000)
Slab 4 = 1000000
Tax = 0% of 300000 + 5% of 200000 + 20% of 500000 + 30% of 1000000 = 410000
Net Salary = 2000000 - 410000 = 1590000

Gross Salary = 750000

This can be divided into the different slabs as:

Slab 1 = 300000 (Left: 750000-300000 = 450000)
Slab 2 = 200000 (Left: 450000-200000 = 250000)
Slab 3 = 250000 (Left: 0)
Slab 4 = 0
Tax = 0% of 300000 + 5% of 200000 + 20% of 250000 + 30% of 0 = 60000
Net Salary = 750000 - 60000 = 690000

Gross Salary = 120000

This can be divided into the different slabs as:

Slab 1 = 120000 (Left: 0)
Slab 2 = 0
Slab 3 = 0
Slab 4 = 0
Tax = 0% of 120000 + 5% of 0 + 20% of 0 + 30% of 0 = 0
Net Salary = 120000 - 0 = 120000

Given the gross salary of a person, find out the net salary.

Input Format
The first line indicating the number of test cases T.
Next T lines will each contain a Gross salary.

Output Format
T lines each indicating an output indicating the net salary of the person (Exactly upto 2 decimal places).

Examples
Sample Input
3
120000
750000
2000000
Expected Output
120000.00
690000.00
1590000.00
*/
