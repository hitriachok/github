#include <iostream>
#include <cstdlib>
using namespace std;

double getDistMile() { //function to read distance in miles // mileage reading function
	double dist; //distanse in miles
	cout << "Set distance in miles:";
	cin >> dist;
	return dist; //function result
}
double getDistKm(double dist) {
	double KminMile = 1.609344;
	return dist * KminMile;
}
int main() {
	double distMile = getDistMile(); //variable for writting distance in Miles;
	cout << "Distance in Kilometers:" << getDistKm(distMile) << endl; //calculations
	system("pause");
	return 0;
}