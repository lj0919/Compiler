int main()
{
	int k = 0;
	float * m =(float*) (&k);
	
	//float *n = &k;

	int *a = &k;
	char *b;
	// a=b; //Incorrect, cannot convert ‘char*’ to ‘int*’ in assignment (Error in C++, Warning in C)
	int **c = &a;
	// int ***d = &&a; //Incorrect'
	int ***e = &c;
	// int ***f = &a; //Incorrect, cannot convert ‘int**’ to ‘int***’ in initialization  (Error in C++, Warning in C)'
	***e = 1; // k = 1
	
	int i = 2, j = 1;
	int *l = &i;
	l++;
	*l = 3; 
}
