#include "value.h"

string drawLine(int num) {
	if (num <= 0)
		return "";

	string line{};

	for (int i = 0; i < num; ++i)
		line.append("=");

	return line;
}

int drawTitle(string title) {
	int line_size(TITLE_SIZE - title.length());

	string front_line{};
	string back_line{};

	back_line.append(" ");

	for (int i = 0; i < line_size / 2 - 1; ++i) {
		front_line.append("=");
		back_line.append("=");
	}

	front_line.append(" ");

	if (line_size & 1)
		back_line.append("=");

	cout << front_line << title << back_line << endl;

	return front_line.length();
}

int drawOptions(string options, ...)
{
	va_list option_list;
	va_start(option_list, options);

	return 0;
}
