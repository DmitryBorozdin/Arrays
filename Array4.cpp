//���������� ����� �������� �������, ������� ������ �������� ��������������� ����� �������.
//����� �������:
//1) ������� ������� �������������� �������, ������� ����� ���� ��������� �� �� ����������
//2) ���� ������� ������� ������ �������� ���������������, �� ������� ��� �� �����
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int N;                                //������ �������
	cout << "������� ������ �������: ";
	cin >> N;
	if (N < 0) {
		cout << "������!" << endl;               //������ �� ������
		system("pause");
		return 0;
	}
	int *arr = new int[N];
	int sredn, sum = 0;        //sredn - ���������� ��� �������� ���������������, sum -  ���������� ��� ����� ���� ���������
	for (int i = 0; i < N; i++) {
		arr[i] = rand() % (20000);      //���������� ������� ���������� ������� � ����� ��� �� �����
		cout << arr[i] << " ";
	}
	for (int i = 0; i < N; i++) {
		sum += arr[i];                   //������� ����� ���� ��������� �������
	}
	cout << endl;
	sredn = sum / N;           //������� ������� ��������������, �������� ����� ���� ��������� �� �� ����������
	cout << "������� �������������� = " << sredn << endl;
	cout << "�������� �������, ������� ������ �������� ���������������: ";
	for (int i = 0; i < N; i++) {
		if (arr[i] < sredn) {             //���� ������� ������ �������� ���������������, �� ������ ��� �� �����
			cout << arr[i] << " ";
		}
	}
	cout << endl;
	system("pause");
}
