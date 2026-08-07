class Solution {
public:
    string getActual(string input) {
        string actualString = "";
        int hashCount = 0;

        for (int i = input.length() - 1; i >= 0; i--) {

            // Count backspaces
            if (input[i] == '#') {
                hashCount++;
                continue;
            }

            // Skip characters if there are backspaces
            if (hashCount > 0) {
                hashCount--;
            }
            else {
                // Insert character at the beginning
                actualString = input[i] + actualString;
            }
        }

        return actualString;
    }

    bool backspaceCompare(string s, string t) {
        return getActual(s) == getActual(t);
    }
};
