/*���� ������, ��������� �� ����, ����������� ��������� (����� ���
�����������). ����� ����� ������ �������� �����*/
#include<iostream>
#include<string>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	string str;
	getline(cin, str);
	int n = 0,k=0;
	for (int i = 0; i < str.size(); i++) {
		if (!(str[i] == ' ')) {
			k++;
		}
		else {
			if (n <= k) {
				n = k;
				k = 0;
			}
			else {
				k = 0;
			}
		}
	}
	cout << n << endl;
}

