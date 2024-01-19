#include <iostream>

class phone
{
	private:
		int a[10];
	public:
		void addContect(int i);
};

int main(void)
{
	phone a;

	a.addContect(8);

}

void	phone::addContect(int i)
{
	int	j;

	j = 0;
	while (j <= i)
	{
		a[j] = 1 + j;
		std::cout<<a[j]<<std::endl;
		j++;
	}
}