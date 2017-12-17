%{
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include<string>
#include<string.h>
#include "node.h"
#include <sstream>
#include"var_info.h"
#include<map>
using namespace std;
Node* node;
void yyerror(const char*);
extern int yylex();
void dfs(Node* node,int depth);
int sti(string s);
double stf(string s);
double toDouble(int i);
void printNode(Node* node,int indent);
string tostr(int a);
string tostr(double b);
string deal(Node* arg1,Node* arg2,int oparg);
map<string,var_info*> var_list;
var_info* get(string s);
#define YYSTYPE Node *
%}


%token					        END    0     "end of file"
%token              	  ID
%token				        	CHAR
%token					        VOID
%token                  INT
%token                  CHARS
%token					        SHORT
%token                  LONG
%token                  DOUBLE
%token					        FLOAT
%token                  SIGNED
%token                  UNSIGNED
%token                  LBRACE
%token                  WRITE
%token                  RBRACE
%token                  LBRACKET
%token                  RBRACKET
%token                  LPAREN
%token                  RPAREN
%token                  DOU
%token                  SQM
%token                  SEM
%token                  BOOL
%token                  STRUCT
%token                  UNION
%token                  ENUM
%token                  TYPEDEF
%token                  SIZEOF
%token                  AUTO
%token                  STATIC
%token                  REGISTER
%token                  EXTERN
%token                  CONST
%token                  VOLATILE
%token                  RETURN
%token                  CONTINUE
%token                  BREAK
%token                  GOTO
%token                  IF
%token                  ELSE
%token                  SWITCH
%token                  CASE
%token                  DEFAULT
%token                  FOR
%token                  DO
%token                  WHILE
%token                  CHARVAL
%token                  INTEGER
%token                  NUMBER
%token                  CLASS
%token                  PUBLIC
%token                  PRIVATE
%token                  PROTECTED
%token                  COLON
%token                  READ

%right ASSIGN 
%left  BITAND  XOR  BITOR  AND OR
%left  NE EQ
%left  RE RT LE LT
%left  RSHIFT LSHIFT
%left  PLUS MINUS
%left  MUL DIV MOD
%right BITNOT UMINUS UPLUS NOT TPLUS TMINUS
%right RPAREN RBRACE RBRACKET
%left  LPAREN LBRACE LBRACKET WRITE
%%

program
  : END
  | more_func END
  ;

more_func
  : func
  | more_func func
  ;

func
  : type ID LPAREN paramlist RPAREN SEM
  {

  }
  | type  ID LPAREN paramlist RPAREN  LBRACE stmts RBRACE
  {
     $$=new Node();
     $$->node_name="Start";
     $$->child.push_back($7);
     dfs($$,1);
  }
  |  ID LPAREN paramlist RPAREN  LBRACE stmts RBRACE
  {
     $$=new Node();
     $$->node_name="Start";
     $$->child.push_back($6);
     dfs($$,1);
  }
  | STRUCT ID LBRACE stmts RBRACE
  {

  }
  | CLASS ID LBRACE class_stmts RBRACE
  {

  }
  ;
class_stmts
  : class_stmt
  | class_stmt class_stmts
  |
  ;
class_stmt
  : PUBLIC COLON
  | PRIVATE COLON
  | PROTECTED COLON
  | stmts
  | func
  ;

paramlist
  : param
  | param DOU paramlist
  |
  ;
param
  : type ID
  | type LBRACKET RBRACKET ID
  | type MUL ID
  | type BITAND ID
  ;

