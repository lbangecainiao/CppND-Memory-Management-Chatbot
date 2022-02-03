#include "graphnode.h"
#include "graphedge.h"

GraphEdge::GraphEdge(int id)
{
    std::cout << "GraphEdge Constructor" << std::endl;
    _id = id;
}

void GraphEdge::SetChildNode(std::unique_ptr<GraphNode>& childNode)
{
    _childNode = childNode.get();
}

void GraphEdge::SetParentNode(std::unique_ptr<GraphNode>& parentNode)
{
    _parentNode = parentNode.get();
}

void GraphEdge::AddToken(std::string token)
{
    _keywords.push_back(token);
}