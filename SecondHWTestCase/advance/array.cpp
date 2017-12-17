int main()
{
  int a0[2][2][2][2] = {{{{1, 1}, 1}, 1}, 1};
  int a1[2][2][2][2] = {{{1, 1}, 1}, 1};
  int a2[2][2][2][2] = {{1, 1}, 1};
  // int b0[2][2][2][2] = {{{1,1},1},{{{{1,1},1},1},1}};
  // int b1[2][2][2][2] = {{1,1},{1,{1,1}}};
  // int b2[2][2][2][2] = {1,{1,1}}; //F
  int a3[] = {0, 1, 2, 3, 4, 5}; // Correct, sizeof(a3)=6*sizeof(int)
  // int a5[][] = {{1,1},{1,1}}; //Incorrect,  multidimensional array must have bounds for all dimensions except the
  // first (Error both in C/C++)' int a6[][1] = {{1,1},{1,1}}; //Incorrect, too many initializers for ‘int [1]’   (Error
  // in C++, Warning in C)' int a7[1][2] = {{1,1},{1,1}}; //Incorrect, too many initializers for ‘int [1][2]’  (Error in
  // C++, Warning in C)'
  int a8[][3] = {{1, 1}, {1, 1}}; // Correct, sizeof(a) = 6*sizeof(int), a8[1][2]=0, a8[2][2] 可以访问 'undefined value'
  int a9[3][3] = {{1, 1}, {1, 1}}; // Correct, sizeof(a) = 9*sizeof(int), a8[2][2] = 0; a8[3][2]可以访问'undefined
	a0[1][1][1][1] = 'a';                                   // value'
	//a1[1][1][1] = {1,1};
}
