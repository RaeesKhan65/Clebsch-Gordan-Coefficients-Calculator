#include "CGcalc.h"
#include <iostream> 
#include <cmath>

CGcalc::CGcalc(){}

CGcalc::~CGcalc(){}

bool CGcalc::wigner_eckart_check(int j, int m,int j1,int m1,int j2,int m2)
{

if(std::abs(j1 - j2) <= j <= j1+j2 && m == m1+m2) return true;

return false;
}

double CGcalc::get_answer(int j, int m,int j1,int m1,int j2,int m2)
{
std::cout << j1 << std::endl;
std::cout << j2 << std::endl;
std::cout << j1-j2<<std::endl;
std::cout << std::abs(j1 - j2)<< std::endl;
if(!this->wigner_eckart_check(j,m,j1,m1,j2,m2))
{answer = 0; return answer;}
else answer = 1;

return answer;
}







