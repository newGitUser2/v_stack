#include "stack.hpp"
#include <iostream>

int main(){

	Stack s(3);
        std::cout << "Size is " << s.get_size() << '\n';
        std::cout << "m_index is " << s.get_mIndex() << '\n';
        std::cout << "In stack added 12. Elements of stack: ";
        s.push(12);
        s.print();
        std::cout << "m_index is " << s.get_mIndex() << '\n';
        std::cout << "********\n";
        std::cout << "In stack added 13. Elements of stack: ";
        s.push(13);

        s.print();
        s.push(14);
	s.print();
	if(s.is_full())
                std::cout << "The stack is full\n";
        else
                std::cout << "The stack is not full\n";

        s.push(15);
        s.print();
        s.push(16);
        s.print();
        s.push(17);
	s.print();
        std::cout << "m_index is " << s.get_mIndex() << '\n';
        std::cout << "********\n";
        std::cout << "In stack added 18. Elements of stack: ";
	s.push(18);
        s.print();
        std::cout << "m_index is " << s.get_mIndex() << '\n';

//      s.push(16);
        std::cout << "Size is " << s.get_size() << '\n';
        s.print();
        std::cout << "Last element is " << s.top() << '\n';
        s.pop();
	//Sometimes when an item is added, <garbage> is added
	std::cout << "Elements of our new array: ";
        s.print();
        std::cout << "m_index is " << s.get_mIndex() << '\n';

        return 0;

}
