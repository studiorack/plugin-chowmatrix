#include "NodeComponent.h"
#include "GraphView.h"
#include "../../dsp/InputNode.h"

NodeComponent::NodeComponent (DBaseNode& node, GraphView* view) :
    node (node),
    graphView (view)
{
    setSize (32, 32);
}

void NodeComponent::paint (Graphics& g)
{
    g.setColour (findColour (GraphView::nodeColour, true));
    g.fillEllipse (getLocalBounds().toFloat());
}

void NodeComponent::mouseDoubleClick (const MouseEvent& e)
{
    node.addChild();
}
