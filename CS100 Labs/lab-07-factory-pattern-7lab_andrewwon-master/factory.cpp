#include "factory.hpp"
#include "base.hpp"
#include "Add.hpp"
#include "op.hpp"
#include "Sub.hpp"
#include "Pow.hpp"
#include "Div.hpp"
#include "Mult.hpp"
#include <string>

#include <vector>
using namespace std;
Base* factory::Parse(char** userinput, int length)
{
//	cout<<"inside parse"<<endl;
	string inpstring;
	int k=1;
	while(userinput[k]!=NULL)
	{
		//cout<<userinput[j]<<endl;
		//string tempstring(userinput[j]);
		inpstring+=userinput[k];
		//cout<<inpstring<<endl;
		k++;
	}
	//cout<<inpstring<<endl;
	int i=0;
	int vectorcount=0;
	int operatorscount=0;
	vector<Base*> operators;
	vector<Base*> numbers;
	int z=0;
	int errorflag=0;
	while(inpstring[z]!=NULL&&errorflag==0)
	{
		if(isdigit(inpstring[z])==0&&isdigit(inpstring[z+1])==0)
		{
			if(inpstring[z]=='*'&&inpstring[z+1]=='*')
			{
				//cout<<"Just a pow"<<endl;
			}
			else
			{
				cout<<"Error detected"<<endl;
				errorflag=1;
			}
		}
		if(isdigit(inpstring[z])==1)
                {
                        //cout<<"An operand is found"<<endl;
                        //int temp=stoi(inpstring[i]);
                        int newtemp=inpstring[z]-'0';
                        //cout<<"in new temp we have "<<newtemp<<endl;
                        Base* number=new Op(newtemp);
                        numbers.push_back(number);
                }
		z++;	
	}	
	while(inpstring[i]!=NULL&&errorflag==0)
	{
		//cout<<"Comparing this "<<inpstring[i]<<endl;
		if(inpstring[i]=='*'&&inpstring[i+1]=='*')
		{
			//cout<<"An pow is found"<<endl;
			if(i==1)
			{
				Base* Power=new Pow(numbers[vectorcount],numbers[vectorcount+1]);
				operators.push_back(Power);
				vectorcount+=2;				//if 8,9,3 we use 8 and 9 then for the next operator we want 3
				operatorscount++;
			}
			else
			{
				Base* Power=new Pow(operators[operatorscount-1],numbers[vectorcount]);
				operators.push_back(Power);
				vectorcount++;
				operatorscount++;
			}
			i++;
		}	
		else if(inpstring[i]=='+')
		{
		//	cout<<"An add is found"<<endl;
			if(i==1)
                        {
                                Base* addition=new Add(numbers[vectorcount],numbers[vectorcount+1]);
                                operators.push_back(addition);
				vectorcount+=2;
				operatorscount++;
                        }
			else
                        {
                                Base* addition=new Add(operators[operatorscount-1],numbers[vectorcount]);
                                operators.push_back(addition);
                                vectorcount++;
                                operatorscount++;
                        }
	
		}
		else if(inpstring[i]=='-')
		{
		//	cout<<"An sub is found"<<endl;
			if(i==1)
                        {
                                Base* subtract=new Sub(numbers[vectorcount],numbers[vectorcount+1]);
                                operators.push_back(subtract);
                        	vectorcount+=2;
				operatorscount++;
			}
			else
                        {
                                Base* subtract=new Sub(operators[operatorscount-1],numbers[vectorcount]);
                                operators.push_back(subtract);
                                vectorcount++;
                                operatorscount++;
                        }

		}
		else if(inpstring[i]=='/')
		{
		//	cout<<"An div is found"<<endl;
			if(i==1)
                        {
                                Base* divide=new Div(numbers[vectorcount],numbers[vectorcount+1]);
                                operators.push_back(divide);
                        	vectorcount+=2;
				operatorscount++;
			}
			else
                        {
                                Base* div=new Div(operators[operatorscount-1],numbers[vectorcount]);
                                operators.push_back(div);
                                vectorcount++;
                                operatorscount++;
                        }

		}
		else if(inpstring[i]=='*')
		{
		//	cout<<"An mult is found"<<endl;
			if(i==1)
                        {
                                Base* multiply=new Mult(numbers[vectorcount],numbers[vectorcount+1]);
                                operators.push_back(multiply);
                        	vectorcount+=2;
				operatorscount++;
			}
			else
                        {
                                Base* multiply=new Mult(operators[operatorscount-1],numbers[vectorcount]);
                                operators.push_back(multiply);
                                vectorcount++;
                                operatorscount++;
                        }

		}
		else
		{
			//cout<<"Nothing is found?"<<endl;
		}
		i++;
	}
//	for(int j=0;j<numbers.size();j++)
//	{
//		cout<<"Inside numbers we have "<<numbers[j]->evaluate()<<endl;
//	}
	//cout<<"Our final vector node which holds everything has "<<operators[operators.size()-1]->stringify()<<endl;
	if(errorflag==0)
	{
		return operators[operators.size()-1];
	}
	else
	{
		return NULL;
	}
}

