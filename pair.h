#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

template <class KeyType, class DataType> class Pair {
	public:
		KeyType key;
		DataType data;
		Pair(KeyType in1, DataType in2) : key(in1),data(in2){};

		friend ostream& operator<<(ostream& out, const Pair& p)
		{
			out<<p.key<<" : "<<p.data;
			return out;
		};
};

template <class KeyType, class DataType>
bool key_lessthan(const Pair<KeyType,DataType>& pair1, const Pair<KeyType,DataType>& pair2);

template <class KeyType, class DataType>
bool data_lessthan(const Pair<KeyType,DataType>& pair1, const Pair<KeyType,DataType>& pair2);

#include "pair.tcc"
