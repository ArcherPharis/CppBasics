#include <vector>
#include <iostream>
#include <string>
#include "LinkedList.h"





int main()
{
	LinkedList<int> list;
	for (int i = 0; i < 3; ++i)
	{
		list.insert(0, i);
	}
	std::cout << list.get(0) << std::endl;
	std::cout << list[1] << std::endl;
	std::cout << list[2] << std::endl;
	list.remove(1);
	std::cout << "this should be third node's value, now at the second position: " << list[1] << '\n';
	
	

	return 0;
}
