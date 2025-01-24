#pragma once

#define WIN32_LEAN_AND_MEAN             // Исключите редко используемые компоненты из заголовков Windows
#include <functional>

int sum(unsigned char a, unsigned char b);
float sum(float a, float b);

int minus(unsigned char a, unsigned char b);
float minus(float a, float b);

int mult(unsigned char a, unsigned char b);
float mult(float a, float b);

int division(unsigned char a, unsigned char b);
float division(float a, float b);


void Switch(int start, int end, int step, std::function<bool(int)> foo);
void Switch(char start, char end, int step, std::function<bool(char)> foo);
void Switch(float start, float end, float step, std::function<bool(float)> foo);


//void For(int, int, int, std::function<bool(int)> foo);
//void For(char, char, int, std::function<bool(char)> foo);
//void For(float start, float end, float step, std::function<bool(float)> foo);