type
  : VOID
  {
		$$=new Node();
	  $$->type=6;
    $$->node_name="TYPE   void";
  }
  | CHAR
  {
		$$=new Node();
    $$->type_name="char";
	  $$->type=6;
    $$->node_name="TYPE   char";
  }
  | SHORT
  {
		$$=new Node();
	  $$->type=6;
    $$->node_name="TYPE   short";
  }
  | INT
  {
		$$=new Node();
	  $$->type=6;
    $$->type_name="int";
    $$->node_name="TYPE   int";
  }
  | LONG
  {
		$$=new Node();
	  $$->type=6;
    $$->node_name="TYPE   long";
  }
  | FLOAT
  {
		$$=new Node();
	  $$->type=6;
    $$->type_name="float";
    $$->node_name="TYPE   float";
  }
  | DOUBLE
  {
		$$=new Node();
	  $$->type=6;
    $$->type_name="double";
    $$->node_name="TYPE   double";
  }
  | SIGNED
  {
		$$=new Node();
	  $$->type=6;
    $$->node_name="TYPE   signed";
  }
  | UNSIGNED
  {
		$$=new Node();
	  $$->type=6;
    $$->node_name="TYPE   unsigned";
  }
  | BOOL
  {
		$$=new Node();
	  $$->type=6;
    $$->type_name="bool";
    $$->node_name="TYPE   bool";
  }
  ;
stmts
  : stmt stmts
  {
    $$=new Node();
		$$->node_name="COMP_STMT";
    $$->type=1;
		$$->child.push_back($1);
    for(int i=0;i<$2->child.size();i++){
      $$->child.push_back($2->child[i]);
    }
  }
  | stmt
  {
    $$=new Node();
    $$->type=5;
    $$->child.push_back($1);
  }
  ;
stmt
  :	if_stmt {$$=$1;}
  |	while_stmt {$$=$1;}
  |	dowhile_stmt {$$=$1;}
  | for_stmt {$$=$1;}
  |	declare_stmt SEM {$$=$1;}
  |	assign_stmt SEM {$$=$1;}
  | LBRACE stmt RBRACE{$$=$2;}
  | LBRACE stmts RBRACE {$$=$2;}
  |	expr SEM {$$=$1;}
  |	SEM
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="STMT   EMPTY";
  }
  |
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="STMT   EMPTY";
  }
  |	LBRACE RBRACE
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="STMT   EMPTY";
  }
  | type ID LPAREN paramlist RPAREN SEM
  | ID LPAREN expr_list RPAREN SEM
  | jump_stmt SEM {$$=$1;}
  | write_stmt SEM{$$=$1;}
  | read_stmt SEM{$$=$1;}
  ;
write_stmt
  : WRITE LPAREN write_param RPAREN
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="STMT   WRITE";
    $$->child.clear();
    $$->child.push_back($3);
  }
  ;
  read_stmt
  : READ LPAREN read_param RPAREN
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="STMT   READ";
    $$->child.clear();
    $$->child.push_back($3);
  }
  ;
write_param
  : id_exp
	{
		$$=new Node();
		$$->type=2;
		$$->node_name="WRITE   PARAM";
    $$->child.clear();
    $$->child.push_back($1);
  }
	| write_param DOU id_exp
	{
		$$=new Node();
		$$->type=2;
		$$->node_name="WRITE   PARAM";
    $$->child.clear();
    for(int i=0;i<$1->child.size();i++){
      $$->child.push_back($1->child[i]);
    }
    $$->child.push_back($3);
	}
  ;
read_param
  : id_exp
	{
		$$=new Node();
		$$->type=2;
		$$->node_name="READ   PARAM";
    $$->child.clear();
    $$->child.push_back($1);
  }
	| read_param DOU id_exp
	{
		$$=new Node();
		$$->type=2;
		$$->node_name="READ   PARAM";
    $$->child.clear();
    for(int i=0;i<$1->child.size();i++){
      $$->child.push_back($1->child[i]);
    }
    $$->child.push_back($3);
	}
	;
if_stmt
  :	IF LPAREN  expr_stmt RPAREN stmt
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="STMT   IF";
    $$->child.clear();
    $3->node_name=$3->node_name+"   CONDITION";
    $$->child.push_back($3);
    node=new Node();
    node->type=1;
    node->node_name="STMT   null   IF  BRANCH";
    node->child.clear();
    node->child.push_back($5);
    $$->child.push_back(node);
  }
  |	IF LPAREN expr_stmt RPAREN stmt ELSE stmt
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="STMT   IF";
    $$->child.clear();
    $3->node_name=$3->node_name+"   CONDITION";
    $$->child.push_back($3);
    node=new Node();
    node->type=1;
    node->node_name="STMT   null   IF  BRANCH";
    node->child.clear();
    node->child.push_back($5);
    $$->child.push_back(node);
    node=new Node();
    node->type=1;
    node->node_name="STMT   null   ELSE  BRANCH";
    node->child.clear();
    node->child.push_back($7);
    $$->child.push_back(node);
  }
  ;
