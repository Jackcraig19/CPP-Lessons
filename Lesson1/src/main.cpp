#include <iostream>

#include "answers.h"
#include "bank.h"


int main() {
    int sum = sumTwoNum(10,-5);
    if (sum != 5) 
        std::cout << "sum() failed: 10 + -5 != " << sum << std::endl;
    else
        std::cout << "sum() passed!" << std::endl;

    std::cout << std::endl << "Square Print:" << std::endl;
    squarePrint(5);

    std::cout << std::endl << "Triangle Print:" << std::endl;
    trianglePrint(5);

    int fac = factorial(9);
    if (fac != 362880)
        std::cout << std::endl << "factorial() failed: 9! != " << fac << std::endl;
    else
        std::cout << "factorial() passed!" << std::endl;
    
    int fib = fibonacci(12);
    if (fib != 144)
        std::cout << std::endl << "fibonacci() failed: fibonacci(12) != " << fib << std::endl;
    else
        std::cout << "fibonacci() passed!" << std::endl;
    
    int to_sum[] = {5,15,-5,2,8};
    int size = 5;
    int act_sum = getSum(to_sum, size);
    if (act_sum != 25)
        std::cout << std::endl << "getSum() failed: Sum is not " << act_sum << std::endl;
    else
        std::cout << "getSum() passed!" << std::endl;
    
    std::cout << std::endl << "Testing bank..." << std::endl;

    BankAccount ian(200);
    std::cout << "Ian's bank account has $" << ian.getBalance() << std::endl;

    BankAccount ava(250);
    std::cout << "Ava's bank account has $" << ava.getBalance() << std::endl;

    ian.withdraw(10);
    std::cout << "Ian wants to make a lemonade stand. He withdraws $10 from his account to buy cups, and he now has $" << ian.getBalance() << std::endl;

    ian.deposit(20);
    std::cout << "Ian's lemonade stand made $20! After depositing it, he now has $" << ian.getBalance() << std::endl;

    std::cout << "Ian wants to go even bigger, he is going to buy $250 worth of materials for next week" << std::endl;
    bool wasSuccessful = ian.withdraw(250);

    std::cout << "Was Ian able to withdraw $250? " << wasSuccessful << ". He has $" << ian.getBalance() << " in his account" << std::endl;

    std::cout << "Ian decides to ask Ava to borrow some money for his stand. He asks for the $40 he needs to meet his goal" << std::endl;
    
    wasSuccessful = ava.transferMoney(ian, 40);
    
    std::cout << "Was the transfer a success? " << wasSuccessful << ". Ian's balance is now " << ian.getBalance() << " and Ava's balance is now " << ava.getBalance() << std::endl;
    ian.withdraw(250);
    std::cout << "After buying $250 of materials, Ian has $" << ian.getBalance() << " remaining" << std::endl;
    ian.deposit(600);
    std::cout << "Wow, what a success! Ian made $600 over the weekend! His balance is now $" << ian.getBalance() << std::endl;

    ian.transferMoney(ava, 80);

    std::cout << "Ian pays Ava back, $40 for the original loan and another $40 for being such a great sister. Ava now has $" << ava.getBalance() << " and Ian now has $" << ian.getBalance() << std::endl;

    std::cout << "Bank test complete! Does that look right?" << std::endl;
    return 0;
}