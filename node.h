#include <iostream>
#include <vector>
#include<string>
#include<string.h>
using namespace std;
class Node {
public:
    int type;//1:stmt 2:expr 3:val 4:var 5:stmts 6: type
    string var_name;//var
    string value="";
    int  val_value;//val
    double val_double;//val double
     string char_value;//var char
    string node_name;//stmt expr
    string type_name;//type also needs mark
    vector<Node*> child;
};
   
