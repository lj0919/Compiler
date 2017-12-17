void func(int args);              // Correct
void func1(int args[]);  // Correct
void func2(int args[5]); // Correct
// void func3(int args[][]); //Incorrect'
void func4(int args[][4]); // Correct
// void func5(int args[4][]); //Incorrect'
void func6(int args[4][4]); // Correct

int main()
{
  int a0 = 0;
  func(a0); // Correct
  char a1 = 0;
  func(a1);                      // Correct args = 0
  int a3[] = {0, 1, 2, 3, 4, 5}; // Correct, sizeof(a3)=6*sizeof(int)
  func1(a3);                     // Correct
  func2(a3);                     // Correct, No warning even we specify the number 5
  char a4[] = {0, 1, 2, 3, 4};
  // func1(a4); //Incorrect, char[] cannot convert to int[]' func2(a4); // Incorrect, the same
  int a8[][3] = {{1, 1}, {1, 1}}; // Correct, sizeof(a) = 6*sizeof(int), a8[1][2]=0, a8[2][2] 可以访问 'undefined value'
  int a9[3][3] = {{1, 1}, {1, 1}}; // Correct, sizeof(a) = 9*sizeof(int), a8[2][2] = 0; a8[3][2]可以访问'undefined
                                   // value'
  // func1(a8); //Incorrect, cannot convert ‘int (*)[3]’ to ‘int*’ (Error in C++, Warning in C)' 'func4(a8); //Incorrect, cannot convert ‘int (*)[3]’ to ‘int (*)[4]’ (Error in C++, Warning in C)' 
	int a10[5][4] = {{1, 1}, {1, 1}};   // Correct
  func2(a10[0]);                  // Correct
  func4(a10);                     // Correct
  func6(a10);                     // Correct
  char a11[4][4] = {{0, 0}, {0, 0}};
  // func6(a11); //Incorrect, cannot convert ‘char (*)[4]’ to ‘int (*)[4]’ (Error in C++, Warning in C)'
}
