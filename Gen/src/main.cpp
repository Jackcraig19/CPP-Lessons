#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

static const int Q_LEN = 10;
static const int FUNC_LEN = 2;
static const int PARAM_LEN = 3;
static const int MAX_PARAMS = 4;

static const std::vector<std::string> types = {"int", "double", "char", "std::string", "BankAccount", "float", "long", "bool", "FooClass"};
static const std::string ptr = "*";
static const std::vector<std::string> paramNames = {"first", "second", "third", "brick", "house", "car", "size", "amount", "sum", "ian", "ava", "computer", "small", "big"};
static const std::vector<std::string> functionNames = {"do", "get", "set", "foo", "bar", "big", "thing", "can", "is"};

struct question {
    std::string signature;
    std::string type;
    std::string name;
    std::string numParams;
    std::vector<std::string> paramTypes; // Unused
    std::vector<std::string> paramNames; // Unused
};

float getRandom() {
    return (rand() % 1000 / 1000.0);
}

std::string getCamelCase(std::vector<std::string>& arr) {
    std::string finalString;
    for (int i = 0; i < arr.size(); i++) {
        std::string str = arr[i];
        for (int j = 0; j < str.length(); j++) {
            if (i != 0 && j == 0)
                finalString += toupper(str[j]);
            else
                finalString += str[j];
        }
    }
    return finalString;
}

std::string getQuestion() {
    std::string s;
    // Get return type
    s += types[(int) (getRandom() * types.size())];
    s += " ";

    // Get function name
    std::vector<std::string> funcList;
    for (int i = 0; i < FUNC_LEN; i++)
        funcList.push_back(functionNames[(int) (getRandom() * functionNames.size())]);
    s += getCamelCase(funcList);
    s += "(";
    // Get params
    int numParams = (int) (getRandom() * MAX_PARAMS);

    for (int i = 0; i < numParams; i++) {
        s += types[(int) (getRandom() * types.size())];
        s += " ";

        std::vector<std::string> pList;
        for (int j = 0; j < PARAM_LEN; j++) 
            pList.push_back(paramNames[(int) (getRandom() * paramNames.size())]);
        s += getCamelCase(pList);
        if (i != numParams - 1)
            s += ", ";
    }
    s += ");";
    return s;
}

int main() {
    srand(time(NULL));
    for (int i = 0; i < Q_LEN; i++)
        std::cout << std::endl << i + 1 << ") "<< getQuestion() << std::endl << std::endl;
    return 0;
}