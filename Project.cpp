#include <iostream>
#include <vector>

using namespace std;

class Account
{
private:
    int _id;
    string _name;

public:
    Account() {}
    Account(int id, string name)
    {
        _id = id;
        _name = name;
    }
    ~Account() {}

    int getId() { return _id; }
    string getName() { return _name; }

    void setName(string name) { _name = name; }

    virtual void info()
    {
        cout << "id=" << getId() << endl;
        cout << "name=" << getName() << endl;
    };
};

class User : public Account
{
private:
    string _port;
    string _address;
    
public:
    User(int id, string name, string port, string address) : Account(id, name)
    {
        _port = port;
        _address = address;
    }

    User() : Account() {}
    ~User() {}

    string getPort() { return _port; }
    string getAddress() { return _address; }

    void setPort(string port) { _port = port; }
    void setAddress(string address) { _address = address; }

    void info() override
    {
        cout << "address=" << _address << endl;
        cout << "port=" << _port << endl;
    }
};

class Network
{
private:
    vector<Account> accounts;

public:
    Network() {}

    void add_account(Account account) { accounts.push_back(account); }
    void remove_at(int index) { accounts.erase(accounts.begin() + index); }
};

int main()
{
    Account account(1, "Admin");
    User user(0, "Andrew", "999", "1.1.0");

    Network network;
    network.add_account(account);
    network.add_account(user);

    account.info();
    cout << endl;
    user.info();
}
