// Gauss Integrali
#include<iostream>
#include<cmath>
#include<iomanip>
#include<locale.h>
using namespace std;
const int N=6000;
const double s=1e-10;
const double E=.1;
const double k=8.617e-5;
const double PI=3.141592;

double fnk(double x){
	return 2*(1-9*x)/x;
	// s= (8*PI*pow(k,4)*pow(T,2)/(pow(h*c,3 )
	// return  s*pow(ln(x),3)/(1-x)
}


double GInt(double a, double b){
	double w[6]={0.17132449,0.17132449,0.36076157,0.36076157,0.46791393,0.46791393};
	double x[6]={0.93246951,-0.93246951,0.66120939,-0.66120939,0.23861919,-0.23861919};
	double s=0,u;
	int i=0;
	while(i<6){
		u=((b-a)*x[i]+b+a)/2;
		s=s+w[i]*fnk(u);
		i++;
	}	
	return  (b-a)/2*s;
}

int main(){
	double a=0;
	double b=0.1;
	
	cout << "Gauss Int " << GInt(a,b) << endl;
}
