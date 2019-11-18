#include <iostream>
#include <cstring>

using namespace std;

class BookSale
{
private:
	static int num, sum;
	char no[120], name[120];
	int price;

public:
	BookSale ();
	BookSale (char* _name, char* _no, int _price);
	BookSale (BookSale& b);
	~BookSale ();

	void Display ();
	static void Num ();
	static void Sum ();
};

int BookSale::num = 0;
int BookSale::sum = 0;

BookSale::BookSale ()
{
	strcpy(name, "National Geographic");
	strcpy(no, "9781426306877");
	price = 480;

	num++;
	sum += price;
}
BookSale::BookSale (char* _name, char* _no, int _price)
{
	strcpy(name, _name);
	strcpy(no, _no);
	price = _price;

	num++;
	sum += price;
}

BookSale::BookSale (BookSale& b)
{
	strcpy(name, b.name);
	strcpy(no, b.no);
	price = b.price;


	num++;
	sum += price;
}
BookSale::~BookSale ()
{
}

void BookSale::Display()
{
    cout <<"书名: "<< name << endl;
    cout << "编号 ISBN." << no << endl;
    cout << "书本价格:NT$" << price << endl << endl;
}

void BookSale::Num()
{
    cout <<"售卖书本数量:" << num <<endl;  //卖了书的数目
}

void BookSale::Sum()
{
    cout << "书本总销售额:NT$" << sum << endl;
}
int main()
{
    BookSale b1;
    BookSale b2("Data Structure","9780486485829",1258);
    BookSale b3(b1);
    BookSale b4("MediaWiki: Wikipedia and Beyond","9780596554149",1127);
    BookSale b5(b2);

    b1.Display();
    b2.Display();
    b3.Display();
    b4.Display();
    b5.Display();

    BookSale::Num();
    BookSale::Sum();

    return 0;
}
