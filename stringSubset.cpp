#include <iostream>

void stringSubset(std::string str, std::string curr="", int index=0)
{
	if(index == str.length())
	{
		std::cout<<curr<<" ";
		return;
	}

	stringSubset(str, curr, index + 1);
	stringSubset(str, curr+str[index], index + 1);
}

int main(){
    std::cout<<"Enter: ";
    std::string str;
    std::cin>>str;
    stringSubset(str);
    return 0;
}