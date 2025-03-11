#include<iostream>
#include<cmath>
using namespace std;

double fnk(double x){
	return  exp(x)*log(x)-pow(x,2);
}

double Kiris(double a, double b){
	double x1,x2,x,dx;
	x1=a;x2=b;
	dx=abs(x2-x1);
	int i=0;
	while((dx>1e-5) && (i<50) ){
		x=x2-(x2-x1)*fnk(x2)/(fnk(x2)-fnk(x1));
		x1=x2;
		x2=x;
		dx=abs(x2-x1);		
		i++;
		cout << i << endl;		
	}
	if(i>=50) {
		cout << "Kokler bulunmadý\n";
		return -999999;
	}
	else return x;
	
}

int main(){
	
	setlocale(LC_ALL,"TURKISH");
	double a=1, b=13;
	cout << "Denkelemin Kökü :" <<  Kiris(a,b) << endl;
}
