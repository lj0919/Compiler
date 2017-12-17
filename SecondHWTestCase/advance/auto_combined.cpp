#include<iostream>
#include<typeinfo>
int main()
{
	int a;
	auto* b = &a;
 	//	auto c[] = {1,1,1};
	// Actually array of auto is forbiddened
	auto **pb = &b; // auto is translated as int

	auto *c = &b;	 // auto is translated as int *
	
	c = pb;
	//c = (auto)pb;

	int* q[9];
	auto r = q;	 // Type of r is int **
	//	std::cout<<typeid(r).name()<<std::endl; with c++filt as int** for r
	
	int s[5][10];
	auto* t = s; // t int(*)[10]
	//std::cout<<typeid(t).name()<<std::endl; //with c++filt as int(*)[10] for t
	auto u = &s; // u int(*)[5][10]
	//std::cout<<typeid(u).name()<<std::endl; //with c++filt as int(*)[5][10] for u
}
