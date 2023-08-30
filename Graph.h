#pragma once
#include "comm.h"

// �ڵ�ṹ��
struct Node
{
    int index;
    float_t corX;
    float_t corY;
    int demand;
    int readyTime;
    int dueTime;
    int serviceTime;
} typedef Node;

// �߽ṹ��
struct Edge
{
    int from;
    int to;
    float_t length;
    float_t travelTime;
} typedef Edge;


class Graph {
    map<int, Node> nodes;
    map<int, vector<Edge>> edges;

    map<int, set<int>> previous;
    map<int, set<int>> successors;

public:
    void addNode(int index, float_t corX, float_t corY, int demand, int readyTime, int dueTime, int serviceTime);
    void addEdge(int from, int to, float_t length, float_t travelTime);

    Node getNode(int index);
    vector<Node> getNodes();

    Edge getEdge(int from, int to);
    vector<Edge> getEdges(int from);
    vector<Edge> getAllEdges();

    vector<int> getSuccessors(int from);
    vector<int> getPrevious(int to);
};