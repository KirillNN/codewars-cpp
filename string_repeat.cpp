#include "string_repeat.h"

string repeat_str(size_t repeat, const string& str) {
	string result = "";
	while (repeat)
	{
		result += str;
		repeat--;
	}
	return result;
}