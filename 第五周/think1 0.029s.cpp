#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

int main()
{
	clock_t start = clock();

	int ID, price;
	FILE *fp = fopen("bigdata.txt", "r");
	while (~fscanf(fp, "%d %d", &ID, &price))
	{
		if (price == 9856)
			printf("price = %d\n", ID);
	}
	fclose(fp);

	clock_t end = clock() - start;
	printf("True time: %fs\n", (float)end/CLOCKS_PER_SEC);
	return 0;
}

