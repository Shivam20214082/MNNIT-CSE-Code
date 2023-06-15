#include <iostream>
#include <vector>
#include <map>

using namespace std;

class TuringMachine {
public:
    TuringMachine(const vector<int>& input_tape, int initial_state, int final_state)
        : tape(input_tape), head_pos(0), state(initial_state), final_state(final_state)
    {}

    void add_transition_rule(int curr_state, int curr_symbol, int next_state, int next_symbol, int direction) {
        transition_rules[{curr_state, curr_symbol}] = {next_state, next_symbol, direction};
    }

    void execute() {
        while (state != final_state) {
            int curr_symbol = tape[head_pos];
            auto it = transition_rules.find({state, curr_symbol});
            if (it == transition_rules.end()) {
                cout << "No transition rule found for symbol " << curr_symbol << " in state " << state << endl;
                return;
            }
            auto [next_state, next_symbol, direction] = it->second;
            tape[head_pos] = next_symbol;
            head_pos += direction;
            if (head_pos < 0 || head_pos >= tape.size()) {
                tape.resize(tape.size() + 1);
                if (head_pos < 0) {
                    head_pos = 0;
                }
            }
            state = next_state;
        }
    }

    void output_tape() const {
        int first_nonzero_index = -1;
        int last_nonzero_index = -1;
        for (int i = 0; i < tape.size(); i++) {
            if (tape[i] != 0) {
                if (first_nonzero_index == -1) {
                    first_nonzero_index = i;
                }
                last_nonzero_index = i;
            }
        }
        if (first_nonzero_index == -1) {
            cout << "0" << endl;
            return;
        }
        for (int i = first_nonzero_index; i <= last_nonzero_index; i++) {
            cout << tape[i];
        }
        cout << endl;
    }

private:
    vector<int> tape;
    int head_pos;
    int state;
    int final_state;
    map<pair<int, int>, tuple<int, int, int>> transition_rules;
};

int main() {
    // Prompt the user to enter the initial tape contents
    string input_str;
    cout << "Enter the initial tape contents (0s and 1s only): ";
    cin >> input_str;
    vector<int> input_tape(input_str.size());
    for (int i = 0; i < input_str.size(); i++) {
        input_tape[i] = input_str[i] - '0';
    }

    // Prompt the user to enter the initial state
    int initial_state;
    cout << "Enter the initial state (an integer): ";
    cin >> initial_state;

    // Prompt the user to enter the final state
    int final_state;
    cout << "Enter the final state (an integer): ";
    cin >> final_state;

    // Create a new Turing machine
    TuringMachine tm(input_tape, initial_state, final_state);

    // Prompt the user to enter the transition rules
    while (true) {
        int curr_state, curr_symbol, next_state, next_symbol, direction;
        cout << "Enter a transition rule as five integers (or enter -1 to stop):\n";
        cout << "Current state, Current symbol, Next state, Next symbol, Direction (-1, 0, or 1):\n";
        cin >> curr_state;
        if (curr_state == -1) {
            break;
        }
        cin >> curr_symbol >> next_state >> next_symbol >> direction;
        tm.add_transition_rule(curr_state, curr_symbol, next_state, next_symbol, direction);
    }

    // Execute the Turing machine
    tm.execute();

    // Output the final tape contents
    cout << "Final tape contents: ";
    tm.output_tape();

    return 0;
}

//output_tape
/*
Enter the initial tape contents (0s and 1s only): 101
Enter the initial state (an integer): 0
Enter the final state (an integer): 2
Enter a transition rule as five integers (or enter -1 to stop):
Current state, Current symbol, Next state, Next symbol, Direction (-1, 0, or 1):
0 1 0 0 1
Enter a transition rule as five integers (or enter -1 to stop):
Current state, Current symbol, Next state, Next symbol, Direction (-1, 0, or 1):
0 0 1 1 1
Enter a transition rule as five integers (or enter -1 to stop):
Current state, Current symbol, Next state, Next symbol, Direction (-1, 0, or 1):
1 0 1 1 -1
Enter a transition rule as five integers (or enter -1 to stop):
Current state, Current symbol, Next state, Next symbol, Direction (-1, 0, or 1):
1 1 2 1 1
Enter a transition rule as five integers (or enter -1 to stop):
Current state, Current symbol, Next state, Next symbol, Direction (-1, 0, or 1):
-1
Final tape contents: 11
*/