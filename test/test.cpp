
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double standartdv_calc(long double avg,long double num[]){
	long double variance;
	long double vrnc_sum = 0;
	long double deviation[10];
	int j = 0;
	while (j < 10) {
		deviation[j] = num[j] - avg;
		vrnc_sum += deviation[j] * deviation[j];
		j++;
	}
	variance = vrnc_sum / 10.0;
	
	
	return sqrtl(variance);
}


int main()
{
	long double num[10]; 
	long double avg;
	long double sum = 0;
	int i = 0;
	long double standartdv;
	cout << "Put in 10 numbers: ";
	while (i < 10) {
		cin >> num[i];
		sum += num[i];
		i++;
	}
	cout << endl;
	avg = sum / 10.0;
	standartdv = standartdv_calc(avg, num);
	cout << "The average of the ten numbers you have inputed is :" << avg << "\n" << "And the standard deviation of those numbers is: " << standartdv;
	cout << endl; 

	return 0;
}
	

