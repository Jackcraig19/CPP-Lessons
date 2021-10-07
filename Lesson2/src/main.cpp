#include <iostream>
#include <vector>
#include <answers.h>

static const int N_TESTS = 4;

int test_nsum()
{
    int n_success = 0;

    std::vector<int> exp;
    exp.push_back(0);
    exp.push_back(1);
    exp.push_back(3);
    exp.push_back(7);
    exp.push_back(12);

    std::vector<int> actual = nSum(5);
    if (actual == exp)
    {
        n_success += 1;
        std::cout << "[NSUM] PASS test 1!" << std::endl;
    }
    else
    {
        std::cout << "[NSUM] FAIL test 2!" << std::endl;
    }

    exp.clear();
    std::vector<int> actual2 = nSum(0);
    if (actual == exp)
    {
        n_success += 1;
        std::cout << "[NSUM] PASS test 2!" << std::endl;
    }
    else
    {
        std::cout << "[NSUM] FAIL test 2!" << std::endl;
    }

    return n_success;
}

int test_copy()
{
    int n_suc = 0;
    {
        std::vector<int> to_copy;
        std::vector<int> exp;

        std::vector<int> act = copyVec(to_copy);
        if (act == exp)
        {
            n_suc++;
            std::cout << "[COPYVEC] PASS test 1!" << std::endl;
        }
        else
        {
            std::cout << "[COPYVEC] FAIL test 1!" << std::endl;
        }
    }

    {

        std::vector<int> to_copy;   
        for (int i = 0; i < 200; i++)
        {
            to_copy.push_back(i);
        }
        std::vector<int> exp(to_copy);
        std::vector<int> act = copyVec(exp);
        if (exp == act)
        {
            n_suc++;
            std::cout << "[COPYVEC] PASS test 2!" << std::endl;
        }
        else
        {
            std::cout << "[COPYVEC] FAIL test 2!" << std::endl;
        }
    }
    return n_suc;
}

int main()
{
    int n_passed = 0;
    n_passed += test_nsum();
    n_passed += test_copy();
    std::cout << "Successfully passed " << n_passed << " of " << N_TESTS << std::endl;
    return 0;
}