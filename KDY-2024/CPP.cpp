#include <iostream>
#include <windows.h>

#pragma comment(lib, "D:\������� 3 ���\�������� ���\��� ������\KDY-2024\CPP\LIB.lib")
#include "D:\������� 3 ���\�������� ���\��� ������\KDY-2024\LIB\ramework.h"


unsigned char Fact_$(unsigned char a_Fact_$)
{
	unsigned char res_Fact_$ = ; 
	For((unsigned char), (unsigned char)a_Fact_$, , [&](unsigned char el_$For1_Fact_$)
	{
		res_Fact_$ = mult((int)res_Fact_$, (int)el_$For1_Fact_$); 
		
	
		return false;
	}); 
	return (int)(res_Fact_$); 
	
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned char a_$l1_main_$ = Fact_$((unsigned char)); 
	if (a_$l1_main_$ == )
	{
		std::cout << "a ����� 6"; 
		std::cout << '\n'; 
		
	}
	else	
	{
		std::cout << "a �� ����� 6"; 
		std::cout << '\n'; 
		
	}
	auto round_$l1_main_$ = [&](float a_round_$l1_main_$)
	{
		unsigned char numa_round_$l1_main_$ = a_round_$l1_main_$; 
		if (minus((float)a_round_$l1_main_$, (float)numa_round_$l1_main_$) > 0.5)
		{
			return sum((int)numa_round_$l1_main_$, (int))); 
			
		}
		return numa_round_$l1_main_$); 
		
	}; 
	float half_$l1_main_$ = round_$l1_main_$((float)78.67); 
	std::cout << "rounded half = " << half_$l1_main_$; 
	unsigned char x_$l1_main_$ = ; 
	unsigned char y_$l1_main_$ = ; 
	unsigned char xy_$l1_main_$ = x_$l1_main_$ | y_$l1_main_$; 
	unsigned char ab_$l1_main_$ = x_$l1_main_$ & y_$l1_main_$; 
	unsigned char cs_$l1_main_$ = x_$l1_main_$ ~ y_$l1_main_$; 
	char sm2_$l1_main_$ = 's'; 
	std::cout << "something" << sm2_$l1_main_$; 
	bool b_$l1_main_$ = false; =  ; 
	return (int)( ); 
	
}