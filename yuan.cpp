#include <iostream>
#include <cstring>

using namespace std;



class CheckedPtr
{

public:

	CheckedPtr(int* b, int* e) : beg(b), end(e), curr(b) {  }

	CheckedPtr& operator ++() // prefix ++
	{
		++curr;
		return *this;
	}

	CheckedPtr& operator --() // prefix --
	{
		--curr;
		return *this;
	}
	CheckedPtr   operator ++(int)// postfix ++
	{
		++* this;
		return *this;
	}

	CheckedPtr   operator --(int)// postfix --
	{
		--* this;
		return *this;
	}

	int* GetBeg()
	{
		return beg;
	}

	int* GetEnd()
	{
		return end;
	}

	int* GetCurr()
	{
		return curr;
	}

private:

	int* beg;  // pointer to beginning of the array

	int* end;  // one past the end of the array

	int* curr; // current position within the array

};

int main() 
{

	int n;

	cin >> n;

	int* array = new int[n];

	for (int i = 0; i < n; i++)

		cin >> array[i];

	CheckedPtr cp(array, array + n);

	for (; cp.GetCurr() < cp.GetEnd(); cp++)

		cout << *cp.GetCurr() << " ";

	cout << endl;

	for (--cp; cp.GetCurr() > cp.GetBeg(); cp--)

		cout << *cp.GetCurr() << " ";

	cout << *cp.GetCurr() << endl;

	delete[] array;

	return 0;

}