#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 10;
class Array
{
private:
	double array[SIZE],sum,max_num,min_num;
	int  num;
public:
	Array();
	Array(double* _array);
	Array(Array& _A);
	~Array() {};
	void display();
	double GetMax();
	double GetMin();
	int GetMaxP();
	int GetMinP();
	double GetSum();
	int GetNum();
	double GetAverage();
};

Array::Array()
{
	int i;
	num =0;
	sum = 0.0;
	min_num = max_num = array[0] = 1.0;
	for ( i = 1; i < SIZE; i++)
	{
		array[i] = i + 1.0;
		if (array[i] > max_num)
			max_num = array[i];
	
		if (array[i] < min_num)
		{
			min_num = array[i];
		}
		num = num++;
		sum += array[i];
	}
}

Array::Array(double* _array)
{
	int i;
	num = 0;
	sum = 0.0;
	min_num = max_num = array[0] = _array[0];
	for (i = 1; i < SIZE; i++)
	{
		array[i] = _array[i];
		if (array[i] > max_num)
			max_num = array[i];

		if (array[i] < min_num)
		{
			min_num = array[i];
		}
		num = num++;
		sum += array[i];
	}

}

Array::Array(Array& _A)
{
	int i;
	num = 0;
	sum = 0.0;
	min_num = max_num = array[0] = _A.array[0];
	for (i = 1; i < SIZE; i++)
	{
		array[i] =_A.array[i];

		if (array[i] > max_num)
			max_num = array[i];

		if (array[i] < min_num)
		{
			min_num = array[i];
		}
		num = num++;
		sum += array[i];
	}
}

double Array::GetMax()
{
	return max_num;
}

double Array::GetMin()
{
	return min_num;
}

int Array::GetMaxP()
{
	int i;
	for ( i = 0; i < SIZE; i++)
	{
		if (array[i] == max_num)
		{
			return i + 1;
		}
	}
}

int Array::GetMinP()
{
	int i;
	for (i = 0; i < SIZE; i++)
	{
		if (array[i] == min_num)
		{
			return i + 1;
		}
	}
}

int Array::GetNum()
{
	return num;
}

double Array::GetAverage()
{
	return sum * 1.0 / num ;
}



double Array::GetSum()
{
	return sum;
}
void Array::display()
{
	int i;
	for ( i = 0; i < SIZE; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

int main()
{
	double b[SIZE] = {8.0,2.3,15.6,7.9,12.02,10,2.8,3.2,1.35,6};
	Array a1;
	Array a2(b);
	a1.display();
	cout << a1.GetMax()<< endl;
	cout << a1.GetMaxP() << endl;
	cout << a1.GetMin() << endl;
	cout << a1.GetMinP() << endl;
	cout << a1.GetAverage() << endl << endl;

	a2.display();
	cout << a2.GetMax() << endl;
	cout << a2.GetMaxP() << endl;
	cout << a2.GetMin() << endl;
	cout << a2.GetMinP() << endl;
	cout << a2.GetAverage() << endl;
	return 0;
}