#include <cmath>
#include <iostream>
using namespace std;

int main () {
	float a, b, c, x1, x2, det, bilReal, bilImaginer;
	cout << "Input nilai a, b, c: ";
	cin >> a >> b >>c;
	det = b*b - 4*a*c;

	cout << "nilai determinannya adalah: " << det << endl;
	if(a==0)
	{
		cout << "ERROR!" << endl;
		cout << "nilai 'a' tidak boleh nol";
		}
	else {
		if (det > 0) {
			x1 = (-b + sqrt(det)) / (2*a);
			x2 = (-b - sqrt(det)) / (2*a);
			cout << "D>0" << endl;
			cout << "nilai x1 = " << x1 << endl;
			cout << "nilai x2 = " << x2 << endl;
		}
		else if (det == 0) {
			cout << "D=0" << endl;
			x1 = (-b + sqrt(det)) / (2*a);
			cout << "x1=x2" << x1 << endl;
		}
		else {
			bilReal = -b/(2*a);
			bilImaginer = sqrt(-det) / (2*a);
			cout << "Akar adalah imaginer" <<endl;
			cout << "x1 = " <<bilReal << "+" << bilImaginer << " i" << endl;
			cout << "x1 = " <<bilReal << "-" << bilImaginer << " i" << endl;
		}
	return 0;
	}
}