while_stmt
  :	WHILE LPAREN expr_stmt RPAREN stmt
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="STMT   WHILE";
    $3->node_name=$3->node_name+"   CONDITION";
    $$->child.clear();
    $$->child.push_back($3);
    $$->child.push_back($5);
  }
  ;
dowhile_stmt
  :	DO stmt WHILE LPAREN expr_stmt RPAREN
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="STMT   DO-WHILE";
    $$->child.clear();
    $$->child.push_back($2);
    $5->node_name=$5->node_name+"   CONDITION";
    $$->child.push_back($5);
  }
  ;
for_stmt
  :	FOR LPAREN expr_stmt SEM expr_stmt SEM expr_stmt RPAREN stmt
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="STMT   FOR";
    $$->child.clear();
    $3->node_name=$3->node_name+"   START";
    $$->child.push_back($3);
    $5->node_name=$5->node_name+"   CONDITION";
    $$->child.push_back($5);
    $7->node_name=$7->node_name+"   ITERATOR";
    $$->child.push_back($7);
    $$->child.push_back($9);
  }
  ;
expr_stmt
  :	expr  {$$=$1;}
  |
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   EMPTY";
  }
  | declare_stmt
  {
    $$=$1;
  }
  ;
declare_stmt
  :	type declare  declare_list
  {
    cout<<$2->child.size();
    $$=new Node();
		$$->node_name="STMT   DECLARE";
		$$->type=1;
    node=new Node();
    node->type=1;
    node->node_name="ARGS_LIST";
		$$->child.push_back($1);
		node->child.push_back($2);
    string tp=$1->type_name;
    var_info* vi=get($2->child[0]->var_name);
    if(vi!=NULL){
    vi->type=tp;
    var_list[$2->child[0]->var_name]=vi;
    $2->child[0]->type_name=tp;
    if($2->child.size()==2){
    vi=get($2->child[0]->var_name);
    vi->val=$2->child[1]->value;
    var_list[$2->child[0]->var_name]=vi;
    }
    else{
      cout<<$2->child.size();
       vi=get($2->child[0]->var_name);
    vi->val="";
    var_list[$2->child[0]->var_name]=vi;
    }
    }
    for(int i=0;i<$3->child.size();i++){
      node->child.push_back($3->child[i]);
      vi=get($3->child[i]->child[0]->var_name);
      if(vi!=NULL){
      vi->type=tp;
      var_list[$3->child[i]->child[0]->var_name]=vi;
      $3->child[i]->child[0]->type_name=tp;
      if($3->child[i]->child.size()==2){
      vi=get($3->child[i]->child[0]->var_name);
      vi->val=$3->child[i]->child[1]->value;
      var_list[$3->child[i]->child[0]->var_name]=vi;
      $3->child[i]->child[0]->value=$3->child[i]->child[1]->value;
      }
      else{
         vi=get($3->child[i]->child[0]->var_name);
      vi->val="";
      var_list[$3->child[i]->child[0]->var_name]=vi;
      }
      }
    }
    $$->child.push_back(node);
  }
  | type declare
  {
    $$=new Node();
		$$->node_name="STMT   DECLARE";
		$$->type=1;
    node=new Node();
    node->type=1;
    node->node_name="ARGS_LIST";
		$$->child.push_back($1);
		node->child.push_back($2);
    $$->child.push_back(node);
    var_info* vi=get($2->child[0]->var_name);
    if(vi!=NULL){
    vi->type=$1->type_name;
    var_list[$2->child[0]->var_name]=vi;
    }
    $2->child[0]->type_name=$1->type_name;
    if($2->child.size()==2){
    vi=get($2->child[0]->var_name);
    if(vi!=NULL){
    vi->val=$2->child[1]->value;
    var_list[$2->child[0]->var_name]=vi;
    $2->child[0]->value=$2->child[1]->value;
    }
    }
  }
  ;
