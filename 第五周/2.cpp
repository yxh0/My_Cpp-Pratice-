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
    strcpy(name,"焦糖玛奇朵(大杯)");
    strcpy(type,"手工调制浓缩咖啡");
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
    cout << "商品名称：" << name <<endl;
    cout << "商品类型：" << type <<endl;
    cout << "商品价格:￥" << price <<endl<<endl;
}

void Starbucks::Num()
{
 cout <<"奶茶店销售奶茶总杯数:" << num <<endl;
}

void Starbucks::Sum()
{
cout << "奶茶店的日销售金额:￥" << sum << endl;
}

int main()
{
    Starbucks a1;
    Starbucks a2("摩卡可可碎片(大杯)","星冰乐",37);
    Starbucks a3(a1);
    Starbucks a4("冷萃冰咖啡(大杯)","冷萃咖啡",35);
    Starbucks a5("橘香茉吉托(大杯)","果茶",38);
    Starbucks a6("醋意桃桃(大杯)","果茶",38);
    Starbucks a7(a2);
    Starbucks a8(a4);
    Starbucks a9("覆盆子星冰乐(大杯)","星冰乐",37);

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

