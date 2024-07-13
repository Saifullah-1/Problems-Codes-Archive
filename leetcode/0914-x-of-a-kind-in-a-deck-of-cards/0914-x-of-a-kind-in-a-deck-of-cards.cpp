class Solution {
public:
    long long gcd(long long a, long long b) {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    
    bool hasGroupsSizeX(vector<int>& deck) {
        size_t size = deck.size();
        int min_deck = *min_element(deck.begin(), deck.end());
        int max_deck = *max_element(deck.begin(), deck.end());
        
        int frequency_size = max_deck - min_deck + 1;
        int frequency_array[frequency_size];
        memset(frequency_array, 0, sizeof(frequency_array));

        int curr_deck;
        for (int i = 0; i < size; ++i) {
            curr_deck = deck[i];
            frequency_array[curr_deck - min_deck] += 1;
        }
        
        
        int frequency_gcd = frequency_array[0];
        for (int i = 1; i < frequency_size; ++i) {
            if (frequency_array[i] != 0) {
                frequency_gcd = gcd(frequency_gcd, frequency_array[i]);
            }

        }
        if (frequency_gcd == 1) {
            return false;
        }
        return true;
    }

};