declare
  :	id_exp ASSIGN expr
  {
    $$=new Node();
		$$->node_name="EXPR   DECLARE_ASSIGN";
		$$->type=2; 
		$$->child.push_back($1);
		$$->child.push_back($3);
   
  }
   | LPAREN id_exp RPAREN ASSIGN  expr 
  {
    $$=new Node();
		$$->node_name="EXPR   DECLARE_VAR";
		$$->type=2;
		$$->child.push_back($2);
    $$->child.push_back($5);
    var_info *vi=get($2->var_name);
    var_list.insert(make_pair($2->var_name,new var_info()));
  }
  | LPAREN id_exp RPAREN ASSIGN LPAREN expr RPAREN
  {
    $$=new Node();
		$$->node_name="EXPR   DECLARE_VAR";
		$$->type=2;
		$$->child.push_back($2);
    $$->child.push_back($6);
    var_info *vi=get($2->var_name);
    var_list.insert(make_pair($2->var_name,new var_info()));
  }
  |	id_exp
  {
    $$=new Node();
		$$->node_name="EXPR   DECLARE_VAR";
		$$->type=2;
		$$->child.push_back($1);
    var_info *vi=get($1->var_name);
    var_list.insert(make_pair($1->var_name,new var_info()));
  }
  | id_exp array_declare
  {
    $$=new Node();
		$$->node_name="EXPR   DECLARE_ARRAY";
		$$->type=2;
		$$->child.push_back($1);
    $$->child.push_back($2);
  }
  ;
array_declare
  : array_bracket
  {
    $$=$1;
  }
  ;
declare_list
  : DOU declare
  {
    $$=new Node();
    $$->node_name="DECLARE_LIST";
		$$->type=1;
		$$->child.push_back($2);
  }
  | DOU declare declare_list
  {
    $$=new Node();
    $$->node_name="DECLARE_LIST";
		$$->type=1;
		$$->child.push_back($2);
    for(int i=0;i<$3->child.size();i++){
      $$->child.push_back($3->child[i]);
    }
  }
  ;
assign_stmt
  :	ass_exp ASSIGN expr
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="STMT   ASSIGN";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    if($1->type_name=="expr_list"&&$3->type_name=="expr_list"){
      if($1->child.size()!=$3->child.size())
          yyerror("the number of arguments are not equal!");
       int z=$1->child.size();
      if($1->child[z-1]->type==4){
        var_info * vi=get($1->child[z-1]->var_name);
        if(vi!=NULL){
        $1->child[z-1]->value=$3->child[z-1]->value;
        vi->val=$3->child[z-1]->value;
        var_list[$1->child[z-1]->var_name]=vi;
        $$->value=$3->child[z-1]->value;
        //DOU stmt de value is the last
        }
      }
    }
    else if($1->type_name=="expr_list"&&$3->type_name=="expr_list"){
    }
    else{
    var_info * vi=get($1->var_name);
    if(vi!=NULL){
    $1->value=$3->value;
    vi->val=$3->value;
    var_list[$1->var_name]=vi;
    $$->value=$3->value;
    }
    }
  }
  | array_expr ASSIGN expr
  ;
ass_exp
  : ID
  {
    $$=new Node();
    $$->type=4;
    $$->var_name=yylval->var_name;
    var_info * vi=get($$->var_name);
    if(vi==NULL){
      yyerror("no declartion");
    }
    $$->type_name=vi->type;
    $$->node_name="VAR";
    $$->value=vi->val;
    $$->child.clear();
    $$->child.push_back($1);
  }
  | LPAREN expr_list RPAREN
  {
    $$=$2;
  }
  | factor{
    $$=$1;
  }
  ;
id_exp
  : ID
  {
    $$=new Node();
    $$->type=4;
    $$->var_name=yylval->var_name;
    $$->value="";
    var_info *vi=get($$->var_name);
    var_list.insert(make_pair($$->var_name,new var_info()));
    $$->node_name="VAR";
    $$->child.clear();
    $$->child.push_back($1);
  }
  | LPAREN expr_list RPAREN
  {
    $$=$2;
  }
  ;
array_expr
  : id_exp array_bracket
  ;
