class Solution {
public boolean DFS(List<List<Integer>> adjList, int course, int[] state) {
        state[course] = 1; // visiting

        for (int prerequisite : adjList.get(course)) {
            if (state[prerequisite] == 1)
                return false;
            if (state[prerequisite] == 0 && !DFS(adjList, prerequisite, state))
                return false;
        }

        state[course] = 2; // visited
        return true;
    }
    
    public boolean canFinish(int numCourses, int[][] prerequisites) {
        if (prerequisites.length == 0)
            return true;
        List<List<Integer>> adj_list = new ArrayList<>();
        for (int i = 0; i < numCourses; ++i) {
            adj_list.add(new ArrayList<>());
        }
        for (int[] pre : prerequisites) {
            adj_list.get(pre[0]).add(pre[1]);
        }

        int[] state = new int[numCourses];

        for (int i = 0; i < numCourses; ++i) {
            if (state[i] == 0) {
                if (!DFS(adj_list, i, state))
                    return false;
            }
        }
        return true;
    }
}