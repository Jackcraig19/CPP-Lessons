#include <iostream>
#include <string>
#include <random>
#include <vector>
#include <unistd.h>

using std::string;
using std::vector;

vector<string> msgs = {"hello!", "I like cats", "What's up?", "I can't wait!", "I like ice cream"};

int getRandom(int r_max) {
    return rand() % r_max;
}

string getMessage() {
    sleep(1);
    return msgs[getRandom(msgs.size()-1)];
}

void sendMessage(string to_send) {
    sleep(1);
}

string encode(string to_e) {
    string enc;
    for (int i = 0; i < to_e.size(); i++) {
        enc += to_e[i] + 1 + i;
    }
    return enc;
}

string decode(string to_d) {
    string dec;
    for (int i = 0; i < to_d.size(); i++) {
        dec += to_d[i] - 1 - i;
    }
    return dec;
}

int main() {
    return 0;
}