array_bracket
  : LBRACKET expr RBRACKET
  | LBRACKET RBRACKET
  | LBRACKET expr RBRACKET array_bracket
  | LBRACKET RBRACKET array_bracket
  ;
expr_list
  : expr DOU expr_list
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   LIST";
    $$->child.clear();
    $$->child.push_back($1);
    $$->type_name="expr_list";
    for(int i=0;i<$3->child.size();i++){
      $$->child.push_back($3->child[i]);
    }
  }
  | expr
  {
    $$=$1;
  }
  |
  ;
expr
  : factor
  {
    $$=$1;
  }
  | array_expr
  |	LPAREN expr RPAREN
  {
    $$=$2;
  }
  | LBRACE expr RBRACE
  {
    $$=$2;
  }
  | NOT expr
  {
    $$=new Node();
    $$->type=2;
    $$->type_name="int";
    $$->node_name="EXPR   NOT";
    $$->child.clear();
    $$->child.push_back($2);
    if($2->type_name=="int"||$2->type_name=="char"||$2->type_name=="double"||$2->type_name=="float")
    {if($2->value=="0")
      $$->value="1";
    else
      $$->value="0";
    }
    else{
      yyerror("error at not expr!");
    }
  }
  |	BITNOT expr
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   BITNOT";
    $$->child.clear();
    $$->child.push_back($2);
    $$->type_name="int";
    if($2->type_name=="int"||$2->type_name=="char"){
      $$->value=tostr(~sti($2->value));
    }
    else{
      yyerror("type error");
    }
  }
  | expr MUL expr
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   MUL";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,7);
    //$$->type_name=res;
    if(res=="int"||res=="char"){
      $$->value=tostr(sti($1->value)*sti($3->value));
      $$->type_name="int";
    }
    else if(res=="double"||res=="float"){
      $$->value=tostr(stf($1->value)*stf($3->value));
      $$->type_name="char";
    }
    else{
      yyerror("error at MUL operation!");
    }

  }
  | expr DIV expr
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   DIV";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,8);
     if(res=="int"||res=="char"){
      $$->value=tostr(sti($1->value)/sti($3->value));
      $$->type_name="int";
    }
    else if(res=="double"||res=="float"){
      $$->value=tostr(stf($1->value)/stf($3->value));
      $$->type_name="double";
    }
    else{
      yyerror("error at DIV operation!");
    }

  }
  |	expr PLUS expr
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   ADD";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,5);
     if(res=="int"||res=="char"){
      $$->value=tostr(sti($1->value)+sti($3->value));
      $$->type_name="int";
    }
    else if(res=="double"||res=="float"){
      $$->value=tostr(stf($1->value)+stf($3->value));
      $$->type_name="double";
    }
    else{
     //yyerror("error");
      yyerror("error at PLUS operation!");
    }

  }
  | expr MINUS expr
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   MINUS";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,6);
     if(res=="int"||res=="char"){
      $$->value=tostr(sti($1->value)-sti($3->value));
      $$->type_name="int";
    }
    else if(res=="double"||res=="float"){
      $$->value=tostr(stf($1->value)-stf($3->value));
      $$->type_name="double";
    }
    else{
     yyerror("error at MINUS operation!");
    }

  }
  | expr MOD expr
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   MOD";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    $$->type_name="int";
    string res=deal($1,$3,9);
    if(res!="error"){
      $$->value=tostr(sti($1->value)%sti($3->value));
    }
    else{
      yyerror("Type  error!");
    }
  }
  |	expr RSHIFT expr
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   RSHIFT";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    $$->type_name="int";
    string res=deal($1,$3,1);
    if(res=="error"){
      yyerror("type error!");
    }
    else{
       $$->value=tostr(sti($1->value)>>sti($3->value));
    }
  }
  | expr LSHIFT expr
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   LSHIFT";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    $$->type_name="int";
    string res=deal($1,$3,2);
    if(res=="error"){
   yyerror("type error");
    //$$->value=tostr(sti($1->value)<<sti($3->value));
    }
    else{
       $$->value=tostr(sti($1->value)<<sti($3->value));
    }
  }
  | expr RE expr
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   CMP_RE";
    $$->type_name="int";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,11);
    if(res=="error"){
    yyerror("error!");
    }
    if(stf($1->value)>=stf($3->value)){
      $$->value="1";
    }
    else{
      $$->value="0";
    }

  }
  | expr RT expr
   {
    $$=new Node();
    $$->type=2;
    $$->type_name="int";
    $$->node_name="EXPR   CMP_RT";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,11);
    if(res=="error"){
      yyerror("error");
    }
    if(stf($1->value)>stf($3->value)){
      $$->value="1";
    }
    else{
      $$->value="0";
    }
  }
  | expr LE expr
   {
    $$=new Node();
    $$->type=2;
    $$->type_name="int";
    $$->node_name="EXPR   CMP_LE";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,11);
    if(res=="error"){
    yyerror("error!");
    }
    if(stf($1->value)<=stf($3->value)){
      $$->value="1";
    }
    else{
      $$->value="0";
    }
  }
  |	expr LT expr
   {
    $$=new Node();
    $$->type=2;
    $$->type_name="int";
    $$->node_name="EXPR   CMP_LT";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,11);
    if(res=="error"){
     yyerror("error");
    }
    if(stf($1->value)<stf($3->value)){
      $$->value="1";
    }
    else{
      $$->value="0";
    }
  }
  | expr NE expr
   {
    $$=new Node();
    $$->type=2;
    $$->type_name="int";
    $$->node_name="EXPR   CMP_NE";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,12);
    if(res=="error"){
     yyerror("error");
    }
    if(stf($1->value)!=stf($3->value)){
      $$->value="1";
    }
    else{
      $$->value="0";
    }
  }
  | expr EQ expr
   {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   CMP_EQ";
    $$->type_name="int";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,13);
    if(res=="error"){
      yyerror("wrong");
    }
    if(stf($1->value)==stf($3->value)){
       $$->value="1";
    }
    else{
      $$->value="0";
    }
  }
  | expr AND expr
   {
    $$=new Node();
    $$->type=2;
    $$->type_name="int";
    $$->node_name="EXPR   AND";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,14);
    if(res=="error"){
      yyerror("error");
    }
    if(stf($1->value)!=0&&stf($3->value)!=0){
      $$->value="1";
    }
    else{
      $$->value="0";
    }
  }
  | expr BITAND expr
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   BITAND";
    $$->child.clear();
    $$->type_name="int";
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,3);
    if(res=="error"){
    yyerror("type error");
    }
    $$->value=tostr(sti($1->value)&sti($3->value));
  }
  |	expr OR expr
  {
    $$=new Node();
    $$->type=2;
    $$->type_name="int";
    $$->node_name="EXPR   OR";
    $$->child.clear();
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,16);
    if(res=="error"){
     yyerror("type error");
    }
    if(stf($1->value)!=0||stf($3->value)!=0){
      $$->value="1";
    }
    else{
      $$->value="0";
    }
  }
  | expr BITOR expr
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   BITOR";
    $$->child.clear();
    $$->type_name="int";
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,4);
    if(res=="error"){
    yyerror("error");
    }
    $$->value=tostr(sti($1->value)|sti($3->value));
  }
  | expr XOR expr
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   XOR";
    $$->child.clear();
    $$->type_name="int";
    $$->child.push_back($1);
    $$->child.push_back($3);
    string res=deal($1,$3,10);
    if(res=="error"){
      yyerror("type error");
    }
    $$->value=tostr(sti($1->value)^sti($3->value));
  }
  | factor TPLUS
  {
    $$=new Node();
    $$->type=2;
    if($1->node_name=="EXPR  expr TPLUS"||$1->node_name=="EXPR  expr TMINUS")
    yyerror("TPLUS TPLUS... is not allowed!");
    $$->node_name="EXPR  expr TPLUS";
    //$$->type_name=$1->type_name;
    $$->child.clear();
    $$->child.push_back($1);
    $$->value=$1->value;
    if($1->type_name=="int"||$1->type_name=="char"){
    $1->value=tostr(sti($1->value)+1);
    $$->type_name="int";
    }
    else if($1->type_name=="float"||$1->type_name=="double"){
    $1->value=tostr(stf($1->value)+1);
    $$->type_name="double";
    }
    else{
  yyerror("error at tplus operation");
    }
  }
  | MINUS  expr %prec UMINUS
  {
    $$=new Node();
    $$->type=2;
   // $$->type_name=$2->type_name;
    $$->node_name="EXPR   MINUS expr";
    $$->child.clear();
    $$->child.push_back($2);
    if($$->type_name=="int"||$$->type_name=="char"){
    $$->value="-"+tostr(sti($2->value));
    $$->type_name="int";
    }else if($$->type_name=="float"||$$->type_name=="double"){
    $$->value="-"+tostr(stf($2->value));
    $$->type_name="double";
    }
  else{
  yyerror("error at minus operation;");
  }
  }
  | PLUS  expr %prec UPLUS
  {
    $$=new Node();
    $$->type=2;
    $$->type_name=$2->type_name;
    $$->node_name="EXPR   PLUS expr";
    $$->child.clear();
    $$->child.push_back($2);
    if($$->type_name=="int"||$$->type_name=="char"||$$->type_name=="float"||$$->type_name=="double"){
    $$->value=$2->value;
  }else{
yyerror("error at plus operation");
  }
  }
  |	factor TMINUS
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR  expr TMINUS";
    if($1->node_name=="EXPR  expr TPLUS"||$1->node_name=="EXPR  expr TMINUS")
    yyerror("TMINUS TMINUS ...is not allowed!");
    $$->child.clear();
    //$$->type_name=$1->type_name;
    $$->child.push_back($1);
    $$->value=$1->value;
    if($1->type_name=="int"||$1->type_name=="char"){
    $1->value=tostr(sti($1->value)-1);
    $$->type_name="int";
    }
    else if($1->type_name=="float"||$1->type_name=="double"){
    $1->value=tostr(stf($1->value)-1);
    $$->type_name="double";
    }
    else{
      yyerror("error");
    }
  }
  | assign_stmt
  {
    $$=$1;
  }
  ;
