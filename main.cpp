#include <iostream>
#include<cmath>
using namespace std;
/* Newton Rapson Yöntemi ile Kök bulma*/
double fx(double x){
	return exp(x)*log(x)-pow(x,2);	
}

double dfx(double x){
	double dx=1e-5;
	return (fx(x+dx)-fx(x-dx))/(2*dx);
}

double NRapson(double x){
	double x1,x2,dx;
	x1=x;
	int i=1;
	do{
		x2=x1-fx(x1)/dfx(x1);
		dx=abs(x2-x1);
		x1=x2;
		i++;
	} while (i<50 && (dx>1e-5));
	if (i>=50) {
		cout << " \n\tKökler Bulunamadý\n";
		return -99999;
	}
	else return x2;
	
}

int main() {
	setlocale(LC_ALL,"TURKISH");
	
	cout <<  "\tDenklemin kökü\t"<<NRapson(0.001)<<endl;
	
	return 0;
}
