// Devin Checa
using namespace std;
#include <iostream>
#include "test.h"
namespace first_space
{
	void from()
	{
		cout << "from first" << endl;
	}
	test first;
}
using namespace first_space;
namespace second_space
{
	void from()
	{
		cout << "from second" << endl;
	}
}
int main()
{
	cout << "test" << endl;
	from();
	from();
	first.print();
	return 0;
}
