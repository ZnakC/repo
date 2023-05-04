#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"Russian");
	float a,b,c;
	cout<<"Введите сторону:";
	cin>>a;
	cout<<"Введите сторону:";
	cin>>b;
	cout<<"Введите сторону:";
	cin>>c;
if
    ((pow(c,2)==pow(a,2)+pow(b,2))||(pow(a,2)==pow(c,2)+pow(b,2))||(pow(b,2)==pow(a,2)+pow(c,2)))
    cout<<"Результат: Треугольник прямоугольный";
else 
    cout<<"Резeльтат: Треугольник не прямоугольный";
return 0;
}
