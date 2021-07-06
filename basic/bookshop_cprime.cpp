#include<iostream>
#include"Sales_item.h"
using namespace std;

int main()
{
	Sales_item total;

	cout << "Please input the bookNo units_sold price:" << endl;
	if (cin >> total)
	{
		int cnt = 1;
        Sales_item trans;
		
		while (cin >> trans)
		{
			if (trans.isbn() == total.isbn())
			{
				total += trans;
				++cnt;
			}
			else
			{
				cout << total.isbn() << " occurs "
					<< cnt << " times" << endl;
				total = trans;
				cnt = 1;
			}
		}
		cout << total.isbn() << " occurs "
			<< cnt << " times" << endl;
	}
	else
		cerr << "enter error!";

	return 0;
}