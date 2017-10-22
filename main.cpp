#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
const int SECOND = 1000;

int main()
{
	
	for (size_t i = 12; i > 0; i--)
	{
		cout << "\rTimer until takeoff: " << i << "  ";
		std::this_thread::sleep_for(std::chrono::milliseconds(SECOND));

	}
	
	for (size_t i = 0; i < 3; i++)
	{
		cout << "\rTAKEOFF !!                ";
		std::this_thread::sleep_for(std::chrono::milliseconds(SECOND));
		cout << "\r                           ";
		std::this_thread::sleep_for(std::chrono::milliseconds(SECOND));
	}
	return 0;
}