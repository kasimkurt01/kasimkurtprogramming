// Simpson ve Trampez
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
	return 4/(1+x*x);
}

double IntSimpson(double a, double b){
	double dx=(b-a)/N;
	int i=0;
	double S=0;
	double x;
	x=a+i*dx;
	S=S+fnk(a)+fnk(b);
	while (x<b){
		i+=2;
		x=a+i*dx;
		S=S+2*fnk(x);
	}
	i=1;
	x=a+i*dx; 
	while (x<b){
		S=S+4*fnk(x);
		i+=2;
		x=a+i*dx;
		
	}
	return (dx*S)/3;
}
double TrapezInt(double a,double b){
	double dx,S=0;
	dx=(b-a)/N;
	float i =1;
	while (i<N){
		S=S+fnk(a+dx*i);
		i++;
	}
	S=S+fnk(a)+fnk(b);
	return S*dx;
}

int main(){
	int a=0,b=1;
	setlocale(LC_ALL,"TURKISH");
	cout << setw(20)<< "integral Simpson :" << setw(5)<< IntSimpson(a,b)<< endl;

		cout << setw(20)<< "integral Trapez :" << setw(5)<< TrapezInt(a,b)<< endl;
	return 0;
}
