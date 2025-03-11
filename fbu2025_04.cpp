#include<iostream>
#include<cmath>
using namespace std;

double const PI=3.141593;
double const N=1000;
double dx;

double fnk(double x){
	return pow(x,3);
}

double IntT(double a, double b){
	double S=0,x;
	int i=1;
	dx=(b-a)/N;
	while(i<N){
		x=a+dx*i;
		S=S+fnk(x);
		i++;
	}
	S=S+(fnk(a)+fnk(b))/2;
	return S*dx;
}

int main(){
	setlocale(LC_ALL,"TURKISH");
	cout << "integralin deðeri " << IntT(0,1) << endl;
}
