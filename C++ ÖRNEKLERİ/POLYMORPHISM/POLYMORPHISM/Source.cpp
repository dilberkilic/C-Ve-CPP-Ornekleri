#include <iostream>
#include <stdlib.h>
using namespace std;

void func(int a){}

void func(int a, int b) {}

void func(int a, double b) {}

void func() {}

//int func(){}

//void func(int b,int a){} yerini deðiþtirmenin bir faydasý yok.

void func(int a,int b,int c){}

int main()
{
	func(5);
	func(5, 6);
	func(5, 5.6);

	system("pause");
	return 0;
}