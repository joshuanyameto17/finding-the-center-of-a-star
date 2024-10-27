#include <vector>

class Solution {
public:
    // Finds the center of a star graph.
    // The star graph has one node in the center connected to all other nodes.
    // edges are provided as pairs indicating two nodes that are connected.
    int findCenter(vector<vector<int>>& edges) {
        // Extract node values from the first edge
        int firstNodeOfFirstEdge = edges[0][0];
        int secondNodeOfFirstEdge = edges[0][1];

        // Extract node values from the second edge
        int firstNodeOfSecondEdge = edges[1][0];
        int secondNodeOfSecondEdge = edges[1][1];

        // The center node is connected to every other node, so it will appear in both edges.
        // If the first node of the first edge is the center, it should be equal to either node of the second edge.
        // Otherwise, the center is the other node of the first edge.
        if (firstNodeOfFirstEdge == firstNodeOfSecondEdge || firstNodeOfFirstEdge == secondNodeOfSecondEdge) {
            // The first node of the first edge is the center.
            return firstNodeOfFirstEdge;
        } else {
            // The second node of the first edge is the center.
            return secondNodeOfFirstEdge;
        }
    }
};
