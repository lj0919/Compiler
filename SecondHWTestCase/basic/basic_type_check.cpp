int main()
{
	int a, b, c;
	char d, e, f;
	float g, h, i;
	double j, k, l;
	
	/* Type Check | Grammer */
	
	1 << a; // P
	1 << d; // P
	1 << g; // F
	1 << j; // F
	
	g << 1; // F
	j << 1; // F

	a & b; // P
	a & d; // P
	d & e; // P

	a & g; // F
	g & h; // F

	a ^ b; // F

	!g; // P	

	a = while(0) 1; // F
	
	for(int a; if(a == 1); 0; ) {} // F
	
	a = {{{{1}}}};
	
	a++ = b; // Rvalue
	++a = b;

	a+++b; // P
	a+-+b; // P
	a--+b; // P
	
	++a++b; // F
	
	+++++a; // F
	++++a; // P
	+++a; // F
	++a; // P
	+a; // P
	a; // P
	a+; // F
	a++; // P
	a+++; // F
	a++++; // F
	a+++++; // F
	
	-----a;
	----a;
	---a;
	--a;
	-a;
	a;
	a-;
	a--;
	a---;
	a----;
	a-----;
	//Seems same as below
	
	a+++b; // P
	a++b; // F
	a+b; // P
	++++a = b; // P
	
	
	(a, b, c, e, f, g) =
	(a, b, c, e, f, g) =
	(a, b, c, e, f, g) =
	(a, b, c, e, f, g) =
	(a, b, c, e, f, g) =
	(a, b, c, e, f, g); // P
		
	(++a, b++, ++c) = (++a, b++, ++c);
	
	

}
