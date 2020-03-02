#include <functional>
#include <iostream>
#include <chrono>

int main()
{
	std::chrono::milliseconds mill(250);
	std::reference_wrapper<std::chrono::milliseconds> ref = std::ref(mill);
	std::chrono::nanoseconds nano = std::chrono::duration_cast<std::chrono::nanoseconds, long long, std::milli>(ref);

	//std::chrono::nanoseconds nano2 = std::ref(mill);

	//std::chrono::nanoseconds nano( std::ref(mill) );
	//func(mill);
	//auto &df = mill;
	//func(std::ref(mill));
	//std::ref(mill).operator std::chrono::milliseconds &
}