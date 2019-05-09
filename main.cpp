#include <string>
#include "pair.h"
using namespace std;

void print_arrs(Pair<int, string> arr1[3], Pair<int, string> arr2[3], Pair<int, string> arr3[3])
{
	cout << arr1[0] << ", " << arr1[1] << ", " <<arr1[2] <<endl;
	cout << arr2[0] << ", " << arr2[1] << ", " <<arr2[2] <<endl;
	cout << arr3[0] << ", " << arr3[1] << ", " <<arr3[2] <<endl;
}

int main() {

	Pair<int, string> arr1[3] = {Pair<int, string>(1, "a"), Pair<int, string>(2, "b"), Pair<int, string>(3, "c")};
	Pair<int, string> arr2[3] = {Pair<int, string>(1, "c"), Pair<int, string>(2, "b"), Pair<int, string>(3, "a")};
	Pair<int, string> arr3[3] = {Pair<int, string>(100, "test"), Pair<int, string>(-193, "negative"), Pair<int, string>(1e9, "big")};

	cout <<"Initial values" << endl;
	print_arrs(arr1, arr2, arr3);

	//decltype (&key_lessthan<int, string>) key_sorter = &key_lessthan<int, string>;
	//decltype (&data_lessthan<int, string>) da	ta_sorter = &data_lessthan<int, string>;

	auto key_sorter = [] (const Pair<KeyType,DataType>& pair1, const Pair<KeyType,DataType>& pair2)


	//sort all by key
	sort(arr1, arr1+3, key_sorter);
	sort(arr2, arr2+3, key_sorter);
	sort(arr3, arr3+3, key_sorter);

	cout <<"Sorted by key" << endl;
	print_arrs(arr1, arr2, arr3);

	//sort all by key
	sort(arr1, arr1+3, data_sorter);
	sort(arr2, arr2+3, data_sorter);
	sort(arr3, arr3+3, data_sorter);

	cout <<"Sorted by value" << endl;
	print_arrs(arr1, arr2, arr3);
	
	return 0;
}
