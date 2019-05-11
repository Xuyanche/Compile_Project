

%{


%}
 
/*lex的每个正则式前面可以带有"<状态>"，例如下面的"<COMMENT>\n"。每个状态要先用%x声明才能使用。
当lex开始运行时，默认状态是INITIAL，以后可在C代码里用"BEGIN 状态名;"切换到其它状态(BEGIN是lex/yacc内置的宏)。
这时，只有当lex状态切换到COMMENT后，才会去匹配以<COMMENT>开头的正则式，而不匹配其它状态开头的。
也就是说，lex当前处在什么状态，就考虑以该状态开头的正则式，而忽略其它的正则式。
其应用例如，在一段C代码里，同样是串"abc"，如果它写在代码段里，会被识别为标识符，如果写在注释里则就不会。所以对串"abc"的识别结果，应根据不同的状态加以区分。
本例子需要忽略掉文本中的行末注释，行末注释的定义是：从某个"//"开始，直到行尾的内容都是注释。其实现方法是：
1-lex启动时默认是INITIAL状态，在这个状态下，串"abc"会识别为标识符，串"123"会识别为整数等。
2-一旦识别到"//"，则用BEGIN宏切换到COMMENT状态，在该状态下，abc这样的串、以及其它字符会被忽略。只有识别到换行符\n时，再用BEGIN宏切换到初始态，继续识别其它记号。*/
%x COMMENT
 
/*非数字由大小写字母、下划线组成*/
nondigit	([_A-Za-z])
 
/*一位数字，可以是0到9*/
digit		([0-9])
 
/*整数由1至多位数字组成*/
integer		({digit}+)
 
/*标识符，以非数字开头，后跟0至多个数字或非数字*/
identifier	({nondigit}({nondigit}|{digit})*)
 
/*一个或一段连续的空白符*/
blank_chars	([ \f\r\t\v]+)
 
/*下面%%后开始第2段：规则段*/
%%
 
{identifier}	{	//匹配标识符串，此时串值由yytext保存
			yylval.m_sId=yytext;//通过yylval向yacc传递识别出的记号的值，由于yylval已定义为struct Type，这里就可以把yytext赋给其m_sId成员，到了yacc里就可以用$n的方式来引用了
			return IDENTIFIER;	//向yacc返回: 识别出的记号类型是IDENTIFIER
		}
 
{integer}		{	//匹配整数串
			yylval.m_nInt=atoi(yytext);//把识别出的整数串，转换为整型值，存储到yylval的整型成员里，到了yacc里用$n方式引用
			return INTEGER;//向yacc返回: 识别出的记号类型是INTEGER
		}
 
{blank_chars}	{	//遇空白符时，什么也不做，忽略它们
		}
				
\n		{	//遇换行符时，忽略之
		}
"//"		{	//遇到串"//"，表明要开始一段注释，直到行尾
			cout<<"(comment)"<<endl;//提示遇到了注释
			BEGIN COMMENT;//用BEGIN宏切换到注释状态，去过滤这段注释，下一次lex将只匹配前面带有<COMMENT>的正则式
		}
 
.		{	//.表示除\n以外的其它字符，注意这个规则要放在最后，因为一旦匹配了.就不会匹配后面的规则了(以其它状态<>开头的规则除外)
			yylval.m_cOp=yytext[0];//由于只匹配一个字符，这时它对应yytext[0]，把该字符存放到yylval的m_cOp成员里，到了yacc里用$n方式引用
			return OPERATOR;//向yacc返回: 识别出的记号类型是OPERATOR
		}
 
<COMMENT>\n	{	//注释状态下的规则，只有当前切换到COMMENT状态才会去匹配
			BEGIN INITIAL;//在注释状态下，当遇到换行符时，表明注释结束了，返回初始态
		}
 
<COMMENT>.	{	//在注释状态下，对其它字符都忽略，即：注释在lex(词法分析层)就过滤掉了，不返回给yacc了
		}
 
%%
 
//第3段：C函数定义段
int yywrap(void)
{
	puts("-----the file is end");
	return 1;//返回1表示读取全部结束。如果要接着读其它文件，可以这里fopen该文件，文件指针赋给yyin，并返回0
}
--------------------- 
作者：huyansoft 
来源：CSDN 
原文：https://blog.csdn.net/huyansoft/article/details/8860224 
版权声明：本文为博主原创文章，转载请附上博文链接！


