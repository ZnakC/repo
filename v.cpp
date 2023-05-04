#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"Russian")<<endl;
	float a,b,c;
	cout<<"Введите сторону:"<<endl;
	cin>>a;
	cout<<"Введите сторону:"<<endl;
	cin>>b;
	cout<<"Введите сторону:"<<endl;
	cin>>c;
if
    ((pow(c,2)==pow(a,2)+pow(b,2))||(pow(a,2)==pow(c,2)+pow(b,2))||(pow(b,2)==pow(a,2)+pow(c,2)))
    cout<<"Результат: Треугольник прямоугольный";
else 
    cout<<"Резeльтат: Треугольник не прямоугольный";
return 0;
}
