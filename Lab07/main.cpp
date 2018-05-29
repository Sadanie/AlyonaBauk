#include "stack.h"
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	Stack<int> stack(5);
	int s, temp;
	while (true) {
		cout << "1. ������� ����\n";
		cout << "2. Push()\n";
		cout << "3. Pop()\n";
		cout << "4. Peek()\n";
		cout << "5. ������ �����\n";
		cout << "6. �����\n";
		cout << "�������� ����� ����: ";
		cin >> s;
		if (s == 6) {
			return 0;
		}
		switch (s)
		{
		case 1:
			stack.printStack();
			break;
		case 2:
			cout << "������� �����: "; cin >> temp;
			stack.push(temp);
			cout << endl;
			break;
		case 3:
			cout << "��������� �����: " << stack.pop() << endl;
			break;
		case 4:
			cout << "������� �����: "; cin >> temp;
			cout << "�� ������� �����: " << stack.Peek(temp);
			cout << endl;
		case 5:
			cout << "������ �����: " << stack.getTop();
			cout << endl;
		default:
			break;
		}
	}
}