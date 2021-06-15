/*
#include <iostream>

using namespace std;

class Stack {
public:
	int top = -1;
	Stack();
	int stackArr[5] = { 0, };
	bool is_empty(int *arr);
	bool is_full(int* arr);
	void push(int* arr, int n);
	void pop(int* arr);
};
Stack::Stack()
{

}

bool Stack::is_empty(int* arr)
{
	if (top == -1)
	{
		return true;
	}
	else
		return false;
}

bool Stack::is_full(int *arr)
{
	
	if (top == 5-1)
	{
		
		return true;
	}
	else return false;
}

void Stack::push(int* arr, int n)
{
	cout << "push : " << sizeof(arr) << endl;
	if (is_full(arr) == true)
	{
		cout << "Stack is full" << endl;
	}
	else {
		top++;
		arr[top] = n;
	}
	
}

void Stack::pop(int* arr)
{
	if (is_empty(arr) == true)
	{
		cout << "There is no elements" << endl;
	}
	else {
		cout << "Pop " << arr[top] << endl;
		arr[top] = 0;

		top--;
	}
		
	
}

int main()
{


	int sel;

	int n;
	Stack stack;

	while (1) {
		cout << "1. is_emtpy?" << endl;
		cout << "2. is_full?" << endl;
		cout << "3. Push" << endl;
		cout << "4. Pop" << endl;
		cout << "5. Show" << endl;
		
		cin >> sel;
		
		switch (sel) {
		case 1:
			if (stack.is_empty(stack.stackArr) == true)
			{
				cout << "The stack is Empty "<<endl;
			}
		
			break;
		case 2:
			if (stack.is_full(stack.stackArr) == true)
			{
				cout << "The stack is Full" << endl;
			}
		
			break;
		case 3:
			cin >> n;
			stack.push(stack.stackArr,n);
			break;
		case 4:
			stack.pop(stack.stackArr);
			break;
		case 5:
			for (int i = 0; i < 5; i++)
			{
				cout << stack.stackArr[i] << " ";
			}
			cout << endl;
			break;
		default:
			break;
		}
	}

}
*/