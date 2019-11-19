#include <iostream>
#include <string>
#include<stdlib.h>
#include<string.h>
#include<readline/readline.h>
#include<unistd.h>
#include<sys/wait.h>
#include "base.hpp"
#include "Add.hpp"
#include "op.hpp"
#include "Sub.hpp"
#include "Pow.hpp"
#include "Div.hpp"
#include "Mult.hpp"
#include "factory.hpp"
using namespace std;
int main(int argc,char* argv[]) {
	char** command;
	char* input;
	//for(int i=0;i<argc;i++)
	//{
	//	cout<<argv[i]<<endl;
	//}
	factory* ExprTreeFact=new factory();
	Base* newexpression= ExprTreeFact->Parse(argv,argc);		
	cout<<"in stringify is "<<newexpression->stringify()<<endl;
	cout<<"in evaluate is "<<newexpression->evaluate()<<endl;	
	return 0;
}
