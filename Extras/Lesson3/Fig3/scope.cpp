/*
 * scope.cpp
 *
 *  Created on: Jun 12, 2020
 *      Author: student
 */

#include <iostream>

struct Int{
	Int(int value):m_value(value){
		std::cout << "Int(" << m_value <<") @" << this << " - intCon\n";
	};
	Int():m_value(0){
		std::cout << "Int(" << m_value <<") @" << this << " - DefCon\n";
	};
	~Int(){
		std::cout << "~Int() @" << this << "\n";
	};
	Int(const Int &rhs):m_value(rhs.m_value){
		std::cout << "Int(" << m_value <<") @" << this << " - DCopyCon\n";
	};
	int m_value;
};
//Int add(const Int &a,const Int &b){
Int add( Int a, Int b){
	return a.m_value+b.m_value;
}
Int subtract(Int a, Int b){
	return a.m_value-b.m_value;
}
void calculate(){
	Int a{25};
	Int b{50};
	{
		Int c = add(a,b);
		Int d = subtract(a,b);
	}
	Int *e = new Int(add(subtract(a,b),a));
}
 int main(){
	 calculate();
 }

