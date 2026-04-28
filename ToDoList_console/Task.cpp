#include "Task.h"

Task::Task(std::string text)
{
	_id = count;
	count++;
	_text = text;
	_isDone = false;
}

std::string Task::getText()
{
	return _text;
}

void Task::editText(std::string text)
{
	_text = text;
}

void Task::setDone(bool isDone)
{
	_isDone = isDone;
}

bool Task::getDone()
{
	return _isDone;
}

int Task::getId()
{
	return _id;
}
