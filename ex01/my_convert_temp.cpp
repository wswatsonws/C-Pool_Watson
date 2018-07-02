#include <iomanip>
#include <iostream>

void	calculate_celsius(float temp)
{
	float result;
	result = 9.0 / 5.0 * temp + 32;
	std::cout.precision(3);
	std::cout << std::setw(16) << std::fixed << result << std::setw(16) << "Fahrenheit" << std::endl;
}

void	calculate_fahrenheit(float temp)
{
	float result;
	result = 5.0 / 9.0 * (temp - 32);
	std::cout.precision(3);
	std::cout << std::setw(16) << std::fixed << result << std::setw(16) << "Celsius" << std::endl;
}

int main()
{
	std::string temp_type;
	float temp;
	temp = 0;
	std::cin >> temp >> temp_type;
	if(temp_type == "Celsius")
		calculate_celsius(temp);
	if(temp_type == "Fahrenheit")
		calculate_fahrenheit(temp);
	return 0;
}
