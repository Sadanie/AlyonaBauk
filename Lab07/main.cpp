#include "stack.h"
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Russian");
	Stack<int> stack(5);
	int s, temp;
	while (true) {
		cout << "1. Вывести стек\n";
		cout << "2. Push()\n";
		cout << "3. Pop()\n";
		cout << "4. Peek()\n";
		cout << "5. Размер стека\n";
		cout << "6. Выход\n";
		cout << "Выберите пункт меню: ";
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
			cout << "Введите число: "; cin >> temp;
			stack.push(temp);
			cout << endl;
			break;
		case 3:
			cout << "Последнее число: " << stack.pop() << endl;
			break;
		case 4:
			cout << "Введите номер: "; cin >> temp;
			cout << "Вы выбрали число: " << stack.Peek(temp);
			cout << endl;
		case 5:
			cout << "Размер стека: " << stack.getTop();
			cout << endl;
		default:
			break;
		}
	}
}