#include<iostream>
#include<cmath>
#include<iomanip>
#include<fstream>
using namespace std;

double const PI=3.141593;
double const N=100;
double dt=PI/N;
double ivme(double x, double v){
	return -x-0.1*v;
}
double hiz(double x, double v){
	return v+ivme(x,v)*dt;
}

double konum(double x, double v){
	return x+hiz(x,v)*dt;
}
int main(){
	setlocale(LC_ALL,"TURKISH");
	double x1,v1,x2,v2,t=0;
	ofstream file("kutleyay.txt");
	x1=1;
	v1=0;
	cout << setw(10)<< "Zaman"<< setw(10)<< "Hýz"<< setw(10)<< "Konu"<<"\n";
	cout << setw(10)<< t<< setw(10)<< v2<< setw(10)<< x2<<"\n";
	file <<  "Zaman"<<"/"<< "Hýz"<< "/"<<"Konu""\n";
	file <<  t<< "/"<< v1<< "/"<< x1<<"\n";
	while(t<N){
		v2=hiz(x1,v1);
		x2=konum(x1,v1);
		t=t+dt;
		cout << setw(10)<< t<< setw(10)<< v2<< setw(10)<< x2<<"\n";
		file <<  t<< "/"<< v2<< "/"<< x2<<"\n";
		v1=v2;
		x1=x2;
	}
	file.close();
	
}
