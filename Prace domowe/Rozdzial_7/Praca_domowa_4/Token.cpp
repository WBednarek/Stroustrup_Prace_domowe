#include "stdafx.h"
#include "Token.h"


Token::Token()
{
}

Token::Token(char kind) : kind(kind)
{
}

Token::Token(char kind, double value) : kind(kind), value(value)
{
}

Token::Token(char kind, string name) : kind(kind), name(name)
{
}