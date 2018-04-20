import java.util.ArrayList;
import java.util.Scanner;

public class Solution {
    // Complete the maximumSuperiorCharacters function below.
    static long maximumSuperiorCharacters(int[] freq) {
        /* step 1 extract the string */
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < freq.length; i++) {
            char v = (char) ('a' + i);
            int frequency = freq[i];
            for (int j = 0; j < frequency; j++) {
                sb.append(v);
            }
        }
        String string = sb.toString();
        /* step 2 compute the permutations of the string */
        ArrayList<String> permutations = permutation(string);

        /* step three iterate the list while calculating superior character */
        long maximumSuperiorCharacter = 0;
        for (String permutationi : permutations) {
            int temp = supCharacter(permutationi);
            if (temp > maximumSuperiorCharacter)
                maximumSuperiorCharacter = temp;
        }

        return maximumSuperiorCharacter;
    }

    static int supCharacter(String string) {
        int counter = 0;
        for (int i = 1; i < string.length() - 1; i++) {
            int previous = string.charAt(i - 1);
            int current = string.charAt(i);
            int next = string.charAt(i + 1);
            if (current > previous && current > next)
                counter++;
        }
        return counter;
    }

    /**
     * List permutations of a string.
     *
     * @param s the input string
     * @return  the list of permutations
     */
    static ArrayList<String> permutation(String s) {
        // The result
        ArrayList<String> res = new ArrayList<String>();
        // If input string's length is 1, return {s}
        if (s.length() == 1) {
            res.add(s);
        } else if (s.length() > 1) {
            int lastIndex = s.length() - 1;
            // Find out the last character
            String last = s.substring(lastIndex);
            // Rest of the string
            String rest = s.substring(0, lastIndex);
            // Perform permutation on the rest string and
            // merge with the last character
            res = merge(permutation(rest), last);
        }
        return res;
    }

    /**
     * @param list a result of permutation, e.g. {"ab", "ba"}
     * @param c    the last character
     * @return     a merged new list, e.g. {"cab", "acb" ... }
     */
    static ArrayList<String> merge(ArrayList<String> list, String c) {
        ArrayList<String> res = new ArrayList<>();
        // Loop through all the string in the list
        for (String s : list) {
            // For each string, insert the last character to all possible positions
            // and add them to the new list
            for (int i = 0; i <= s.length(); ++i) {
                String ps = new StringBuffer(s).insert(i, c).toString();
                res.add(ps);
            }
        }
        return res;
    }


    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int freq[] = new int[26];
        for (int i = 0; i < 26; i++)
            freq[i] = scanner.nextInt();
        System.out.println(maximumSuperiorCharacters(freq));


    }
}