factor
: ID
{
    $$=new Node();
    $$->type=4;
    $$->var_name=yylval->var_name;
    var_info * vi=get($$->var_name);
    if(vi==NULL){
      yyerror("error!");
    }
    $$->type_name=vi->type;
    $$->node_name="VAR";
    $$->value=vi->val;
    $$->child.clear();
    $$->child.push_back($1);
  }
  | NUMBER
  {
    $$=new Node();
    $$->type=3;
    $$->type_name="double";
    $$->value=tostr(yylval->val_double);
    $$->val_double=yylval->val_double;
    $$->node_name="VAL";
    $$->child.clear();
    $$->child.push_back($1);
  }
  | CHARVAL
  {
    $$=new Node();
    $$->type=3;
    $$->type_name="char";
    $$->char_value=yylval->char_value;
    $$->node_name="VAL";
    $$->value=yylval->char_value;
    $$->child.clear();
    $$->child.push_back($1);
  }
   |  INTEGER
  {
    $$=new Node();
    $$->type=3;
    $$->type_name="int";
    $$->value=tostr(yylval->val_value);
    $$->val_value=yylval->val_value;
    $$->node_name="VAL";
    $$->child.clear();
    $$->child.push_back($1);
  }
   | TPLUS factor
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   TPLUS expr";
   // $$->type_name=$2->type_name;
    $$->child.clear();
    $$->child.push_back($2);
    if($1->type_name=="int"||$1->type_name=="char"){
    $1->value=tostr(sti($1->value)+1);
    $$->type_name="int";
    }
    else if($1->type_name=="float"||$1->type_name=="double"){
    $1->value=tostr(stf($1->value)+1);
    $$->type_name="double";
    }
    else{
  
    }
    $$->value=$1->value;
  }
  | TMINUS factor
  {
    $$=new Node();
    $$->type=2;
    $$->node_name="EXPR   TMINUS expr";
    $$->child.clear();
  //  $$->type_name=$2->type_name;
    $$->child.push_back($2);
    if($1->type_name=="int"||$1->type_name=="char"){
    $1->value=tostr(sti($1->value)-1);
    $$->type_name="int";
    }
    else if($1->type_name=="float"||$1->type_name=="double"){
    $1->value=tostr(stf($1->value)-1);
    $$->type_name="double";
    }
    else{
   
    }
    $$->value=$1->value;
  }
  ;

