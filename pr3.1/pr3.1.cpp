#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    double x; // ������� ��������
    double y; // ��������� ���������� ������
    double A; // �������� ��������� - ������������� ����� ������� ������
    double B; // �������� ��������� - ������������� ����� ������� ������

    cout << "x = "; cin >> x;
    A = 1 / x + 4;
    // ����� 1: ������������ � ���������� ����
    if (x < 1) {
        B = 0.65 * x + 8;
    }
    if (x >= 1 && x < 5) {
        B = atan((x + 6.1) / 2) + exp(x);
    }
    if (x >= 5) {
        B = sqrt(1 + sqrt(x));
    }
    y = A - B;
    cout << endl;
    cout << "1) y = " << y << endl;

    // ����� 2: ������������ � ������ ����
    
    if (x < 1) {
        B = 0.65 * x + 8;
    }
    else if (x >= 5)
        {
           y = sqrt(1 + sqrt(x));
        }
        else
        {
           y = atan((x + 6.1) / 2) + exp(x);
        }
    y = A - B;
    cout << "2) y = " << y << endl;
    cin.get();
    return 0;
}
    

