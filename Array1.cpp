// � ������� ���������� ����� ���������� ������� � ������ ��������
// ����� �������:
// ������� ����������� ������� � ������ �������� � ����������(���� � ������ ��������), � ���� �� ������ �����������, �� �� ���������� ����������, � �.�.
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	int max = 0;  // ���������� ��� ����������� ��������
	int N; //������ �������
	cout << "������� ������ �������: ";
	cin >> N;
	if (N < 0) {
		cout << "������!" << endl;               //������ �� ������
		system("pause");
		return 0;
	}
	int *arr = new int[N];
	for (int i = 0; i < N; i++) {
		arr[i] = rand();                 //��������� ������ ���������� ������� � ������� ��� �� �����
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < N; i += 2) {
		if (max < arr[i]) {                        //���������� ����������� �������� � ������ ��������
			max = arr[i];
		}
	}
	cout << max;                //����� ����������� �������� �������
	cout << endl;
	system("pause");
}