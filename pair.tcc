template <class KeyType, class DataType>
bool key_lessthan(const Pair<KeyType,DataType>& pair1, const Pair<KeyType,DataType>& pair2)
{
	return pair1.key < pair2.key;
}

//--------------Group 2 - data_lessthan()----
//A version of the less than (<) function for Pair
//objects, which compares the data of the Pairs.
//Similar to key_lessthan implemented above.
template <class KeyType, class DataType>
bool data_lessthan(const Pair<KeyType,DataType>& pair1, const Pair<KeyType,DataType>& pair2)
{
	return pair1.data < pair2.data;
}
//-----------------------------------------
