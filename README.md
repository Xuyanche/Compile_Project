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

