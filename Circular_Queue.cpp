#include <iostream>
using namespace std;

class Queue {
public:
	int front = 5;
	int rear = 5;
	int size = 6;
	Queue();
	int* queue = nullptr;
	bool is_empty(int* arr);
	bool is_full(int* arr);
	void enqueue(int* arr, int n);
	void dequeue(int* arr);
};

Queue::Queue()
{

}


bool Queue::is_empty(int* arr)
{
	if (front == rear)
	{
		return true;
	}
	else
		return false;
}

bool Queue::is_full(int* arr)
{
	if (front==(rear+1)%size)
	{

		return true;
	}
	else return false;
}

void Queue::enqueue(int* arr, int n)
{


	
	if (is_full(arr) == true)
	{
		cout << "Queue is full" << endl;
	}
	else {
		
		rear = (rear + 1) % size;
		arr[rear] = n;
		cout << "Enqueue " << arr[rear] << endl;
		
		
		
		
		
		
	}

}

void Queue::dequeue(int* arr)
{
	if (is_empty(arr) == true)
	{
		cout << "There is no elements" << endl;
	}
	else {
		front = (front + 1) % size;
		cout << "Dequeue " << arr[front] << endl;
		arr[front] = 0;
		
	}
	




}

int main()
{
	Queue queue;
	int queue_arr[6] = { 0, };
	int sel;
	int n;

	while (1) {
		cout << "1. is_emtpy?" << endl;
		cout << "2. is_full?" << endl;
		cout << "3. Enqueue" << endl;
		cout << "4. Dequeue" << endl;
		cout << "5. Show" << endl;

		cout << "rear is " << queue.rear << endl;
		cout << "front is " << queue.front << endl;

		cin >> sel;

		switch (sel) {
		case 1:
			if (queue.is_empty(queue_arr) == true)
			{
				cout << "The queue is Empty " << endl;
			}
			break;
		case 2:
			if (queue.is_full(queue_arr) == true)
			{
				cout << "The stack is Full" << endl;
			}
			break;
		case 3:
			cin >> n;
			queue.enqueue(queue_arr, n);
			break;
		case 4:
			queue.dequeue(queue_arr);
			break;
		case 5:
			for (int i = 0; i < 6; i++)
			{
				cout << queue_arr[i] << " ";
			}
			cout << endl;
			break;
		}
	}

}
