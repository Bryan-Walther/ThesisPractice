#include "fmPractice.h"

void runFmPractice()
{
    // Create window.
    const std::string costmap_name = "Loaded Costmap";
    cv::namedWindow(costmap_name);

    cv::Mat costmap;
    costmap = cv::imread("../testSets/testSet1/ts1_1.png");

    if (costmap.empty())
    { return; }

    cv::imshow(costmap_name, costmap);
    int keyPressed = cv::waitKey();

    /*
     * Start Point
     * 10, 40
     *
     * End Point
     * 90, 40
     *
     * Algorithm
     *
     * Assign every node: U = inf && label as "far"
     * Assign start node U=0 && label as "accepted"
     * Start Loop
     *      Find smallest U among "considered" and set node as "accepted"
     *      For every "far" or "considered" node next to an "accepted"  node, use Eikonal update formula to calculate new U'
     *          if wall, set value as inf and node as "accepted"
     *          if U'<U, update U and set node as "considered"
     *      Continue until no more nodes in "considered"
     *
     */
}