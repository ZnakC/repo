#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Russian");
	float m,x,a,b;
	cout<<"¬ведите число x"<<endl;
	cin>>x;
	a=sqrt((pow((7+0.5*x),5)+log10(x)));
	b=exp(0)+asin(6*pow(x,2));
	m=a/b;
	cout<<"–езультат:"<<m<<endl;
	return 0;
}
