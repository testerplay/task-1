#include <iostream>

using namespace std;

int main()

{
    cout << "Begin 15" << endl;// Begin 15
    int A = 0, B = 0, C = 0;
    cout << "������ � : ";
    cin >> A; //�������� ����� �
    cout << "������ B : ";
    cin >> B; //�������� ����� B
    cout << "������ C : ";
    cin >> C; //�������� ����� �

    int buff = A; //��������� ���� ����� ��� � ����� �
    A = C;
    C = B;
    B = buff; // ���������� �����

    cout << A << endl << B << endl << C << endl;

    cout << "Begin 23" << endl;// Begin 23 

    double Fahrenheit = 0, Celsium = 0; //����������� ������
    cout << "����i�� �����������(���������) = ";
    cin >> Fahrenheit; //�������� ����������� � �����������

    Celsium = (Fahrenheit - 32) * 5 / 9; //������������
    cout << "����������� � ������� : " << Celsium; // ��������� �����������
}