#include <iostream>
#include <cstring>
#define MAX 100
using namespace std;

class Queue{
private:
	int array[MAX];
	int front;
	int rear;
public:
	Queue();
	Queue(Queue &_q);
	~Queue();
	void push(int x);
	bool pop();
	bool empty();
};
Queue::Queue(){
	front = rear = 0;
}
Queue::Queue(Queue &_q){
	front = _q.front;
	rear = _q.rear;
	int i;
	for (i = front; i != rear;
		i = (i + 1)%MAX)
		array[i] = _q.array[i];
}
Queue::~Queue(){}
bool Queue::empty(){
	if (front == rear)
		return true;
	return false;
}
void Queue::push(int x){
	if (front == (rear + 1)%MAX){
		cout << "��������,�����ʧ��!" << endl;
		return;
	}
	cout << x << "�������." << endl;
	array[rear] = x;
	rear = (rear + 1)%MAX;
}
bool Queue::pop(){
	if (front == rear){
		cout << "����Ϊ��,������ʧ��!" << endl;
		return false;
	}
	cout << array[front] << "�ѳ�����." << endl;
	front = (front + 1)%MAX;
	return true;
}
int main()
{
	Queue q1;
	q1.empty()? cout << "����Ϊ��." << endl: cout << "���в�Ϊ��" << endl;
	q1.push(4);
	q1.push(5);
	q1.empty()? cout << "����Ϊ��." << endl: cout << "���в�Ϊ��" << endl;
	q1.pop();
	q1.pop();
	q1.empty()? cout << "����Ϊ��." << endl: cout << "���в�Ϊ��" << endl;
	q1.pop();
	q1.empty()? cout << "����Ϊ��." << endl: cout << "���в�Ϊ��" << endl;
	q1.push(6);
	Queue q2(q1);
	cout << "�����Ѹ���." << endl;
	q2.empty()? cout << "����Ϊ��." << endl: cout << "���в�Ϊ��" << endl;
	q2.push(5);
	q2.push(4);
	q2.pop();
	q2.pop();
	q2.pop();
	q2.pop();
	q2.empty()? cout << "����Ϊ��." << endl: cout << "���в�Ϊ��" << endl;
	return 0;
}
