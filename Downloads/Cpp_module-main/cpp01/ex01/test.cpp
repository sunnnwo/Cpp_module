#include <iostream>
#include <sstream>
class Test
{
	private:
		std::string name;
	public:
		void setNumber(std::string name);
		void nameprint(void);
};

void Test::nameprint(void)
{
	std::cout<< this->name<<std::endl;
}
void Test::setNumber(std::string name)
{
	this -> name = name;
}

int main (void)
{
	Test abc[3];
	std::stringstream ss;

	ss << 2;
	abc[2].setNumber("kim" + ss.str());
	abc[2].nameprint();
	ss.str(std::string());
	std::string re = ss.str();
	std::cout<<re<<std::endl;
}