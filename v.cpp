#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL,"Russian");
	float a,b,c;
	cout<<"������� �������:";
	cin>>a;
	cout<<"������� �������:";
	cin>>b;
	cout<<"������� �������:";
	cin>>c;
if
    ((pow(c,2)==pow(a,2)+pow(b,2))||(pow(a,2)==pow(c,2)+pow(b,2))||(pow(b,2)==pow(a,2)+pow(c,2)))
    cout<<"���������: ����������� �������������";
else 
    cout<<"���e�����: ����������� �� �������������";
return 0;
}
