public class Solution {
    public int DFS(int person, List<List<Integer>> adj_list, int[] quietness, int[] result) {
        if (result[person] != -1)
            return result[person];

        int minimum = person;
        for (int richer_person : adj_list.get(person)) {
            int p = DFS(richer_person, adj_list, quietness, result);
            if (quietness[p] < quietness[minimum]) {
                minimum = p;
            }
        }
        result[person] = minimum;
        return minimum;
    }

    public int[] loudAndRich(int[][] richer, int[] quiet) {
        int size = quiet.length;
        int[] result = new int[size];
        Arrays.fill(result, -1); // unperformed values

        List<List<Integer>> adj_list = new ArrayList<>();
        for (int i = 0; i < size; i++) {
            adj_list.add(new ArrayList<>());
        }

        for (int[] pair : richer) {
            adj_list.get(pair[1]).add(pair[0]);
        }

        for (int i = 0; i < size; i++) {
            DFS(i, adj_list, quiet, result);
        }

        return result;
    }
}
