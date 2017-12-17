int func1(int, int);
int func1(int a, int);
int func1(int, int b);
int func1(int a, int b);
int func1(int = 1, int = 2);

//int func1(int a = 1, int b = 2);

int func1(int a, int b)
{
	//int a;
	
	return a + b;
}

int func2(int)
{
	return func2(func2(0));
}

int main()
{
	func1(1,1);
	func1(1.1, 1.1);
	func1('a', 'a');
	func1(1,1.1);
	func2(0);
}