jump_stmt
  : CONTINUE
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="JUMP_STMT   CONTINUE";
    $$->child.clear();
  }
  | BREAK
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="JUMP_STMT   BREAK";
    $$->child.clear();
  }
  | RETURN
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="JUMP_STMT   RETURN";
    $$->child.clear();
  }
  | RETURN expr
  {
    $$=new Node();
    $$->type=1;
    $$->node_name="JUMP_STMT   RERURN expr";
    $$->child.clear();
    $$->child.push_back($2);
  }
  ;

%%
string deal(Node* arg1,Node* arg2,int oparg){
  if(oparg==1||oparg==2||oparg==9||oparg==10||oparg==3||oparg==4){
    if((arg1->type_name=="int"||arg1->type_name=="char")&&(arg2->type_name=="int"||arg2->type_name=="char")){
      return "int";
    }
    return "error";
  }
  else if(oparg==5||oparg==6||oparg==7||oparg==8){
    if((arg1->type_name=="int"&&arg2->type_name=="int")||(arg1->type_name=="int"&&arg2->type_name=="char")||(arg1->type_name=="char"&&arg2->type_name=="int")){
      return "int";
    }
    else if(arg1->type_name=="char"&&arg2->type_name=="char"){
      return "char";
    }
    else if(arg1->type_name=="double"||arg2->type_name=="double"){
      return "double";
    }
    else if(arg1->type_name=="float"||arg2->type_name=="float"){
      return "float";
    }
    else{
      return"error";
    }
  }
  else if(oparg==11||oparg==12||oparg==13||oparg==14||oparg==15||oparg==16||oparg==17||oparg==18){
    if((arg1->type_name!="int"&&arg1->type_name!="char"&&arg1->type_name!="float"&&arg1->type_name!="double")||(arg2->type_name!="int"&&arg2->type_name!="char"&&arg2->type_name!="float"&&arg2->type_name!="double")){
      return "error";
    }
    else{
      return "int";
    }
  }
    else{
      return "error";
    }
}
int  sti(string s){
  int a=atoi(s.c_str());
  return a;
}
double stf(string s){
  double b=atof(s.c_str());
  return b;
}
var_info* get(string s){
    map<string,var_info*>::iterator itor;
    itor=var_list.find(s);
    if(itor==var_list.end())
        return NULL;
    else
        return itor->second;
}
void dfs(Node* node,int depth)
{
		printNode(node,depth);
		for (int i=0;i<node->child.size();i++)
		{
			dfs(node->child[i],depth+1);
		}
}
string tostr(int a){
  ostringstream os;
  os<<a;
  return os.str();
}
string tostr(double b){
  ostringstream os;
  os<<b;
  return os.str();
}
void printNode(Node* node,int indent){
  for(int i=1;i<=(indent-1)*3;i++){
      cout<<" ";
    }
  if(node->type==3){
    cout<<"Val   ";
    if(node->type_name=="int"){
      cout<<node->type_name<<"   "<<node->value;
    }
    else if(node->type_name=="char"){
      cout<<node->type_name<<"   "<<node->value;
    }
    else if(node->type_name=="double"){
      cout<<node->type_name<<"   "<<node->value;
    }
    else if(node->type_name=="float"){
      cout<<node->type_name<<"   "<<node->value;
    }
  }
  else if(node->type==4){
   cout<<"Var   "<<node->var_name<<"    ";
   if(node->type_name=="int"){
     cout<<node->type_name<<"   "<<node->value;
   }
   else  if(node->type_name=="char"){
     cout<<node->type_name<<"   "<<node->value;
   }
   else  if(node->type_name=="double"||node->type_name=="float"){
     cout<<node->type_name<<"   "<<node->value;
   }
   else{
     cout<<node->type_name;
   }
  }
  else if(node->type==5){
  }
  else{
    cout<<node->node_name<<"     "<<node->value<<endl;
  }
}
