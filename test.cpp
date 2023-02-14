//const char *msg = connection->getMessageText(message);
#include <iostream>
using namespace std;

const char *name  = "sujeet_nayak";
const char * getMessageText(int x)
{
    if(x)    
    return name;
    return NULL;
}

bool setState(const string & message)
{
    std::cout << "output: " << message << std::endl;
    return true;
}

int main()
{
    const char *msg = getMessageText(0);
    if(msg==NULL)
    return 0;
	bool rv = setState(msg);
    std::cout << "rv: " << rv << std::endl;
    return 0;

}