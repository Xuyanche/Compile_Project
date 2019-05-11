# Compile_Project



#### lex

```
base:
class Token {
    enum xxx type;
}

inherit:
class Keyword : Token {
    enum xxx word;
}
class Idnet : Token {
    char * name;
}
class Operator : Token {
    enum xxx op;
}
class Literal : Token {
    enum xxx type;
}

class IntLiteral : Literal {
    int value;
}
class FloatLitral: Literal {
    float value:
}
...


Output:
vector<Token *>
```



#### yacc

```
base:
class AST{
    enum xxx type;
    //TypeDef
    //Expression
    //Statement
    //FuncProto
    //FuncDef
}

inherit:
class TypeDef: AST {
    enum typename;
    char * varname;
}
class Expression : AST {
    enum type;
    //BinOp
    //Literal
    //Ident
    //Call
}
class BinOp : Expression {
    Expression *left, *right;
    enum xxx op;
}
class Literal : Expression {
    xxx
}
...
class Call : Expression {
    char *name;
    vector<Expression *> paras;
}
class Statement : AST {
    enum xxx type;
    //Assignment
    //If
    //While
    //Return
    //break
    //continue
    //Expression
    //Block
}
...

Output:
vector<AST *> 
```

