%{
#define YYSTYPE Node*
#include "node.h"
#include "parser.hpp"
#include<sstream>
#include<string>
#include<string.h>
void yyerror(const char *msg);

%}

letter [A-Za-z_]
digit  [0-9]
integer ([1-9]{digit}*)|(0)
id     {letter}({letter}|{digit})*
space  [ \t]
charval   [']([A-Za-z]|(\a)|(\b)|(\f)|(\n)|(\r)|(\t)|(\v)|(\\)|(\')|(\")|(\?))[']
number  ({digit}+)?(\.{digit}*)?((E|e)[+-]?{digit}+)?
ignore   {space}+
comment_line  \/\/[^\n]*
comment_block \/\*([^\*^\/]*|[\*^\/*]*|[^\**\/]*)*\*\/
newline  \n

%%
void  		{return  VOID;}
int  		{return  INT ;}
char  		{return  CHAR ;}
double  	{return  DOUBLE ;}
float  		{return  FLOAT ;}
short  		{return  SHORT ;}
long  		{return  LONG ;}
unsigned  	{return  UNSIGNED ;}
signed  	{return  SIGNED ;}
bool        {return BOOL;}
struct  	{return STRUCT ;}
class       {return CLASS;}
write       {return WRITE;}
public      {return  PUBLIC;}
private  	{return  PRIVATE ;}
protected   {return   PROTECTED;}
union  		{return  UNION ;}
read        {return  READ;}
enum  		{return   ENUM ;}
typedef  	{return   TYPEDEF ;}
sizeof  	{return  SIZEOF ;}
auto  		{return AUTO ;}
static  	{return  STATIC ;}
register  	{return  REGISTER ;}
extern  	{return  EXTERN ;}
const  		{return  CONST ;}
volatile  	{return  VOLATILE ;}
return  	{return  RETURN;}
continue  	{return  CONTINUE ;}
break  		{return  BREAK ;}
goto  		{return  GOTO ;}
if  		{return IF ;}
else  		{return ELSE ;}
switch  	{return  SWITCH ;}
case  		{return  CASE ;}
default  	{return DEFAULT ;}
for  		{return FOR ;}
do  		{return DO ;}
while  		{return  WHILE ;}
"{"		    {return LBRACE; }
"}"		    {return  RBRACE; }
"["         {return  LBRACKET; }
"]"         {return  RBRACKET; }
"("		    {return  LPAREN; }
")"		    {return  RPAREN; }
","		    {return  DOU; }
"'"		    {return  SQM; }
";"         {return  SEM;}
"&"		    {return  BITAND; } 
"*"         {return  MUL;}  
"<<"	    {return  LSHIFT; }  
">>"	    {return  RSHIFT; }  
"="		    {return  ASSIGN; }
"=="        {return  EQ; }  
">="	    {return  RE; }  
">"		    {return  RT; }  
"<="	    {return  LE; }  
"<"		    {return  LT; }  
"!="	    {return  NE; }   
"||"	    {return  OR; }   
"&&"	    {return  AND; }   
"|"		    {return  BITOR; }  
"^"		    {return  XOR; }  
"!"		    {return  NOT; }  
"+"		    {return  PLUS; } 
"-"		    {return  MINUS; }
"/"		    {return  DIV; }    
"~"         {return  BITNOT;}    
"%"         {return  MOD;}     
"++"	    {return  TPLUS;}   
"--"        {return  TMINUS;} 
":"         {return  COLON;}
{ignore}    {
			}
{newline}   {   
			}
{comment_block}  {}
{comment_line}   {}
{charval}	{
                yylval=new Node();
                string s=yytext; 
                s=s.substr(1,s.length()-2);
                yylval->char_value=s;
				return CHARVAL ;
            }
{integer}   {  
               yylval= new Node(); 
			   int val=atoi(yytext);
			   yylval->val_value=val;
               return INTEGER;
	        }
{number}    {
                yylval= new Node(); 
			    double val;
                stringstream ss;
                ss<<yytext;
                ss>>val;
			    yylval->val_double=val;
                return NUMBER;
			}
{id}       {
                yylval=new Node();
                yylval->var_name=yytext;
				return ID ;
            }
.           {
				return CHARS;
            }
%%

int yywrap(void) { 
    return 1;
}

void yyerror(const char *msg) {
    printf("Error: %s\n", msg);
    exit(1);
}