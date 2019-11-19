#include <iostream>
#include <cstring>
using namespace std;

class Date
{
private:
    char date[25];
public:
    Date();
    Date(char *_date);
    Date(Date &__date);
    ~Date(){};
    void Showd();
};

Date::Date()
{
    strcpy(date,"1998/10/5");
}

Date::Date(char* _date)
{
    strcpy(date,_date);
}

Date::Date(Date &__date)
{
    strcpy(date,__date.date);
}

void Date::Showd()
{
    cout << "生日日期为:" << date<<endl<<endl;
}


class Student
{
private:
    Date d;
    char name[25],number[20],sex[10];
public:
    Student();
    Student(Date _d1,char* _name,char* _number,char* _sex);
    Student(Student &s);
    ~Student(){};
    void Shows();
};

Student::Student (Date _d, char* _name, char* _number, char* _sex) : d(_d)
{
    strcpy(name,_name);
    strcpy(number,_number);
    strcpy(sex,_sex);
}

Student::Student(Student &s) : d(s.d)

{
    strcpy(name,s.name);
    strcpy(number,s.number);
    strcpy(sex,s.sex);
}

void Student::Shows()
{
    cout << "姓名:" << name << endl;
	cout << "学号:" << number << endl;
	cout << "性别:" << sex << endl;
	d.Showd();
}

int main()
{
    Date d1,d2("1997/08/08");
    Student s1(d1,"Alice","201705120223","Female");
    Student s2(d2,"Bob","201815420201","Male");
    Student s3(s1);

    s1.Shows();
    s2.Shows();
    s3.Shows();

    return 0;

}
