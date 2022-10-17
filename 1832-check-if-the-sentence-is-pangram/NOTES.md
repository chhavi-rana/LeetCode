# Approach: Use Array as Counter
Intuition \
Note that each letter of alphabets has its own ASCII code, we map their ASCII codes to a unique number.

(ASCII of) a = 97
(ASCII of) b = 98
(ASCII of) c = 99
......
(ASCII of) z = 122

Therefore we can just use an array seen of size 26 as the recorder, and map the ASCII codes to integers between 0 to 25 (inclusive) using:
index of char = (ASCII of) char - (ASCII of) a \

#### What is the mapped index of c?

Using 
index of c = (ASCII of) c - (ASCII of) a = 2
indexofc=(ASCIIof)c−(ASCIIof)a=2

and we know that 2 is the index to record the presence of c.



There are multiple ways to record the presence of a letter, here we let the value on the mapped index equals true. Once we finish iterating, check if every value of seen is updated as true.


# Algorithm 
Initialize an empty array seen of size 26. \
Iterate over sentence, for each character currChar, we let the value at the mapped index equal true. \
Once we finish the iteration, check if every value of seen equal true. 
## Implementation
class Solution {
public:
    bool checkIfPangram(string sentence) {
        // Array 'seen' of size 26.
        array<bool, 26> seen{};

        // For every letter 'currChar', we find its ASCII code, 
        // and update value at the mapped index as true.
        for (auto currChar : sentence)
            seen[currChar - 'a'] = true;
        
        // Once we finish iterating, check if 'seen' contains false.
        for (auto status : seen)
            if (!status)
                return false;
        return true;
    }
};

## Complexity Analysis
Let nn be the length of input string sentence.

### Time complexity: O(n)O(n)

Similarly, we just need to traverse over sentence for once.
In each step, we calculate the ASCII code of the current letter currChar and update the value at the mapped index in seen. This takes constant time.
To sum up, the overall time complexity is O(n).

### Space complexity: O(1)O(1)

We use an array of size 26. Thus the space complexity is O(1).












