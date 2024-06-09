class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int len = skills.size(); // Get the length of the skills array
        int winning = 0; // Initialize the count of consecutive wins
        int currwin = 0; // Initialize the current winning player index
        
        // Iterate through the players
        for(int i = 1; i < len; i++) {
            // Check if the current player wins against the current winning player
            if(skills[currwin] > skills[i]) {
                winning++; // Increment the consecutive win count
            } else {
                currwin = i; // Update the current winning player index
                winning = 1; // Reset the consecutive win count
            }
            
            // Check if the current winning player has won k consecutive games
            if(winning == k) {
                return currwin; // Return the index of the winning player
            }
        }
        
        return currwin; // Return the index of the last winning player
    }
};
