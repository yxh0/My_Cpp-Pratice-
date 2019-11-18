#include <iostream>
#include <cstring>

using namespace std;

class Starbucks
{
private:
    static int num,sum;
    char type[100],name[100];
    int price;
public:
    Starbucks();
    Starbucks(char* _name,char* _type,int _price);
    Starbucks(Starbucks& a);
    ~Starbucks();
    void Display();
    static void Num();
    static void Sum();
};

int Starbucks::num = 0;
int Starbucks::sum = 0;

Starbucks::Starbucks()
{
    strcpy(name,"���������(��)");
    strcpy(type,"�ֹ�����Ũ������");
    price = 36;
    num++;
    sum += price;

}

Starbucks::Starbucks(char* _name,char* _type,int _price)
{
    strcpy(name,_name);
    strcpy(type,_type);
    price = _price;
    num++;
    sum += price;
}

Starbucks::Starbucks(Starbucks& a)
{
    strcpy(name,a.name);
    strcpy(type,a.type);
    price = a.price;

    num++;
    sum += price;

}

Starbucks::~Starbucks()
{

}


void Starbucks::Display()
{
    cout << "��Ʒ���ƣ�" << name <<endl;
    cout << "��Ʒ���ͣ�" << type <<endl;
    cout << "��Ʒ�۸�:��" << price <<endl<<endl;
}

void Starbucks::Num()
{
 cout <<"�̲�������̲��ܱ���:" << num <<endl;
}

void Starbucks::Sum()
{
cout << "�̲��������۽��:��" << sum << endl;
}

int main()
{
    Starbucks a1;
    Starbucks a2("Ħ���ɿ���Ƭ(��)","�Ǳ���",37);
    Starbucks a3(a1);
    Starbucks a4("���ͱ�����(��)","���Ϳ���",35);
    Starbucks a5("�����Լ���(��)","����",38);
    Starbucks a6("��������(��)","����",38);
    Starbucks a7(a2);
    Starbucks a8(a4);
    Starbucks a9("�������Ǳ���(��)","�Ǳ���",37);

    a1.Display();
    a2.Display();
    a3.Display();
    a4.Display();
    a5.Display();
    a6.Display();
    a7.Display();
    a8.Display();
    a9.Display();

    Starbucks::Num();
    Starbucks::Sum();

}

