// 写一个hello world程序
#include <iostream> 
#include <vector>
using namespace std;


struct OperatorNode{
    int id;
    string op;
    string pipe;
    int cycles;
    vector<string> bufIds;
};

struct CacheNode{
    int id;
    string op;
    string bufId;
    int size;
    string type;
};




int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;  

}