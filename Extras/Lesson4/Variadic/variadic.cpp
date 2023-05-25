/*
 * variadic.cpp
 *
 *  Created on: Jun 16, 2020
 *      Author: student
 */

#include <iostream>
#include <string>
template<typename T, typename... Args>
T summer(T first, Args... args){
	if constexpr(sizeof...(args) >0 )
			return first + summer(args...);
	else
		return first;
}
int main(){
	std::cout << "\n\n------ Variadic Templates ------\n";
	auto sum = summer(1,3,5,7,9,11);
	std::cout << "sum = " << sum << "\n";
	std::string s1{"ab"};
	std::string s2{"cd"};
	std::string s3{"ef"};
	std::string strsum = summer(s1,s2,s3);
	std::cout << "strsum = " << strsum << "\n";
	std::cout << "Complete.\n";
	return 0;
}

