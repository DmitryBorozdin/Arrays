//� ������� ���������� ��������� ����� ������ ������������� ���������. ������ ������� ��� ������ �-� rand() � ��������� [-10000; 10000]
//����� �������:
//���������� ����� ����� 0. �����, ���� ������� ������� �������������(>0) � ������� �� 2 ��� �������(������), �� ���������� ��� � ���������� �����, � �.�.
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int N;    //������ �������
	cout << "������� ������ �������: ";
	cin >> N;
	if (N < 0) {
		cout << "������!" << endl;               //������ �� ������
		system("pause");
		return 0;
	}
	int *arr = new int[N];
	int sum = 0;
	for (int i = 0; i < N; i++) {
		arr[i] = -10000 + (rand() % (20000)); //���������� ������� ���������� ������� �� -10000 �� 10000 � ����� ��� �� �����
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < N; i++) {
		if (arr[i] > 0 && arr[i] % 2 == 0) {  // ��������� ����� �������: ��������������� � ��������
			sum += arr[i];                 //���������� ����� ��� ����������� ��������
		}
	}
	cout << "����� ������������� ������ ��������� ������� = " << sum << endl;             //����� �����
	system("pause");
}