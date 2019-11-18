#include <iostream>
#include <cstring>

using namespace std;

class Dianping
{
private:
    static int num;
    static float sum;
    float price;
    char consumer[20];
public:
    Dianping();
    Dianping(float,char *);
    Dianping(Dianping &_p);
    ~Dianping();
    void Display();
    void Showaverage();
};

int Dianping::num =0;
float Dianping::sum =0.0;

Dianping::Dianping()
{
    price = 0;
    strcpy(consumer,"无人");
}

Dianping::Dianping(float _price, char *_consumer)
{
    price = _price;
	strcpy(consumer, _consumer);
	++num;
	sum += price;
}

Dianping::Dianping(Dianping &_p)
{
    price = _p.price;
	strcpy(consumer, _p.consumer);
	++num;
	sum += price;
}

Dianping::~Dianping(){}

void Dianping::Display()
{
    cout << "消费者: " << consumer << endl;
	cout << "消费价格: " << price << endl;
}

void Dianping::Showaverage()
{
    if (num == 0){
		cout << "暂无人消费" << endl;
		return;
	}
	cout << "消费均价: " << sum / num << endl;
}

int main()
{
    Dianping c1;
    c1.Display();
    c1.Showaverage();
    Dianping c2(9.50,"Alice");
    c2.Display();
    c2.Showaverage();
    Dianping c3(17.50,"Bob");
    c3.Display();
    c3.Showaverage();
    Dianping c4(c2);
    c4.Display();
    c4.Showaverage();
    Dianping c5(150.50,"John");
    c5.Display();
    c5.Showaverage();

    return 0;


}

