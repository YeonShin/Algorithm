#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector <string> croatia = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	string str;
	int idx;
	cin >> str;
	for (int i = 0; i < croatia.size(); i++) {
		while (1) {
			idx = str.find(croatia[i]); // find �Լ��� ���� ���ڿ��� ã�� ���ڰ� ���� ��� string::npos�� ��ȯ�Ѵٴ� ����� ���
			if (idx == string::npos) {
				break;
			}
			str.replace(idx, croatia[i].length(), "#");
		}
	}
	cout << str.size();
}