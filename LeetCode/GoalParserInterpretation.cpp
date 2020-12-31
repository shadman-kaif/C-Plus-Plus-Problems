class Solution {
public:
    string interpret(string command) {
        
        string interpret_return;
        
        // Go through the command string
        for (int i = 0; i < command.length(); i++) {
            
            // If command string is G, push G back
            if(command[i] == 'G') {
                interpret_return.push_back('G');
            }
            
            // Check if there is '()' consecutive string in command and add o accordingly
            else if (command[i] == '(' && command[i+1] == ')') {
                interpret_return.push_back('o');
                i++;
            }
            
            // Else push al in the return string
            else {
                interpret_return.push_back('a');
                interpret_return.push_back('l');
                i = i+3;
            }
        }
        
        return interpret_return;
    }
};