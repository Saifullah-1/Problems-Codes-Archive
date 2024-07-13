import java.util.Collections;
import java.util.PriorityQueue;

class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> priorityQueue = new PriorityQueue<Integer>(stones.length, Collections.reverseOrder());
        for (int weight : stones)
            priorityQueue.add(weight);
        while(priorityQueue.size() > 1) {
            int y = priorityQueue.poll();
            int x = priorityQueue.poll();
            if (x != y) {
                priorityQueue.add(y - x);
            }
        }
        return priorityQueue.size() == 0 ? 0 : priorityQueue.peek();
    }
}