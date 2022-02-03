#include "graphedge.h"
#include "graphnode.h"

GraphNode::GraphNode(int id)
{
    std::cout << "GraphNode constructor" << std::endl;
    _id = id;
}

GraphNode::~GraphNode()
{
    //// STUDENT CODE
    ////
  std::cout << "ChatBot Destructor" << std::endl;

    ////
    //// EOF STUDENT CODE
}

void GraphNode::AddToken(std::string token)
{
    _answers.push_back(token);
}

void GraphNode::AddEdgeToParentNode(GraphEdge* edge)
{
	_parentEdges.push_back(edge);
}

void GraphNode::AddEdgeToChildNode(std::unique_ptr<GraphEdge> edge)
{
   _childEdges.push_back(std::move(edge));
}

//// STUDENT CODE
////
void GraphNode::MoveChatbotHere(ChatBot& chatbot)
{
    _chatBot = std::move(chatbot);
    _chatBot.SetCurrentNode(this);
}

void GraphNode::MoveChatbotToNewNode(GraphNode* newNode)
{
    newNode->MoveChatbotHere(_chatBot);
}
////
//// EOF STUDENT CODE

std::unique_ptr<GraphEdge>& GraphNode::GetChildEdgeAtIndex(int index) {
//     //// STUD CODE

    return _childEdges[index];

//     / EOF STUDENT CODE
}