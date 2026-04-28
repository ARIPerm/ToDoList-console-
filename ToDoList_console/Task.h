#pragma once
#include <string>

class Task
{
public:
	Task(std::string);

	static int count;

	std::string getText();
	void editText(std::string);

	void setDone(bool);
	bool getDone();

	int getId();

private:
	int _id;
	bool _isDone;
	std::string _text;
};

