#include <iostream>
#include <cstring>
using namespace std;

class Date
{
private:
	char s[20];

public:
	Date ();
	Date (char* _s);
	Date (Date& _d);
	~Date ();

	void Showd ();
};

Date::Date ()
{
	strcpy(s, "2000/5/10");
}

Date::Date (char* _s)
{
	strcpy(s, _s);
}

Date::Date (Date &_d)
{
	strcpy(s, _d.s);
}

Date::~Date ()
{
}

void Date::Showd ()
{
	cout<<"出生日期为:"<<s<<endl;
}

class Student
{
private:
	Date d;
	char name[20], number[20], gender;

public:
	Student (Date _d1, char* _na, char* _num, char _g);
	Student (Student& _s);
	~Student ();

	void Shows();
};

Student::Student (Date _d, char* _na, char* _num, char _g) : d(_d)
{
	strcpy(name, _na);
	strcpy(number, _num);
	gender = _g;
}

Student::Student (Student& s) : d(s.d)
{
	strcpy(name, s.name);
	strcpy(number, s.number);
	gender = s.gender;
}

Student::~Student ()
{
}

void Student::Shows ()
{
	cout<<"姓名:"<<name<<endl;
	cout<<"学号:"<<number<<endl;
	cout<<"性别:"<<gender<<endl;
	d.Showd();
}

int main()
{
	Date d1, d2("1999/10/29");
	Student s1(d1, "Bob", "123456", 'm');
	Student s2(d2, "Mary", "0012345", 'f');
	Student s3(s1);

	s1.Shows();
	cout<<endl;
	s2.Shows();
	cout<<endl;
	s3.Shows();

	return 0;
}
