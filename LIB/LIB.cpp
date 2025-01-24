// LIB.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include <functional>
#include <cmath>
#include <iostream>
#include <conio.h>
#include <string>
#include <strstream>
#include <ctime>

int sum(int a, int b)
{
	int result = 0;

	__asm
	{
		push a;
		push b;
		pop eax;
		pop ebx;

		add eax, ebx;

		mov result, eax;
	}

	return result;
}

float sum(float a, float b)
{
	return a + b;
}

int minus(int a, int b)
{
	int result;

	__asm
	{
		push b;
		push a;
		pop eax;
		pop ebx;

		sub eax, ebx;

		mov result, eax;
	}

	return result;
}

float minus(float a, float b)
{
	return a - b;
}

int mult(int a, int b)
{
	int result;

	__asm
	{
		push b;
		push a;
		pop eax;
		pop ebx;

		imul eax, ebx;

		mov result, eax;
	}

	return result;
}

float mult(float a, float b)
{
	return a * b;
}

int division(int a, int b)
{
	int result;

	__asm
	{
		push b;
		push a;
		pop eax;
		pop ebx;

		push 0;
		pop edi;

		cmp b, edi;
		je isNull;

		idiv ebx;
		mov result, eax;
		jmp end;

	isNull:
		push INT_MAX;
		pop eax;

		mov result, eax;
		.
			end:

	}

	return result;
}

float division(float a, float b)
{
	return a / b;
}

void Switch(int a, int b, int c, std::function<void(int)> foo) {
	foo(a);
	foo(b);
	foo(c);
}

void Switch(char a, char b, char c, std::function<void(char)> foo) {
	foo(a);
	foo(b);
	foo(c);
}

void Switch(float a, float b, float c, std::function<void(float)> foo) {
	foo(a);
	foo(b);
	foo(c);
}

void For(int start, int end, int step, std::function<bool(int)> foo)
{
	step = abs(step);
	bool isBreak;
	if (start < end)
	{
		for (int i = start; i <= end; i += step)
		{
			isBreak = foo(i);

			if (isBreak) break;
		}
	}
	else
	{
		for (int i = start; i >= end; i -= step)
		{
			isBreak = foo(i);

			if (isBreak) break;
		}
	}
}

void For(float start, float end, float step, std::function<bool(float)> foo)
{
	step = abs(step);
	bool isBreak;
	if (start < end)
	{
		for (float i = start; i <= end; i += step)
		{
			isBreak = foo(i);

			if (isBreak) break;
		}
	}
	else
	{
		for (float i = start; i >= end; i -= step)
		{
			foo(i); isBreak = foo(i);

			if (isBreak) break;
		}
	}
}

void For(char start, char end, int step, std::function<bool(char)> foo)
{
	step = abs(step);
	bool isBreak;

	if (start < end)
	{
		for (char i = start; i <= end; i += step)
		{
			isBreak = foo(i);

			if (isBreak) break;
		}
	}
	else
	{
		for (char i = start; i >= end; i -= step)
		{
			isBreak = foo(i);

			if (isBreak) break;
		}
	}
}

/*
second is foo(x is symb, y is symb, z is symb) is symb
{
	result is symb;
	result => a;

	action is foo(value is symb) {
		switch (value) {
		case 'a':
			result = 'b';
			break;
		case 'x':
			result = 'y';
			break;
		case 'z':
			result = 'm';
			break;
		default:
			result = 'v';
			break;
		}
	}


	Switch(x, y, 'z', action);

	return result;
}
}



Fact is foo(a is num) is num
{
	res => 1;

	For(1, a, 1, el => {
		res = mult(res, el);
	});

	return res;
}


main
{
	a => Fact(3);

	(a == 6) ?
	} : {
		`a          6`
	}
	{
		`a       6`

	@import round;

	half is float = round(78.67);

	console(`rounded half = `, half);

	x=> 1;
	y=>2;
	xy=>x|y;
	ab=>x&y;

	sm2=>'s';
	console(`something`, sm2);



}


*/