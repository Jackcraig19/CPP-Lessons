class BankAccount {
    private:
        int balance;

    public:
        // Builds bank account object
        BankAccount(const int& initialBalance);

        // Gets the balance of this account.
        int getBalance();

        // Removes amt from balance. amt should be non-negative (widthdrawing can't increase balance!)
        // Returns true if withdraw was successful, false otherwise
        bool withdraw(const int& amt);

        // Adds amt to balance. amt should be non-negative (Balance can't decrease after deposit!)
        void deposit(const int& amt);

        // Transfers "amount" of money from this account to "other"
        // Returns true if transfer was successful, false otherwise
        bool transferMoney(BankAccount& other, const int& amount);
};